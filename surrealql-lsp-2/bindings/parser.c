#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_CREATE = 1,
  anon_sym_create = 2,
  anon_sym_SELECT = 3,
  anon_sym_select = 4,
  anon_sym_UPDATE = 5,
  anon_sym_update = 6,
  anon_sym_DELETE = 7,
  anon_sym_delete = 8,
  anon_sym_CONTENT = 9,
  anon_sym_content = 10,
  anon_sym_DEFINE = 11,
  anon_sym_define = 12,
  anon_sym_RETURN = 13,
  anon_sym_return = 14,
  anon_sym_FIELD = 15,
  anon_sym_field = 16,
  anon_sym_TABLE = 17,
  anon_sym_table = 18,
  anon_sym_ON = 19,
  anon_sym_on = 20,
  anon_sym_ON_TABLE = 21,
  anon_sym_on_table = 22,
  anon_sym_FROM = 23,
  anon_sym_from = 24,
  anon_sym_LET = 25,
  anon_sym_let = 26,
  anon_sym_TYPE = 27,
  anon_sym_type = 28,
  anon_sym_FUNCTION = 29,
  anon_sym_function = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_COLON = 33,
  aux_sym_function_identifier_token1 = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_EQ = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_COMMA = 39,
  anon_sym_where = 40,
  anon_sym_order = 41,
  anon_sym_by = 42,
  sym_string = 43,
  sym_number = 44,
  anon_sym_true = 45,
  anon_sym_false = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  anon_sym_string = 49,
  anon_sym_number = 50,
  anon_sym_boolean = 51,
  anon_sym_object = 52,
  sym_variable_name = 53,
  sym_source_file = 54,
  sym__statement = 55,
  sym_create_token = 56,
  sym_select_token = 57,
  sym_update_token = 58,
  sym_delete_token = 59,
  sym_content_token = 60,
  sym_define_token = 61,
  sym_return_token = 62,
  sym_field_token = 63,
  sym_table_token = 64,
  sym__on_token = 65,
  sym_on_table_token = 66,
  sym_from_token = 67,
  sym_let_token = 68,
  sym_type_token = 69,
  sym_function_token = 70,
  sym_define_statement = 71,
  sym_define_table_statement = 72,
  sym_define_field_statement = 73,
  sym_define_function_statement = 74,
  sym_return_statement = 75,
  sym_function_parameter = 76,
  sym_function_identifier = 77,
  sym_function_ref = 78,
  sym_create_statement = 79,
  sym_select_statement = 80,
  sym_update_statement = 81,
  sym_delete_statement = 82,
  sym_let_statement = 83,
  sym_table_name = 84,
  sym_field_name = 85,
  sym_table_def = 86,
  sym_field_def = 87,
  sym_object = 88,
  sym_field = 89,
  sym_var_args = 90,
  sym_value = 91,
  sym_bracketed_statement = 92,
  sym_boolean = 93,
  sym_type = 94,
  sym_code_block = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_define_function_statement_repeat1 = 97,
  aux_sym_function_ref_repeat1 = 98,
  aux_sym_object_repeat1 = 99,
  aux_sym_var_args_repeat1 = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_create] = "create",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_select] = "select",
  [anon_sym_UPDATE] = "UPDATE",
  [anon_sym_update] = "update",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_delete] = "delete",
  [anon_sym_CONTENT] = "CONTENT",
  [anon_sym_content] = "content",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_define] = "define",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_return] = "return",
  [anon_sym_FIELD] = "FIELD",
  [anon_sym_field] = "field",
  [anon_sym_TABLE] = "TABLE",
  [anon_sym_table] = "table",
  [anon_sym_ON] = "ON",
  [anon_sym_on] = "on",
  [anon_sym_ON_TABLE] = "ON_TABLE",
  [anon_sym_on_table] = "on_table",
  [anon_sym_FROM] = "FROM",
  [anon_sym_from] = "from",
  [anon_sym_LET] = "LET",
  [anon_sym_let] = "let",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_type] = "type",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [aux_sym_function_identifier_token1] = "function_identifier_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_where] = "where",
  [anon_sym_order] = "order",
  [anon_sym_by] = "by",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_string] = "string",
  [anon_sym_number] = "number",
  [anon_sym_boolean] = "boolean",
  [anon_sym_object] = "object",
  [sym_variable_name] = "variable_name",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_create_token] = "create_token",
  [sym_select_token] = "select_token",
  [sym_update_token] = "update_token",
  [sym_delete_token] = "delete_token",
  [sym_content_token] = "content_token",
  [sym_define_token] = "define_token",
  [sym_return_token] = "return_token",
  [sym_field_token] = "field_token",
  [sym_table_token] = "table_token",
  [sym__on_token] = "_on_token",
  [sym_on_table_token] = "on_table_token",
  [sym_from_token] = "from_token",
  [sym_let_token] = "let_token",
  [sym_type_token] = "type_token",
  [sym_function_token] = "function_token",
  [sym_define_statement] = "define_statement",
  [sym_define_table_statement] = "define_table_statement",
  [sym_define_field_statement] = "define_field_statement",
  [sym_define_function_statement] = "define_function_statement",
  [sym_return_statement] = "return_statement",
  [sym_function_parameter] = "function_parameter",
  [sym_function_identifier] = "function_identifier",
  [sym_function_ref] = "function_ref",
  [sym_create_statement] = "create_statement",
  [sym_select_statement] = "select_statement",
  [sym_update_statement] = "update_statement",
  [sym_delete_statement] = "delete_statement",
  [sym_let_statement] = "let_statement",
  [sym_table_name] = "table_name",
  [sym_field_name] = "field_name",
  [sym_table_def] = "table_def",
  [sym_field_def] = "field_def",
  [sym_object] = "object",
  [sym_field] = "field",
  [sym_var_args] = "var_args",
  [sym_value] = "value",
  [sym_bracketed_statement] = "bracketed_statement",
  [sym_boolean] = "boolean",
  [sym_type] = "type",
  [sym_code_block] = "code_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_define_function_statement_repeat1] = "define_function_statement_repeat1",
  [aux_sym_function_ref_repeat1] = "function_ref_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_var_args_repeat1] = "var_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_UPDATE] = anon_sym_UPDATE,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_CONTENT] = anon_sym_CONTENT,
  [anon_sym_content] = anon_sym_content,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_FIELD] = anon_sym_FIELD,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_TABLE] = anon_sym_TABLE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ON_TABLE] = anon_sym_ON_TABLE,
  [anon_sym_on_table] = anon_sym_on_table,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_TYPE] = anon_sym_TYPE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_function_identifier_token1] = aux_sym_function_identifier_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_order] = anon_sym_order,
  [anon_sym_by] = anon_sym_by,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_object] = anon_sym_object,
  [sym_variable_name] = sym_variable_name,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_create_token] = sym_create_token,
  [sym_select_token] = sym_select_token,
  [sym_update_token] = sym_update_token,
  [sym_delete_token] = sym_delete_token,
  [sym_content_token] = sym_content_token,
  [sym_define_token] = sym_define_token,
  [sym_return_token] = sym_return_token,
  [sym_field_token] = sym_field_token,
  [sym_table_token] = sym_table_token,
  [sym__on_token] = sym__on_token,
  [sym_on_table_token] = sym_on_table_token,
  [sym_from_token] = sym_from_token,
  [sym_let_token] = sym_let_token,
  [sym_type_token] = sym_type_token,
  [sym_function_token] = sym_function_token,
  [sym_define_statement] = sym_define_statement,
  [sym_define_table_statement] = sym_define_table_statement,
  [sym_define_field_statement] = sym_define_field_statement,
  [sym_define_function_statement] = sym_define_function_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_function_parameter] = sym_function_parameter,
  [sym_function_identifier] = sym_function_identifier,
  [sym_function_ref] = sym_function_ref,
  [sym_create_statement] = sym_create_statement,
  [sym_select_statement] = sym_select_statement,
  [sym_update_statement] = sym_update_statement,
  [sym_delete_statement] = sym_delete_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_table_name] = sym_table_name,
  [sym_field_name] = sym_field_name,
  [sym_table_def] = sym_table_def,
  [sym_field_def] = sym_field_def,
  [sym_object] = sym_object,
  [sym_field] = sym_field,
  [sym_var_args] = sym_var_args,
  [sym_value] = sym_value,
  [sym_bracketed_statement] = sym_bracketed_statement,
  [sym_boolean] = sym_boolean,
  [sym_type] = sym_type,
  [sym_code_block] = sym_code_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_define_function_statement_repeat1] = aux_sym_define_function_statement_repeat1,
  [aux_sym_function_ref_repeat1] = aux_sym_function_ref_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_var_args_repeat1] = aux_sym_var_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UPDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON_TABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_order] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_token] = {
    .visible = true,
    .named = true,
  },
  [sym_select_token] = {
    .visible = true,
    .named = true,
  },
  [sym_update_token] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_token] = {
    .visible = true,
    .named = true,
  },
  [sym_content_token] = {
    .visible = true,
    .named = true,
  },
  [sym_define_token] = {
    .visible = true,
    .named = true,
  },
  [sym_return_token] = {
    .visible = true,
    .named = true,
  },
  [sym_field_token] = {
    .visible = true,
    .named = true,
  },
  [sym_table_token] = {
    .visible = true,
    .named = true,
  },
  [sym__on_token] = {
    .visible = false,
    .named = true,
  },
  [sym_on_table_token] = {
    .visible = true,
    .named = true,
  },
  [sym_from_token] = {
    .visible = true,
    .named = true,
  },
  [sym_let_token] = {
    .visible = true,
    .named = true,
  },
  [sym_type_token] = {
    .visible = true,
    .named = true,
  },
  [sym_function_token] = {
    .visible = true,
    .named = true,
  },
  [sym_define_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_define_table_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_define_field_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_define_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_create_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_update_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_def] = {
    .visible = true,
    .named = true,
  },
  [sym_field_def] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_var_args] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_function_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_ref_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(155);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '(') ADVANCE(186);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'L') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '(') ADVANCE(186);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(199);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'Y') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(170);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'U') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(178);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(168);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(184);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(164);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'j') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_FIELD);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_TABLE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ON_TABLE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_on_table);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (lookahead == 'a') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (lookahead == 'u') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_order);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_UPDATE] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_CONTENT] = ACTIONS(1),
    [anon_sym_content] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_FIELD] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_TABLE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ON_TABLE] = ACTIONS(1),
    [anon_sym_on_table] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_order] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym__statement] = STATE(6),
    [sym_create_token] = STATE(67),
    [sym_select_token] = STATE(30),
    [sym_update_token] = STATE(69),
    [sym_delete_token] = STATE(70),
    [sym_define_token] = STATE(35),
    [sym_return_token] = STATE(32),
    [sym_let_token] = STATE(87),
    [sym_define_statement] = STATE(6),
    [sym_define_table_statement] = STATE(20),
    [sym_define_field_statement] = STATE(20),
    [sym_define_function_statement] = STATE(20),
    [sym_return_statement] = STATE(6),
    [sym_create_statement] = STATE(6),
    [sym_select_statement] = STATE(6),
    [sym_update_statement] = STATE(6),
    [sym_delete_statement] = STATE(6),
    [sym_let_statement] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CREATE] = ACTIONS(5),
    [anon_sym_create] = ACTIONS(5),
    [anon_sym_SELECT] = ACTIONS(7),
    [anon_sym_select] = ACTIONS(7),
    [anon_sym_UPDATE] = ACTIONS(9),
    [anon_sym_update] = ACTIONS(9),
    [anon_sym_DELETE] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_DEFINE] = ACTIONS(13),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_RETURN] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_LET] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_string,
    STATE(30), 1,
      sym_select_token,
    STATE(32), 1,
      sym_return_token,
    STATE(35), 1,
      sym_define_token,
    STATE(67), 1,
      sym_create_token,
    STATE(69), 1,
      sym_update_token,
    STATE(70), 1,
      sym_delete_token,
    STATE(87), 1,
      sym_let_token,
    ACTIONS(5), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(7), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(9), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(11), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(13), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(15), 2,
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(47), 2,
      sym_field,
      aux_sym_object_repeat1,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(4), 9,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [76] = 17,
    STATE(30), 1,
      sym_select_token,
    STATE(32), 1,
      sym_return_token,
    STATE(35), 1,
      sym_define_token,
    STATE(67), 1,
      sym_create_token,
    STATE(69), 1,
      sym_update_token,
    STATE(70), 1,
      sym_delete_token,
    STATE(87), 1,
      sym_let_token,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(25), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(28), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(31), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(34), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(37), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(40), 2,
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(43), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(3), 9,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [146] = 17,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_select_token,
    STATE(32), 1,
      sym_return_token,
    STATE(35), 1,
      sym_define_token,
    STATE(67), 1,
      sym_create_token,
    STATE(69), 1,
      sym_update_token,
    STATE(70), 1,
      sym_delete_token,
    STATE(87), 1,
      sym_let_token,
    ACTIONS(5), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(7), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(9), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(11), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(13), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(15), 2,
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(3), 9,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [215] = 17,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_select_token,
    STATE(32), 1,
      sym_return_token,
    STATE(35), 1,
      sym_define_token,
    STATE(67), 1,
      sym_create_token,
    STATE(69), 1,
      sym_update_token,
    STATE(70), 1,
      sym_delete_token,
    STATE(87), 1,
      sym_let_token,
    ACTIONS(5), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(7), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(9), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(11), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(13), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(15), 2,
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(4), 9,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [284] = 17,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_select_token,
    STATE(32), 1,
      sym_return_token,
    STATE(35), 1,
      sym_define_token,
    STATE(67), 1,
      sym_create_token,
    STATE(69), 1,
      sym_update_token,
    STATE(70), 1,
      sym_delete_token,
    STATE(87), 1,
      sym_let_token,
    ACTIONS(5), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(7), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(9), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(11), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(13), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(15), 2,
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(3), 9,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [353] = 16,
    STATE(30), 1,
      sym_select_token,
    STATE(32), 1,
      sym_return_token,
    STATE(35), 1,
      sym_define_token,
    STATE(67), 1,
      sym_create_token,
    STATE(69), 1,
      sym_update_token,
    STATE(70), 1,
      sym_delete_token,
    STATE(87), 1,
      sym_let_token,
    ACTIONS(5), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(7), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(9), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(11), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(13), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(15), 2,
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(92), 8,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
  [418] = 1,
    ACTIONS(52), 21,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [442] = 1,
    ACTIONS(54), 21,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [466] = 1,
    ACTIONS(56), 21,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [490] = 1,
    ACTIONS(58), 21,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [514] = 1,
    ACTIONS(60), 21,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [538] = 1,
    ACTIONS(62), 21,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [562] = 1,
    ACTIONS(64), 21,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [586] = 1,
    ACTIONS(66), 19,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [608] = 1,
    ACTIONS(68), 18,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_variable_name,
  [629] = 1,
    ACTIONS(70), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [649] = 1,
    ACTIONS(72), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [669] = 1,
    ACTIONS(60), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [689] = 1,
    ACTIONS(74), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [709] = 1,
    ACTIONS(76), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [729] = 1,
    ACTIONS(78), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [749] = 1,
    ACTIONS(80), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [769] = 1,
    ACTIONS(82), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [789] = 1,
    ACTIONS(84), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [809] = 1,
    ACTIONS(86), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [829] = 1,
    ACTIONS(88), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [849] = 1,
    ACTIONS(90), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [869] = 1,
    ACTIONS(92), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [889] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_function_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_number,
    STATE(50), 1,
      sym_value,
    STATE(57), 1,
      sym_var_args,
    ACTIONS(100), 2,
      sym_string,
      sym_variable_name,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym_field_name,
      sym_object,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [923] = 8,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_function_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_number,
    STATE(61), 1,
      sym_value,
    ACTIONS(100), 2,
      sym_string,
      sym_variable_name,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym_field_name,
      sym_object,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [954] = 8,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_function_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_number,
    STATE(29), 1,
      sym_value,
    ACTIONS(100), 2,
      sym_string,
      sym_variable_name,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym_field_name,
      sym_object,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [985] = 8,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_function_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_number,
    STATE(55), 1,
      sym_value,
    ACTIONS(100), 2,
      sym_string,
      sym_variable_name,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym_field_name,
      sym_object,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [1016] = 8,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_function_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_number,
    STATE(21), 1,
      sym_value,
    ACTIONS(100), 2,
      sym_string,
      sym_variable_name,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym_field_name,
      sym_object,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [1047] = 6,
    STATE(52), 1,
      sym_function_token,
    STATE(64), 1,
      sym_field_token,
    STATE(77), 1,
      sym_table_token,
    ACTIONS(106), 2,
      anon_sym_FIELD,
      anon_sym_field,
    ACTIONS(108), 2,
      anon_sym_TABLE,
      anon_sym_table,
    ACTIONS(110), 2,
      anon_sym_FUNCTION,
      anon_sym_function,
  [1069] = 2,
    ACTIONS(112), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_string,
      sym_variable_name,
    ACTIONS(114), 4,
      aux_sym_function_identifier_token1,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [1082] = 2,
    ACTIONS(116), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_string,
      sym_variable_name,
    ACTIONS(118), 4,
      aux_sym_function_identifier_token1,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [1095] = 4,
    STATE(71), 1,
      sym_on_table_token,
    STATE(88), 1,
      sym__on_token,
    ACTIONS(120), 2,
      anon_sym_ON,
      anon_sym_on,
    ACTIONS(122), 2,
      anon_sym_ON_TABLE,
      anon_sym_on_table,
  [1110] = 1,
    ACTIONS(124), 6,
      anon_sym_FIELD,
      anon_sym_field,
      anon_sym_TABLE,
      anon_sym_table,
      anon_sym_FUNCTION,
      anon_sym_function,
  [1119] = 2,
    STATE(18), 1,
      sym_type,
    ACTIONS(126), 4,
      anon_sym_string,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_object,
  [1129] = 2,
    STATE(65), 1,
      sym_type,
    ACTIONS(126), 4,
      anon_sym_string,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_object,
  [1139] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_var_args_repeat1,
    ACTIONS(128), 2,
      anon_sym_FROM,
      anon_sym_from,
  [1150] = 3,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym_string,
    STATE(43), 2,
      sym_field,
      aux_sym_object_repeat1,
  [1161] = 3,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym_variable_name,
    STATE(44), 2,
      sym_function_parameter,
      aux_sym_define_function_statement_repeat1,
  [1172] = 1,
    ACTIONS(142), 4,
      anon_sym_string,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_object,
  [1179] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      sym_variable_name,
    STATE(44), 2,
      sym_function_parameter,
      aux_sym_define_function_statement_repeat1,
  [1190] = 3,
    ACTIONS(21), 1,
      sym_string,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_field,
      aux_sym_object_repeat1,
  [1201] = 2,
    ACTIONS(150), 2,
      anon_sym_ON,
      anon_sym_on,
    ACTIONS(152), 2,
      anon_sym_ON_TABLE,
      anon_sym_on_table,
  [1210] = 3,
    ACTIONS(146), 1,
      sym_variable_name,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(46), 2,
      sym_function_parameter,
      aux_sym_define_function_statement_repeat1,
  [1221] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_var_args_repeat1,
    ACTIONS(156), 2,
      anon_sym_FROM,
      anon_sym_from,
  [1232] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_var_args_repeat1,
    ACTIONS(158), 2,
      anon_sym_FROM,
      anon_sym_from,
  [1243] = 4,
    ACTIONS(163), 1,
      aux_sym_function_identifier_token1,
    STATE(59), 1,
      aux_sym_function_ref_repeat1,
    STATE(62), 1,
      sym_function_identifier,
    STATE(89), 1,
      sym_function_ref,
  [1256] = 3,
    ACTIONS(21), 1,
      sym_string,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_field,
      aux_sym_object_repeat1,
  [1267] = 2,
    STATE(40), 1,
      sym_type_token,
    ACTIONS(167), 2,
      anon_sym_TYPE,
      anon_sym_type,
  [1275] = 2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      sym_string,
  [1283] = 2,
    STATE(68), 1,
      sym_content_token,
    ACTIONS(173), 2,
      anon_sym_CONTENT,
      anon_sym_content,
  [1291] = 2,
    STATE(76), 1,
      sym_from_token,
    ACTIONS(175), 2,
      anon_sym_FROM,
      anon_sym_from,
  [1299] = 3,
    ACTIONS(177), 1,
      aux_sym_function_identifier_token1,
    STATE(58), 1,
      aux_sym_function_ref_repeat1,
    STATE(84), 1,
      sym_function_identifier,
  [1309] = 3,
    ACTIONS(163), 1,
      aux_sym_function_identifier_token1,
    STATE(58), 1,
      aux_sym_function_ref_repeat1,
    STATE(74), 1,
      sym_function_identifier,
  [1319] = 2,
    STATE(78), 1,
      sym_content_token,
    ACTIONS(173), 2,
      anon_sym_CONTENT,
      anon_sym_content,
  [1327] = 1,
    ACTIONS(158), 3,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_COMMA,
  [1333] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_COLON_COLON,
  [1340] = 1,
    ACTIONS(184), 2,
      anon_sym_TYPE,
      anon_sym_type,
  [1345] = 2,
    ACTIONS(186), 1,
      aux_sym_function_identifier_token1,
    STATE(38), 1,
      sym_field_def,
  [1352] = 1,
    ACTIONS(188), 2,
      anon_sym_RPAREN,
      sym_variable_name,
  [1357] = 2,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_code_block,
  [1364] = 2,
    ACTIONS(192), 1,
      aux_sym_function_identifier_token1,
    STATE(56), 1,
      sym_table_name,
  [1371] = 2,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_object,
  [1378] = 2,
    ACTIONS(192), 1,
      aux_sym_function_identifier_token1,
    STATE(60), 1,
      sym_table_name,
  [1385] = 2,
    ACTIONS(192), 1,
      aux_sym_function_identifier_token1,
    STATE(26), 1,
      sym_table_name,
  [1392] = 2,
    ACTIONS(196), 1,
      aux_sym_function_identifier_token1,
    STATE(54), 1,
      sym_table_def,
  [1399] = 1,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      sym_string,
  [1404] = 2,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_code_block,
  [1411] = 2,
    ACTIONS(182), 1,
      anon_sym_COLON_COLON,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
  [1418] = 1,
    ACTIONS(202), 2,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
  [1423] = 2,
    ACTIONS(192), 1,
      aux_sym_function_identifier_token1,
    STATE(25), 1,
      sym_table_name,
  [1430] = 2,
    ACTIONS(192), 1,
      aux_sym_function_identifier_token1,
    STATE(28), 1,
      sym_table_name,
  [1437] = 2,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_object,
  [1444] = 1,
    ACTIONS(204), 1,
      aux_sym_function_identifier_token1,
  [1448] = 1,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [1452] = 1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
  [1456] = 1,
    ACTIONS(210), 1,
      anon_sym_COLON,
  [1460] = 1,
    ACTIONS(212), 1,
      aux_sym_function_identifier_token1,
  [1464] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON_COLON,
  [1468] = 1,
    ACTIONS(214), 1,
      aux_sym_function_identifier_token1,
  [1472] = 1,
    ACTIONS(216), 1,
      anon_sym_COLON,
  [1476] = 1,
    ACTIONS(218), 1,
      sym_variable_name,
  [1480] = 1,
    ACTIONS(220), 1,
      aux_sym_function_identifier_token1,
  [1484] = 1,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
  [1488] = 1,
    ACTIONS(224), 1,
      aux_sym_function_identifier_token1,
  [1492] = 1,
    ACTIONS(226), 1,
      aux_sym_function_identifier_token1,
  [1496] = 1,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [1500] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [1504] = 1,
    ACTIONS(232), 1,
      sym_variable_name,
  [1508] = 1,
    ACTIONS(234), 1,
      aux_sym_function_identifier_token1,
  [1512] = 1,
    ACTIONS(236), 1,
      aux_sym_function_identifier_token1,
  [1516] = 1,
    ACTIONS(238), 1,
      aux_sym_function_identifier_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 215,
  [SMALL_STATE(6)] = 284,
  [SMALL_STATE(7)] = 353,
  [SMALL_STATE(8)] = 418,
  [SMALL_STATE(9)] = 442,
  [SMALL_STATE(10)] = 466,
  [SMALL_STATE(11)] = 490,
  [SMALL_STATE(12)] = 514,
  [SMALL_STATE(13)] = 538,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 586,
  [SMALL_STATE(16)] = 608,
  [SMALL_STATE(17)] = 629,
  [SMALL_STATE(18)] = 649,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 689,
  [SMALL_STATE(21)] = 709,
  [SMALL_STATE(22)] = 729,
  [SMALL_STATE(23)] = 749,
  [SMALL_STATE(24)] = 769,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 809,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 849,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 889,
  [SMALL_STATE(31)] = 923,
  [SMALL_STATE(32)] = 954,
  [SMALL_STATE(33)] = 985,
  [SMALL_STATE(34)] = 1016,
  [SMALL_STATE(35)] = 1047,
  [SMALL_STATE(36)] = 1069,
  [SMALL_STATE(37)] = 1082,
  [SMALL_STATE(38)] = 1095,
  [SMALL_STATE(39)] = 1110,
  [SMALL_STATE(40)] = 1119,
  [SMALL_STATE(41)] = 1129,
  [SMALL_STATE(42)] = 1139,
  [SMALL_STATE(43)] = 1150,
  [SMALL_STATE(44)] = 1161,
  [SMALL_STATE(45)] = 1172,
  [SMALL_STATE(46)] = 1179,
  [SMALL_STATE(47)] = 1190,
  [SMALL_STATE(48)] = 1201,
  [SMALL_STATE(49)] = 1210,
  [SMALL_STATE(50)] = 1221,
  [SMALL_STATE(51)] = 1232,
  [SMALL_STATE(52)] = 1243,
  [SMALL_STATE(53)] = 1256,
  [SMALL_STATE(54)] = 1267,
  [SMALL_STATE(55)] = 1275,
  [SMALL_STATE(56)] = 1283,
  [SMALL_STATE(57)] = 1291,
  [SMALL_STATE(58)] = 1299,
  [SMALL_STATE(59)] = 1309,
  [SMALL_STATE(60)] = 1319,
  [SMALL_STATE(61)] = 1327,
  [SMALL_STATE(62)] = 1333,
  [SMALL_STATE(63)] = 1340,
  [SMALL_STATE(64)] = 1345,
  [SMALL_STATE(65)] = 1352,
  [SMALL_STATE(66)] = 1357,
  [SMALL_STATE(67)] = 1364,
  [SMALL_STATE(68)] = 1371,
  [SMALL_STATE(69)] = 1378,
  [SMALL_STATE(70)] = 1385,
  [SMALL_STATE(71)] = 1392,
  [SMALL_STATE(72)] = 1399,
  [SMALL_STATE(73)] = 1404,
  [SMALL_STATE(74)] = 1411,
  [SMALL_STATE(75)] = 1418,
  [SMALL_STATE(76)] = 1423,
  [SMALL_STATE(77)] = 1430,
  [SMALL_STATE(78)] = 1437,
  [SMALL_STATE(79)] = 1444,
  [SMALL_STATE(80)] = 1448,
  [SMALL_STATE(81)] = 1452,
  [SMALL_STATE(82)] = 1456,
  [SMALL_STATE(83)] = 1460,
  [SMALL_STATE(84)] = 1464,
  [SMALL_STATE(85)] = 1468,
  [SMALL_STATE(86)] = 1472,
  [SMALL_STATE(87)] = 1476,
  [SMALL_STATE(88)] = 1480,
  [SMALL_STATE(89)] = 1484,
  [SMALL_STATE(90)] = 1488,
  [SMALL_STATE(91)] = 1492,
  [SMALL_STATE(92)] = 1496,
  [SMALL_STATE(93)] = 1500,
  [SMALL_STATE(94)] = 1504,
  [SMALL_STATE(95)] = 1508,
  [SMALL_STATE(96)] = 1512,
  [SMALL_STATE(97)] = 1516,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_statement, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_field_statement, 7),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_statement, 7),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_table_statement, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_token, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_token, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_token, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_token, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_token, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_args, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(86),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_function_statement_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_function_statement_repeat1, 2), SHIFT_REPEAT(82),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_token, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_def, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_args, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_args_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_args_repeat1, 2), SHIFT_REPEAT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_ref_repeat1, 2), SHIFT_REPEAT(75),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_ref, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_def, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_ref, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_token, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_token, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_token, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_ref_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_table_token, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_token, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_token, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_token, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_token, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_token, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_token, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surrealql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
