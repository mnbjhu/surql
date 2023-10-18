#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_SELECT = 2,
  anon_sym_select = 3,
  anon_sym_WHERE = 4,
  anon_sym_where = 5,
  anon_sym_FROM = 6,
  anon_sym_from = 7,
  anon_sym_CREATE = 8,
  anon_sym_create = 9,
  anon_sym_CONTENT = 10,
  anon_sym_content = 11,
  anon_sym_UPDATE = 12,
  anon_sym_update = 13,
  anon_sym_DELETE = 14,
  anon_sym_delete = 15,
  aux_sym_unknown_name_token1 = 16,
  anon_sym_EQ = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  sym_number = 22,
  sym_string = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_null = 26,
  sym_source_file = 27,
  sym_statement = 28,
  sym_select_token = 29,
  sym_where_token = 30,
  sym_from_token = 31,
  sym_create_token = 32,
  sym_content_token = 33,
  sym_update_token = 34,
  sym_delete_token = 35,
  sym_expected_statement = 36,
  sym__token = 37,
  sym__statement_start = 38,
  sym__statement_argument = 39,
  sym_where_statement = 40,
  sym_where_statement_missing_argument = 41,
  sym__where_statement = 42,
  sym_content_statement = 43,
  sym_content_statement_missing_argument = 44,
  sym__content_statement = 45,
  sym_from_statement = 46,
  sym_from_statement_missing_argument = 47,
  sym__from_statement = 48,
  sym_select_statement = 49,
  sym_select_statement_missing_argument = 50,
  sym__select_statement = 51,
  sym_create_statement = 52,
  sym_create_statement_missing_argument = 53,
  sym__create_statement = 54,
  sym_update_statement = 55,
  sym_update_statement_missing_argument = 56,
  sym__update_statement = 57,
  sym_delete_statement = 58,
  sym_delete_statement_missing_argument = 59,
  sym__delete_statement = 60,
  sym_found = 61,
  sym_unknown_name = 62,
  sym__value = 63,
  sym_expected_value = 64,
  sym_value = 65,
  sym_equal = 66,
  sym_sum = 67,
  sym_subtract = 68,
  sym_product = 69,
  sym_divide = 70,
  sym_operation = 71,
  sym_boolean = 72,
  sym__table_name = 73,
  sym_table_name = 74,
  sym_expected_table_name = 75,
  sym_column_name = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_statement_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_select] = "select",
  [anon_sym_WHERE] = "WHERE",
  [anon_sym_where] = "where",
  [anon_sym_FROM] = "FROM",
  [anon_sym_from] = "from",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_create] = "create",
  [anon_sym_CONTENT] = "CONTENT",
  [anon_sym_content] = "content",
  [anon_sym_UPDATE] = "UPDATE",
  [anon_sym_update] = "update",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_delete] = "delete",
  [aux_sym_unknown_name_token1] = "unknown_name_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_select_token] = "select_token",
  [sym_where_token] = "where_token",
  [sym_from_token] = "from_token",
  [sym_create_token] = "create_token",
  [sym_content_token] = "content_token",
  [sym_update_token] = "update_token",
  [sym_delete_token] = "delete_token",
  [sym_expected_statement] = "expected_statement",
  [sym__token] = "_token",
  [sym__statement_start] = "_statement_start",
  [sym__statement_argument] = "_statement_argument",
  [sym_where_statement] = "where_statement",
  [sym_where_statement_missing_argument] = "where_statement_missing_argument",
  [sym__where_statement] = "_where_statement",
  [sym_content_statement] = "content_statement",
  [sym_content_statement_missing_argument] = "content_statement_missing_argument",
  [sym__content_statement] = "_content_statement",
  [sym_from_statement] = "from_statement",
  [sym_from_statement_missing_argument] = "from_statement_missing_argument",
  [sym__from_statement] = "_from_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_statement_missing_argument] = "select_statement_missing_argument",
  [sym__select_statement] = "_select_statement",
  [sym_create_statement] = "create_statement",
  [sym_create_statement_missing_argument] = "create_statement_missing_argument",
  [sym__create_statement] = "_create_statement",
  [sym_update_statement] = "update_statement",
  [sym_update_statement_missing_argument] = "update_statement_missing_argument",
  [sym__update_statement] = "_update_statement",
  [sym_delete_statement] = "delete_statement",
  [sym_delete_statement_missing_argument] = "delete_statement_missing_argument",
  [sym__delete_statement] = "_delete_statement",
  [sym_found] = "found",
  [sym_unknown_name] = "unknown_name",
  [sym__value] = "_value",
  [sym_expected_value] = "expected_value",
  [sym_value] = "value",
  [sym_equal] = "equal",
  [sym_sum] = "sum",
  [sym_subtract] = "subtract",
  [sym_product] = "product",
  [sym_divide] = "divide",
  [sym_operation] = "operation",
  [sym_boolean] = "boolean",
  [sym__table_name] = "_table_name",
  [sym_table_name] = "table_name",
  [sym_expected_table_name] = "expected_table_name",
  [sym_column_name] = "column_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_CONTENT] = anon_sym_CONTENT,
  [anon_sym_content] = anon_sym_content,
  [anon_sym_UPDATE] = anon_sym_UPDATE,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_delete] = anon_sym_delete,
  [aux_sym_unknown_name_token1] = aux_sym_unknown_name_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_select_token] = sym_select_token,
  [sym_where_token] = sym_where_token,
  [sym_from_token] = sym_from_token,
  [sym_create_token] = sym_create_token,
  [sym_content_token] = sym_content_token,
  [sym_update_token] = sym_update_token,
  [sym_delete_token] = sym_delete_token,
  [sym_expected_statement] = sym_expected_statement,
  [sym__token] = sym__token,
  [sym__statement_start] = sym__statement_start,
  [sym__statement_argument] = sym__statement_argument,
  [sym_where_statement] = sym_where_statement,
  [sym_where_statement_missing_argument] = sym_where_statement_missing_argument,
  [sym__where_statement] = sym__where_statement,
  [sym_content_statement] = sym_content_statement,
  [sym_content_statement_missing_argument] = sym_content_statement_missing_argument,
  [sym__content_statement] = sym__content_statement,
  [sym_from_statement] = sym_from_statement,
  [sym_from_statement_missing_argument] = sym_from_statement_missing_argument,
  [sym__from_statement] = sym__from_statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_statement_missing_argument] = sym_select_statement_missing_argument,
  [sym__select_statement] = sym__select_statement,
  [sym_create_statement] = sym_create_statement,
  [sym_create_statement_missing_argument] = sym_create_statement_missing_argument,
  [sym__create_statement] = sym__create_statement,
  [sym_update_statement] = sym_update_statement,
  [sym_update_statement_missing_argument] = sym_update_statement_missing_argument,
  [sym__update_statement] = sym__update_statement,
  [sym_delete_statement] = sym_delete_statement,
  [sym_delete_statement_missing_argument] = sym_delete_statement_missing_argument,
  [sym__delete_statement] = sym__delete_statement,
  [sym_found] = sym_found,
  [sym_unknown_name] = sym_unknown_name,
  [sym__value] = sym__value,
  [sym_expected_value] = sym_expected_value,
  [sym_value] = sym_value,
  [sym_equal] = sym_equal,
  [sym_sum] = sym_sum,
  [sym_subtract] = sym_subtract,
  [sym_product] = sym_product,
  [sym_divide] = sym_divide,
  [sym_operation] = sym_operation,
  [sym_boolean] = sym_boolean,
  [sym__table_name] = sym__table_name,
  [sym_table_name] = sym_table_name,
  [sym_expected_table_name] = sym_expected_table_name,
  [sym_column_name] = sym_column_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
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
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
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
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
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
  [aux_sym_unknown_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_token] = {
    .visible = true,
    .named = true,
  },
  [sym_where_token] = {
    .visible = true,
    .named = true,
  },
  [sym_from_token] = {
    .visible = true,
    .named = true,
  },
  [sym_create_token] = {
    .visible = true,
    .named = true,
  },
  [sym_content_token] = {
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
  [sym_expected_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_start] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_where_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_where_statement_missing_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__where_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_content_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_content_statement_missing_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__content_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_from_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_from_statement_missing_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__from_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement_missing_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__select_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_statement_missing_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__create_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_update_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_update_statement_missing_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__update_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_delete_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_statement_missing_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__delete_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_found] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown_name] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_expected_value] = {
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
  [sym__table_name] = {
    .visible = false,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expected_table_name] = {
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
  [47] = 16,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 27,
  [53] = 12,
  [54] = 15,
  [55] = 17,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'H') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_create);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_update);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'c') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'd') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'h') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_CONTENT] = ACTIONS(1),
    [anon_sym_content] = ACTIONS(1),
    [anon_sym_UPDATE] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [aux_sym_unknown_name_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_statement] = STATE(2),
    [sym_select_token] = STATE(10),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(6),
    [sym_update_token] = STATE(7),
    [sym_delete_token] = STATE(4),
    [sym_expected_statement] = STATE(57),
    [sym__token] = STATE(51),
    [sym__statement_start] = STATE(14),
    [sym_select_statement] = STATE(14),
    [sym_select_statement_missing_argument] = STATE(14),
    [sym__select_statement] = STATE(14),
    [sym_create_statement] = STATE(14),
    [sym_create_statement_missing_argument] = STATE(14),
    [sym__create_statement] = STATE(14),
    [sym_update_statement] = STATE(14),
    [sym_update_statement_missing_argument] = STATE(14),
    [sym__update_statement] = STATE(14),
    [sym_delete_statement] = STATE(14),
    [sym_delete_statement_missing_argument] = STATE(14),
    [sym__delete_statement] = STATE(14),
    [sym_found] = STATE(56),
    [sym_unknown_name] = STATE(51),
    [sym_value] = STATE(35),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_column_name] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(7),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(13),
    [anon_sym_create] = ACTIONS(15),
    [anon_sym_UPDATE] = ACTIONS(17),
    [anon_sym_update] = ACTIONS(19),
    [anon_sym_DELETE] = ACTIONS(21),
    [anon_sym_delete] = ACTIONS(23),
    [aux_sym_unknown_name_token1] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_select_token] = STATE(10),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(6),
    [sym_update_token] = STATE(7),
    [sym_delete_token] = STATE(4),
    [sym_expected_statement] = STATE(57),
    [sym__token] = STATE(51),
    [sym__statement_start] = STATE(14),
    [sym_select_statement] = STATE(14),
    [sym_select_statement_missing_argument] = STATE(14),
    [sym__select_statement] = STATE(14),
    [sym_create_statement] = STATE(14),
    [sym_create_statement_missing_argument] = STATE(14),
    [sym__create_statement] = STATE(14),
    [sym_update_statement] = STATE(14),
    [sym_update_statement_missing_argument] = STATE(14),
    [sym__update_statement] = STATE(14),
    [sym_delete_statement] = STATE(14),
    [sym_delete_statement_missing_argument] = STATE(14),
    [sym__delete_statement] = STATE(14),
    [sym_found] = STATE(56),
    [sym_unknown_name] = STATE(51),
    [sym_value] = STATE(35),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_column_name] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(7),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(13),
    [anon_sym_create] = ACTIONS(15),
    [anon_sym_UPDATE] = ACTIONS(17),
    [anon_sym_update] = ACTIONS(19),
    [anon_sym_DELETE] = ACTIONS(21),
    [anon_sym_delete] = ACTIONS(23),
    [aux_sym_unknown_name_token1] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_select_token] = STATE(10),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(6),
    [sym_update_token] = STATE(7),
    [sym_delete_token] = STATE(4),
    [sym_expected_statement] = STATE(57),
    [sym__token] = STATE(51),
    [sym__statement_start] = STATE(14),
    [sym_select_statement] = STATE(14),
    [sym_select_statement_missing_argument] = STATE(14),
    [sym__select_statement] = STATE(14),
    [sym_create_statement] = STATE(14),
    [sym_create_statement_missing_argument] = STATE(14),
    [sym__create_statement] = STATE(14),
    [sym_update_statement] = STATE(14),
    [sym_update_statement_missing_argument] = STATE(14),
    [sym__update_statement] = STATE(14),
    [sym_delete_statement] = STATE(14),
    [sym_delete_statement_missing_argument] = STATE(14),
    [sym__delete_statement] = STATE(14),
    [sym_found] = STATE(56),
    [sym_unknown_name] = STATE(51),
    [sym_value] = STATE(35),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_column_name] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_SELECT] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(40),
    [anon_sym_FROM] = ACTIONS(43),
    [anon_sym_from] = ACTIONS(46),
    [anon_sym_CREATE] = ACTIONS(49),
    [anon_sym_create] = ACTIONS(52),
    [anon_sym_UPDATE] = ACTIONS(55),
    [anon_sym_update] = ACTIONS(58),
    [anon_sym_DELETE] = ACTIONS(61),
    [anon_sym_delete] = ACTIONS(64),
    [aux_sym_unknown_name_token1] = ACTIONS(67),
    [sym_number] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [sym_null] = ACTIONS(76),
  },
  [4] = {
    [sym_select_token] = STATE(51),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(51),
    [sym_update_token] = STATE(51),
    [sym_delete_token] = STATE(51),
    [sym__token] = STATE(51),
    [sym_found] = STATE(50),
    [sym_unknown_name] = STATE(51),
    [sym_value] = STATE(35),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__table_name] = STATE(48),
    [sym_table_name] = STATE(48),
    [sym_expected_table_name] = STATE(48),
    [sym_column_name] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_SELECT] = ACTIONS(81),
    [anon_sym_select] = ACTIONS(83),
    [anon_sym_WHERE] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(85),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(87),
    [anon_sym_create] = ACTIONS(89),
    [anon_sym_CONTENT] = ACTIONS(79),
    [anon_sym_content] = ACTIONS(85),
    [anon_sym_UPDATE] = ACTIONS(91),
    [anon_sym_update] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(97),
    [aux_sym_unknown_name_token1] = ACTIONS(99),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
  [5] = {
    [sym_select_token] = STATE(51),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(51),
    [sym_update_token] = STATE(51),
    [sym_delete_token] = STATE(51),
    [sym__token] = STATE(51),
    [sym_found] = STATE(50),
    [sym_unknown_name] = STATE(51),
    [sym_value] = STATE(35),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__table_name] = STATE(45),
    [sym_table_name] = STATE(45),
    [sym_expected_table_name] = STATE(45),
    [sym_column_name] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_SELECT] = ACTIONS(81),
    [anon_sym_select] = ACTIONS(83),
    [anon_sym_WHERE] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(103),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(87),
    [anon_sym_create] = ACTIONS(89),
    [anon_sym_CONTENT] = ACTIONS(101),
    [anon_sym_content] = ACTIONS(103),
    [anon_sym_UPDATE] = ACTIONS(91),
    [anon_sym_update] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(97),
    [aux_sym_unknown_name_token1] = ACTIONS(99),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
  [6] = {
    [sym_select_token] = STATE(51),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(51),
    [sym_update_token] = STATE(51),
    [sym_delete_token] = STATE(51),
    [sym__token] = STATE(51),
    [sym_found] = STATE(50),
    [sym_unknown_name] = STATE(51),
    [sym_value] = STATE(35),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__table_name] = STATE(49),
    [sym_table_name] = STATE(49),
    [sym_expected_table_name] = STATE(49),
    [sym_column_name] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_SELECT] = ACTIONS(81),
    [anon_sym_select] = ACTIONS(83),
    [anon_sym_WHERE] = ACTIONS(105),
    [anon_sym_where] = ACTIONS(107),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(87),
    [anon_sym_create] = ACTIONS(89),
    [anon_sym_CONTENT] = ACTIONS(105),
    [anon_sym_content] = ACTIONS(107),
    [anon_sym_UPDATE] = ACTIONS(91),
    [anon_sym_update] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(97),
    [aux_sym_unknown_name_token1] = ACTIONS(99),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
  [7] = {
    [sym_select_token] = STATE(51),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(51),
    [sym_update_token] = STATE(51),
    [sym_delete_token] = STATE(51),
    [sym__token] = STATE(51),
    [sym_found] = STATE(50),
    [sym_unknown_name] = STATE(51),
    [sym_value] = STATE(35),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__table_name] = STATE(42),
    [sym_table_name] = STATE(42),
    [sym_expected_table_name] = STATE(42),
    [sym_column_name] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_SELECT] = ACTIONS(81),
    [anon_sym_select] = ACTIONS(83),
    [anon_sym_WHERE] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(111),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(87),
    [anon_sym_create] = ACTIONS(89),
    [anon_sym_CONTENT] = ACTIONS(109),
    [anon_sym_content] = ACTIONS(111),
    [anon_sym_UPDATE] = ACTIONS(91),
    [anon_sym_update] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(97),
    [aux_sym_unknown_name_token1] = ACTIONS(99),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
  [8] = {
    [sym_select_token] = STATE(51),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(51),
    [sym_update_token] = STATE(51),
    [sym_delete_token] = STATE(51),
    [sym__token] = STATE(51),
    [sym_found] = STATE(44),
    [sym_unknown_name] = STATE(51),
    [sym__value] = STATE(43),
    [sym_expected_value] = STATE(43),
    [sym_value] = STATE(39),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_column_name] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_SELECT] = ACTIONS(81),
    [anon_sym_select] = ACTIONS(83),
    [anon_sym_WHERE] = ACTIONS(113),
    [anon_sym_where] = ACTIONS(115),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(87),
    [anon_sym_create] = ACTIONS(89),
    [anon_sym_CONTENT] = ACTIONS(113),
    [anon_sym_content] = ACTIONS(115),
    [anon_sym_UPDATE] = ACTIONS(91),
    [anon_sym_update] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(97),
    [aux_sym_unknown_name_token1] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
  [9] = {
    [sym_select_token] = STATE(51),
    [sym_from_token] = STATE(51),
    [sym_create_token] = STATE(51),
    [sym_update_token] = STATE(51),
    [sym_delete_token] = STATE(51),
    [sym__token] = STATE(51),
    [sym_found] = STATE(44),
    [sym_unknown_name] = STATE(51),
    [sym__value] = STATE(46),
    [sym_expected_value] = STATE(46),
    [sym_value] = STATE(39),
    [sym_equal] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym_product] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_operation] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_column_name] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_SELECT] = ACTIONS(81),
    [anon_sym_select] = ACTIONS(83),
    [anon_sym_WHERE] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(119),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_CREATE] = ACTIONS(87),
    [anon_sym_create] = ACTIONS(89),
    [anon_sym_CONTENT] = ACTIONS(117),
    [anon_sym_content] = ACTIONS(119),
    [anon_sym_UPDATE] = ACTIONS(91),
    [anon_sym_update] = ACTIONS(93),
    [anon_sym_DELETE] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(97),
    [aux_sym_unknown_name_token1] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(31), 1,
      sym_null,
    ACTIONS(125), 1,
      aux_sym_unknown_name_token1,
    STATE(32), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 3,
      anon_sym_where,
      anon_sym_from,
      anon_sym_content,
    STATE(41), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    ACTIONS(121), 4,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CONTENT,
    STATE(34), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [41] = 2,
    ACTIONS(127), 10,
      anon_sym_SEMI,
      anon_sym_SELECT,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_CONTENT,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(129), 11,
      anon_sym_select,
      anon_sym_where,
      anon_sym_from,
      anon_sym_create,
      anon_sym_content,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [67] = 2,
    ACTIONS(131), 10,
      anon_sym_SEMI,
      anon_sym_SELECT,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_CONTENT,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(133), 11,
      anon_sym_select,
      anon_sym_where,
      anon_sym_from,
      anon_sym_create,
      anon_sym_content,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [93] = 8,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_from_token,
    STATE(8), 1,
      sym_where_token,
    STATE(9), 1,
      sym_content_token,
    ACTIONS(137), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(139), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(141), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    STATE(19), 11,
      sym__statement_argument,
      sym_where_statement,
      sym_where_statement_missing_argument,
      sym__where_statement,
      sym_content_statement,
      sym_content_statement_missing_argument,
      sym__content_statement,
      sym_from_statement,
      sym_from_statement_missing_argument,
      sym__from_statement,
      aux_sym_statement_repeat1,
  [131] = 8,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_from_token,
    STATE(8), 1,
      sym_where_token,
    STATE(9), 1,
      sym_content_token,
    ACTIONS(137), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(139), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(141), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    STATE(13), 11,
      sym__statement_argument,
      sym_where_statement,
      sym_where_statement_missing_argument,
      sym__where_statement,
      sym_content_statement,
      sym_content_statement_missing_argument,
      sym__content_statement,
      sym_from_statement,
      sym_from_statement_missing_argument,
      sym__from_statement,
      aux_sym_statement_repeat1,
  [169] = 2,
    ACTIONS(145), 10,
      anon_sym_SEMI,
      anon_sym_SELECT,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_CONTENT,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(147), 11,
      anon_sym_select,
      anon_sym_where,
      anon_sym_from,
      anon_sym_create,
      anon_sym_content,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [195] = 2,
    ACTIONS(149), 10,
      anon_sym_SEMI,
      anon_sym_SELECT,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_CONTENT,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(151), 11,
      anon_sym_select,
      anon_sym_where,
      anon_sym_from,
      anon_sym_create,
      anon_sym_content,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [221] = 2,
    ACTIONS(153), 10,
      anon_sym_SEMI,
      anon_sym_SELECT,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_CONTENT,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(155), 11,
      anon_sym_select,
      anon_sym_where,
      anon_sym_from,
      anon_sym_create,
      anon_sym_content,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [247] = 2,
    ACTIONS(157), 10,
      anon_sym_SEMI,
      anon_sym_SELECT,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_CONTENT,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(159), 11,
      anon_sym_select,
      anon_sym_where,
      anon_sym_from,
      anon_sym_create,
      anon_sym_content,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [273] = 8,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_from_token,
    STATE(8), 1,
      sym_where_token,
    STATE(9), 1,
      sym_content_token,
    ACTIONS(163), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(166), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(169), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    STATE(19), 11,
      sym__statement_argument,
      sym_where_statement,
      sym_where_statement_missing_argument,
      sym__where_statement,
      sym_content_statement,
      sym_content_statement_missing_argument,
      sym__content_statement,
      sym_from_statement,
      sym_from_statement_missing_argument,
      sym__from_statement,
      aux_sym_statement_repeat1,
  [311] = 2,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(174), 9,
      anon_sym_select,
      anon_sym_from,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [333] = 2,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_SELECT,
      anon_sym_FROM,
      anon_sym_CREATE,
      anon_sym_UPDATE,
      anon_sym_DELETE,
      sym_number,
      sym_string,
    ACTIONS(178), 9,
      anon_sym_select,
      anon_sym_from,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [355] = 7,
    ACTIONS(31), 1,
      sym_null,
    ACTIONS(125), 1,
      aux_sym_unknown_name_token1,
    STATE(38), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(34), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [385] = 7,
    ACTIONS(31), 1,
      sym_null,
    ACTIONS(125), 1,
      aux_sym_unknown_name_token1,
    STATE(37), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(34), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [415] = 7,
    ACTIONS(31), 1,
      sym_null,
    ACTIONS(125), 1,
      aux_sym_unknown_name_token1,
    STATE(36), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(34), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [445] = 7,
    ACTIONS(31), 1,
      sym_null,
    ACTIONS(125), 1,
      aux_sym_unknown_name_token1,
    STATE(28), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(34), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [475] = 7,
    ACTIONS(31), 1,
      sym_null,
    ACTIONS(125), 1,
      aux_sym_unknown_name_token1,
    STATE(29), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(34), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [505] = 2,
    ACTIONS(180), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_FROM,
      anon_sym_CONTENT,
      sym_number,
      sym_string,
    ACTIONS(182), 7,
      anon_sym_where,
      anon_sym_from,
      anon_sym_content,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [523] = 1,
    ACTIONS(184), 12,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [538] = 5,
    ACTIONS(188), 1,
      anon_sym_PLUS,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(186), 8,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
  [561] = 2,
    ACTIONS(198), 5,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(196), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [578] = 1,
    ACTIONS(198), 12,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [593] = 6,
    ACTIONS(188), 1,
      anon_sym_PLUS,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(200), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [618] = 1,
    ACTIONS(198), 12,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [633] = 1,
    ACTIONS(204), 12,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [648] = 6,
    ACTIONS(188), 1,
      anon_sym_PLUS,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(206), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [673] = 4,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(208), 9,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
  [694] = 3,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(210), 10,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [713] = 2,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(212), 11,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [730] = 6,
    ACTIONS(188), 1,
      anon_sym_PLUS,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(214), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [755] = 1,
    ACTIONS(216), 12,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [770] = 1,
    ACTIONS(218), 12,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [785] = 1,
    ACTIONS(220), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [795] = 1,
    ACTIONS(222), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [805] = 1,
    ACTIONS(224), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [815] = 1,
    ACTIONS(226), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [825] = 1,
    ACTIONS(228), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [835] = 1,
    ACTIONS(149), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [845] = 1,
    ACTIONS(230), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [855] = 1,
    ACTIONS(232), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [865] = 1,
    ACTIONS(234), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [875] = 1,
    ACTIONS(206), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [885] = 1,
    ACTIONS(180), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [895] = 1,
    ACTIONS(131), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [905] = 1,
    ACTIONS(145), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [915] = 1,
    ACTIONS(153), 7,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [925] = 1,
    ACTIONS(236), 1,
      anon_sym_SEMI,
  [929] = 1,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [933] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 41,
  [SMALL_STATE(12)] = 67,
  [SMALL_STATE(13)] = 93,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 247,
  [SMALL_STATE(19)] = 273,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 355,
  [SMALL_STATE(23)] = 385,
  [SMALL_STATE(24)] = 415,
  [SMALL_STATE(25)] = 445,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 505,
  [SMALL_STATE(28)] = 523,
  [SMALL_STATE(29)] = 538,
  [SMALL_STATE(30)] = 561,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 618,
  [SMALL_STATE(34)] = 633,
  [SMALL_STATE(35)] = 648,
  [SMALL_STATE(36)] = 673,
  [SMALL_STATE(37)] = 694,
  [SMALL_STATE(38)] = 713,
  [SMALL_STATE(39)] = 730,
  [SMALL_STATE(40)] = 755,
  [SMALL_STATE(41)] = 770,
  [SMALL_STATE(42)] = 785,
  [SMALL_STATE(43)] = 795,
  [SMALL_STATE(44)] = 805,
  [SMALL_STATE(45)] = 815,
  [SMALL_STATE(46)] = 825,
  [SMALL_STATE(47)] = 835,
  [SMALL_STATE(48)] = 845,
  [SMALL_STATE(49)] = 855,
  [SMALL_STATE(50)] = 865,
  [SMALL_STATE(51)] = 875,
  [SMALL_STATE(52)] = 885,
  [SMALL_STATE(53)] = 895,
  [SMALL_STATE(54)] = 905,
  [SMALL_STATE(55)] = 915,
  [SMALL_STATE(56)] = 925,
  [SMALL_STATE(57)] = 929,
  [SMALL_STATE(58)] = 933,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement_missing_argument, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_statement_missing_argument, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement_missing_argument, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_statement_missing_argument, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement_missing_argument, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_statement_missing_argument, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement_missing_argument, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement_missing_argument, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_statement_missing_argument, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_statement_missing_argument, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_statement_missing_argument, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_statement_missing_argument, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_missing_argument, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_missing_argument, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_token, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_token, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_token, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_token, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_token, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_token, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_token, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_token, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_token, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_token, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_token, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_token, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(11),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(16),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(18),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_token, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_token, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_found, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtract, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_statement, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected_value, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_statement, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected_table_name, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected_statement, 1),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
