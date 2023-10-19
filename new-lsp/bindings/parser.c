#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 18
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
  [10] = 6,
  [11] = 7,
  [12] = 8,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 15,
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
  [36] = 30,
  [37] = 28,
  [38] = 23,
  [39] = 31,
  [40] = 32,
  [41] = 41,
  [42] = 26,
  [43] = 21,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 27,
  [50] = 22,
  [51] = 33,
  [52] = 34,
  [53] = 35,
  [54] = 18,
  [55] = 55,
  [56] = 56,
  [57] = 19,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 20,
  [67] = 48,
  [68] = 68,
  [69] = 65,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 71,
  [77] = 77,
  [78] = 75,
  [79] = 73,
  [80] = 71,
  [81] = 73,
  [82] = 72,
  [83] = 77,
  [84] = 77,
  [85] = 75,
  [86] = 72,
  [87] = 73,
  [88] = 75,
  [89] = 71,
  [90] = 77,
  [91] = 58,
  [92] = 30,
  [93] = 26,
  [94] = 35,
  [95] = 34,
  [96] = 33,
  [97] = 22,
  [98] = 24,
  [99] = 25,
  [100] = 32,
  [101] = 31,
  [102] = 23,
  [103] = 28,
  [104] = 29,
  [105] = 27,
  [106] = 59,
  [107] = 55,
  [108] = 65,
  [109] = 56,
  [110] = 61,
  [111] = 45,
  [112] = 46,
  [113] = 44,
  [114] = 60,
  [115] = 58,
  [116] = 62,
  [117] = 48,
  [118] = 63,
  [119] = 64,
  [120] = 26,
  [121] = 35,
  [122] = 34,
  [123] = 33,
  [124] = 27,
  [125] = 125,
  [126] = 126,
  [127] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(139);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'W') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_WHERE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_CREATE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_create);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_update);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'A') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'A') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'C') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'D') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'E') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'H') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'L') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'L') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'M') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'N') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'N') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'O') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'O') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'P') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'R') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'R') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'R') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'T') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'T') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'T') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'T') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'T') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'T') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'c') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'h') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'm') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'p') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'u') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_unknown_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
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
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 31},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 31},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 31},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 31},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 31},
  [113] = {.lex_state = 31},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 31},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
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
    [sym_source_file] = STATE(126),
    [sym_statement] = STATE(3),
    [sym_select_token] = STATE(21),
    [sym_from_token] = STATE(69),
    [sym_create_token] = STATE(7),
    [sym_update_token] = STATE(8),
    [sym_delete_token] = STATE(9),
    [sym_expected_statement] = STATE(68),
    [sym__token] = STATE(69),
    [sym__statement_start] = STATE(20),
    [sym_select_statement] = STATE(20),
    [sym_select_statement_missing_argument] = STATE(20),
    [sym__select_statement] = STATE(20),
    [sym_create_statement] = STATE(20),
    [sym_create_statement_missing_argument] = STATE(20),
    [sym__create_statement] = STATE(20),
    [sym_update_statement] = STATE(20),
    [sym_update_statement_missing_argument] = STATE(20),
    [sym__update_statement] = STATE(20),
    [sym_delete_statement] = STATE(20),
    [sym_delete_statement_missing_argument] = STATE(20),
    [sym__delete_statement] = STATE(20),
    [sym_found] = STATE(70),
    [sym_unknown_name] = STATE(69),
    [sym_value] = STATE(49),
    [sym_equal] = STATE(36),
    [sym_sum] = STATE(36),
    [sym_subtract] = STATE(36),
    [sym_product] = STATE(36),
    [sym_divide] = STATE(36),
    [sym_operation] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_column_name] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_FROM] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_select_token] = STATE(21),
    [sym_from_token] = STATE(69),
    [sym_create_token] = STATE(7),
    [sym_update_token] = STATE(8),
    [sym_delete_token] = STATE(9),
    [sym_expected_statement] = STATE(68),
    [sym__token] = STATE(69),
    [sym__statement_start] = STATE(20),
    [sym_select_statement] = STATE(20),
    [sym_select_statement_missing_argument] = STATE(20),
    [sym__select_statement] = STATE(20),
    [sym_create_statement] = STATE(20),
    [sym_create_statement_missing_argument] = STATE(20),
    [sym__create_statement] = STATE(20),
    [sym_update_statement] = STATE(20),
    [sym_update_statement_missing_argument] = STATE(20),
    [sym__update_statement] = STATE(20),
    [sym_delete_statement] = STATE(20),
    [sym_delete_statement_missing_argument] = STATE(20),
    [sym__delete_statement] = STATE(20),
    [sym_found] = STATE(70),
    [sym_unknown_name] = STATE(69),
    [sym_value] = STATE(49),
    [sym_equal] = STATE(36),
    [sym_sum] = STATE(36),
    [sym_subtract] = STATE(36),
    [sym_product] = STATE(36),
    [sym_divide] = STATE(36),
    [sym_operation] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_column_name] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_SELECT] = ACTIONS(25),
    [anon_sym_select] = ACTIONS(25),
    [anon_sym_FROM] = ACTIONS(28),
    [anon_sym_from] = ACTIONS(28),
    [anon_sym_CREATE] = ACTIONS(31),
    [anon_sym_create] = ACTIONS(31),
    [anon_sym_UPDATE] = ACTIONS(34),
    [anon_sym_update] = ACTIONS(34),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_delete] = ACTIONS(37),
    [aux_sym_unknown_name_token1] = ACTIONS(40),
    [sym_number] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
    [sym_null] = ACTIONS(49),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_select_token] = STATE(21),
    [sym_from_token] = STATE(69),
    [sym_create_token] = STATE(7),
    [sym_update_token] = STATE(8),
    [sym_delete_token] = STATE(9),
    [sym_expected_statement] = STATE(68),
    [sym__token] = STATE(69),
    [sym__statement_start] = STATE(20),
    [sym_select_statement] = STATE(20),
    [sym_select_statement_missing_argument] = STATE(20),
    [sym__select_statement] = STATE(20),
    [sym_create_statement] = STATE(20),
    [sym_create_statement_missing_argument] = STATE(20),
    [sym__create_statement] = STATE(20),
    [sym_update_statement] = STATE(20),
    [sym_update_statement_missing_argument] = STATE(20),
    [sym__update_statement] = STATE(20),
    [sym_delete_statement] = STATE(20),
    [sym_delete_statement_missing_argument] = STATE(20),
    [sym__delete_statement] = STATE(20),
    [sym_found] = STATE(70),
    [sym_unknown_name] = STATE(69),
    [sym_value] = STATE(49),
    [sym_equal] = STATE(36),
    [sym_sum] = STATE(36),
    [sym_subtract] = STATE(36),
    [sym_product] = STATE(36),
    [sym_divide] = STATE(36),
    [sym_operation] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_column_name] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SEMI] = ACTIONS(52),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_FROM] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
  },
  [4] = {
    [sym_statement] = STATE(127),
    [sym_select_token] = STATE(43),
    [sym_from_token] = STATE(69),
    [sym_create_token] = STATE(11),
    [sym_update_token] = STATE(12),
    [sym_delete_token] = STATE(13),
    [sym_expected_statement] = STATE(68),
    [sym__token] = STATE(69),
    [sym__statement_start] = STATE(66),
    [sym_select_statement] = STATE(66),
    [sym_select_statement_missing_argument] = STATE(66),
    [sym__select_statement] = STATE(66),
    [sym_create_statement] = STATE(66),
    [sym_create_statement_missing_argument] = STATE(66),
    [sym__create_statement] = STATE(66),
    [sym_update_statement] = STATE(66),
    [sym_update_statement_missing_argument] = STATE(66),
    [sym__update_statement] = STATE(66),
    [sym_delete_statement] = STATE(66),
    [sym_delete_statement_missing_argument] = STATE(66),
    [sym__delete_statement] = STATE(66),
    [sym_found] = STATE(70),
    [sym_unknown_name] = STATE(69),
    [sym_value] = STATE(124),
    [sym_equal] = STATE(36),
    [sym_sum] = STATE(36),
    [sym_subtract] = STATE(36),
    [sym_product] = STATE(36),
    [sym_divide] = STATE(36),
    [sym_operation] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_column_name] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_SELECT] = ACTIONS(56),
    [anon_sym_select] = ACTIONS(56),
    [anon_sym_FROM] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
  },
  [5] = {
    [sym_statement] = STATE(125),
    [sym_select_token] = STATE(43),
    [sym_from_token] = STATE(69),
    [sym_create_token] = STATE(11),
    [sym_update_token] = STATE(12),
    [sym_delete_token] = STATE(13),
    [sym_expected_statement] = STATE(68),
    [sym__token] = STATE(69),
    [sym__statement_start] = STATE(66),
    [sym_select_statement] = STATE(66),
    [sym_select_statement_missing_argument] = STATE(66),
    [sym__select_statement] = STATE(66),
    [sym_create_statement] = STATE(66),
    [sym_create_statement_missing_argument] = STATE(66),
    [sym__create_statement] = STATE(66),
    [sym_update_statement] = STATE(66),
    [sym_update_statement_missing_argument] = STATE(66),
    [sym__update_statement] = STATE(66),
    [sym_delete_statement] = STATE(66),
    [sym_delete_statement_missing_argument] = STATE(66),
    [sym__delete_statement] = STATE(66),
    [sym_found] = STATE(70),
    [sym_unknown_name] = STATE(69),
    [sym_value] = STATE(124),
    [sym_equal] = STATE(36),
    [sym_sum] = STATE(36),
    [sym_subtract] = STATE(36),
    [sym_product] = STATE(36),
    [sym_divide] = STATE(36),
    [sym_operation] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_column_name] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_SELECT] = ACTIONS(56),
    [anon_sym_select] = ACTIONS(56),
    [anon_sym_FROM] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
  },
  [6] = {
    [sym_select_token] = STATE(65),
    [sym_from_token] = STATE(65),
    [sym_create_token] = STATE(65),
    [sym_update_token] = STATE(65),
    [sym_delete_token] = STATE(65),
    [sym__token] = STATE(65),
    [sym_found] = STATE(64),
    [sym_unknown_name] = STATE(65),
    [sym_value] = STATE(27),
    [sym_equal] = STATE(30),
    [sym_sum] = STATE(30),
    [sym_subtract] = STATE(30),
    [sym_product] = STATE(30),
    [sym_divide] = STATE(30),
    [sym_operation] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym__table_name] = STATE(56),
    [sym_table_name] = STATE(56),
    [sym_expected_table_name] = STATE(56),
    [sym_column_name] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_WHERE] = ACTIONS(62),
    [anon_sym_where] = ACTIONS(62),
    [anon_sym_FROM] = ACTIONS(64),
    [anon_sym_from] = ACTIONS(64),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_CONTENT] = ACTIONS(62),
    [anon_sym_content] = ACTIONS(62),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_null] = ACTIONS(72),
  },
  [7] = {
    [sym_select_token] = STATE(65),
    [sym_from_token] = STATE(65),
    [sym_create_token] = STATE(65),
    [sym_update_token] = STATE(65),
    [sym_delete_token] = STATE(65),
    [sym__token] = STATE(65),
    [sym_found] = STATE(64),
    [sym_unknown_name] = STATE(65),
    [sym_value] = STATE(27),
    [sym_equal] = STATE(30),
    [sym_sum] = STATE(30),
    [sym_subtract] = STATE(30),
    [sym_product] = STATE(30),
    [sym_divide] = STATE(30),
    [sym_operation] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym__table_name] = STATE(63),
    [sym_table_name] = STATE(63),
    [sym_expected_table_name] = STATE(63),
    [sym_column_name] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_WHERE] = ACTIONS(76),
    [anon_sym_where] = ACTIONS(76),
    [anon_sym_FROM] = ACTIONS(64),
    [anon_sym_from] = ACTIONS(64),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_CONTENT] = ACTIONS(76),
    [anon_sym_content] = ACTIONS(76),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_null] = ACTIONS(72),
  },
  [8] = {
    [sym_select_token] = STATE(65),
    [sym_from_token] = STATE(65),
    [sym_create_token] = STATE(65),
    [sym_update_token] = STATE(65),
    [sym_delete_token] = STATE(65),
    [sym__token] = STATE(65),
    [sym_found] = STATE(64),
    [sym_unknown_name] = STATE(65),
    [sym_value] = STATE(27),
    [sym_equal] = STATE(30),
    [sym_sum] = STATE(30),
    [sym_subtract] = STATE(30),
    [sym_product] = STATE(30),
    [sym_divide] = STATE(30),
    [sym_operation] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym__table_name] = STATE(62),
    [sym_table_name] = STATE(62),
    [sym_expected_table_name] = STATE(62),
    [sym_column_name] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_WHERE] = ACTIONS(80),
    [anon_sym_where] = ACTIONS(80),
    [anon_sym_FROM] = ACTIONS(64),
    [anon_sym_from] = ACTIONS(64),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_CONTENT] = ACTIONS(80),
    [anon_sym_content] = ACTIONS(80),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_null] = ACTIONS(72),
  },
  [9] = {
    [sym_select_token] = STATE(65),
    [sym_from_token] = STATE(65),
    [sym_create_token] = STATE(65),
    [sym_update_token] = STATE(65),
    [sym_delete_token] = STATE(65),
    [sym__token] = STATE(65),
    [sym_found] = STATE(64),
    [sym_unknown_name] = STATE(65),
    [sym_value] = STATE(27),
    [sym_equal] = STATE(30),
    [sym_sum] = STATE(30),
    [sym_subtract] = STATE(30),
    [sym_product] = STATE(30),
    [sym_divide] = STATE(30),
    [sym_operation] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym__table_name] = STATE(60),
    [sym_table_name] = STATE(60),
    [sym_expected_table_name] = STATE(60),
    [sym_column_name] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_WHERE] = ACTIONS(84),
    [anon_sym_where] = ACTIONS(84),
    [anon_sym_FROM] = ACTIONS(64),
    [anon_sym_from] = ACTIONS(64),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_CONTENT] = ACTIONS(84),
    [anon_sym_content] = ACTIONS(84),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_null] = ACTIONS(72),
  },
  [10] = {
    [sym_select_token] = STATE(108),
    [sym_from_token] = STATE(108),
    [sym_create_token] = STATE(108),
    [sym_update_token] = STATE(108),
    [sym_delete_token] = STATE(108),
    [sym__token] = STATE(108),
    [sym_found] = STATE(119),
    [sym_unknown_name] = STATE(108),
    [sym_value] = STATE(105),
    [sym_equal] = STATE(92),
    [sym_sum] = STATE(92),
    [sym_subtract] = STATE(92),
    [sym_product] = STATE(92),
    [sym_divide] = STATE(92),
    [sym_operation] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym__table_name] = STATE(109),
    [sym_table_name] = STATE(109),
    [sym_expected_table_name] = STATE(109),
    [sym_column_name] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_SELECT] = ACTIONS(86),
    [anon_sym_select] = ACTIONS(86),
    [anon_sym_WHERE] = ACTIONS(62),
    [anon_sym_where] = ACTIONS(62),
    [anon_sym_FROM] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_CREATE] = ACTIONS(90),
    [anon_sym_create] = ACTIONS(90),
    [anon_sym_CONTENT] = ACTIONS(62),
    [anon_sym_content] = ACTIONS(62),
    [anon_sym_UPDATE] = ACTIONS(92),
    [anon_sym_update] = ACTIONS(92),
    [anon_sym_DELETE] = ACTIONS(94),
    [anon_sym_delete] = ACTIONS(94),
    [aux_sym_unknown_name_token1] = ACTIONS(96),
    [sym_number] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_null] = ACTIONS(102),
  },
  [11] = {
    [sym_select_token] = STATE(108),
    [sym_from_token] = STATE(108),
    [sym_create_token] = STATE(108),
    [sym_update_token] = STATE(108),
    [sym_delete_token] = STATE(108),
    [sym__token] = STATE(108),
    [sym_found] = STATE(119),
    [sym_unknown_name] = STATE(108),
    [sym_value] = STATE(105),
    [sym_equal] = STATE(92),
    [sym_sum] = STATE(92),
    [sym_subtract] = STATE(92),
    [sym_product] = STATE(92),
    [sym_divide] = STATE(92),
    [sym_operation] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym__table_name] = STATE(118),
    [sym_table_name] = STATE(118),
    [sym_expected_table_name] = STATE(118),
    [sym_column_name] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_SELECT] = ACTIONS(86),
    [anon_sym_select] = ACTIONS(86),
    [anon_sym_WHERE] = ACTIONS(76),
    [anon_sym_where] = ACTIONS(76),
    [anon_sym_FROM] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_CREATE] = ACTIONS(90),
    [anon_sym_create] = ACTIONS(90),
    [anon_sym_CONTENT] = ACTIONS(76),
    [anon_sym_content] = ACTIONS(76),
    [anon_sym_UPDATE] = ACTIONS(92),
    [anon_sym_update] = ACTIONS(92),
    [anon_sym_DELETE] = ACTIONS(94),
    [anon_sym_delete] = ACTIONS(94),
    [aux_sym_unknown_name_token1] = ACTIONS(96),
    [sym_number] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_null] = ACTIONS(102),
  },
  [12] = {
    [sym_select_token] = STATE(108),
    [sym_from_token] = STATE(108),
    [sym_create_token] = STATE(108),
    [sym_update_token] = STATE(108),
    [sym_delete_token] = STATE(108),
    [sym__token] = STATE(108),
    [sym_found] = STATE(119),
    [sym_unknown_name] = STATE(108),
    [sym_value] = STATE(105),
    [sym_equal] = STATE(92),
    [sym_sum] = STATE(92),
    [sym_subtract] = STATE(92),
    [sym_product] = STATE(92),
    [sym_divide] = STATE(92),
    [sym_operation] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym__table_name] = STATE(116),
    [sym_table_name] = STATE(116),
    [sym_expected_table_name] = STATE(116),
    [sym_column_name] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SELECT] = ACTIONS(86),
    [anon_sym_select] = ACTIONS(86),
    [anon_sym_WHERE] = ACTIONS(80),
    [anon_sym_where] = ACTIONS(80),
    [anon_sym_FROM] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_CREATE] = ACTIONS(90),
    [anon_sym_create] = ACTIONS(90),
    [anon_sym_CONTENT] = ACTIONS(80),
    [anon_sym_content] = ACTIONS(80),
    [anon_sym_UPDATE] = ACTIONS(92),
    [anon_sym_update] = ACTIONS(92),
    [anon_sym_DELETE] = ACTIONS(94),
    [anon_sym_delete] = ACTIONS(94),
    [aux_sym_unknown_name_token1] = ACTIONS(96),
    [sym_number] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_null] = ACTIONS(102),
  },
  [13] = {
    [sym_select_token] = STATE(108),
    [sym_from_token] = STATE(108),
    [sym_create_token] = STATE(108),
    [sym_update_token] = STATE(108),
    [sym_delete_token] = STATE(108),
    [sym__token] = STATE(108),
    [sym_found] = STATE(119),
    [sym_unknown_name] = STATE(108),
    [sym_value] = STATE(105),
    [sym_equal] = STATE(92),
    [sym_sum] = STATE(92),
    [sym_subtract] = STATE(92),
    [sym_product] = STATE(92),
    [sym_divide] = STATE(92),
    [sym_operation] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym__table_name] = STATE(114),
    [sym_table_name] = STATE(114),
    [sym_expected_table_name] = STATE(114),
    [sym_column_name] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_SELECT] = ACTIONS(86),
    [anon_sym_select] = ACTIONS(86),
    [anon_sym_WHERE] = ACTIONS(84),
    [anon_sym_where] = ACTIONS(84),
    [anon_sym_FROM] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_CREATE] = ACTIONS(90),
    [anon_sym_create] = ACTIONS(90),
    [anon_sym_CONTENT] = ACTIONS(84),
    [anon_sym_content] = ACTIONS(84),
    [anon_sym_UPDATE] = ACTIONS(92),
    [anon_sym_update] = ACTIONS(92),
    [anon_sym_DELETE] = ACTIONS(94),
    [anon_sym_delete] = ACTIONS(94),
    [aux_sym_unknown_name_token1] = ACTIONS(96),
    [sym_number] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_null] = ACTIONS(102),
  },
  [14] = {
    [sym_select_token] = STATE(65),
    [sym_from_token] = STATE(65),
    [sym_create_token] = STATE(65),
    [sym_update_token] = STATE(65),
    [sym_delete_token] = STATE(65),
    [sym__token] = STATE(65),
    [sym_found] = STATE(61),
    [sym_unknown_name] = STATE(65),
    [sym__value] = STATE(55),
    [sym_expected_value] = STATE(55),
    [sym_value] = STATE(29),
    [sym_equal] = STATE(30),
    [sym_sum] = STATE(30),
    [sym_subtract] = STATE(30),
    [sym_product] = STATE(30),
    [sym_divide] = STATE(30),
    [sym_operation] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_column_name] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_WHERE] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_FROM] = ACTIONS(64),
    [anon_sym_from] = ACTIONS(64),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_CONTENT] = ACTIONS(106),
    [anon_sym_content] = ACTIONS(106),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(108),
    [sym_number] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_null] = ACTIONS(72),
  },
  [15] = {
    [sym_select_token] = STATE(65),
    [sym_from_token] = STATE(65),
    [sym_create_token] = STATE(65),
    [sym_update_token] = STATE(65),
    [sym_delete_token] = STATE(65),
    [sym__token] = STATE(65),
    [sym_found] = STATE(61),
    [sym_unknown_name] = STATE(65),
    [sym__value] = STATE(59),
    [sym_expected_value] = STATE(59),
    [sym_value] = STATE(29),
    [sym_equal] = STATE(30),
    [sym_sum] = STATE(30),
    [sym_subtract] = STATE(30),
    [sym_product] = STATE(30),
    [sym_divide] = STATE(30),
    [sym_operation] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_column_name] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_SELECT] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_WHERE] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
    [anon_sym_FROM] = ACTIONS(64),
    [anon_sym_from] = ACTIONS(64),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_create] = ACTIONS(9),
    [anon_sym_CONTENT] = ACTIONS(112),
    [anon_sym_content] = ACTIONS(112),
    [anon_sym_UPDATE] = ACTIONS(11),
    [anon_sym_update] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [aux_sym_unknown_name_token1] = ACTIONS(108),
    [sym_number] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_null] = ACTIONS(72),
  },
  [16] = {
    [sym_select_token] = STATE(108),
    [sym_from_token] = STATE(108),
    [sym_create_token] = STATE(108),
    [sym_update_token] = STATE(108),
    [sym_delete_token] = STATE(108),
    [sym__token] = STATE(108),
    [sym_found] = STATE(110),
    [sym_unknown_name] = STATE(108),
    [sym__value] = STATE(107),
    [sym_expected_value] = STATE(107),
    [sym_value] = STATE(104),
    [sym_equal] = STATE(92),
    [sym_sum] = STATE(92),
    [sym_subtract] = STATE(92),
    [sym_product] = STATE(92),
    [sym_divide] = STATE(92),
    [sym_operation] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_column_name] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_SELECT] = ACTIONS(86),
    [anon_sym_select] = ACTIONS(86),
    [anon_sym_WHERE] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_FROM] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_CREATE] = ACTIONS(90),
    [anon_sym_create] = ACTIONS(90),
    [anon_sym_CONTENT] = ACTIONS(106),
    [anon_sym_content] = ACTIONS(106),
    [anon_sym_UPDATE] = ACTIONS(92),
    [anon_sym_update] = ACTIONS(92),
    [anon_sym_DELETE] = ACTIONS(94),
    [anon_sym_delete] = ACTIONS(94),
    [aux_sym_unknown_name_token1] = ACTIONS(114),
    [sym_number] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_null] = ACTIONS(102),
  },
  [17] = {
    [sym_select_token] = STATE(108),
    [sym_from_token] = STATE(108),
    [sym_create_token] = STATE(108),
    [sym_update_token] = STATE(108),
    [sym_delete_token] = STATE(108),
    [sym__token] = STATE(108),
    [sym_found] = STATE(110),
    [sym_unknown_name] = STATE(108),
    [sym__value] = STATE(106),
    [sym_expected_value] = STATE(106),
    [sym_value] = STATE(104),
    [sym_equal] = STATE(92),
    [sym_sum] = STATE(92),
    [sym_subtract] = STATE(92),
    [sym_product] = STATE(92),
    [sym_divide] = STATE(92),
    [sym_operation] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_column_name] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_SELECT] = ACTIONS(86),
    [anon_sym_select] = ACTIONS(86),
    [anon_sym_WHERE] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
    [anon_sym_FROM] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_CREATE] = ACTIONS(90),
    [anon_sym_create] = ACTIONS(90),
    [anon_sym_CONTENT] = ACTIONS(112),
    [anon_sym_content] = ACTIONS(112),
    [anon_sym_UPDATE] = ACTIONS(92),
    [anon_sym_update] = ACTIONS(92),
    [anon_sym_DELETE] = ACTIONS(94),
    [anon_sym_delete] = ACTIONS(94),
    [aux_sym_unknown_name_token1] = ACTIONS(114),
    [sym_number] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_null] = ACTIONS(102),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    STATE(6), 1,
      sym_from_token,
    STATE(14), 1,
      sym_content_token,
    STATE(15), 1,
      sym_where_token,
    ACTIONS(120), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(123), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(126), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    ACTIONS(116), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    STATE(18), 11,
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
    ACTIONS(118), 12,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [54] = 8,
    STATE(6), 1,
      sym_from_token,
    STATE(14), 1,
      sym_content_token,
    STATE(15), 1,
      sym_where_token,
    ACTIONS(133), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(135), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    STATE(18), 11,
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
    ACTIONS(131), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [106] = 8,
    STATE(6), 1,
      sym_from_token,
    STATE(14), 1,
      sym_content_token,
    STATE(15), 1,
      sym_where_token,
    ACTIONS(133), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(135), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
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
    ACTIONS(139), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [158] = 9,
    ACTIONS(72), 1,
      sym_null,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(24), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(30), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    ACTIONS(143), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
  [207] = 2,
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(149), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [239] = 2,
    ACTIONS(151), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(153), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [270] = 7,
    ACTIONS(159), 1,
      anon_sym_EQ,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(157), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [311] = 3,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(147), 5,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(171), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [344] = 3,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(173), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      sym_number,
      sym_string,
    ACTIONS(175), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [377] = 7,
    ACTIONS(159), 1,
      anon_sym_EQ,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(179), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [418] = 2,
    ACTIONS(181), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(183), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [449] = 7,
    ACTIONS(159), 1,
      anon_sym_EQ,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(187), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [490] = 2,
    ACTIONS(189), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(191), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [521] = 2,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(149), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [552] = 2,
    ACTIONS(193), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(195), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [583] = 6,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(197), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(199), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [622] = 5,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(201), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      sym_number,
      sym_string,
    ACTIONS(203), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [659] = 4,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(205), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      sym_string,
    ACTIONS(207), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [694] = 2,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(191), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [722] = 2,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(183), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [750] = 2,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(153), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [778] = 2,
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(149), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [806] = 2,
    ACTIONS(193), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(195), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [834] = 2,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(211), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [861] = 3,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(173), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      sym_number,
      sym_string,
    ACTIONS(175), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [890] = 9,
    ACTIONS(102), 1,
      sym_null,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      aux_sym_unknown_name_token1,
    STATE(98), 1,
      sym_value,
    ACTIONS(98), 2,
      sym_number,
      sym_string,
    ACTIONS(100), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(92), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
    ACTIONS(143), 6,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [931] = 2,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(219), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [958] = 2,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(223), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [985] = 2,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(227), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1012] = 2,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(231), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1039] = 2,
    ACTIONS(233), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(235), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1066] = 7,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_EQ,
    ACTIONS(239), 1,
      anon_sym_PLUS,
    ACTIONS(241), 1,
      anon_sym_DASH,
    ACTIONS(243), 1,
      anon_sym_STAR,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(179), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1103] = 2,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
      sym_string,
    ACTIONS(149), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1130] = 6,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(239), 1,
      anon_sym_PLUS,
    ACTIONS(241), 1,
      anon_sym_DASH,
    ACTIONS(243), 1,
      anon_sym_STAR,
    ACTIONS(197), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(199), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1165] = 5,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(241), 1,
      anon_sym_DASH,
    ACTIONS(243), 1,
      anon_sym_STAR,
    ACTIONS(201), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      sym_number,
      sym_string,
    ACTIONS(203), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1198] = 4,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(243), 1,
      anon_sym_STAR,
    ACTIONS(205), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      sym_string,
    ACTIONS(207), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1229] = 8,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_from_token,
    STATE(16), 1,
      sym_content_token,
    STATE(17), 1,
      sym_where_token,
    ACTIONS(245), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(248), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(251), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    STATE(54), 11,
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
  [1267] = 2,
    ACTIONS(254), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(256), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1293] = 2,
    ACTIONS(258), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(260), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1319] = 8,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_from_token,
    STATE(16), 1,
      sym_content_token,
    STATE(17), 1,
      sym_where_token,
    ACTIONS(262), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(264), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(266), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    STATE(54), 11,
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
  [1357] = 2,
    ACTIONS(268), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(270), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1383] = 2,
    ACTIONS(272), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(274), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1409] = 2,
    ACTIONS(276), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(278), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1435] = 2,
    ACTIONS(280), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(282), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1461] = 2,
    ACTIONS(284), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(286), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1487] = 2,
    ACTIONS(288), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(290), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1513] = 2,
    ACTIONS(292), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(294), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1539] = 2,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(179), 18,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1565] = 8,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_from_token,
    STATE(16), 1,
      sym_content_token,
    STATE(17), 1,
      sym_where_token,
    ACTIONS(262), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(264), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(266), 2,
      anon_sym_CONTENT,
      anon_sym_content,
    STATE(57), 11,
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
  [1603] = 2,
    ACTIONS(233), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(235), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1626] = 2,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(139), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1649] = 2,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(179), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1672] = 2,
    ACTIONS(296), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_number,
      sym_string,
    ACTIONS(298), 14,
      anon_sym_SELECT,
      anon_sym_select,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CREATE,
      anon_sym_create,
      anon_sym_UPDATE,
      anon_sym_update,
      anon_sym_DELETE,
      anon_sym_delete,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [1695] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(122), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1725] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(300), 1,
      aux_sym_unknown_name_token1,
    STATE(42), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1755] = 7,
    ACTIONS(102), 1,
      sym_null,
    ACTIONS(215), 1,
      aux_sym_unknown_name_token1,
    STATE(100), 1,
      sym_value,
    ACTIONS(98), 2,
      sym_number,
      sym_string,
    ACTIONS(100), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(92), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1785] = 7,
    ACTIONS(102), 1,
      sym_null,
    ACTIONS(215), 1,
      aux_sym_unknown_name_token1,
    STATE(93), 1,
      sym_value,
    ACTIONS(98), 2,
      sym_number,
      sym_string,
    ACTIONS(100), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(92), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1815] = 7,
    ACTIONS(102), 1,
      sym_null,
    ACTIONS(215), 1,
      aux_sym_unknown_name_token1,
    STATE(94), 1,
      sym_value,
    ACTIONS(98), 2,
      sym_number,
      sym_string,
    ACTIONS(100), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(92), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1845] = 7,
    ACTIONS(102), 1,
      sym_null,
    ACTIONS(215), 1,
      aux_sym_unknown_name_token1,
    STATE(95), 1,
      sym_value,
    ACTIONS(98), 2,
      sym_number,
      sym_string,
    ACTIONS(100), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(92), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1875] = 7,
    ACTIONS(102), 1,
      sym_null,
    ACTIONS(215), 1,
      aux_sym_unknown_name_token1,
    STATE(96), 1,
      sym_value,
    ACTIONS(98), 2,
      sym_number,
      sym_string,
    ACTIONS(100), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(92), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1905] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(300), 1,
      aux_sym_unknown_name_token1,
    STATE(53), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1935] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(300), 1,
      aux_sym_unknown_name_token1,
    STATE(40), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1965] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(300), 1,
      aux_sym_unknown_name_token1,
    STATE(52), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [1995] = 7,
    ACTIONS(72), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(32), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(30), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2025] = 7,
    ACTIONS(72), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(26), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(30), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2055] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(123), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2085] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(300), 1,
      aux_sym_unknown_name_token1,
    STATE(51), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2115] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(121), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2145] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(120), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2175] = 7,
    ACTIONS(21), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(40), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(36), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2205] = 7,
    ACTIONS(72), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(35), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(30), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2235] = 7,
    ACTIONS(72), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(34), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(30), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2265] = 7,
    ACTIONS(72), 1,
      sym_null,
    ACTIONS(145), 1,
      aux_sym_unknown_name_token1,
    STATE(33), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(30), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [2295] = 2,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(270), 10,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      aux_sym_unknown_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null,
  [2313] = 1,
    ACTIONS(189), 12,
      ts_builtin_sym_end,
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
  [2328] = 2,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(173), 11,
      ts_builtin_sym_end,
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
  [2345] = 3,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_STAR,
    ACTIONS(205), 10,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2364] = 4,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_STAR,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(201), 9,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
  [2385] = 5,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_STAR,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
      anon_sym_EQ,
  [2408] = 1,
    ACTIONS(147), 12,
      ts_builtin_sym_end,
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
  [2423] = 6,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_STAR,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2448] = 2,
    ACTIONS(147), 5,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2465] = 1,
    ACTIONS(193), 12,
      ts_builtin_sym_end,
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
  [2480] = 1,
    ACTIONS(147), 12,
      ts_builtin_sym_end,
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
  [2495] = 1,
    ACTIONS(151), 12,
      ts_builtin_sym_end,
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
  [2510] = 1,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
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
  [2525] = 6,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_STAR,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2550] = 6,
    ACTIONS(302), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_STAR,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2575] = 1,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2585] = 1,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2595] = 1,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2605] = 1,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2615] = 1,
    ACTIONS(280), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2625] = 1,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2635] = 1,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2645] = 1,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2655] = 1,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2665] = 1,
    ACTIONS(268), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2675] = 1,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2685] = 1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2695] = 1,
    ACTIONS(288), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2705] = 1,
    ACTIONS(292), 7,
      ts_builtin_sym_end,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_CONTENT,
      anon_sym_content,
  [2715] = 2,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [2726] = 3,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2739] = 4,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(316), 1,
      anon_sym_DASH,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_PLUS,
  [2754] = 5,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(316), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_PLUS,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2771] = 6,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(316), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_PLUS,
    ACTIONS(320), 1,
      anon_sym_EQ,
  [2790] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [2794] = 1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
  [2798] = 1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 54,
  [SMALL_STATE(20)] = 106,
  [SMALL_STATE(21)] = 158,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 239,
  [SMALL_STATE(24)] = 270,
  [SMALL_STATE(25)] = 311,
  [SMALL_STATE(26)] = 344,
  [SMALL_STATE(27)] = 377,
  [SMALL_STATE(28)] = 418,
  [SMALL_STATE(29)] = 449,
  [SMALL_STATE(30)] = 490,
  [SMALL_STATE(31)] = 521,
  [SMALL_STATE(32)] = 552,
  [SMALL_STATE(33)] = 583,
  [SMALL_STATE(34)] = 622,
  [SMALL_STATE(35)] = 659,
  [SMALL_STATE(36)] = 694,
  [SMALL_STATE(37)] = 722,
  [SMALL_STATE(38)] = 750,
  [SMALL_STATE(39)] = 778,
  [SMALL_STATE(40)] = 806,
  [SMALL_STATE(41)] = 834,
  [SMALL_STATE(42)] = 861,
  [SMALL_STATE(43)] = 890,
  [SMALL_STATE(44)] = 931,
  [SMALL_STATE(45)] = 958,
  [SMALL_STATE(46)] = 985,
  [SMALL_STATE(47)] = 1012,
  [SMALL_STATE(48)] = 1039,
  [SMALL_STATE(49)] = 1066,
  [SMALL_STATE(50)] = 1103,
  [SMALL_STATE(51)] = 1130,
  [SMALL_STATE(52)] = 1165,
  [SMALL_STATE(53)] = 1198,
  [SMALL_STATE(54)] = 1229,
  [SMALL_STATE(55)] = 1267,
  [SMALL_STATE(56)] = 1293,
  [SMALL_STATE(57)] = 1319,
  [SMALL_STATE(58)] = 1357,
  [SMALL_STATE(59)] = 1383,
  [SMALL_STATE(60)] = 1409,
  [SMALL_STATE(61)] = 1435,
  [SMALL_STATE(62)] = 1461,
  [SMALL_STATE(63)] = 1487,
  [SMALL_STATE(64)] = 1513,
  [SMALL_STATE(65)] = 1539,
  [SMALL_STATE(66)] = 1565,
  [SMALL_STATE(67)] = 1603,
  [SMALL_STATE(68)] = 1626,
  [SMALL_STATE(69)] = 1649,
  [SMALL_STATE(70)] = 1672,
  [SMALL_STATE(71)] = 1695,
  [SMALL_STATE(72)] = 1725,
  [SMALL_STATE(73)] = 1755,
  [SMALL_STATE(74)] = 1785,
  [SMALL_STATE(75)] = 1815,
  [SMALL_STATE(76)] = 1845,
  [SMALL_STATE(77)] = 1875,
  [SMALL_STATE(78)] = 1905,
  [SMALL_STATE(79)] = 1935,
  [SMALL_STATE(80)] = 1965,
  [SMALL_STATE(81)] = 1995,
  [SMALL_STATE(82)] = 2025,
  [SMALL_STATE(83)] = 2055,
  [SMALL_STATE(84)] = 2085,
  [SMALL_STATE(85)] = 2115,
  [SMALL_STATE(86)] = 2145,
  [SMALL_STATE(87)] = 2175,
  [SMALL_STATE(88)] = 2205,
  [SMALL_STATE(89)] = 2235,
  [SMALL_STATE(90)] = 2265,
  [SMALL_STATE(91)] = 2295,
  [SMALL_STATE(92)] = 2313,
  [SMALL_STATE(93)] = 2328,
  [SMALL_STATE(94)] = 2345,
  [SMALL_STATE(95)] = 2364,
  [SMALL_STATE(96)] = 2385,
  [SMALL_STATE(97)] = 2408,
  [SMALL_STATE(98)] = 2423,
  [SMALL_STATE(99)] = 2448,
  [SMALL_STATE(100)] = 2465,
  [SMALL_STATE(101)] = 2480,
  [SMALL_STATE(102)] = 2495,
  [SMALL_STATE(103)] = 2510,
  [SMALL_STATE(104)] = 2525,
  [SMALL_STATE(105)] = 2550,
  [SMALL_STATE(106)] = 2575,
  [SMALL_STATE(107)] = 2585,
  [SMALL_STATE(108)] = 2595,
  [SMALL_STATE(109)] = 2605,
  [SMALL_STATE(110)] = 2615,
  [SMALL_STATE(111)] = 2625,
  [SMALL_STATE(112)] = 2635,
  [SMALL_STATE(113)] = 2645,
  [SMALL_STATE(114)] = 2655,
  [SMALL_STATE(115)] = 2665,
  [SMALL_STATE(116)] = 2675,
  [SMALL_STATE(117)] = 2685,
  [SMALL_STATE(118)] = 2695,
  [SMALL_STATE(119)] = 2705,
  [SMALL_STATE(120)] = 2715,
  [SMALL_STATE(121)] = 2726,
  [SMALL_STATE(122)] = 2739,
  [SMALL_STATE(123)] = 2754,
  [SMALL_STATE(124)] = 2771,
  [SMALL_STATE(125)] = 2790,
  [SMALL_STATE(126)] = 2794,
  [SMALL_STATE(127)] = 2798,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement_missing_argument, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_statement_missing_argument, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement_missing_argument, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_statement_missing_argument, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement_missing_argument, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement_missing_argument, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement_missing_argument, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_statement_missing_argument, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_statement_missing_argument, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_statement_missing_argument, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_statement_missing_argument, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_statement_missing_argument, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(41),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(48),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement_missing_argument, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement_missing_argument, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_name, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_found, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_found, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divide, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtract, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtract, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_token, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_token, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_token, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_token, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_token, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_token, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_token, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_token, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_token, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_token, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_token, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_token, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(41),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(48),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(47),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_statement, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_statement, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_statement, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_token, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_token, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_statement, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_statement, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_statement, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected_value, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expected_value, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_statement, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected_table_name, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expected_table_name, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected_statement, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expected_statement, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [322] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
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
