#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_let = 2,
  sym_select = 3,
  sym_from = 4,
  sym_where = 5,
  sym_create = 6,
  sym_update = 7,
  sym_delete = 8,
  sym_content = 9,
  sym_define = 10,
  sym_function_token = 11,
  anon_sym_EQ = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  sym_number = 17,
  sym_string = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  anon_sym_null = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  anon_sym_COLON = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym__simple_name = 28,
  anon_sym_COLON_COLON = 29,
  anon_sym_DOLLAR = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_string = 33,
  anon_sym_number = 34,
  anon_sym_boolean = 35,
  anon_sym_array = 36,
  anon_sym_object = 37,
  sym_type_token = 38,
  sym_table = 39,
  anon_sym_on = 40,
  sym_source_file = 41,
  sym_semi = 42,
  sym_statement = 43,
  sym__statement_start = 44,
  sym__statement_param = 45,
  sym_select_part = 46,
  sym_from_part = 47,
  sym_where_part = 48,
  sym_create_part = 49,
  sym_update_part = 50,
  sym_delete_part = 51,
  sym_content_part = 52,
  sym_value = 53,
  sym_equal = 54,
  sym_sum = 55,
  sym_subtract = 56,
  sym_product = 57,
  sym_divide = 58,
  sym_operation = 59,
  sym_boolean = 60,
  sym_null = 61,
  sym_array = 62,
  sym_object_entry = 63,
  sym_object = 64,
  sym_table_name = 65,
  sym_column_name = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_statement_repeat1 = 68,
  aux_sym_array_repeat1 = 69,
  aux_sym_object_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_let] = "let",
  [sym_select] = "select",
  [sym_from] = "from",
  [sym_where] = "where",
  [sym_create] = "create",
  [sym_update] = "update",
  [sym_delete] = "delete",
  [sym_content] = "content",
  [sym_define] = "define",
  [sym_function_token] = "function_token",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__simple_name] = "_simple_name",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_string] = "string",
  [anon_sym_number] = "number",
  [anon_sym_boolean] = "boolean",
  [anon_sym_array] = "array",
  [anon_sym_object] = "object",
  [sym_type_token] = "type_token",
  [sym_table] = "table",
  [anon_sym_on] = "on",
  [sym_source_file] = "source_file",
  [sym_semi] = "semi",
  [sym_statement] = "statement",
  [sym__statement_start] = "_statement_start",
  [sym__statement_param] = "_statement_param",
  [sym_select_part] = "select_part",
  [sym_from_part] = "from_part",
  [sym_where_part] = "where_part",
  [sym_create_part] = "create_part",
  [sym_update_part] = "update_part",
  [sym_delete_part] = "delete_part",
  [sym_content_part] = "content_part",
  [sym_value] = "value",
  [sym_equal] = "equal",
  [sym_sum] = "sum",
  [sym_subtract] = "subtract",
  [sym_product] = "product",
  [sym_divide] = "divide",
  [sym_operation] = "operation",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [sym_array] = "array",
  [sym_object_entry] = "object_entry",
  [sym_object] = "object",
  [sym_table_name] = "table_name",
  [sym_column_name] = "column_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_let] = sym_let,
  [sym_select] = sym_select,
  [sym_from] = sym_from,
  [sym_where] = sym_where,
  [sym_create] = sym_create,
  [sym_update] = sym_update,
  [sym_delete] = sym_delete,
  [sym_content] = sym_content,
  [sym_define] = sym_define,
  [sym_function_token] = sym_function_token,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__simple_name] = sym__simple_name,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_object] = anon_sym_object,
  [sym_type_token] = sym_type_token,
  [sym_table] = sym_table,
  [anon_sym_on] = anon_sym_on,
  [sym_source_file] = sym_source_file,
  [sym_semi] = sym_semi,
  [sym_statement] = sym_statement,
  [sym__statement_start] = sym__statement_start,
  [sym__statement_param] = sym__statement_param,
  [sym_select_part] = sym_select_part,
  [sym_from_part] = sym_from_part,
  [sym_where_part] = sym_where_part,
  [sym_create_part] = sym_create_part,
  [sym_update_part] = sym_update_part,
  [sym_delete_part] = sym_delete_part,
  [sym_content_part] = sym_content_part,
  [sym_value] = sym_value,
  [sym_equal] = sym_equal,
  [sym_sum] = sym_sum,
  [sym_subtract] = sym_subtract,
  [sym_product] = sym_product,
  [sym_divide] = sym_divide,
  [sym_operation] = sym_operation,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [sym_array] = sym_array,
  [sym_object_entry] = sym_object_entry,
  [sym_object] = sym_object,
  [sym_table_name] = sym_table_name,
  [sym_column_name] = sym_column_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
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
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym_create] = {
    .visible = true,
    .named = true,
  },
  [sym_update] = {
    .visible = true,
    .named = true,
  },
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_function_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [anon_sym_null] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [sym_type_token] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_start] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_param] = {
    .visible = false,
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
  [sym_create_part] = {
    .visible = true,
    .named = true,
  },
  [sym_update_part] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_part] = {
    .visible = true,
    .named = true,
  },
  [sym_content_part] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_subtract] = {
    .visible = true,
    .named = true,
  },
  [sym_product] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
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
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 11,
  [16] = 16,
  [17] = 10,
  [18] = 16,
  [19] = 19,
  [20] = 19,
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
  [39] = 23,
  [40] = 29,
  [41] = 32,
  [42] = 34,
  [43] = 30,
  [44] = 33,
  [45] = 31,
  [46] = 36,
  [47] = 37,
  [48] = 22,
  [49] = 27,
  [50] = 26,
  [51] = 35,
  [52] = 25,
  [53] = 21,
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
  [78] = 71,
  [79] = 69,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 81,
  [85] = 85,
  [86] = 86,
  [87] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'j') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_let);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_create);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_update);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_delete);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_content);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_define);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_function_token);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_name);
      if (lookahead == 'u') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_type_token);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_table);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_on);
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
  [4] = {.lex_state = 1},
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
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
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
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
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_let] = ACTIONS(1),
    [sym_select] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_where] = ACTIONS(1),
    [sym_create] = ACTIONS(1),
    [sym_update] = ACTIONS(1),
    [sym_delete] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
    [sym_define] = ACTIONS(1),
    [sym_function_token] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [sym_type_token] = ACTIONS(1),
    [sym_table] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym_statement] = STATE(38),
    [sym__statement_start] = STATE(54),
    [sym_select_part] = STATE(54),
    [sym_create_part] = STATE(54),
    [sym_update_part] = STATE(54),
    [sym_delete_part] = STATE(54),
    [sym_content_part] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_select] = ACTIONS(5),
    [sym_create] = ACTIONS(7),
    [sym_update] = ACTIONS(9),
    [sym_delete] = ACTIONS(11),
    [sym_content] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    STATE(56), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 3,
      sym_from,
      sym_where,
      sym_content,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [47] = 11,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 3,
      sym_from,
      sym_where,
      sym_content,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [94] = 11,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_array_repeat1,
    STATE(67), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [139] = 11,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym_array_repeat1,
    STATE(67), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [184] = 11,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_array_repeat1,
    STATE(67), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [229] = 11,
    ACTIONS(47), 1,
      anon_sym_null,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym__simple_name,
    STATE(7), 1,
      aux_sym_array_repeat1,
    STATE(67), 1,
      sym_value,
    ACTIONS(41), 2,
      sym_number,
      sym_string,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [274] = 11,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_array_repeat1,
    STATE(67), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [319] = 10,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(69), 1,
      anon_sym_null,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      sym__simple_name,
    STATE(24), 1,
      sym_value,
    ACTIONS(63), 2,
      sym_number,
      sym_string,
    ACTIONS(66), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(33), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [361] = 9,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    STATE(48), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [400] = 9,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    STATE(47), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [439] = 9,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    STATE(46), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [478] = 9,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    STATE(59), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [517] = 9,
    ACTIONS(85), 1,
      anon_sym_null,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym__simple_name,
    STATE(36), 1,
      sym_value,
    ACTIONS(81), 2,
      sym_number,
      sym_string,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(33), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [556] = 9,
    ACTIONS(85), 1,
      anon_sym_null,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym__simple_name,
    STATE(37), 1,
      sym_value,
    ACTIONS(81), 2,
      sym_number,
      sym_string,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(33), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [595] = 9,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    STATE(49), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [634] = 9,
    ACTIONS(85), 1,
      anon_sym_null,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym__simple_name,
    STATE(22), 1,
      sym_value,
    ACTIONS(81), 2,
      sym_number,
      sym_string,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(33), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [673] = 9,
    ACTIONS(85), 1,
      anon_sym_null,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym__simple_name,
    STATE(27), 1,
      sym_value,
    ACTIONS(81), 2,
      sym_number,
      sym_string,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(33), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [712] = 9,
    ACTIONS(23), 1,
      anon_sym_null,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__simple_name,
    STATE(50), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(44), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [751] = 9,
    ACTIONS(85), 1,
      anon_sym_null,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym__simple_name,
    STATE(26), 1,
      sym_value,
    ACTIONS(81), 2,
      sym_number,
      sym_string,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    STATE(33), 6,
      sym_operation,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_column_name,
  [790] = 2,
    ACTIONS(95), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(93), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [809] = 4,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(97), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [832] = 2,
    ACTIONS(107), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(105), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [851] = 7,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(111), 1,
      anon_sym_PLUS,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(117), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(115), 5,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [880] = 2,
    ACTIONS(121), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(119), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [899] = 2,
    ACTIONS(125), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(123), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [918] = 3,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(129), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(127), 9,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [939] = 8,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym_select,
    ACTIONS(136), 1,
      sym_create,
    ACTIONS(139), 1,
      sym_update,
    ACTIONS(142), 1,
      sym_delete,
    ACTIONS(145), 1,
      sym_content,
    STATE(28), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 6,
      sym__statement_start,
      sym_select_part,
      sym_create_part,
      sym_update_part,
      sym_delete_part,
      sym_content_part,
  [970] = 2,
    ACTIONS(150), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(148), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [989] = 2,
    ACTIONS(154), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(152), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1008] = 2,
    ACTIONS(158), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(156), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1027] = 2,
    ACTIONS(162), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(160), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1046] = 2,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(164), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1065] = 2,
    ACTIONS(170), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(168), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1084] = 2,
    ACTIONS(174), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(172), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1103] = 6,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_PLUS,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(178), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(176), 6,
      anon_sym_EQ,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1130] = 5,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(182), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__simple_name,
    ACTIONS(180), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1155] = 8,
    ACTIONS(5), 1,
      sym_select,
    ACTIONS(7), 1,
      sym_create,
    ACTIONS(9), 1,
      sym_update,
    ACTIONS(11), 1,
      sym_delete,
    ACTIONS(13), 1,
      sym_content,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 6,
      sym__statement_start,
      sym_select_part,
      sym_create_part,
      sym_update_part,
      sym_delete_part,
      sym_content_part,
  [1186] = 1,
    ACTIONS(105), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1200] = 1,
    ACTIONS(148), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1214] = 1,
    ACTIONS(160), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1228] = 1,
    ACTIONS(168), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1242] = 1,
    ACTIONS(152), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1256] = 1,
    ACTIONS(164), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1270] = 1,
    ACTIONS(156), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1284] = 5,
    ACTIONS(186), 1,
      anon_sym_PLUS,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(176), 7,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1306] = 4,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(180), 8,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1326] = 3,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(97), 9,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1344] = 2,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(127), 10,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1360] = 1,
    ACTIONS(123), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1374] = 1,
    ACTIONS(172), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1388] = 1,
    ACTIONS(119), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1402] = 1,
    ACTIONS(93), 11,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1416] = 6,
    ACTIONS(13), 1,
      sym_content,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_from,
    ACTIONS(198), 1,
      sym_where,
    STATE(60), 1,
      sym_semi,
    STATE(55), 5,
      sym__statement_param,
      sym_from_part,
      sym_where_part,
      sym_content_part,
      aux_sym_statement_repeat1,
  [1439] = 6,
    ACTIONS(13), 1,
      sym_content,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_from,
    ACTIONS(198), 1,
      sym_where,
    STATE(62), 1,
      sym_semi,
    STATE(58), 5,
      sym__statement_param,
      sym_from_part,
      sym_where_part,
      sym_content_part,
      aux_sym_statement_repeat1,
  [1462] = 6,
    ACTIONS(186), 1,
      anon_sym_PLUS,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(200), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1484] = 6,
    ACTIONS(186), 1,
      anon_sym_PLUS,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(204), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1506] = 5,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      sym_from,
    ACTIONS(211), 1,
      sym_where,
    ACTIONS(214), 1,
      sym_content,
    STATE(58), 5,
      sym__statement_param,
      sym_from_part,
      sym_where_part,
      sym_content_part,
      aux_sym_statement_repeat1,
  [1526] = 6,
    ACTIONS(186), 1,
      anon_sym_PLUS,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1546] = 1,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      sym_select,
      sym_create,
      sym_update,
      sym_delete,
      sym_content,
  [1555] = 4,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      sym__simple_name,
    STATE(77), 1,
      sym_table_name,
    ACTIONS(223), 3,
      sym_from,
      sym_where,
      sym_content,
  [1570] = 1,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      sym_select,
      sym_create,
      sym_update,
      sym_delete,
      sym_content,
  [1579] = 4,
    ACTIONS(225), 1,
      sym__simple_name,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_table_name,
    ACTIONS(231), 3,
      sym_from,
      sym_where,
      sym_content,
  [1594] = 4,
    ACTIONS(29), 1,
      sym__simple_name,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_column_name,
    ACTIONS(235), 3,
      sym_from,
      sym_where,
      sym_content,
  [1609] = 4,
    ACTIONS(225), 1,
      sym__simple_name,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_table_name,
    ACTIONS(239), 3,
      sym_from,
      sym_where,
      sym_content,
  [1624] = 4,
    ACTIONS(225), 1,
      sym__simple_name,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_table_name,
    ACTIONS(243), 3,
      sym_from,
      sym_where,
      sym_content,
  [1639] = 6,
    ACTIONS(186), 1,
      anon_sym_PLUS,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(245), 1,
      anon_sym_COMMA,
  [1658] = 1,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      sym_select,
      sym_create,
      sym_update,
      sym_delete,
      sym_content,
  [1667] = 4,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_object_repeat1,
    STATE(81), 1,
      sym_object_entry,
  [1680] = 4,
    ACTIONS(253), 1,
      sym_string,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_object_repeat1,
    STATE(85), 1,
      sym_object_entry,
  [1693] = 4,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_object_repeat1,
    STATE(80), 1,
      sym_object_entry,
  [1706] = 1,
    ACTIONS(260), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1713] = 1,
    ACTIONS(262), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1720] = 1,
    ACTIONS(264), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1727] = 1,
    ACTIONS(266), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1734] = 1,
    ACTIONS(268), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1741] = 1,
    ACTIONS(270), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [1748] = 4,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_object_repeat1,
    STATE(83), 1,
      sym_object_entry,
  [1761] = 4,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_object_repeat1,
    STATE(84), 1,
      sym_object_entry,
  [1774] = 2,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      anon_sym_COMMA,
  [1781] = 2,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
  [1788] = 1,
    ACTIONS(256), 2,
      sym_string,
      anon_sym_RBRACE,
  [1793] = 2,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      anon_sym_COMMA,
  [1800] = 2,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [1807] = 1,
    ACTIONS(276), 1,
      anon_sym_COMMA,
  [1811] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [1815] = 1,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 319,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 439,
  [SMALL_STATE(13)] = 478,
  [SMALL_STATE(14)] = 517,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 673,
  [SMALL_STATE(19)] = 712,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 790,
  [SMALL_STATE(22)] = 809,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 851,
  [SMALL_STATE(25)] = 880,
  [SMALL_STATE(26)] = 899,
  [SMALL_STATE(27)] = 918,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 970,
  [SMALL_STATE(30)] = 989,
  [SMALL_STATE(31)] = 1008,
  [SMALL_STATE(32)] = 1027,
  [SMALL_STATE(33)] = 1046,
  [SMALL_STATE(34)] = 1065,
  [SMALL_STATE(35)] = 1084,
  [SMALL_STATE(36)] = 1103,
  [SMALL_STATE(37)] = 1130,
  [SMALL_STATE(38)] = 1155,
  [SMALL_STATE(39)] = 1186,
  [SMALL_STATE(40)] = 1200,
  [SMALL_STATE(41)] = 1214,
  [SMALL_STATE(42)] = 1228,
  [SMALL_STATE(43)] = 1242,
  [SMALL_STATE(44)] = 1256,
  [SMALL_STATE(45)] = 1270,
  [SMALL_STATE(46)] = 1284,
  [SMALL_STATE(47)] = 1306,
  [SMALL_STATE(48)] = 1326,
  [SMALL_STATE(49)] = 1344,
  [SMALL_STATE(50)] = 1360,
  [SMALL_STATE(51)] = 1374,
  [SMALL_STATE(52)] = 1388,
  [SMALL_STATE(53)] = 1402,
  [SMALL_STATE(54)] = 1416,
  [SMALL_STATE(55)] = 1439,
  [SMALL_STATE(56)] = 1462,
  [SMALL_STATE(57)] = 1484,
  [SMALL_STATE(58)] = 1506,
  [SMALL_STATE(59)] = 1526,
  [SMALL_STATE(60)] = 1546,
  [SMALL_STATE(61)] = 1555,
  [SMALL_STATE(62)] = 1570,
  [SMALL_STATE(63)] = 1579,
  [SMALL_STATE(64)] = 1594,
  [SMALL_STATE(65)] = 1609,
  [SMALL_STATE(66)] = 1624,
  [SMALL_STATE(67)] = 1639,
  [SMALL_STATE(68)] = 1658,
  [SMALL_STATE(69)] = 1667,
  [SMALL_STATE(70)] = 1680,
  [SMALL_STATE(71)] = 1693,
  [SMALL_STATE(72)] = 1706,
  [SMALL_STATE(73)] = 1713,
  [SMALL_STATE(74)] = 1720,
  [SMALL_STATE(75)] = 1727,
  [SMALL_STATE(76)] = 1734,
  [SMALL_STATE(77)] = 1741,
  [SMALL_STATE(78)] = 1748,
  [SMALL_STATE(79)] = 1761,
  [SMALL_STATE(80)] = 1774,
  [SMALL_STATE(81)] = 1781,
  [SMALL_STATE(82)] = 1788,
  [SMALL_STATE(83)] = 1793,
  [SMALL_STATE(84)] = 1800,
  [SMALL_STATE(85)] = 1807,
  [SMALL_STATE(86)] = 1811,
  [SMALL_STATE(87)] = 1815,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_part, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_part, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(40),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(53),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(71),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(33),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(29),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(78),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtract, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtract, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divide, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(61),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(3),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_entry, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_part, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_part, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_part, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_part, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_part, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semi, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(86),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [284] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mylang(void) {
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
