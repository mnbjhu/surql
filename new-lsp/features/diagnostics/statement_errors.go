package diagnostics

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleStatementErrors(context *glsp.Context) []protocol.Diagnostic {
	query, err := sitter.NewQuery([]byte("(crud_statement) @statement"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []protocol.Diagnostic{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		for _, c := range m.Captures {
			context.Notify("window/logMessage", protocol.LogMessageParams{
				Type:    protocol.MessageTypeWarning,
				Message: fmt.Sprintf("Found %s", c.Node.String()),
			})
			if c.Node.Child(0).Type() == "select_part" {
				for _, err := range HandleSelectStatement(c.Node) {
					found = append(found, err)
				}
			}
		}
	}
	return found
}

func HandleSelectStatement(selectNode *sitter.Node) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	found := []protocol.Diagnostic{}
	from := selectNode.Child(1)
	if from == nil {
		found = append(found, protocol.Diagnostic{
			Message:  "Expected: 'from'",
			Severity: &err,
		})
		return found
	}
	if from.Type() != "from_part" {
		found = append(found, protocol.Diagnostic{
			Message:  fmt.Sprintf("Expected: 'from', Found: %v", from.Type()),
			Severity: &err,
		})
	}
	return found
}
