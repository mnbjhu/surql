package bindings

//#include "tree_sitter/parser.h"
//TSLanguage *tree_sitter_surrealql();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_surrealql())
	return sitter.NewLanguage(ptr)
}
