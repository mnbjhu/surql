#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
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
  anon_sym_RETURN = 9,
  anon_sym_return = 10,
  anon_sym_CONTENT = 11,
  anon_sym_content = 12,
  anon_sym_DEFINE = 13,
  anon_sym_define = 14,
  anon_sym_TYPE = 15,
  anon_sym_type = 16,
  anon_sym_FIELD = 17,
  anon_sym_field = 18,
  anon_sym_TABLE = 19,
  anon_sym_table = 20,
  anon_sym_FUNCTION = 21,
  anon_sym_function = 22,
  anon_sym_ON = 23,
  anon_sym_on = 24,
  anon_sym_ON_TABLE = 25,
  anon_sym_on_table = 26,
  anon_sym_FROM = 27,
  anon_sym_from = 28,
  anon_sym_LET = 29,
  anon_sym_let = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_COLON = 33,
  aux_sym_function_identifier_token1 = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_EQ = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_COMMA = 39,
  sym_string = 40,
  sym_number = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_string = 46,
  anon_sym_number = 47,
  anon_sym_boolean = 48,
  anon_sym_object = 49,
  sym_variable_name = 50,
  sym_source_file = 51,
  sym__statement = 52,
  sym_create_token = 53,
  sym_select_token = 54,
  sym_update_token = 55,
  sym_delete_token = 56,
  sym_return_token = 57,
  sym_content_token = 58,
  sym_define_token = 59,
  sym_type_token = 60,
  sym_field_token = 61,
  sym_table_token = 62,
  sym_function_token = 63,
  sym__on_token = 64,
  sym_on_table_token = 65,
  sym_from_token = 66,
  sym_let_token = 67,
  sym_define_statement = 68,
  sym_define_table_statement = 69,
  sym_define_field_statement = 70,
  sym_define_function_statement = 71,
  sym_return_statement = 72,
  sym_function_parameter = 73,
  sym_function_identifier = 74,
  sym_function_ref = 75,
  sym_create_statement = 76,
  sym_select_statement = 77,
  sym_update_statement = 78,
  sym_delete_statement = 79,
  sym_let_statement = 80,
  sym_table_name = 81,
  sym_field_name = 82,
  sym_object = 83,
  sym_field = 84,
  sym_value = 85,
  sym_bracketed_value = 86,
  sym_bracketed_statement = 87,
  sym_boolean = 88,
  sym_type = 89,
  sym_code_block = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_define_function_statement_repeat1 = 92,
  aux_sym_function_ref_repeat1 = 93,
  aux_sym_object_repeat1 = 94,
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
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_return] = "return",
  [anon_sym_CONTENT] = "CONTENT",
  [anon_sym_content] = "content",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_define] = "define",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_type] = "type",
  [anon_sym_FIELD] = "FIELD",
  [anon_sym_field] = "field",
  [anon_sym_TABLE] = "TABLE",
  [anon_sym_table] = "table",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_function] = "function",
  [anon_sym_ON] = "ON",
  [anon_sym_on] = "on",
  [anon_sym_ON_TABLE] = "ON_TABLE",
  [anon_sym_on_table] = "on_table",
  [anon_sym_FROM] = "FROM",
  [anon_sym_from] = "from",
  [anon_sym_LET] = "LET",
  [anon_sym_let] = "let",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [aux_sym_function_identifier_token1] = "function_identifier_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
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
  [sym_return_token] = "return_token",
  [sym_content_token] = "content_token",
  [sym_define_token] = "define_token",
  [sym_type_token] = "type_token",
  [sym_field_token] = "field_token",
  [sym_table_token] = "table_token",
  [sym_function_token] = "function_token",
  [sym__on_token] = "_on_token",
  [sym_on_table_token] = "on_table_token",
  [sym_from_token] = "from_token",
  [sym_let_token] = "let_token",
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
  [sym_object] = "object",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_bracketed_value] = "bracketed_value",
  [sym_bracketed_statement] = "bracketed_statement",
  [sym_boolean] = "boolean",
  [sym_type] = "type",
  [sym_code_block] = "code_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_define_function_statement_repeat1] = "define_function_statement_repeat1",
  [aux_sym_function_ref_repeat1] = "function_ref_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
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
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_CONTENT] = anon_sym_CONTENT,
  [anon_sym_content] = anon_sym_content,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_TYPE] = anon_sym_TYPE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_FIELD] = anon_sym_FIELD,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_TABLE] = anon_sym_TABLE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ON_TABLE] = anon_sym_ON_TABLE,
  [anon_sym_on_table] = anon_sym_on_table,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_function_identifier_token1] = aux_sym_function_identifier_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_return_token] = sym_return_token,
  [sym_content_token] = sym_content_token,
  [sym_define_token] = sym_define_token,
  [sym_type_token] = sym_type_token,
  [sym_field_token] = sym_field_token,
  [sym_table_token] = sym_table_token,
  [sym_function_token] = sym_function_token,
  [sym__on_token] = sym__on_token,
  [sym_on_table_token] = sym_on_table_token,
  [sym_from_token] = sym_from_token,
  [sym_let_token] = sym_let_token,
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
  [sym_object] = sym_object,
  [sym_field] = sym_field,
  [sym_value] = sym_value,
  [sym_bracketed_value] = sym_bracketed_value,
  [sym_bracketed_statement] = sym_bracketed_statement,
  [sym_boolean] = sym_boolean,
  [sym_type] = sym_type,
  [sym_code_block] = sym_code_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_define_function_statement_repeat1] = aux_sym_define_function_statement_repeat1,
  [aux_sym_function_ref_repeat1] = aux_sym_function_ref_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
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
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
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
  [anon_sym_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
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
  [sym_return_token] = {
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
  [sym_type_token] = {
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
  [sym_function_token] = {
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
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_value] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'L') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
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
      if (lookahead == 'D') ADVANCE(165);
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
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(173);
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
      if (lookahead == 'M') ADVANCE(175);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(171);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(169);
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
      if (lookahead == 'T') ADVANCE(177);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(159);
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
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'j') ADVANCE(97);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_FIELD);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_TABLE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ON_TABLE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_on_table);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_function_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
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
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_CONTENT] = ACTIONS(1),
    [anon_sym_content] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_FIELD] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_TABLE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ON_TABLE] = ACTIONS(1),
    [anon_sym_on_table] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(87),
    [sym__statement] = STATE(7),
    [sym_create_token] = STATE(61),
    [sym_select_token] = STATE(62),
    [sym_update_token] = STATE(65),
    [sym_delete_token] = STATE(66),
    [sym_return_token] = STATE(31),
    [sym_define_token] = STATE(33),
    [sym_let_token] = STATE(81),
    [sym_define_statement] = STATE(7),
    [sym_define_table_statement] = STATE(20),
    [sym_define_field_statement] = STATE(20),
    [sym_define_function_statement] = STATE(20),
    [sym_return_statement] = STATE(7),
    [sym_create_statement] = STATE(7),
    [sym_select_statement] = STATE(7),
    [sym_update_statement] = STATE(7),
    [sym_delete_statement] = STATE(7),
    [sym_let_statement] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CREATE] = ACTIONS(5),
    [anon_sym_create] = ACTIONS(5),
    [anon_sym_SELECT] = ACTIONS(7),
    [anon_sym_select] = ACTIONS(7),
    [anon_sym_UPDATE] = ACTIONS(9),
    [anon_sym_update] = ACTIONS(9),
    [anon_sym_DELETE] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_RETURN] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DEFINE] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_LET] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_return_token,
    STATE(33), 1,
      sym_define_token,
    STATE(61), 1,
      sym_create_token,
    STATE(62), 1,
      sym_select_token,
    STATE(65), 1,
      sym_update_token,
    STATE(66), 1,
      sym_delete_token,
    STATE(73), 1,
      sym_value,
    STATE(81), 1,
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
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(15), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 3,
      sym_string,
      sym_number,
      sym_variable_name,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(15), 5,
      sym_object,
      sym_bracketed_value,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
    STATE(84), 8,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
  [90] = 19,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym_string,
    STATE(31), 1,
      sym_return_token,
    STATE(33), 1,
      sym_define_token,
    STATE(61), 1,
      sym_create_token,
    STATE(62), 1,
      sym_select_token,
    STATE(65), 1,
      sym_update_token,
    STATE(66), 1,
      sym_delete_token,
    STATE(81), 1,
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
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(15), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(46), 2,
      sym_field,
      aux_sym_object_repeat1,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(5), 9,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [166] = 17,
    STATE(31), 1,
      sym_return_token,
    STATE(33), 1,
      sym_define_token,
    STATE(61), 1,
      sym_create_token,
    STATE(62), 1,
      sym_select_token,
    STATE(65), 1,
      sym_update_token,
    STATE(66), 1,
      sym_delete_token,
    STATE(81), 1,
      sym_let_token,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(33), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(36), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(39), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(42), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(45), 2,
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(48), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(51), 2,
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
  [236] = 17,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_return_token,
    STATE(33), 1,
      sym_define_token,
    STATE(61), 1,
      sym_create_token,
    STATE(62), 1,
      sym_select_token,
    STATE(65), 1,
      sym_update_token,
    STATE(66), 1,
      sym_delete_token,
    STATE(81), 1,
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
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(15), 2,
      anon_sym_DEFINE,
      anon_sym_define,
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
  [305] = 17,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_return_token,
    STATE(33), 1,
      sym_define_token,
    STATE(61), 1,
      sym_create_token,
    STATE(62), 1,
      sym_select_token,
    STATE(65), 1,
      sym_update_token,
    STATE(66), 1,
      sym_delete_token,
    STATE(81), 1,
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
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(15), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(17), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(20), 3,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_define_function_statement,
    STATE(5), 9,
      sym__statement,
      sym_define_statement,
      sym_return_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [374] = 17,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_return_token,
    STATE(33), 1,
      sym_define_token,
    STATE(61), 1,
      sym_create_token,
    STATE(62), 1,
      sym_select_token,
    STATE(65), 1,
      sym_update_token,
    STATE(66), 1,
      sym_delete_token,
    STATE(81), 1,
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
      anon_sym_RETURN,
      anon_sym_return,
    ACTIONS(15), 2,
      anon_sym_DEFINE,
      anon_sym_define,
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
  [443] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_TYPE,
      anon_sym_type,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [467] = 1,
    ACTIONS(62), 19,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [489] = 1,
    ACTIONS(64), 19,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [511] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [533] = 1,
    ACTIONS(68), 19,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [555] = 1,
    ACTIONS(70), 19,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [577] = 1,
    ACTIONS(72), 19,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [599] = 1,
    ACTIONS(74), 19,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [621] = 1,
    ACTIONS(76), 18,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_variable_name,
  [642] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [662] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [682] = 1,
    ACTIONS(62), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [702] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [722] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [742] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [762] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [782] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [802] = 1,
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
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [822] = 1,
    ACTIONS(94), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [842] = 1,
    ACTIONS(96), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [862] = 1,
    ACTIONS(98), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [882] = 1,
    ACTIONS(100), 17,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      anon_sym_RETURN,
      anon_sym_return,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [902] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 3,
      sym_string,
      sym_number,
      sym_variable_name,
    STATE(15), 5,
      sym_object,
      sym_bracketed_value,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [928] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 3,
      sym_string,
      sym_number,
      sym_variable_name,
    STATE(15), 5,
      sym_object,
      sym_bracketed_value,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [954] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 3,
      sym_string,
      sym_number,
      sym_variable_name,
    STATE(15), 5,
      sym_object,
      sym_bracketed_value,
      sym_bracketed_statement,
      sym_boolean,
      sym_code_block,
  [980] = 6,
    STATE(42), 1,
      sym_function_token,
    STATE(63), 1,
      sym_table_token,
    STATE(64), 1,
      sym_field_token,
    ACTIONS(102), 2,
      anon_sym_FIELD,
      anon_sym_field,
    ACTIONS(104), 2,
      anon_sym_TABLE,
      anon_sym_table,
    ACTIONS(106), 2,
      anon_sym_FUNCTION,
      anon_sym_function,
  [1002] = 1,
    ACTIONS(108), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_string,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_variable_name,
  [1012] = 1,
    ACTIONS(110), 6,
      anon_sym_FIELD,
      anon_sym_field,
      anon_sym_TABLE,
      anon_sym_table,
      anon_sym_FUNCTION,
      anon_sym_function,
  [1021] = 2,
    ACTIONS(112), 2,
      anon_sym_ON,
      anon_sym_on,
    ACTIONS(114), 4,
      anon_sym_ON_TABLE,
      anon_sym_on_table,
      anon_sym_FROM,
      anon_sym_from,
  [1032] = 4,
    STATE(67), 1,
      sym_on_table_token,
    STATE(83), 1,
      sym__on_token,
    ACTIONS(116), 2,
      anon_sym_ON,
      anon_sym_on,
    ACTIONS(118), 2,
      anon_sym_ON_TABLE,
      anon_sym_on_table,
  [1047] = 2,
    STATE(59), 1,
      sym_type,
    ACTIONS(120), 4,
      anon_sym_string,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_object,
  [1057] = 2,
    STATE(22), 1,
      sym_type,
    ACTIONS(120), 4,
      anon_sym_string,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_object,
  [1067] = 3,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      sym_variable_name,
    STATE(47), 2,
      sym_function_parameter,
      aux_sym_define_function_statement_repeat1,
  [1078] = 3,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      sym_string,
    STATE(41), 2,
      sym_field,
      aux_sym_object_repeat1,
  [1089] = 4,
    ACTIONS(131), 1,
      aux_sym_function_identifier_token1,
    STATE(54), 1,
      aux_sym_function_ref_repeat1,
    STATE(56), 1,
      sym_function_identifier,
    STATE(74), 1,
      sym_function_ref,
  [1102] = 3,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      sym_variable_name,
    STATE(43), 2,
      sym_function_parameter,
      aux_sym_define_function_statement_repeat1,
  [1113] = 1,
    ACTIONS(138), 4,
      anon_sym_string,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_object,
  [1120] = 3,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_field,
      aux_sym_object_repeat1,
  [1131] = 3,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_field,
      aux_sym_object_repeat1,
  [1142] = 3,
    ACTIONS(124), 1,
      sym_variable_name,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(43), 2,
      sym_function_parameter,
      aux_sym_define_function_statement_repeat1,
  [1153] = 2,
    STATE(58), 1,
      sym_from_token,
    ACTIONS(146), 2,
      anon_sym_FROM,
      anon_sym_from,
  [1161] = 3,
    ACTIONS(148), 1,
      aux_sym_function_identifier_token1,
    STATE(49), 1,
      aux_sym_function_ref_repeat1,
    STATE(79), 1,
      sym_function_identifier,
  [1171] = 2,
    STATE(55), 1,
      sym_content_token,
    ACTIONS(151), 2,
      anon_sym_CONTENT,
      anon_sym_content,
  [1179] = 2,
    STATE(39), 1,
      sym_type_token,
    ACTIONS(153), 2,
      anon_sym_TYPE,
      anon_sym_type,
  [1187] = 2,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      sym_string,
  [1195] = 2,
    STATE(57), 1,
      sym_content_token,
    ACTIONS(151), 2,
      anon_sym_CONTENT,
      anon_sym_content,
  [1203] = 3,
    ACTIONS(131), 1,
      aux_sym_function_identifier_token1,
    STATE(49), 1,
      aux_sym_function_ref_repeat1,
    STATE(70), 1,
      sym_function_identifier,
  [1213] = 2,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_object,
  [1220] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_COLON_COLON,
  [1227] = 2,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_object,
  [1234] = 2,
    ACTIONS(165), 1,
      aux_sym_function_identifier_token1,
    STATE(27), 1,
      sym_table_name,
  [1241] = 1,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      sym_variable_name,
  [1246] = 2,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_code_block,
  [1253] = 2,
    ACTIONS(165), 1,
      aux_sym_function_identifier_token1,
    STATE(50), 1,
      sym_table_name,
  [1260] = 2,
    ACTIONS(171), 1,
      aux_sym_function_identifier_token1,
    STATE(48), 1,
      sym_field_name,
  [1267] = 2,
    ACTIONS(165), 1,
      aux_sym_function_identifier_token1,
    STATE(24), 1,
      sym_table_name,
  [1274] = 2,
    ACTIONS(171), 1,
      aux_sym_function_identifier_token1,
    STATE(37), 1,
      sym_field_name,
  [1281] = 2,
    ACTIONS(165), 1,
      aux_sym_function_identifier_token1,
    STATE(53), 1,
      sym_table_name,
  [1288] = 2,
    ACTIONS(165), 1,
      aux_sym_function_identifier_token1,
    STATE(17), 1,
      sym_table_name,
  [1295] = 2,
    ACTIONS(165), 1,
      aux_sym_function_identifier_token1,
    STATE(51), 1,
      sym_table_name,
  [1302] = 1,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      sym_string,
  [1307] = 1,
    ACTIONS(175), 2,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
  [1312] = 2,
    ACTIONS(163), 1,
      anon_sym_COLON_COLON,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
  [1319] = 2,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_code_block,
  [1326] = 1,
    ACTIONS(179), 1,
      aux_sym_function_identifier_token1,
  [1330] = 1,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [1334] = 1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
  [1338] = 1,
    ACTIONS(185), 1,
      aux_sym_function_identifier_token1,
  [1342] = 1,
    ACTIONS(187), 1,
      aux_sym_function_identifier_token1,
  [1346] = 1,
    ACTIONS(189), 1,
      anon_sym_COLON,
  [1350] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [1354] = 1,
    ACTIONS(163), 1,
      anon_sym_COLON_COLON,
  [1358] = 1,
    ACTIONS(193), 1,
      aux_sym_function_identifier_token1,
  [1362] = 1,
    ACTIONS(195), 1,
      sym_variable_name,
  [1366] = 1,
    ACTIONS(197), 1,
      aux_sym_function_identifier_token1,
  [1370] = 1,
    ACTIONS(199), 1,
      aux_sym_function_identifier_token1,
  [1374] = 1,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [1378] = 1,
    ACTIONS(203), 1,
      anon_sym_EQ,
  [1382] = 1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
  [1386] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [1390] = 1,
    ACTIONS(209), 1,
      sym_variable_name,
  [1394] = 1,
    ACTIONS(211), 1,
      aux_sym_function_identifier_token1,
  [1398] = 1,
    ACTIONS(213), 1,
      aux_sym_function_identifier_token1,
  [1402] = 1,
    ACTIONS(215), 1,
      aux_sym_function_identifier_token1,
  [1406] = 1,
    ACTIONS(217), 1,
      aux_sym_function_identifier_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 236,
  [SMALL_STATE(6)] = 305,
  [SMALL_STATE(7)] = 374,
  [SMALL_STATE(8)] = 443,
  [SMALL_STATE(9)] = 467,
  [SMALL_STATE(10)] = 489,
  [SMALL_STATE(11)] = 511,
  [SMALL_STATE(12)] = 533,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 577,
  [SMALL_STATE(15)] = 599,
  [SMALL_STATE(16)] = 621,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 662,
  [SMALL_STATE(19)] = 682,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 722,
  [SMALL_STATE(22)] = 742,
  [SMALL_STATE(23)] = 762,
  [SMALL_STATE(24)] = 782,
  [SMALL_STATE(25)] = 802,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 842,
  [SMALL_STATE(28)] = 862,
  [SMALL_STATE(29)] = 882,
  [SMALL_STATE(30)] = 902,
  [SMALL_STATE(31)] = 928,
  [SMALL_STATE(32)] = 954,
  [SMALL_STATE(33)] = 980,
  [SMALL_STATE(34)] = 1002,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1021,
  [SMALL_STATE(37)] = 1032,
  [SMALL_STATE(38)] = 1047,
  [SMALL_STATE(39)] = 1057,
  [SMALL_STATE(40)] = 1067,
  [SMALL_STATE(41)] = 1078,
  [SMALL_STATE(42)] = 1089,
  [SMALL_STATE(43)] = 1102,
  [SMALL_STATE(44)] = 1113,
  [SMALL_STATE(45)] = 1120,
  [SMALL_STATE(46)] = 1131,
  [SMALL_STATE(47)] = 1142,
  [SMALL_STATE(48)] = 1153,
  [SMALL_STATE(49)] = 1161,
  [SMALL_STATE(50)] = 1171,
  [SMALL_STATE(51)] = 1179,
  [SMALL_STATE(52)] = 1187,
  [SMALL_STATE(53)] = 1195,
  [SMALL_STATE(54)] = 1203,
  [SMALL_STATE(55)] = 1213,
  [SMALL_STATE(56)] = 1220,
  [SMALL_STATE(57)] = 1227,
  [SMALL_STATE(58)] = 1234,
  [SMALL_STATE(59)] = 1241,
  [SMALL_STATE(60)] = 1246,
  [SMALL_STATE(61)] = 1253,
  [SMALL_STATE(62)] = 1260,
  [SMALL_STATE(63)] = 1267,
  [SMALL_STATE(64)] = 1274,
  [SMALL_STATE(65)] = 1281,
  [SMALL_STATE(66)] = 1288,
  [SMALL_STATE(67)] = 1295,
  [SMALL_STATE(68)] = 1302,
  [SMALL_STATE(69)] = 1307,
  [SMALL_STATE(70)] = 1312,
  [SMALL_STATE(71)] = 1319,
  [SMALL_STATE(72)] = 1326,
  [SMALL_STATE(73)] = 1330,
  [SMALL_STATE(74)] = 1334,
  [SMALL_STATE(75)] = 1338,
  [SMALL_STATE(76)] = 1342,
  [SMALL_STATE(77)] = 1346,
  [SMALL_STATE(78)] = 1350,
  [SMALL_STATE(79)] = 1354,
  [SMALL_STATE(80)] = 1358,
  [SMALL_STATE(81)] = 1362,
  [SMALL_STATE(82)] = 1366,
  [SMALL_STATE(83)] = 1370,
  [SMALL_STATE(84)] = 1374,
  [SMALL_STATE(85)] = 1378,
  [SMALL_STATE(86)] = 1382,
  [SMALL_STATE(87)] = 1386,
  [SMALL_STATE(88)] = 1390,
  [SMALL_STATE(89)] = 1394,
  [SMALL_STATE(90)] = 1398,
  [SMALL_STATE(91)] = 1402,
  [SMALL_STATE(92)] = 1406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_statement, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_value, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_statement, 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_field_statement, 7),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_table_statement, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_statement, 7),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_token, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_token, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(78),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_function_statement_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_function_statement_repeat1, 2), SHIFT_REPEAT(77),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_token, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_ref_repeat1, 2), SHIFT_REPEAT(69),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_ref, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_ref, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_token, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_token, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_token, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_token, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_ref_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_table_token, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_token, 1),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_token, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_token, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_token, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_token, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_token, 1),
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
