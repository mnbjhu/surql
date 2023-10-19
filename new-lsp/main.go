package main

import (
	"context"
	"fmt"
	"log"
	"os"

	"github.com/mnbjhu/surql-lsp/bindings"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
	"github.com/tliron/glsp/server"

	// Must include a backend implementation
	// See CommonLog for other options: https://github.com/tliron/commonlog
	_ "github.com/tliron/commonlog/simple"
)

const lsName = "mylang"

var (
	version string = "0.0.1"
	handler protocol.Handler
	tree    *sitter.Tree
	parser  *sitter.Parser
	text    string
	logger  log.Logger
)

func main() {
	// Create a logger which outputs to '/tmp/mylang.log'

	file, err := os.OpenFile("/tmp/mylang.log", os.O_CREATE|os.O_WRONLY|os.O_APPEND, 0666)
	if err != nil {
		log.Fatal(err)
	}
	logger = *log.New(file, "", log.LstdFlags)
	parser = sitter.NewParser()
	parser.SetLanguage(bindings.GetLanguage())
	handler = protocol.Handler{
		Initialize:             initialize,
		Initialized:            initialized,
		Shutdown:               shutdown,
		SetTrace:               setTrace,
		TextDocumentDidOpen:    didOpen,
		TextDocumentDidChange:  didChange,
		TextDocumentCompletion: completion,
	}
	server := server.NewServer(&handler, lsName, false)
	server.RunStdio()
}

func initialize(context *glsp.Context, params *protocol.InitializeParams) (any, error) {
	capabilities := handler.CreateServerCapabilities()
	capabilities.TextDocumentSync = protocol.TextDocumentSyncKindIncremental
	capabilities.CompletionProvider = &protocol.CompletionOptions{
		TriggerCharacters: []string{" "},
	}
	return protocol.InitializeResult{
		Capabilities: capabilities,
		ServerInfo: &protocol.InitializeResultServerInfo{
			Name:    lsName,
			Version: &version,
		},
	}, nil
}

func initialized(context *glsp.Context, params *protocol.InitializedParams) error {
	return nil
}

func shutdown(context *glsp.Context) error {
	protocol.SetTraceValue(protocol.TraceValueOff)
	return nil
}

func didOpen(ctx *glsp.Context, params *protocol.DidOpenTextDocumentParams) error {
	newTree, err := parser.ParseCtx(context.Background(), nil, []byte(params.TextDocument.Text))
	if err != nil {
		panic(err)
	}
	tree = newTree
	text = params.TextDocument.Text
	updateDiagnostics(ctx, params.TextDocument.URI)
	return nil
}

func getFindTokensByName(name string) []*sitter.Node {
	query, err := sitter.NewQuery([]byte(fmt.Sprintf("(%s) @err", name)), bindings.GetLanguage())
	found := []*sitter.Node{}
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, tree.RootNode())
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		for _, c := range m.Captures {
			found = append(found, c.Node)
		}
	}
	return found
}

func findNodeByPosition(position protocol.Position) *sitter.Node {
	index := position.IndexIn(text)
	iter := sitter.NewTreeCursor(tree.RootNode())
	for {
		start := protocol.Position{
			Line:      uint32(iter.CurrentNode().StartPoint().Row),
			Character: uint32(iter.CurrentNode().StartPoint().Column),
		}.IndexIn(text)

		end := protocol.Position{
			Line:      uint32(iter.CurrentNode().EndPoint().Row),
			Character: uint32(iter.CurrentNode().EndPoint().Column),
		}.IndexIn(text)

		if start <= index && index <= end {
			if iter.GoToFirstChild() {
				continue
			}
			return iter.CurrentNode()
		}
		if !iter.GoToNextSibling() {
			if !iter.GoToParent() {
				return nil
			}
		}
	}
}

func completion(context *glsp.Context, params *protocol.CompletionParams) (any, error) {
	node := findNodeByPosition(params.Position)
	logger.Printf("Completion: %v", node)
	for {
		if node.Type() == "ERROR" && node.Parent().Type() == "ERROR" {
			node = node.Parent()
		} else {
			break
		}
	}
	if node.Type() == "ERROR" {
		if node.Parent().Type() == "source_file" {
			keyword := protocol.CompletionItemKindKeyword
			suggest := []string{"create", "select", "update", "delete"}
			completions := []protocol.CompletionItem{}
			for _, s := range suggest {
				completions = append(completions, protocol.CompletionItem{
					Label: s,
					Kind:  &keyword,
				},
				)
			}
			return completions, nil
		}
		if node.Parent().Type() == "statement" {
			keyword := protocol.CompletionItemKindKeyword
			suggest := []string{"from", "where", "content"}
			completions := []protocol.CompletionItem{}
			for _, s := range suggest {
				completions = append(completions, protocol.CompletionItem{
					Label: s,
					Kind:  &keyword,
				})
			}
			return completions, nil
		}
	}
	return []protocol.CompletionItem{}, nil
}

func didChange(ctx *glsp.Context, params *protocol.DidChangeTextDocumentParams) error {
	logger.Printf("Change: %v", params.ContentChanges)
	for _, change := range params.ContentChanges {
		change := change.(protocol.TextDocumentContentChangeEvent)
		start, end := change.Range.IndexesIn(text)
		logger.Printf("Change: %v, start: %v, end: %v", change, start, end)
		text = fmt.Sprintf("%s%s%s", text[:start], change.Text, text[end:])
		tree.Edit(sitter.EditInput{
			StartIndex:  uint32(start),
			OldEndIndex: uint32(end),
			NewEndIndex: uint32(start + len(change.Text)),
			StartPoint: sitter.Point{
				Row:    uint32(change.Range.Start.Line),
				Column: uint32(change.Range.Start.Character),
			},
			OldEndPoint: sitter.Point{
				Row:    uint32(change.Range.End.Line),
				Column: uint32(change.Range.End.Character),
			},
			NewEndPoint: sitter.Point{
				Row:    uint32(change.Range.End.Line),
				Column: uint32(change.Range.End.Character),
			},
		})
		newTree, err := parser.ParseCtx(context.Background(), tree, []byte(text))
		if err != nil {
			panic(err)
		}
		tree = newTree
	}
	updateDiagnostics(ctx, params.TextDocument.URI)
	return nil
}

func setTrace(context *glsp.Context, params *protocol.SetTraceParams) error {
	protocol.SetTraceValue(params.Value)
	return nil
}

func updateDiagnostics(context *glsp.Context, uri protocol.DocumentUri) {
	logger.Printf("Updating diagnostics for %s. Text: %v, tree: %v", uri, text, tree.RootNode().String())
	diagnostics := []protocol.Diagnostic{}
	for _, node := range getFindTokensByName("ERROR") {
		diagnostics = append(diagnostics, protocol.Diagnostic{
			Range: protocol.Range{
				Start: protocol.Position{
					Line:      uint32(node.StartPoint().Row),
					Character: uint32(node.StartPoint().Column),
				},
				End: protocol.Position{
					Line:      uint32(node.EndPoint().Row),
					Character: uint32(node.EndPoint().Column),
				},
			},
			Message: "bad",
		})
	}
	context.Notify("textDocument/publishDiagnostics", protocol.PublishDiagnosticsParams{
		URI:         uri,
		Diagnostics: diagnostics,
	})
}
