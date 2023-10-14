package main

import (
	"context"
	"flag"
	"fmt"
	"io/ioutil"
	"log"
	"net/url"
	"os"
	"strings"

	"gihub.com/mnbjhu/surql/surrealdb-lsp/bindings"
	"github.com/TobiasYin/go-lsp/logs"
	"github.com/TobiasYin/go-lsp/lsp"
	"github.com/TobiasYin/go-lsp/lsp/defines"
	sitter "github.com/smacker/go-tree-sitter"
)

func strPtr(str string) *string {
	return &str
}

var (
	ts      = sitter.NewParser()
	logPath *string
	tree    *sitter.Node
)

func init() {
	ts.SetLanguage(bindings.GetLanguage())
	out := ts.Parse(nil, []byte(`CREATE some CONTENT {"thing" : "thing"}`))
	var logger *log.Logger
	defer func() {
		logs.Init(logger)
		log.Println(out.RootNode())
	}()
	logPath = flag.String("logs", "", "logs file path")
	if logPath == nil || *logPath == "" {
		logger = log.New(os.Stderr, "", 0)
		return
	}
	p := *logPath
	f, err := os.Open(p)
	if err == nil {
		logger = log.New(f, "", 0)
		return
	}
	f, err = os.Create(p)
	if err == nil {
		logger = log.New(f, "", 0)
		return
	}
	panic(fmt.Sprintf("logs init error: %v", *logPath))
}

func main() {
	server := lsp.NewServer(&lsp.Options{CompletionProvider: &defines.CompletionOptions{
		TriggerCharacters: &[]string{"."},
	}})

	server.OnInitialize(func(ctx context.Context, req *defines.InitializeParams) (result *defines.InitializeResult, err *defines.InitializeError) {
		logs.Println("init: ", req)
		return &defines.InitializeResult{
			Capabilities: defines.ServerCapabilities{},
		}, nil
	})

	// server.OnHover(func(ctx context.Context, req *defines.HoverParams) (result *defines.Hover, err error) {
	// 	logs.Println("hover: ", req)
	// 	return &defines.Hover{Contents: defines.MarkupContent{Kind: defines.MarkupKindPlainText, Value: "hello world"}}, nil
	// })
	//
	// server.OnCompletion(func(ctx context.Context, req *defines.CompletionParams) (result *[]defines.CompletionItem, err error) {
	// 	logs.Println("completion: ", req)
	// 	d := defines.CompletionItemKindModule
	// 	return &[]defines.CompletionItem{{
	// 		Label:      "code",
	// 		Kind:       &d,
	// 		InsertText: strPtr("Hello"),
	// 	}}, nil
	// })
	//
	// server.OnDidChangeTextDocument(func(ctx context.Context, req *defines.DidChangeTextDocumentParams) (err error) {
	// 	logs.Println("change: ", req)
	// 	return nil
	// })
	//
	// server.OnDefinition(func(ctx context.Context, req *defines.DefinitionParams) (result *[]defines.LocationLink, err error) {
	// 	req.TextDocument
	// 	tree = ts.Parse(nil, []byte(req.))
	// })
	//
	// server.OnDocumentFormatting(func(ctx context.Context, req *defines.DocumentFormattingParams) (result *[]defines.TextEdit, err error) {
	// 	logs.Println("format: ", req)
	// 	line, err := ReadFile(req.TextDocument.Uri)
	// 	if err != nil {
	// 		return nil, err
	// 	}
	// 	res := []defines.TextEdit{}
	// 	for i, v := range line {
	// 		r := convertParagraphs(v)
	// 		if v != r {
	// 			res = append(res, defines.TextEdit{
	// 				Range: defines.Range{
	// 					Start: defines.Position{uint(i), 0},
	// 					End:   defines.Position{uint(i), uint(len(v) + 1)},
	// 				},
	// 				NewText: r,
	// 			})
	// 		}
	// 	}
	//
	// 	return &res, nil
	// })
	server.Run()
}

func ReadFile(filename defines.DocumentUri) ([]string, error) {
	enEscapeUrl, _ := url.QueryUnescape(string(filename))
	data, err := ioutil.ReadFile(enEscapeUrl[6:])
	if err != nil {
		return nil, err
	}
	content := string(data)
	line := strings.Split(content, "\n")
	return line, nil
}

// split paragraphs into sentences, and make the sentence first char uppercase and others lowercase
func convertParagraphs(paragraph string) string {
	sentences := []string{}
	for _, sentence := range strings.Split(paragraph, ".") {
		sentence = strings.TrimSpace(sentence)
		s := []string{}
		w := strings.Split(sentence, " ")
		for i, v := range w {
			if len(v) > 0 {
				if i == 0 {
					s = append(s, strings.ToUpper(v[0:1])+strings.ToLower(v[1:]))
				} else {
					s = append(s, strings.ToLower(v))
				}
			}
		}
		if len(s) != 0 {
			sentences = append(sentences, strings.Join(s, " ")+".")
		}
	}
	return strings.Join(sentences, " ")
}
