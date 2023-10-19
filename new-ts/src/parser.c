#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_select = 2,
  sym_from = 3,
  sym_where = 4,
  sym_create = 5,
  sym_update = 6,
  sym_delete = 7,
  sym_content = 8,
  anon_sym_EQ = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  sym_number = 14,
  sym_string = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  sym_null = 18,
  aux_sym_table_name_token1 = 19,
  sym_source_file = 20,
  sym_statement = 21,
  sym__statement_start = 22,
  sym__statement_param = 23,
  sym_select_part = 24,
  sym_from_part = 25,
  sym_where_part = 26,
  sym_create_part = 27,
  sym_update_part = 28,
  sym_delete_part = 29,
  sym_content_part = 30,
  sym_value = 31,
  sym_equal = 32,
  sym_sum = 33,
  sym_subtract = 34,
  sym_product = 35,
  sym_divide = 36,
  sym_operation = 37,
  sym_boolean = 38,
  sym_table_name = 39,
  sym_column_name = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_statement_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_select] = "select",
  [sym_from] = "from",
  [sym_where] = "where",
  [sym_create] = "create",
  [sym_update] = "update",
  [sym_delete] = "delete",
  [sym_content] = "content",
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
  [aux_sym_table_name_token1] = "table_name_token1",
  [sym_source_file] = "source_file",
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
  [sym_table_name] = "table_name",
  [sym_column_name] = "column_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_select] = sym_select,
  [sym_from] = sym_from,
  [sym_where] = sym_where,
  [sym_create] = sym_create,
  [sym_update] = sym_update,
  [sym_delete] = sym_delete,
  [sym_content] = sym_content,
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
  [aux_sym_table_name_token1] = aux_sym_table_name_token1,
  [sym_source_file] = sym_source_file,
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
  [sym_table_name] = sym_table_name,
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
  [aux_sym_table_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_create);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_update);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_delete);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_content);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'a') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'h') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'm') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 's') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (lookahead == 'u') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
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
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_select] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_where] = ACTIONS(1),
    [sym_create] = ACTIONS(1),
    [sym_update] = ACTIONS(1),
    [sym_delete] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
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
    [sym_source_file] = STATE(38),
    [sym_statement] = STATE(9),
    [sym__statement_start] = STATE(24),
    [sym_select_part] = STATE(24),
    [sym_create_part] = STATE(24),
    [sym_update_part] = STATE(24),
    [sym_delete_part] = STATE(24),
    [sym_content_part] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_select] = ACTIONS(5),
    [sym_create] = ACTIONS(7),
    [sym_update] = ACTIONS(9),
    [sym_delete] = ACTIONS(11),
    [sym_content] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      sym_null,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    STATE(18), 1,
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
    STATE(16), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(19), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [38] = 9,
    ACTIONS(23), 1,
      sym_null,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 3,
      sym_from,
      sym_where,
      sym_content,
    STATE(16), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(19), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [76] = 7,
    ACTIONS(23), 1,
      sym_null,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    STATE(13), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(19), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [106] = 7,
    ACTIONS(23), 1,
      sym_null,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    STATE(14), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(19), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [136] = 7,
    ACTIONS(23), 1,
      sym_null,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    STATE(23), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(19), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [166] = 7,
    ACTIONS(23), 1,
      sym_null,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    STATE(20), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(19), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [196] = 7,
    ACTIONS(23), 1,
      sym_null,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    STATE(21), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_operation,
      sym_boolean,
      sym_column_name,
    STATE(19), 5,
      sym_equal,
      sym_sum,
      sym_subtract,
      sym_product,
      sym_divide,
  [226] = 8,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(24), 6,
      sym__statement_start,
      sym_select_part,
      sym_create_part,
      sym_update_part,
      sym_delete_part,
      sym_content_part,
  [257] = 8,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_select,
    ACTIONS(38), 1,
      sym_create,
    ACTIONS(41), 1,
      sym_update,
    ACTIONS(44), 1,
      sym_delete,
    ACTIONS(47), 1,
      sym_content,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(24), 6,
      sym__statement_start,
      sym_select_part,
      sym_create_part,
      sym_update_part,
      sym_delete_part,
      sym_content_part,
  [288] = 1,
    ACTIONS(50), 9,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [300] = 6,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      anon_sym_STAR,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(52), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [322] = 1,
    ACTIONS(64), 9,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [334] = 2,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 8,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [348] = 5,
    ACTIONS(13), 1,
      sym_content,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      sym_from,
    ACTIONS(72), 1,
      sym_where,
    STATE(22), 5,
      sym__statement_param,
      sym_from_part,
      sym_where_part,
      sym_content_part,
      aux_sym_statement_repeat1,
  [368] = 1,
    ACTIONS(74), 9,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [380] = 1,
    ACTIONS(76), 9,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [392] = 6,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      anon_sym_STAR,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(78), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [414] = 1,
    ACTIONS(80), 9,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [426] = 4,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      anon_sym_STAR,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(82), 6,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
  [444] = 5,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      anon_sym_STAR,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(84), 5,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
  [464] = 5,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      sym_from,
    ACTIONS(91), 1,
      sym_where,
    ACTIONS(94), 1,
      sym_content,
    STATE(22), 5,
      sym__statement_param,
      sym_from_part,
      sym_where_part,
      sym_content_part,
      aux_sym_statement_repeat1,
  [484] = 3,
    ACTIONS(60), 1,
      anon_sym_STAR,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(97), 7,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [500] = 5,
    ACTIONS(13), 1,
      sym_content,
    ACTIONS(70), 1,
      sym_from,
    ACTIONS(72), 1,
      sym_where,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(15), 5,
      sym__statement_param,
      sym_from_part,
      sym_where_part,
      sym_content_part,
      aux_sym_statement_repeat1,
  [520] = 4,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      aux_sym_table_name_token1,
    STATE(32), 1,
      sym_table_name,
    ACTIONS(103), 3,
      sym_from,
      sym_where,
      sym_content,
  [535] = 4,
    ACTIONS(105), 1,
      aux_sym_table_name_token1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_table_name,
    ACTIONS(109), 3,
      sym_from,
      sym_where,
      sym_content,
  [550] = 4,
    ACTIONS(105), 1,
      aux_sym_table_name_token1,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_table_name,
    ACTIONS(113), 3,
      sym_from,
      sym_where,
      sym_content,
  [565] = 4,
    ACTIONS(105), 1,
      aux_sym_table_name_token1,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_table_name,
    ACTIONS(117), 3,
      sym_from,
      sym_where,
      sym_content,
  [580] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      sym_select,
      sym_create,
      sym_update,
      sym_delete,
      sym_content,
  [589] = 4,
    ACTIONS(25), 1,
      aux_sym_table_name_token1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_column_name,
    ACTIONS(123), 3,
      sym_from,
      sym_where,
      sym_content,
  [604] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_select,
      sym_create,
      sym_update,
      sym_delete,
      sym_content,
  [613] = 1,
    ACTIONS(127), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [620] = 1,
    ACTIONS(129), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [627] = 1,
    ACTIONS(131), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [634] = 1,
    ACTIONS(133), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [641] = 1,
    ACTIONS(135), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [648] = 1,
    ACTIONS(137), 4,
      anon_sym_SEMI,
      sym_from,
      sym_where,
      sym_content,
  [655] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 322,
  [SMALL_STATE(14)] = 334,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 380,
  [SMALL_STATE(18)] = 392,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 426,
  [SMALL_STATE(21)] = 444,
  [SMALL_STATE(22)] = 464,
  [SMALL_STATE(23)] = 484,
  [SMALL_STATE(24)] = 500,
  [SMALL_STATE(25)] = 520,
  [SMALL_STATE(26)] = 535,
  [SMALL_STATE(27)] = 550,
  [SMALL_STATE(28)] = 565,
  [SMALL_STATE(29)] = 580,
  [SMALL_STATE(30)] = 589,
  [SMALL_STATE(31)] = 604,
  [SMALL_STATE(32)] = 613,
  [SMALL_STATE(33)] = 620,
  [SMALL_STATE(34)] = 627,
  [SMALL_STATE(35)] = 634,
  [SMALL_STATE(36)] = 641,
  [SMALL_STATE(37)] = 648,
  [SMALL_STATE(38)] = 655,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_part, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_part, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_part, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_part, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(25),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(3),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtract, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_part, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_part, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_part, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_part, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_part, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_part, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_part, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_part, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_part, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_part, 2),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
