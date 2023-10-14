#!/bin/bash

cp ../tree-sitter-surrealql/src/parser.c bindings/parser.c
cp ../tree-sitter-surrealql/src/tree_sitter/parser.h bindings/tree_sitter/parser.h

go build
