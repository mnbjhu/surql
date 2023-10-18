#!/bin/bash

cp -f ../new-ts/src/parser.c ./bindings/parser.c
cp -f ../new-ts/src/tree_sitter/parser.h ./bindings/tree_sitter/parser.h

go build
