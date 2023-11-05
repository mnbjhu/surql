package features

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/features/diagnostics"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func Completion(context *glsp.Context, params *protocol.CompletionParams) (any, error) {
	current_node := FindNodeByPosition(params.Position)
	if current_node == nil {
		context.Notify("window/logMessage", protocol.LogMessageParams{
			Type:    protocol.MessageTypeWarning,
			Message: "Current node is nil",
		})
	}
	message := fmt.Sprintf("Node: %v, Position %v", current_node, params.Position)
	context.Notify("window/logMessage", protocol.LogMessageParams{
		Type:    protocol.MessageTypeWarning,
		Message: message,
	})
	if current_node.Type() == "table_name" && current_node.Parent().Type() != "define_table_statement" {
		items := []protocol.CompletionItem{}
		kind := protocol.CompletionItemKindField
		for _, def := range FindTableDefinitions() {
			context.Notify("window/logMessage", protocol.LogMessageParams{
				Type:    protocol.MessageTypeWarning,
				Message: fmt.Sprintf("Def: %v", def),
			})
			name := def.Content([]byte(data.Text))
			items = append(items, protocol.CompletionItem{
				Label: name,
				Kind:  &kind,
			})
		}
		return items, nil
	}

	if current_node.Type() == "field_name" && current_node.Parent().Type() != "field_definition" {
		items := []protocol.CompletionItem{}
		kind := protocol.CompletionItemKindField
		for _, def := range FindFieldDefinitions() {
			context.Notify("window/logMessage", protocol.LogMessageParams{
				Type:    protocol.MessageTypeWarning,
				Message: fmt.Sprintf("Def: %v", def),
			})
			name := def.Content([]byte(data.Text))
			items = append(items, protocol.CompletionItem{
				Label: name,
				Kind:  &kind,
			})
		}
		return items, nil
	}

	if current_node.Type() == "UNEXPECTED" {
		prev := current_node.PrevSibling()
		first := current_node.Parent().Child(0)
		for _, expectedType := range diagnostics.Statements {
			if expectedType[0].Name == first.Type() {
				for index, item := range expectedType {
					if item.Name == prev.Type() {
						return []protocol.CompletionItem{
							{
								Label: expectedType[index+1].Name,
							},
						}, nil
					}
				}
			}
		}
	}

	return nil, nil
}
