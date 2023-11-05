#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_identifier = 2,
  anon_sym_DOLLAR = 3,
  sym_string = 4,
  sym_integer = 5,
  sym_float = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_COLON = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_DOT = 17,
  anon_sym_SLASH = 18,
  anon_sym_STAR = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_LT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_EQ = 27,
  sym_create_token = 28,
  sym_update_token = 29,
  sym_delete_token = 30,
  sym_select_token = 31,
  sym_from_token = 32,
  sym_where_token = 33,
  sym_content_token = 34,
  sym_define_token = 35,
  sym_table_token = 36,
  sym_field_token = 37,
  sym_on_token = 38,
  sym_type_token = 39,
  sym_function_token = 40,
  sym_and_token = 41,
  sym_or_token = 42,
  anon_sym_string = 43,
  anon_sym_integer = 44,
  anon_sym_float = 45,
  anon_sym_boolean = 46,
  anon_sym_array = 47,
  anon_sym_optional = 48,
  sym_source_file = 49,
  sym__statement = 50,
  sym_crud_statement = 51,
  sym__statement_parts = 52,
  sym_variable = 53,
  sym_boolean = 54,
  sym_array = 55,
  sym_object_entry = 56,
  sym_object = 57,
  sym_varargs = 58,
  sym_function_call = 59,
  sym__value = 60,
  sym__operation = 61,
  sym_property_access = 62,
  sym_division_operation = 63,
  sym_multiplication_operation = 64,
  sym_addition_operation = 65,
  sym_subtraction_operation = 66,
  sym_less_than_operation = 67,
  sym_less_than_or_equal_to_operation = 68,
  sym_greater_than_operation = 69,
  sym_greater_than_or_equal_to_operation = 70,
  sym_inequality_operation = 71,
  sym_equality_operation = 72,
  sym_or_operation = 73,
  sym_and_operation = 74,
  sym_delete_part = 75,
  sym_create_part = 76,
  sym_content_part = 77,
  sym_select_part = 78,
  sym_from_part = 79,
  sym_where_part = 80,
  sym_update_part = 81,
  sym_definition_statement = 82,
  sym__define_part = 83,
  sym_type_name = 84,
  sym_array_type = 85,
  sym_optional_type = 86,
  sym_table_part = 87,
  sym_field_part = 88,
  sym_on_part = 89,
  sym_type_part = 90,
  sym_function_name_part = 91,
  sym_function_param = 92,
  sym_function_arguments_part = 93,
  sym_function_return_type_part = 94,
  sym_function_body_part = 95,
  sym_function_definition_statement = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_crud_statement_repeat1 = 98,
  aux_sym_array_repeat1 = 99,
  aux_sym_object_repeat1 = 100,
  aux_sym_varargs_repeat1 = 101,
  aux_sym_definition_statement_repeat1 = 102,
  aux_sym_function_arguments_part_repeat1 = 103,
  aux_sym_function_body_part_repeat1 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ] = "=",
  [sym_create_token] = "create_token",
  [sym_update_token] = "update_token",
  [sym_delete_token] = "delete_token",
  [sym_select_token] = "select_token",
  [sym_from_token] = "from_token",
  [sym_where_token] = "where_token",
  [sym_content_token] = "content_token",
  [sym_define_token] = "define_token",
  [sym_table_token] = "table_token",
  [sym_field_token] = "field_token",
  [sym_on_token] = "on_token",
  [sym_type_token] = "type_token",
  [sym_function_token] = "function_token",
  [sym_and_token] = "and_token",
  [sym_or_token] = "or_token",
  [anon_sym_string] = "string",
  [anon_sym_integer] = "integer",
  [anon_sym_float] = "float",
  [anon_sym_boolean] = "boolean",
  [anon_sym_array] = "array",
  [anon_sym_optional] = "optional",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_crud_statement] = "crud_statement",
  [sym__statement_parts] = "_statement_parts",
  [sym_variable] = "variable",
  [sym_boolean] = "boolean",
  [sym_array] = "array",
  [sym_object_entry] = "object_entry",
  [sym_object] = "object",
  [sym_varargs] = "varargs",
  [sym_function_call] = "function_call",
  [sym__value] = "_value",
  [sym__operation] = "_operation",
  [sym_property_access] = "property_access",
  [sym_division_operation] = "division_operation",
  [sym_multiplication_operation] = "multiplication_operation",
  [sym_addition_operation] = "addition_operation",
  [sym_subtraction_operation] = "subtraction_operation",
  [sym_less_than_operation] = "less_than_operation",
  [sym_less_than_or_equal_to_operation] = "less_than_or_equal_to_operation",
  [sym_greater_than_operation] = "greater_than_operation",
  [sym_greater_than_or_equal_to_operation] = "greater_than_or_equal_to_operation",
  [sym_inequality_operation] = "inequality_operation",
  [sym_equality_operation] = "equality_operation",
  [sym_or_operation] = "or_operation",
  [sym_and_operation] = "and_operation",
  [sym_delete_part] = "delete_part",
  [sym_create_part] = "create_part",
  [sym_content_part] = "content_part",
  [sym_select_part] = "select_part",
  [sym_from_part] = "from_part",
  [sym_where_part] = "where_part",
  [sym_update_part] = "update_part",
  [sym_definition_statement] = "definition_statement",
  [sym__define_part] = "_define_part",
  [sym_type_name] = "type_name",
  [sym_array_type] = "array_type",
  [sym_optional_type] = "optional_type",
  [sym_table_part] = "table_part",
  [sym_field_part] = "field_part",
  [sym_on_part] = "on_part",
  [sym_type_part] = "type_part",
  [sym_function_name_part] = "function_name_part",
  [sym_function_param] = "function_param",
  [sym_function_arguments_part] = "function_arguments_part",
  [sym_function_return_type_part] = "function_return_type_part",
  [sym_function_body_part] = "function_body_part",
  [sym_function_definition_statement] = "function_definition_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_crud_statement_repeat1] = "crud_statement_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_varargs_repeat1] = "varargs_repeat1",
  [aux_sym_definition_statement_repeat1] = "definition_statement_repeat1",
  [aux_sym_function_arguments_part_repeat1] = "function_arguments_part_repeat1",
  [aux_sym_function_body_part_repeat1] = "function_body_part_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_create_token] = sym_create_token,
  [sym_update_token] = sym_update_token,
  [sym_delete_token] = sym_delete_token,
  [sym_select_token] = sym_select_token,
  [sym_from_token] = sym_from_token,
  [sym_where_token] = sym_where_token,
  [sym_content_token] = sym_content_token,
  [sym_define_token] = sym_define_token,
  [sym_table_token] = sym_table_token,
  [sym_field_token] = sym_field_token,
  [sym_on_token] = sym_on_token,
  [sym_type_token] = sym_type_token,
  [sym_function_token] = sym_function_token,
  [sym_and_token] = sym_and_token,
  [sym_or_token] = sym_or_token,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_optional] = anon_sym_optional,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_crud_statement] = sym_crud_statement,
  [sym__statement_parts] = sym__statement_parts,
  [sym_variable] = sym_variable,
  [sym_boolean] = sym_boolean,
  [sym_array] = sym_array,
  [sym_object_entry] = sym_object_entry,
  [sym_object] = sym_object,
  [sym_varargs] = sym_varargs,
  [sym_function_call] = sym_function_call,
  [sym__value] = sym__value,
  [sym__operation] = sym__operation,
  [sym_property_access] = sym_property_access,
  [sym_division_operation] = sym_division_operation,
  [sym_multiplication_operation] = sym_multiplication_operation,
  [sym_addition_operation] = sym_addition_operation,
  [sym_subtraction_operation] = sym_subtraction_operation,
  [sym_less_than_operation] = sym_less_than_operation,
  [sym_less_than_or_equal_to_operation] = sym_less_than_or_equal_to_operation,
  [sym_greater_than_operation] = sym_greater_than_operation,
  [sym_greater_than_or_equal_to_operation] = sym_greater_than_or_equal_to_operation,
  [sym_inequality_operation] = sym_inequality_operation,
  [sym_equality_operation] = sym_equality_operation,
  [sym_or_operation] = sym_or_operation,
  [sym_and_operation] = sym_and_operation,
  [sym_delete_part] = sym_delete_part,
  [sym_create_part] = sym_create_part,
  [sym_content_part] = sym_content_part,
  [sym_select_part] = sym_select_part,
  [sym_from_part] = sym_from_part,
  [sym_where_part] = sym_where_part,
  [sym_update_part] = sym_update_part,
  [sym_definition_statement] = sym_definition_statement,
  [sym__define_part] = sym__define_part,
  [sym_type_name] = sym_type_name,
  [sym_array_type] = sym_array_type,
  [sym_optional_type] = sym_optional_type,
  [sym_table_part] = sym_table_part,
  [sym_field_part] = sym_field_part,
  [sym_on_part] = sym_on_part,
  [sym_type_part] = sym_type_part,
  [sym_function_name_part] = sym_function_name_part,
  [sym_function_param] = sym_function_param,
  [sym_function_arguments_part] = sym_function_arguments_part,
  [sym_function_return_type_part] = sym_function_return_type_part,
  [sym_function_body_part] = sym_function_body_part,
  [sym_function_definition_statement] = sym_function_definition_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_crud_statement_repeat1] = aux_sym_crud_statement_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_varargs_repeat1] = aux_sym_varargs_repeat1,
  [aux_sym_definition_statement_repeat1] = aux_sym_definition_statement_repeat1,
  [aux_sym_function_arguments_part_repeat1] = aux_sym_function_arguments_part_repeat1,
  [aux_sym_function_body_part_repeat1] = aux_sym_function_body_part_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_create_token] = {
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
  [sym_select_token] = {
    .visible = true,
    .named = true,
  },
  [sym_from_token] = {
    .visible = true,
    .named = true,
  },
  [sym_where_token] = {
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
  [sym_table_token] = {
    .visible = true,
    .named = true,
  },
  [sym_field_token] = {
    .visible = true,
    .named = true,
  },
  [sym_on_token] = {
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
  [sym_and_token] = {
    .visible = true,
    .named = true,
  },
  [sym_or_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_crud_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_parts] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_varargs] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__operation] = {
    .visible = false,
    .named = true,
  },
  [sym_property_access] = {
    .visible = true,
    .named = true,
  },
  [sym_division_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplication_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_addition_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than_or_equal_to_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than_or_equal_to_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_inequality_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_or_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_and_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_part] = {
    .visible = true,
    .named = true,
  },
  [sym_create_part] = {
    .visible = true,
    .named = true,
  },
  [sym_content_part] = {
    .visible = true,
    .named = true,
  },
  [sym_select_part] = {
    .visible = true,
    .named = true,
  },
  [sym_from_part] = {
    .visible = true,
    .named = true,
  },
  [sym_where_part] = {
    .visible = true,
    .named = true,
  },
  [sym_update_part] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__define_part] = {
    .visible = false,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_table_part] = {
    .visible = true,
    .named = true,
  },
  [sym_field_part] = {
    .visible = true,
    .named = true,
  },
  [sym_on_part] = {
    .visible = true,
    .named = true,
  },
  [sym_type_part] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name_part] = {
    .visible = true,
    .named = true,
  },
  [sym_function_param] = {
    .visible = true,
    .named = true,
  },
  [sym_function_arguments_part] = {
    .visible = true,
    .named = true,
  },
  [sym_function_return_type_part] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body_part] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_crud_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varargs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_arguments_part_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_part_repeat1] = {
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(168);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'w') ADVANCE(45);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_create_token);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_create_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_update_token);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_update_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_delete_token);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_delete_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_select_token);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_select_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_from_token);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_from_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_where_token);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_where_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_content_token);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_content_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_define_token);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_table_token);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_table_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_field_token);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_field_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_on_token);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_on_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_type_token);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_type_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_function_token);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_and_token);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_or_token);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
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
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_create_token] = ACTIONS(1),
    [sym_update_token] = ACTIONS(1),
    [sym_delete_token] = ACTIONS(1),
    [sym_select_token] = ACTIONS(1),
    [sym_from_token] = ACTIONS(1),
    [sym_where_token] = ACTIONS(1),
    [sym_content_token] = ACTIONS(1),
    [sym_define_token] = ACTIONS(1),
    [sym_table_token] = ACTIONS(1),
    [sym_field_token] = ACTIONS(1),
    [sym_on_token] = ACTIONS(1),
    [sym_type_token] = ACTIONS(1),
    [sym_function_token] = ACTIONS(1),
    [sym_and_token] = ACTIONS(1),
    [sym_or_token] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(133),
    [sym__statement] = STATE(53),
    [sym_crud_statement] = STATE(53),
    [sym__statement_parts] = STATE(57),
    [sym_delete_part] = STATE(57),
    [sym_create_part] = STATE(57),
    [sym_content_part] = STATE(57),
    [sym_select_part] = STATE(57),
    [sym_from_part] = STATE(57),
    [sym_where_part] = STATE(57),
    [sym_update_part] = STATE(57),
    [sym_definition_statement] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(53),
    [aux_sym_crud_statement_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_create_token] = ACTIONS(5),
    [sym_update_token] = ACTIONS(7),
    [sym_delete_token] = ACTIONS(9),
    [sym_select_token] = ACTIONS(11),
    [sym_from_token] = ACTIONS(13),
    [sym_where_token] = ACTIONS(15),
    [sym_content_token] = ACTIONS(17),
    [sym_define_token] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_varargs,
    ACTIONS(27), 2,
      sym_string,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
    STATE(47), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [61] = 10,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      sym_string,
      sym_float,
    ACTIONS(45), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
    STATE(55), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [119] = 10,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 2,
      sym_string,
      sym_float,
    ACTIONS(53), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
    STATE(54), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [177] = 10,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_varargs,
    ACTIONS(27), 2,
      sym_string,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [229] = 10,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      sym_integer,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_array_repeat1,
    ACTIONS(63), 2,
      sym_string,
      sym_float,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [281] = 10,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym_integer,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_array_repeat1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 2,
      sym_string,
      sym_float,
    STATE(60), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [333] = 10,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      sym_integer,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_array_repeat1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 2,
      sym_string,
      sym_float,
    STATE(58), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [385] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 2,
      sym_string,
      sym_float,
    STATE(41), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [431] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 2,
      sym_string,
      sym_float,
    STATE(28), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [477] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      sym_string,
      sym_float,
    STATE(25), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [523] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 2,
      sym_string,
      sym_float,
    STATE(37), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [569] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      sym_string,
      sym_float,
    STATE(30), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [615] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      sym_string,
      sym_float,
    STATE(29), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [661] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      sym_string,
      sym_float,
    STATE(32), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [707] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      sym_string,
      sym_float,
    STATE(33), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [753] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      sym_string,
      sym_float,
    STATE(34), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [799] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      sym_string,
      sym_float,
    STATE(59), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [845] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      sym_string,
      sym_float,
    STATE(36), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [891] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(136), 2,
      sym_string,
      sym_float,
    STATE(48), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [937] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(140), 2,
      sym_string,
      sym_float,
    STATE(27), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [983] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 2,
      sym_string,
      sym_float,
    STATE(42), 20,
      sym_variable,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_property_access,
      sym_division_operation,
      sym_multiplication_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_less_than_operation,
      sym_less_than_or_equal_to_operation,
      sym_greater_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_inequality_operation,
      sym_equality_operation,
      sym_or_operation,
      sym_and_operation,
  [1029] = 3,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(148), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1062] = 2,
    ACTIONS(156), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(154), 24,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1093] = 10,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(158), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1139] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1169] = 13,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(182), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
  [1221] = 10,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(190), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1267] = 7,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1307] = 7,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1347] = 2,
    ACTIONS(202), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1377] = 5,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1413] = 5,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(208), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1449] = 3,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(212), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1481] = 2,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1511] = 3,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1543] = 7,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1583] = 2,
    ACTIONS(230), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1613] = 2,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1643] = 2,
    ACTIONS(238), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(236), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1673] = 7,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1713] = 12,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(244), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1763] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1793] = 2,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1823] = 2,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1853] = 2,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_and_token,
      sym_or_token,
  [1883] = 16,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      sym_and_token,
    STATE(64), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(262), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [1940] = 14,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(266), 1,
      sym_and_token,
    ACTIONS(268), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [1992] = 11,
    ACTIONS(5), 1,
      sym_create_token,
    ACTIONS(7), 1,
      sym_update_token,
    ACTIONS(9), 1,
      sym_delete_token,
    ACTIONS(11), 1,
      sym_select_token,
    ACTIONS(13), 1,
      sym_from_token,
    ACTIONS(15), 1,
      sym_where_token,
    ACTIONS(17), 1,
      sym_content_token,
    ACTIONS(19), 1,
      sym_define_token,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(52), 4,
      sym__statement,
      sym_crud_statement,
      sym_definition_statement,
      aux_sym_function_body_part_repeat1,
    STATE(57), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2037] = 11,
    ACTIONS(5), 1,
      sym_create_token,
    ACTIONS(7), 1,
      sym_update_token,
    ACTIONS(9), 1,
      sym_delete_token,
    ACTIONS(11), 1,
      sym_select_token,
    ACTIONS(13), 1,
      sym_from_token,
    ACTIONS(15), 1,
      sym_where_token,
    ACTIONS(17), 1,
      sym_content_token,
    ACTIONS(19), 1,
      sym_define_token,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(49), 4,
      sym__statement,
      sym_crud_statement,
      sym_definition_statement,
      aux_sym_function_body_part_repeat1,
    STATE(57), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2082] = 11,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym_create_token,
    ACTIONS(279), 1,
      sym_update_token,
    ACTIONS(282), 1,
      sym_delete_token,
    ACTIONS(285), 1,
      sym_select_token,
    ACTIONS(288), 1,
      sym_from_token,
    ACTIONS(291), 1,
      sym_where_token,
    ACTIONS(294), 1,
      sym_content_token,
    ACTIONS(297), 1,
      sym_define_token,
    STATE(51), 4,
      sym__statement,
      sym_crud_statement,
      sym_definition_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2127] = 11,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      sym_create_token,
    ACTIONS(305), 1,
      sym_update_token,
    ACTIONS(308), 1,
      sym_delete_token,
    ACTIONS(311), 1,
      sym_select_token,
    ACTIONS(314), 1,
      sym_from_token,
    ACTIONS(317), 1,
      sym_where_token,
    ACTIONS(320), 1,
      sym_content_token,
    ACTIONS(323), 1,
      sym_define_token,
    STATE(52), 4,
      sym__statement,
      sym_crud_statement,
      sym_definition_statement,
      aux_sym_function_body_part_repeat1,
    STATE(57), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2172] = 11,
    ACTIONS(5), 1,
      sym_create_token,
    ACTIONS(7), 1,
      sym_update_token,
    ACTIONS(9), 1,
      sym_delete_token,
    ACTIONS(11), 1,
      sym_select_token,
    ACTIONS(13), 1,
      sym_from_token,
    ACTIONS(15), 1,
      sym_where_token,
    ACTIONS(17), 1,
      sym_content_token,
    ACTIONS(19), 1,
      sym_define_token,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(51), 4,
      sym__statement,
      sym_crud_statement,
      sym_definition_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2217] = 14,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(266), 1,
      sym_and_token,
    ACTIONS(328), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2267] = 14,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(266), 1,
      sym_and_token,
    ACTIONS(330), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2317] = 9,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      sym_create_token,
    ACTIONS(337), 1,
      sym_update_token,
    ACTIONS(340), 1,
      sym_delete_token,
    ACTIONS(343), 1,
      sym_select_token,
    ACTIONS(346), 1,
      sym_from_token,
    ACTIONS(349), 1,
      sym_where_token,
    ACTIONS(352), 1,
      sym_content_token,
    STATE(56), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2353] = 9,
    ACTIONS(5), 1,
      sym_create_token,
    ACTIONS(7), 1,
      sym_update_token,
    ACTIONS(9), 1,
      sym_delete_token,
    ACTIONS(11), 1,
      sym_select_token,
    ACTIONS(13), 1,
      sym_from_token,
    ACTIONS(15), 1,
      sym_where_token,
    ACTIONS(17), 1,
      sym_content_token,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    STATE(56), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2389] = 15,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(266), 1,
      sym_and_token,
    ACTIONS(357), 1,
      anon_sym_COMMA,
  [2435] = 14,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(266), 1,
      sym_and_token,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2479] = 15,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(266), 1,
      sym_and_token,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
  [2525] = 6,
    ACTIONS(367), 1,
      anon_sym_array,
    ACTIONS(369), 1,
      anon_sym_optional,
    STATE(96), 1,
      sym_type_name,
    STATE(81), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(365), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
    ACTIONS(363), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [2552] = 14,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(172), 1,
      anon_sym_LT_EQ,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_GT_EQ,
    ACTIONS(184), 1,
      anon_sym_BANG_EQ,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_or_token,
    ACTIONS(266), 1,
      sym_and_token,
    ACTIONS(357), 1,
      anon_sym_COMMA,
  [2595] = 9,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      sym_table_token,
    ACTIONS(375), 1,
      sym_field_token,
    ACTIONS(377), 1,
      sym_on_token,
    ACTIONS(379), 1,
      sym_type_token,
    ACTIONS(381), 1,
      sym_function_token,
    STATE(88), 1,
      sym_function_name_part,
    STATE(123), 1,
      sym_function_definition_statement,
    STATE(66), 6,
      sym__define_part,
      sym_table_part,
      sym_field_part,
      sym_on_part,
      sym_type_part,
      aux_sym_definition_statement_repeat1,
  [2628] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(383), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2646] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(268), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2664] = 6,
    ACTIONS(373), 1,
      sym_table_token,
    ACTIONS(375), 1,
      sym_field_token,
    ACTIONS(377), 1,
      sym_on_token,
    ACTIONS(379), 1,
      sym_type_token,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    STATE(67), 6,
      sym__define_part,
      sym_table_part,
      sym_field_part,
      sym_on_part,
      sym_type_part,
      aux_sym_definition_statement_repeat1,
  [2688] = 6,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      sym_table_token,
    ACTIONS(395), 1,
      sym_field_token,
    ACTIONS(398), 1,
      sym_on_token,
    ACTIONS(401), 1,
      sym_type_token,
    STATE(67), 6,
      sym__define_part,
      sym_table_part,
      sym_field_part,
      sym_on_part,
      sym_type_part,
      aux_sym_definition_statement_repeat1,
  [2712] = 1,
    ACTIONS(404), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_define_token,
  [2725] = 1,
    ACTIONS(406), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_define_token,
  [2738] = 1,
    ACTIONS(408), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
      sym_define_token,
  [2751] = 2,
    ACTIONS(410), 4,
      sym_identifier,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 6,
      anon_sym_DOLLAR,
      sym_string,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2766] = 5,
    ACTIONS(367), 1,
      anon_sym_array,
    ACTIONS(369), 1,
      anon_sym_optional,
    STATE(121), 1,
      sym_type_name,
    STATE(81), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(365), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [2786] = 5,
    ACTIONS(367), 1,
      anon_sym_array,
    ACTIONS(369), 1,
      anon_sym_optional,
    STATE(113), 1,
      sym_type_name,
    STATE(81), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(365), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [2806] = 3,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(416), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2822] = 5,
    ACTIONS(367), 1,
      anon_sym_array,
    ACTIONS(369), 1,
      anon_sym_optional,
    STATE(120), 1,
      sym_type_name,
    STATE(81), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(365), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [2842] = 5,
    ACTIONS(367), 1,
      anon_sym_array,
    ACTIONS(369), 1,
      anon_sym_optional,
    STATE(114), 1,
      sym_type_name,
    STATE(81), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(365), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [2862] = 3,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2878] = 3,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2894] = 1,
    ACTIONS(430), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [2906] = 3,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      sym_identifier,
    ACTIONS(436), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2922] = 1,
    ACTIONS(438), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [2934] = 1,
    ACTIONS(440), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [2946] = 1,
    ACTIONS(442), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2957] = 1,
    ACTIONS(444), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2968] = 1,
    ACTIONS(446), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2979] = 1,
    ACTIONS(448), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2990] = 1,
    ACTIONS(450), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [3001] = 7,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      anon_sym_COLON,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_function_arguments_part,
    STATE(104), 1,
      sym_function_return_type_part,
    STATE(134), 1,
      sym_function_body_part,
  [3023] = 3,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(464), 4,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3036] = 3,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(470), 4,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3049] = 3,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(476), 4,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3062] = 1,
    ACTIONS(478), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3070] = 5,
    ACTIONS(454), 1,
      anon_sym_COLON,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_function_return_type_part,
    STATE(124), 1,
      sym_function_body_part,
  [3086] = 2,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(482), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3096] = 1,
    ACTIONS(486), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3104] = 1,
    ACTIONS(488), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3112] = 1,
    ACTIONS(490), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3120] = 4,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_object_repeat1,
    STATE(119), 1,
      sym_object_entry,
  [3133] = 1,
    ACTIONS(497), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3140] = 4,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_function_param,
    STATE(127), 1,
      sym_variable,
  [3153] = 4,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_object_repeat1,
    STATE(115), 1,
      sym_object_entry,
  [3166] = 4,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_object_repeat1,
    STATE(116), 1,
      sym_object_entry,
  [3179] = 3,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    STATE(112), 1,
      sym_function_param,
    STATE(127), 1,
      sym_variable,
  [3189] = 3,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_function_body_part,
  [3199] = 3,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_function_arguments_part_repeat1,
  [3209] = 1,
    ACTIONS(511), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3215] = 1,
    ACTIONS(513), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3221] = 3,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_function_arguments_part_repeat1,
  [3231] = 3,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      sym_function_body_part,
  [3241] = 1,
    ACTIONS(519), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3247] = 3,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_function_arguments_part_repeat1,
  [3257] = 1,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3262] = 1,
    ACTIONS(526), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3267] = 1,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3272] = 2,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [3279] = 2,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
  [3286] = 1,
    ACTIONS(495), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [3291] = 1,
    ACTIONS(534), 1,
      anon_sym_LT,
  [3295] = 1,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [3299] = 1,
    ACTIONS(536), 1,
      anon_sym_GT,
  [3303] = 1,
    ACTIONS(538), 1,
      anon_sym_GT,
  [3307] = 1,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3311] = 1,
    ACTIONS(388), 1,
      anon_sym_SEMI,
  [3315] = 1,
    ACTIONS(517), 1,
      anon_sym_SEMI,
  [3319] = 1,
    ACTIONS(542), 1,
      anon_sym_COLON,
  [3323] = 1,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [3327] = 1,
    ACTIONS(546), 1,
      anon_sym_COLON,
  [3331] = 1,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [3335] = 1,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [3339] = 1,
    ACTIONS(552), 1,
      sym_identifier,
  [3343] = 1,
    ACTIONS(554), 1,
      sym_identifier,
  [3347] = 1,
    ACTIONS(556), 1,
      anon_sym_LT,
  [3351] = 1,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
  [3355] = 1,
    ACTIONS(480), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 119,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 229,
  [SMALL_STATE(7)] = 281,
  [SMALL_STATE(8)] = 333,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 431,
  [SMALL_STATE(11)] = 477,
  [SMALL_STATE(12)] = 523,
  [SMALL_STATE(13)] = 569,
  [SMALL_STATE(14)] = 615,
  [SMALL_STATE(15)] = 661,
  [SMALL_STATE(16)] = 707,
  [SMALL_STATE(17)] = 753,
  [SMALL_STATE(18)] = 799,
  [SMALL_STATE(19)] = 845,
  [SMALL_STATE(20)] = 891,
  [SMALL_STATE(21)] = 937,
  [SMALL_STATE(22)] = 983,
  [SMALL_STATE(23)] = 1029,
  [SMALL_STATE(24)] = 1062,
  [SMALL_STATE(25)] = 1093,
  [SMALL_STATE(26)] = 1139,
  [SMALL_STATE(27)] = 1169,
  [SMALL_STATE(28)] = 1221,
  [SMALL_STATE(29)] = 1267,
  [SMALL_STATE(30)] = 1307,
  [SMALL_STATE(31)] = 1347,
  [SMALL_STATE(32)] = 1377,
  [SMALL_STATE(33)] = 1413,
  [SMALL_STATE(34)] = 1449,
  [SMALL_STATE(35)] = 1481,
  [SMALL_STATE(36)] = 1511,
  [SMALL_STATE(37)] = 1543,
  [SMALL_STATE(38)] = 1583,
  [SMALL_STATE(39)] = 1613,
  [SMALL_STATE(40)] = 1643,
  [SMALL_STATE(41)] = 1673,
  [SMALL_STATE(42)] = 1713,
  [SMALL_STATE(43)] = 1763,
  [SMALL_STATE(44)] = 1793,
  [SMALL_STATE(45)] = 1823,
  [SMALL_STATE(46)] = 1853,
  [SMALL_STATE(47)] = 1883,
  [SMALL_STATE(48)] = 1940,
  [SMALL_STATE(49)] = 1992,
  [SMALL_STATE(50)] = 2037,
  [SMALL_STATE(51)] = 2082,
  [SMALL_STATE(52)] = 2127,
  [SMALL_STATE(53)] = 2172,
  [SMALL_STATE(54)] = 2217,
  [SMALL_STATE(55)] = 2267,
  [SMALL_STATE(56)] = 2317,
  [SMALL_STATE(57)] = 2353,
  [SMALL_STATE(58)] = 2389,
  [SMALL_STATE(59)] = 2435,
  [SMALL_STATE(60)] = 2479,
  [SMALL_STATE(61)] = 2525,
  [SMALL_STATE(62)] = 2552,
  [SMALL_STATE(63)] = 2595,
  [SMALL_STATE(64)] = 2628,
  [SMALL_STATE(65)] = 2646,
  [SMALL_STATE(66)] = 2664,
  [SMALL_STATE(67)] = 2688,
  [SMALL_STATE(68)] = 2712,
  [SMALL_STATE(69)] = 2725,
  [SMALL_STATE(70)] = 2738,
  [SMALL_STATE(71)] = 2751,
  [SMALL_STATE(72)] = 2766,
  [SMALL_STATE(73)] = 2786,
  [SMALL_STATE(74)] = 2806,
  [SMALL_STATE(75)] = 2822,
  [SMALL_STATE(76)] = 2842,
  [SMALL_STATE(77)] = 2862,
  [SMALL_STATE(78)] = 2878,
  [SMALL_STATE(79)] = 2894,
  [SMALL_STATE(80)] = 2906,
  [SMALL_STATE(81)] = 2922,
  [SMALL_STATE(82)] = 2934,
  [SMALL_STATE(83)] = 2946,
  [SMALL_STATE(84)] = 2957,
  [SMALL_STATE(85)] = 2968,
  [SMALL_STATE(86)] = 2979,
  [SMALL_STATE(87)] = 2990,
  [SMALL_STATE(88)] = 3001,
  [SMALL_STATE(89)] = 3023,
  [SMALL_STATE(90)] = 3036,
  [SMALL_STATE(91)] = 3049,
  [SMALL_STATE(92)] = 3062,
  [SMALL_STATE(93)] = 3070,
  [SMALL_STATE(94)] = 3086,
  [SMALL_STATE(95)] = 3096,
  [SMALL_STATE(96)] = 3104,
  [SMALL_STATE(97)] = 3112,
  [SMALL_STATE(98)] = 3120,
  [SMALL_STATE(99)] = 3133,
  [SMALL_STATE(100)] = 3140,
  [SMALL_STATE(101)] = 3153,
  [SMALL_STATE(102)] = 3166,
  [SMALL_STATE(103)] = 3179,
  [SMALL_STATE(104)] = 3189,
  [SMALL_STATE(105)] = 3199,
  [SMALL_STATE(106)] = 3209,
  [SMALL_STATE(107)] = 3215,
  [SMALL_STATE(108)] = 3221,
  [SMALL_STATE(109)] = 3231,
  [SMALL_STATE(110)] = 3241,
  [SMALL_STATE(111)] = 3247,
  [SMALL_STATE(112)] = 3257,
  [SMALL_STATE(113)] = 3262,
  [SMALL_STATE(114)] = 3267,
  [SMALL_STATE(115)] = 3272,
  [SMALL_STATE(116)] = 3279,
  [SMALL_STATE(117)] = 3286,
  [SMALL_STATE(118)] = 3291,
  [SMALL_STATE(119)] = 3295,
  [SMALL_STATE(120)] = 3299,
  [SMALL_STATE(121)] = 3303,
  [SMALL_STATE(122)] = 3307,
  [SMALL_STATE(123)] = 3311,
  [SMALL_STATE(124)] = 3315,
  [SMALL_STATE(125)] = 3319,
  [SMALL_STATE(126)] = 3323,
  [SMALL_STATE(127)] = 3327,
  [SMALL_STATE(128)] = 3331,
  [SMALL_STATE(129)] = 3335,
  [SMALL_STATE(130)] = 3339,
  [SMALL_STATE(131)] = 3343,
  [SMALL_STATE(132)] = 3347,
  [SMALL_STATE(133)] = 3351,
  [SMALL_STATE(134)] = 3355,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_part, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_part, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_part, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(23),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(130),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(39),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(101),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_operation, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_operation, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_operation, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_operation, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_operation, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operation, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operation, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_operation, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_operation, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplication_operation, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplication_operation, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division_operation, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division_operation, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_access, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_access, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_operation, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_operation, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_operation, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(80),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(78),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(77),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(74),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(3),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(4),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(63),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(80),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(78),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(77),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(74),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(3),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_entry, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2), SHIFT_REPEAT(20),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(89),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(90),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(91),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(61),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_statement, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_crud_statement, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_part, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_part, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_part, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_part, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_part, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_part, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_part, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_part, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_part, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_part, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_part, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name_part, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_part, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_part, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(125),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name_part, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments_part, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments_part, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments_part, 4),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_part_repeat1, 2), SHIFT_REPEAT(103),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_part_repeat1, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_param, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type_part, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_part, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_part, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [558] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surql(void) {
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
