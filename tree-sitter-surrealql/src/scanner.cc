#include "tree_sitter/parser.h"

enum TokenType {
  COMMENT,
  STRING,
  NUMBER,
  IDENTIFIER,
  KEYWORD,
  PUNCTUATION,
  OPERATOR,
};

void *tree_sitter_surrealql_external_scanner_create() { return NULL; }

void tree_sitter_surrealql_external_scanner_destroy(void *p) {}

bool tree_sitter_surrealql_external_scanner_scan(void *payload, TSLexer *lexer,
                                                 const bool *valid_symbols) {
  return false;
}

unsigned tree_sitter_surrealql_external_scanner_serialize(void *payload,
                                                          char *buffer) {
  return 0;
}

void tree_sitter_surrealql_external_scanner_deserialize(void *payload,
                                                        const char *buffer,
                                                        unsigned length) {}
