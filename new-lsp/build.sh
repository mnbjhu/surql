#!/bin/bash

cp -f ../mynulang/src/parser.c ./bindings/parser.c || exit 1
cp -f ../mynulang/src/tree_sitter/parser.h ./bindings/tree_sitter/parser.h || exit 1

go build
