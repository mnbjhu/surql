package features

import (
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func Completion(context *glsp.Context, params *protocol.CompletionParams) (any, error) {
	current_node := FindNodeByPosition(params.Position)
	if current_node == nil {
		return nil, nil
	}

	return []protocol.CompletionItem{
		// 	{
		// 		Label:  "foo",
		// 		Detail: &detail,
		// 		Kind:   &completionItemKind,
		// 	},
		// 	{
		// 		Label:  "bar",
		// 		Detail: &detail,
		// 		Kind:   &completionItemKind,
		// 	},
	}, nil
}
