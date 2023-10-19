package main

import (
	"example.com/bindings"
	"github.com/tliron/commonlog"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
	"github.com/tliron/glsp/server"

	// Must include a backend implementation
	// See CommonLog for other options: https://github.com/tliron/commonlog
	sitter "github.com/smacker/go-tree-sitter"
	_ "github.com/tliron/commonlog/simple"
)

const lsName = "my language"

var (
	version string = "0.0.1"
	handler protocol.Handler
	tree    *sitter.Tree
	parser  *sitter.Parser = sitter.NewParser()
	Logger  commonlog.Logger
)

func main() {
	// This increases logging verbosity (optional)
	commonlog.Configure(1, nil)
	Logger = commonlog.GetLogger("glsp")

	handler = protocol.Handler{
		Initialize:            initialize,
		Initialized:           initialized,
		Shutdown:              shutdown,
		SetTrace:              setTrace,
		TextDocumentDidOpen:   openedTextDocument,
		TextDocumentDidSave:   saveTextDocument,
		TextDocumentDidChange: changedTextDocument,
	}

	server := server.NewServer(&handler, lsName, false)

	server.RunStdio()
}

func initialize(context *glsp.Context, params *protocol.InitializeParams) (any, error) {
	capabilities := handler.CreateServerCapabilities()
	capabilities.TextDocumentSync = protocol.TextDocumentSyncKindFull
	parser.SetLanguage(bindings.GetLanguage())
	return protocol.InitializeResult{
		Capabilities: capabilities,
		ServerInfo: &protocol.InitializeResultServerInfo{
			Name:    lsName,
			Version: &version,
		},
	}, nil
}

func update(context *glsp.Context, document string, URI string) error {
	tree = parser.Parse(nil, []byte(document))
	query, _ := sitter.NewQuery([]byte("(ERROR) @error"), bindings.GetLanguage())
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, tree.RootNode())
	errs := []protocol.Diagnostic{}
	for {
		match, ok := cursor.NextMatch()
		if !ok {
			break
		}
		for _, capture := range match.Captures {
			parent := capture.Node.Parent()
			if parent != nil && parent.Type() == "ERROR" {
				continue
			}
			newError := protocol.Diagnostic{
				Range: protocol.Range{
					Start: PositionOf(capture.Node.StartPoint()),
					End:   PositionOf(capture.Node.EndPoint()),
				},
				Message: "Syntax error",
			}
			errs = append(errs, newError)
		}
	}
	Logger.Infof("Current: Errors: %v, tree: %v, text: %v", len(errs), tree, document)
	context.Notify("textDocument/publishDiagnostics", protocol.PublishDiagnosticsParams{
		URI:         URI,
		Diagnostics: errs,
	})
	return nil
}

func openedTextDocument(context *glsp.Context, params *protocol.DidOpenTextDocumentParams) error {
	return nil
}

func saveTextDocument(context *glsp.Context, params *protocol.DidSaveTextDocumentParams) error {
	Logger.Infof("Working!!!")
	return nil
}

func changedTextDocument(context *glsp.Context, params *protocol.DidChangeTextDocumentParams) error {
	update(context, params.ContentChanges[0].(protocol.TextDocumentContentChangeEventWhole).Text, string(params.TextDocument.URI))
	return nil
}

func initialized(context *glsp.Context, params *protocol.InitializedParams) error {
	return nil
}

func shutdown(context *glsp.Context) error {
	protocol.SetTraceValue(protocol.TraceValueOff)
	return nil
}

func setTrace(context *glsp.Context, params *protocol.SetTraceParams) error {
	protocol.SetTraceValue(params.Value)
	return nil
}

func PositionOf(node sitter.Point) protocol.Position {
	return protocol.Position{
		Line:      uint32(node.Row),
		Character: uint32(node.Column),
	}
}
