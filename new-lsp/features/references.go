package features

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func TextDocumentDefinition(context *glsp.Context, params *protocol.DefinitionParams) (any, error) {
	data.Logger.Printf("Declaration: %v", params)
	node := FindNodeByPosition(params.Position)
	data.Logger.Printf("Declaration: %v", node)
	if node.Type() == "table_name" {
		query, err := sitter.NewQuery([]byte("(define_table_statement (table_name) @table_name)"), bindings.GetLanguage())
		if err != nil {
			panic(err)
		}
		cursor := sitter.NewQueryCursor()
		cursor.Exec(query, data.Tree.RootNode())
		found := []protocol.Location{}
		for {
			m, ok := cursor.NextMatch()
			if !ok {
				break
			}
			for _, c := range m.Captures {
				found = append(found, protocol.Location{
					URI: params.TextDocument.URI,
					Range: protocol.Range{
						Start: protocol.Position{
							Line:      uint32(c.Node.StartPoint().Row),
							Character: uint32(c.Node.StartPoint().Column),
						},
						End: protocol.Position{
							Line:      uint32(c.Node.EndPoint().Row),
							Character: uint32(c.Node.EndPoint().Column),
						},
					},
				})
			}
			return found, nil
		}
	}
	return nil, nil
}

func TextDocumentReferences(context *glsp.Context, params *protocol.ReferenceParams) ([]protocol.Location, error) {
	data.Logger.Printf("References: %v", params)
	node := FindNodeByPosition(params.Position)
	data.Logger.Printf("References: %v", node)
	if node.Type() == "table_name" {
		query, err := sitter.NewQuery([]byte("(table_name) @table_name"), bindings.GetLanguage())
		if err != nil {
			panic(err)
		}
		cursor := sitter.NewQueryCursor()
		cursor.Exec(query, data.Tree.RootNode())
		found := []protocol.Location{}
		for {
			m, ok := cursor.NextMatch()
			if !ok {
				break
			}
			for _, c := range m.Captures {
				found = append(found, protocol.Location{
					URI: params.TextDocument.URI,
					Range: protocol.Range{
						Start: protocol.Position{
							Line:      uint32(c.Node.StartPoint().Row),
							Character: uint32(c.Node.StartPoint().Column),
						},
						End: protocol.Position{
							Line:      uint32(c.Node.EndPoint().Row),
							Character: uint32(c.Node.EndPoint().Column),
						},
					},
				})
			}
		}
		return found, nil
	}
	return nil, nil
}

func FindNodeByPosition(position protocol.Position) *sitter.Node {
	point := sitter.Point{
		Row:    uint32(position.Line),
		Column: uint32(position.Character),
	}
	return data.Tree.RootNode().NamedDescendantForPointRange(point, point)
}
