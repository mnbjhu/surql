#!/bin/bash

cp -f ../new-ts/src/parser.c ./bindings/parser.c || exit 1
cp -f ../new-ts/src/tree_sitter/parser.h ./bindings/tree_sitter/parser.h || exit 1

go build
