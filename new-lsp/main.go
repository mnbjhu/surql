package main

import (
	"fmt"

	"github.com/labstack/gommon/log"
	"github.com/mnbjhu/surql-lsp/bindings"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/commonlog"
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
)

func main() {
	// This increases logging verbosity (optional)
	commonlog.Configure(1, nil)
	parser = sitter.NewParser()
	parser.SetLanguage(bindings.GetLanguage())
	handler = protocol.Handler{
		Initialize:            initialize,
		Initialized:           initialized,
		Shutdown:              shutdown,
		SetTrace:              setTrace,
		TextDocumentDidOpen:   didOpen,
		TextDocumentDidChange: didChange,
		// TextDocumentCompletion: completion,
	}

	server := server.NewServer(&handler, lsName, false)

	server.RunStdio()
}

func initialize(context *glsp.Context, params *protocol.InitializeParams) (any, error) {
	capabilities := handler.CreateServerCapabilities()
	capabilities.TextDocumentSync = protocol.TextDocumentSyncKindFull
	capabilities.CompletionProvider = &protocol.CompletionOptions{
		TriggerCharacters: []string{".", " "},
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

func didOpen(context *glsp.Context, params *protocol.DidOpenTextDocumentParams) error {
	tree = parser.Parse(nil, []byte(params.TextDocument.Text))
	updateDiagnostics(context, params.TextDocument.URI)
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

// func findNodeByPosition(position protocol.Position) *sitter.Node {
// 	point := sitter.Point{
// 		Row:    uint32(position.Line),
// 		Column: uint32(position.Character),
// 	}
// 	node := tree.RootNode()
// 	for {
// 		if node.StartPoint().IsGreaterThan(point) || node.EndPoint().IsLessThan(point) {
// 			break
// 		}
// 	}
// 	return
// }

// Add completion support
// func completion(context *glsp.Context, params *protocol.CompletionParams) (any, error) {
// 	current_node := findNodeByPosition(params.Position)
// 	return []protocol.CompletionItem{
// 		{
// 			Label: current_node.Type(),
// 		},
// 	}, nil
// }

func didChange(context *glsp.Context, params *protocol.DidChangeTextDocumentParams) error {
	text := params.ContentChanges[0].(protocol.TextDocumentContentChangeEventWhole).Text
	tree = parser.Parse(nil, []byte(text))
	updateDiagnostics(context, params.TextDocument.URI)
	return nil
}

func setTrace(context *glsp.Context, params *protocol.SetTraceParams) error {
	protocol.SetTraceValue(params.Value)
	return nil
}

func updateDiagnostics(context *glsp.Context, uri protocol.DocumentUri) {
	log.Infof("Updating diagnostics for %s", uri)
	diagnostics := []protocol.Diagnostic{}
	for _, node := range getFindTokensByName("expected_statement") {
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
