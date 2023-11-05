#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym__simple_name = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_DOLLAR = 4,
  sym_string = 5,
  sym_integer = 6,
  sym_float = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_COLON = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_DOT = 18,
  anon_sym_SLASH = 19,
  anon_sym_STAR = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_EQ = 28,
  sym_create_token = 29,
  sym_update_token = 30,
  sym_delete_token = 31,
  sym_select_token = 32,
  sym_from_token = 33,
  sym_where_token = 34,
  sym_content_token = 35,
  sym_define_token = 36,
  sym_table_token = 37,
  sym_field_token = 38,
  sym_on_token = 39,
  sym_type_token = 40,
  sym_function_token = 41,
  sym_and_token = 42,
  sym_or_token = 43,
  anon_sym_string = 44,
  anon_sym_integer = 45,
  anon_sym_float = 46,
  anon_sym_boolean = 47,
  anon_sym_array = 48,
  anon_sym_optional = 49,
  sym_source_file = 50,
  sym__statement = 51,
  sym_crud_statement = 52,
  sym__statement_parts = 53,
  sym_identifier = 54,
  sym_function_name = 55,
  sym_variable = 56,
  sym_boolean = 57,
  sym_array = 58,
  sym_object_entry = 59,
  sym_object = 60,
  sym_varargs = 61,
  sym_function_call = 62,
  sym__value = 63,
  sym__operation = 64,
  sym_property_access = 65,
  sym_division_operation = 66,
  sym_multiplication_operation = 67,
  sym_addition_operation = 68,
  sym_subtraction_operation = 69,
  sym_less_than_operation = 70,
  sym_less_than_or_equal_to_operation = 71,
  sym_greater_than_operation = 72,
  sym_greater_than_or_equal_to_operation = 73,
  sym_inequality_operation = 74,
  sym_equality_operation = 75,
  sym_or_operation = 76,
  sym_and_operation = 77,
  sym_delete_part = 78,
  sym_create_part = 79,
  sym_content_part = 80,
  sym_select_part = 81,
  sym_from_part = 82,
  sym_where_part = 83,
  sym_update_part = 84,
  sym_definition_statement = 85,
  sym__define_part = 86,
  sym_type_name = 87,
  sym_array_type = 88,
  sym_optional_type = 89,
  sym_table_part = 90,
  sym_field_part = 91,
  sym_on_part = 92,
  sym_type_part = 93,
  sym_function_name_part = 94,
  sym_function_param = 95,
  sym_function_arguments_part = 96,
  sym_function_return_type_part = 97,
  sym_function_body_part = 98,
  sym_function_definition_statement = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_crud_statement_repeat1 = 101,
  aux_sym_function_name_repeat1 = 102,
  aux_sym_array_repeat1 = 103,
  aux_sym_object_repeat1 = 104,
  aux_sym_varargs_repeat1 = 105,
  aux_sym_definition_statement_repeat1 = 106,
  aux_sym_function_arguments_part_repeat1 = 107,
  aux_sym_function_body_part_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym__simple_name] = "_simple_name",
  [anon_sym_COLON_COLON] = "::",
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
  [sym_identifier] = "identifier",
  [sym_function_name] = "function_name",
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
  [aux_sym_function_name_repeat1] = "function_name_repeat1",
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
  [sym__simple_name] = sym__simple_name,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
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
  [sym_identifier] = sym_identifier,
  [sym_function_name] = sym_function_name,
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
  [aux_sym_function_name_repeat1] = aux_sym_function_name_repeat1,
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
  [sym__simple_name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
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
  [aux_sym_function_name_repeat1] = {
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
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == ']') ADVANCE(160);
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
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(151);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
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
      if (lookahead == '=') ADVANCE(176);
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
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(195);
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
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(180);
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
      if (lookahead == 'g') ADVANCE(204);
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
      if (lookahead == 'l') ADVANCE(209);
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
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(201);
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
      if (lookahead == 'r') ADVANCE(205);
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
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(190);
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
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'b') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'c') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'd') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'h') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'm') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__simple_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_create_token);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_create_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_update_token);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_update_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_delete_token);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_delete_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_select_token);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_select_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_from_token);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_from_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_where_token);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_where_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_content_token);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_content_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_define_token);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_table_token);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_table_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_field_token);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_field_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_on_token);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_on_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_type_token);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_type_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_function_token);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_and_token);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_or_token);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 209:
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
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
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
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
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
  [0] = 12,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_varargs,
    STATE(131), 1,
      sym_function_name,
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
    STATE(48), 21,
      sym_identifier,
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
  [65] = 11,
    ACTIONS(23), 1,
      sym__simple_name,
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
    STATE(131), 1,
      sym_function_name,
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
    STATE(56), 21,
      sym_identifier,
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
  [127] = 11,
    ACTIONS(23), 1,
      sym__simple_name,
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
    STATE(131), 1,
      sym_function_name,
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
    STATE(55), 21,
      sym_identifier,
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
  [189] = 11,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      sym_integer,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_array_repeat1,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 2,
      sym_string,
      sym_float,
    STATE(59), 21,
      sym_identifier,
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
  [245] = 11,
    ACTIONS(61), 1,
      sym__simple_name,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      sym_integer,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_array_repeat1,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(67), 2,
      sym_string,
      sym_float,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 21,
      sym_identifier,
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
  [301] = 11,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_function_name,
    STATE(136), 1,
      sym_varargs,
    ACTIONS(27), 2,
      sym_string,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 21,
      sym_identifier,
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
  [357] = 11,
    ACTIONS(23), 1,
      sym__simple_name,
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
    STATE(5), 1,
      aux_sym_array_repeat1,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 2,
      sym_string,
      sym_float,
    STATE(60), 21,
      sym_identifier,
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
  [413] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 2,
      sym_string,
      sym_float,
    STATE(33), 21,
      sym_identifier,
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
  [463] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 2,
      sym_string,
      sym_float,
    STATE(39), 21,
      sym_identifier,
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
  [513] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      sym_string,
      sym_float,
    STATE(26), 21,
      sym_identifier,
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
  [563] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 2,
      sym_string,
      sym_float,
    STATE(34), 21,
      sym_identifier,
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
  [613] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      sym_string,
      sym_float,
    STATE(32), 21,
      sym_identifier,
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
  [663] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      sym_string,
      sym_float,
    STATE(28), 21,
      sym_identifier,
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
  [713] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      sym_string,
      sym_float,
    STATE(27), 21,
      sym_identifier,
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
  [763] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      sym_string,
      sym_float,
    STATE(36), 21,
      sym_identifier,
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
  [813] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      sym_string,
      sym_float,
    STATE(29), 21,
      sym_identifier,
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
  [863] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      sym_string,
      sym_float,
    STATE(61), 21,
      sym_identifier,
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
  [913] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      sym_string,
      sym_float,
    STATE(38), 21,
      sym_identifier,
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
  [963] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(136), 2,
      sym_string,
      sym_float,
    STATE(49), 21,
      sym_identifier,
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
  [1013] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(140), 2,
      sym_string,
      sym_float,
    STATE(44), 21,
      sym_identifier,
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
  [1063] = 9,
    ACTIONS(23), 1,
      sym__simple_name,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      sym_integer,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 2,
      sym_string,
      sym_float,
    STATE(45), 21,
      sym_identifier,
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
  [1113] = 2,
    ACTIONS(150), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(148), 28,
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
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
      sym_and_token,
      sym_or_token,
  [1148] = 5,
    ACTIONS(152), 1,
      anon_sym_COLON_COLON,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      aux_sym_function_name_repeat1,
    ACTIONS(150), 2,
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
  [1187] = 2,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(156), 24,
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
  [1218] = 10,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(160), 16,
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
  [1264] = 5,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 20,
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
  [1300] = 7,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 18,
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
  [1340] = 3,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 22,
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
  [1372] = 2,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 23,
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
  [1402] = 2,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 23,
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
  [1432] = 7,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(202), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 18,
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
  [1472] = 7,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 18,
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
  [1512] = 7,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(208), 18,
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
  [1552] = 2,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(212), 23,
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
  [1582] = 5,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 20,
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
  [1618] = 2,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 23,
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
  [1648] = 3,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 22,
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
  [1680] = 10,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(228), 16,
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
  [1726] = 2,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(230), 23,
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
  [1756] = 2,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 23,
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
  [1786] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 23,
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
  [1816] = 2,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 23,
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
  [1846] = 13,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(246), 13,
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
  [1898] = 12,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(254), 14,
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
  [1948] = 2,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 23,
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
  [1978] = 2,
    ACTIONS(262), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 23,
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
  [2008] = 16,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym_and_token,
    STATE(67), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(264), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2065] = 14,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(268), 1,
      sym_and_token,
    ACTIONS(270), 10,
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
  [2117] = 11,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      sym_create_token,
    ACTIONS(277), 1,
      sym_update_token,
    ACTIONS(280), 1,
      sym_delete_token,
    ACTIONS(283), 1,
      sym_select_token,
    ACTIONS(286), 1,
      sym_from_token,
    ACTIONS(289), 1,
      sym_where_token,
    ACTIONS(292), 1,
      sym_content_token,
    ACTIONS(295), 1,
      sym_define_token,
    STATE(50), 4,
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
  [2162] = 11,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      sym_create_token,
    ACTIONS(303), 1,
      sym_update_token,
    ACTIONS(306), 1,
      sym_delete_token,
    ACTIONS(309), 1,
      sym_select_token,
    ACTIONS(312), 1,
      sym_from_token,
    ACTIONS(315), 1,
      sym_where_token,
    ACTIONS(318), 1,
      sym_content_token,
    ACTIONS(321), 1,
      sym_define_token,
    STATE(51), 4,
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
  [2207] = 11,
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
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(54), 4,
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
  [2252] = 11,
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
    STATE(50), 4,
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
  [2297] = 11,
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
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(51), 4,
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
  [2342] = 14,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(268), 1,
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
  [2392] = 14,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(268), 1,
      sym_and_token,
    ACTIONS(332), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2442] = 9,
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
    ACTIONS(334), 1,
      anon_sym_SEMI,
    STATE(58), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2478] = 9,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      sym_create_token,
    ACTIONS(341), 1,
      sym_update_token,
    ACTIONS(344), 1,
      sym_delete_token,
    ACTIONS(347), 1,
      sym_select_token,
    ACTIONS(350), 1,
      sym_from_token,
    ACTIONS(353), 1,
      sym_where_token,
    ACTIONS(356), 1,
      sym_content_token,
    STATE(58), 9,
      sym__statement_parts,
      sym_delete_part,
      sym_create_part,
      sym_content_part,
      sym_select_part,
      sym_from_part,
      sym_where_part,
      sym_update_part,
      aux_sym_crud_statement_repeat1,
  [2514] = 15,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(268), 1,
      sym_and_token,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
  [2560] = 15,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(268), 1,
      sym_and_token,
    ACTIONS(359), 1,
      anon_sym_COMMA,
  [2606] = 14,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(268), 1,
      sym_and_token,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2650] = 9,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      sym_table_token,
    ACTIONS(369), 1,
      sym_field_token,
    ACTIONS(371), 1,
      sym_on_token,
    ACTIONS(373), 1,
      sym_type_token,
    ACTIONS(375), 1,
      sym_function_token,
    STATE(89), 1,
      sym_function_name_part,
    STATE(137), 1,
      sym_function_definition_statement,
    STATE(68), 6,
      sym__define_part,
      sym_table_part,
      sym_field_part,
      sym_on_part,
      sym_type_part,
      aux_sym_definition_statement_repeat1,
  [2683] = 14,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_LT_EQ,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_GT_EQ,
    ACTIONS(248), 1,
      anon_sym_BANG_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      sym_or_token,
    ACTIONS(268), 1,
      sym_and_token,
    ACTIONS(359), 1,
      anon_sym_COMMA,
  [2726] = 6,
    ACTIONS(381), 1,
      anon_sym_array,
    ACTIONS(383), 1,
      anon_sym_optional,
    STATE(102), 1,
      sym_type_name,
    STATE(78), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(379), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
    ACTIONS(377), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [2753] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(270), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2771] = 6,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      sym_table_token,
    ACTIONS(393), 1,
      sym_field_token,
    ACTIONS(396), 1,
      sym_on_token,
    ACTIONS(399), 1,
      sym_type_token,
    STATE(66), 6,
      sym__define_part,
      sym_table_part,
      sym_field_part,
      sym_on_part,
      sym_type_part,
      aux_sym_definition_statement_repeat1,
  [2795] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(402), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2813] = 6,
    ACTIONS(367), 1,
      sym_table_token,
    ACTIONS(369), 1,
      sym_field_token,
    ACTIONS(371), 1,
      sym_on_token,
    ACTIONS(373), 1,
      sym_type_token,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    STATE(66), 6,
      sym__define_part,
      sym_table_part,
      sym_field_part,
      sym_on_part,
      sym_type_part,
      aux_sym_definition_statement_repeat1,
  [2837] = 4,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      sym__simple_name,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(410), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2856] = 4,
    ACTIONS(408), 1,
      sym__simple_name,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(414), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2875] = 1,
    ACTIONS(416), 10,
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
  [2888] = 1,
    ACTIONS(418), 10,
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
  [2901] = 2,
    ACTIONS(420), 4,
      sym__simple_name,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 6,
      anon_sym_DOLLAR,
      sym_string,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2916] = 4,
    ACTIONS(408), 1,
      sym__simple_name,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(424), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2935] = 4,
    ACTIONS(408), 1,
      sym__simple_name,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(428), 7,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [2954] = 1,
    ACTIONS(430), 10,
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
  [2967] = 1,
    ACTIONS(432), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [2979] = 1,
    ACTIONS(434), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [2991] = 5,
    ACTIONS(381), 1,
      anon_sym_array,
    ACTIONS(383), 1,
      anon_sym_optional,
    STATE(119), 1,
      sym_type_name,
    STATE(78), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(379), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [3011] = 1,
    ACTIONS(436), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3023] = 5,
    ACTIONS(381), 1,
      anon_sym_array,
    ACTIONS(383), 1,
      anon_sym_optional,
    STATE(123), 1,
      sym_type_name,
    STATE(78), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(379), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [3043] = 5,
    ACTIONS(381), 1,
      anon_sym_array,
    ACTIONS(383), 1,
      anon_sym_optional,
    STATE(127), 1,
      sym_type_name,
    STATE(78), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(379), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [3063] = 5,
    ACTIONS(381), 1,
      anon_sym_array,
    ACTIONS(383), 1,
      anon_sym_optional,
    STATE(128), 1,
      sym_type_name,
    STATE(78), 2,
      sym_array_type,
      sym_optional_type,
    ACTIONS(379), 4,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_boolean,
  [3083] = 1,
    ACTIONS(438), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [3094] = 1,
    ACTIONS(440), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [3105] = 1,
    ACTIONS(442), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [3116] = 1,
    ACTIONS(444), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [3127] = 1,
    ACTIONS(446), 8,
      anon_sym_SEMI,
      sym_create_token,
      sym_update_token,
      sym_delete_token,
      sym_select_token,
      sym_from_token,
      sym_where_token,
      sym_content_token,
  [3138] = 7,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_COLON,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_function_arguments_part,
    STATE(109), 1,
      sym_function_return_type_part,
    STATE(126), 1,
      sym_function_body_part,
  [3160] = 4,
    ACTIONS(408), 1,
      sym__simple_name,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(458), 4,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3176] = 4,
    ACTIONS(408), 1,
      sym__simple_name,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_identifier,
    ACTIONS(462), 4,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3192] = 4,
    ACTIONS(408), 1,
      sym__simple_name,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(466), 4,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3208] = 4,
    ACTIONS(470), 1,
      anon_sym_COLON_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON,
    STATE(93), 1,
      aux_sym_function_name_repeat1,
    ACTIONS(468), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3223] = 3,
    ACTIONS(477), 1,
      sym__simple_name,
    STATE(106), 1,
      sym_function_name,
    ACTIONS(475), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3236] = 4,
    ACTIONS(152), 1,
      anon_sym_COLON_COLON,
    ACTIONS(479), 1,
      anon_sym_COLON,
    STATE(96), 1,
      aux_sym_function_name_repeat1,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3251] = 4,
    ACTIONS(152), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      anon_sym_COLON,
    STATE(93), 1,
      aux_sym_function_name_repeat1,
    ACTIONS(481), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3266] = 1,
    ACTIONS(485), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3274] = 2,
    ACTIONS(473), 1,
      anon_sym_COLON,
    ACTIONS(468), 4,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3284] = 5,
    ACTIONS(487), 1,
      sym__simple_name,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_object_repeat1,
    STATE(118), 1,
      sym_object_entry,
    STATE(130), 1,
      sym_identifier,
  [3300] = 5,
    ACTIONS(491), 1,
      sym__simple_name,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_object_repeat1,
    STATE(130), 1,
      sym_identifier,
    STATE(132), 1,
      sym_object_entry,
  [3316] = 5,
    ACTIONS(450), 1,
      anon_sym_COLON,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_function_return_type_part,
    STATE(139), 1,
      sym_function_body_part,
  [3332] = 1,
    ACTIONS(498), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3340] = 5,
    ACTIONS(487), 1,
      sym__simple_name,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_object_repeat1,
    STATE(120), 1,
      sym_object_entry,
    STATE(130), 1,
      sym_identifier,
  [3356] = 1,
    ACTIONS(502), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3364] = 1,
    ACTIONS(504), 5,
      anon_sym_SEMI,
      sym_table_token,
      sym_field_token,
      sym_on_token,
      sym_type_token,
  [3372] = 1,
    ACTIONS(506), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [3379] = 4,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_function_param,
    STATE(125), 1,
      sym_variable,
  [3392] = 1,
    ACTIONS(510), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3398] = 3,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      sym_function_body_part,
  [3408] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_function_arguments_part_repeat1,
  [3418] = 1,
    ACTIONS(517), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3424] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_function_arguments_part_repeat1,
  [3434] = 3,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    ACTIONS(523), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_function_body_part,
  [3444] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_function_arguments_part_repeat1,
  [3454] = 1,
    ACTIONS(527), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3460] = 3,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    STATE(122), 1,
      sym_function_param,
    STATE(125), 1,
      sym_variable,
  [3470] = 2,
    ACTIONS(487), 1,
      sym__simple_name,
    STATE(41), 1,
      sym_identifier,
  [3477] = 2,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      anon_sym_COMMA,
  [3484] = 1,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3489] = 2,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
  [3496] = 1,
    ACTIONS(494), 2,
      sym__simple_name,
      anon_sym_RBRACE,
  [3501] = 1,
    ACTIONS(515), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3506] = 1,
    ACTIONS(535), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3511] = 2,
    ACTIONS(487), 1,
      sym__simple_name,
    STATE(25), 1,
      sym_identifier,
  [3518] = 1,
    ACTIONS(537), 1,
      anon_sym_COLON,
  [3522] = 1,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [3526] = 1,
    ACTIONS(539), 1,
      anon_sym_GT,
  [3530] = 1,
    ACTIONS(541), 1,
      anon_sym_GT,
  [3534] = 1,
    ACTIONS(543), 1,
      anon_sym_SEMI,
  [3538] = 1,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [3542] = 1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
  [3546] = 1,
    ACTIONS(529), 1,
      anon_sym_COMMA,
  [3550] = 1,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
  [3554] = 1,
    ACTIONS(551), 1,
      anon_sym_LT,
  [3558] = 1,
    ACTIONS(553), 1,
      anon_sym_SEMI,
  [3562] = 1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [3566] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [3570] = 1,
    ACTIONS(557), 1,
      sym__simple_name,
  [3574] = 1,
    ACTIONS(523), 1,
      anon_sym_SEMI,
  [3578] = 1,
    ACTIONS(559), 1,
      anon_sym_LT,
  [3582] = 1,
    ACTIONS(561), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 127,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 245,
  [SMALL_STATE(7)] = 301,
  [SMALL_STATE(8)] = 357,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 463,
  [SMALL_STATE(11)] = 513,
  [SMALL_STATE(12)] = 563,
  [SMALL_STATE(13)] = 613,
  [SMALL_STATE(14)] = 663,
  [SMALL_STATE(15)] = 713,
  [SMALL_STATE(16)] = 763,
  [SMALL_STATE(17)] = 813,
  [SMALL_STATE(18)] = 863,
  [SMALL_STATE(19)] = 913,
  [SMALL_STATE(20)] = 963,
  [SMALL_STATE(21)] = 1013,
  [SMALL_STATE(22)] = 1063,
  [SMALL_STATE(23)] = 1113,
  [SMALL_STATE(24)] = 1148,
  [SMALL_STATE(25)] = 1187,
  [SMALL_STATE(26)] = 1218,
  [SMALL_STATE(27)] = 1264,
  [SMALL_STATE(28)] = 1300,
  [SMALL_STATE(29)] = 1340,
  [SMALL_STATE(30)] = 1372,
  [SMALL_STATE(31)] = 1402,
  [SMALL_STATE(32)] = 1432,
  [SMALL_STATE(33)] = 1472,
  [SMALL_STATE(34)] = 1512,
  [SMALL_STATE(35)] = 1552,
  [SMALL_STATE(36)] = 1582,
  [SMALL_STATE(37)] = 1618,
  [SMALL_STATE(38)] = 1648,
  [SMALL_STATE(39)] = 1680,
  [SMALL_STATE(40)] = 1726,
  [SMALL_STATE(41)] = 1756,
  [SMALL_STATE(42)] = 1786,
  [SMALL_STATE(43)] = 1816,
  [SMALL_STATE(44)] = 1846,
  [SMALL_STATE(45)] = 1898,
  [SMALL_STATE(46)] = 1948,
  [SMALL_STATE(47)] = 1978,
  [SMALL_STATE(48)] = 2008,
  [SMALL_STATE(49)] = 2065,
  [SMALL_STATE(50)] = 2117,
  [SMALL_STATE(51)] = 2162,
  [SMALL_STATE(52)] = 2207,
  [SMALL_STATE(53)] = 2252,
  [SMALL_STATE(54)] = 2297,
  [SMALL_STATE(55)] = 2342,
  [SMALL_STATE(56)] = 2392,
  [SMALL_STATE(57)] = 2442,
  [SMALL_STATE(58)] = 2478,
  [SMALL_STATE(59)] = 2514,
  [SMALL_STATE(60)] = 2560,
  [SMALL_STATE(61)] = 2606,
  [SMALL_STATE(62)] = 2650,
  [SMALL_STATE(63)] = 2683,
  [SMALL_STATE(64)] = 2726,
  [SMALL_STATE(65)] = 2753,
  [SMALL_STATE(66)] = 2771,
  [SMALL_STATE(67)] = 2795,
  [SMALL_STATE(68)] = 2813,
  [SMALL_STATE(69)] = 2837,
  [SMALL_STATE(70)] = 2856,
  [SMALL_STATE(71)] = 2875,
  [SMALL_STATE(72)] = 2888,
  [SMALL_STATE(73)] = 2901,
  [SMALL_STATE(74)] = 2916,
  [SMALL_STATE(75)] = 2935,
  [SMALL_STATE(76)] = 2954,
  [SMALL_STATE(77)] = 2967,
  [SMALL_STATE(78)] = 2979,
  [SMALL_STATE(79)] = 2991,
  [SMALL_STATE(80)] = 3011,
  [SMALL_STATE(81)] = 3023,
  [SMALL_STATE(82)] = 3043,
  [SMALL_STATE(83)] = 3063,
  [SMALL_STATE(84)] = 3083,
  [SMALL_STATE(85)] = 3094,
  [SMALL_STATE(86)] = 3105,
  [SMALL_STATE(87)] = 3116,
  [SMALL_STATE(88)] = 3127,
  [SMALL_STATE(89)] = 3138,
  [SMALL_STATE(90)] = 3160,
  [SMALL_STATE(91)] = 3176,
  [SMALL_STATE(92)] = 3192,
  [SMALL_STATE(93)] = 3208,
  [SMALL_STATE(94)] = 3223,
  [SMALL_STATE(95)] = 3236,
  [SMALL_STATE(96)] = 3251,
  [SMALL_STATE(97)] = 3266,
  [SMALL_STATE(98)] = 3274,
  [SMALL_STATE(99)] = 3284,
  [SMALL_STATE(100)] = 3300,
  [SMALL_STATE(101)] = 3316,
  [SMALL_STATE(102)] = 3332,
  [SMALL_STATE(103)] = 3340,
  [SMALL_STATE(104)] = 3356,
  [SMALL_STATE(105)] = 3364,
  [SMALL_STATE(106)] = 3372,
  [SMALL_STATE(107)] = 3379,
  [SMALL_STATE(108)] = 3392,
  [SMALL_STATE(109)] = 3398,
  [SMALL_STATE(110)] = 3408,
  [SMALL_STATE(111)] = 3418,
  [SMALL_STATE(112)] = 3424,
  [SMALL_STATE(113)] = 3434,
  [SMALL_STATE(114)] = 3444,
  [SMALL_STATE(115)] = 3454,
  [SMALL_STATE(116)] = 3460,
  [SMALL_STATE(117)] = 3470,
  [SMALL_STATE(118)] = 3477,
  [SMALL_STATE(119)] = 3484,
  [SMALL_STATE(120)] = 3489,
  [SMALL_STATE(121)] = 3496,
  [SMALL_STATE(122)] = 3501,
  [SMALL_STATE(123)] = 3506,
  [SMALL_STATE(124)] = 3511,
  [SMALL_STATE(125)] = 3518,
  [SMALL_STATE(126)] = 3522,
  [SMALL_STATE(127)] = 3526,
  [SMALL_STATE(128)] = 3530,
  [SMALL_STATE(129)] = 3534,
  [SMALL_STATE(130)] = 3538,
  [SMALL_STATE(131)] = 3542,
  [SMALL_STATE(132)] = 3546,
  [SMALL_STATE(133)] = 3550,
  [SMALL_STATE(134)] = 3554,
  [SMALL_STATE(135)] = 3558,
  [SMALL_STATE(136)] = 3562,
  [SMALL_STATE(137)] = 3566,
  [SMALL_STATE(138)] = 3570,
  [SMALL_STATE(139)] = 3574,
  [SMALL_STATE(140)] = 3578,
  [SMALL_STATE(141)] = 3582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_part, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_part, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_part, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(24),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(124),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(63),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(63),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(42),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(99),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_operation, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operation, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operation, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_operation, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_operation, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplication_operation, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplication_operation, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_operation, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_operation, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_operation, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_operation, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division_operation, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division_operation, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_operation, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_access, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_access, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_operation, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_operation, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(69),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(75),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(74),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(70),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(3),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(4),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_part_repeat1, 2), SHIFT_REPEAT(62),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(69),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(75),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(74),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(70),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(3),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_crud_statement_repeat1, 2), SHIFT_REPEAT(4),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_entry, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2), SHIFT_REPEAT(20),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(90),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(91),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(92),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_statement_repeat1, 2), SHIFT_REPEAT(64),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_part, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_part, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_statement, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_statement, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_part, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_part, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_crud_statement, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_part, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_part, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_part, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_part, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_part, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_part, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_name_repeat1, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_name_repeat1, 2), SHIFT_REPEAT(138),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_name_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name_part, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_part, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(23),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_part, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_part, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_part, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name_part, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments_part, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_part_repeat1, 2), SHIFT_REPEAT(116),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_part_repeat1, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments_part, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments_part, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type_part, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_param, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_part, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [549] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_statement, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_part, 2),
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
