#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_FIELD = 13,
  anon_sym_field = 14,
  anon_sym_TABLE = 15,
  anon_sym_table = 16,
  anon_sym_ON = 17,
  anon_sym_on = 18,
  anon_sym_ON_TABLE = 19,
  anon_sym_on_table = 20,
  anon_sym_FROM = 21,
  anon_sym_from = 22,
  anon_sym_LET = 23,
  anon_sym_let = 24,
  anon_sym_EQ = 25,
  aux_sym_table_name_token1 = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_COLON = 29,
  anon_sym_COMMA = 30,
  sym_string = 31,
  sym_number = 32,
  sym_variable_name = 33,
  sym_source_file = 34,
  sym__statement = 35,
  sym_create_token = 36,
  sym_select_token = 37,
  sym_update_token = 38,
  sym_delete_token = 39,
  sym_content_token = 40,
  sym_define_token = 41,
  sym_field_token = 42,
  sym_table_token = 43,
  sym__on_token = 44,
  sym_on_table_token = 45,
  sym_from_token = 46,
  sym_let_token = 47,
  sym_define_statement = 48,
  sym_define_table_statement = 49,
  sym_define_field_statement = 50,
  sym_create_statement = 51,
  sym_select_statement = 52,
  sym_update_statement = 53,
  sym_delete_statement = 54,
  sym_let_statement = 55,
  sym_table_name = 56,
  sym_field_name = 57,
  sym_table_def = 58,
  sym_field_def = 59,
  sym_object = 60,
  sym_field = 61,
  sym_value = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_object_repeat1 = 64,
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
  [anon_sym_EQ] = "=",
  [aux_sym_table_name_token1] = "table_name_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_variable_name] = "variable_name",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_create_token] = "create_token",
  [sym_select_token] = "select_token",
  [sym_update_token] = "update_token",
  [sym_delete_token] = "delete_token",
  [sym_content_token] = "content_token",
  [sym_define_token] = "define_token",
  [sym_field_token] = "field_token",
  [sym_table_token] = "table_token",
  [sym__on_token] = "_on_token",
  [sym_on_table_token] = "on_table_token",
  [sym_from_token] = "from_token",
  [sym_let_token] = "let_token",
  [sym_define_statement] = "define_statement",
  [sym_define_table_statement] = "define_table_statement",
  [sym_define_field_statement] = "define_field_statement",
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
  [sym_value] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_CONTENT] = anon_sym_CONTENT,
  [anon_sym_content] = anon_sym_content,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_define] = anon_sym_define,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_table_name_token1] = aux_sym_table_name_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_variable_name] = sym_variable_name,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_create_token] = sym_create_token,
  [sym_select_token] = sym_select_token,
  [sym_update_token] = sym_update_token,
  [sym_delete_token] = sym_delete_token,
  [sym_content_token] = sym_content_token,
  [sym_define_token] = sym_define_token,
  [sym_field_token] = sym_field_token,
  [sym_table_token] = sym_table_token,
  [sym__on_token] = sym__on_token,
  [sym_on_table_token] = sym_on_table_token,
  [sym_from_token] = sym_from_token,
  [sym_let_token] = sym_let_token,
  [sym_define_statement] = sym_define_statement,
  [sym_define_table_statement] = sym_define_table_statement,
  [sym_define_field_statement] = sym_define_field_statement,
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
  [sym_value] = sym_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_name_token1] = {
    .visible = false,
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
  [anon_sym_COLON] = {
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
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == ',') ADVANCE(126);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == 'C') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'L') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'U') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '}') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'B') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(117);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(5);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 94:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_FIELD);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_TABLE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ON_TABLE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_on_table);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_table_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
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
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 94},
  [38] = {.lex_state = 94},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 94},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 94},
  [50] = {.lex_state = 94},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 94},
  [53] = {.lex_state = 94},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 94},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__statement] = STATE(3),
    [sym_create_token] = STATE(41),
    [sym_select_token] = STATE(40),
    [sym_update_token] = STATE(37),
    [sym_delete_token] = STATE(36),
    [sym_define_token] = STATE(17),
    [sym_let_token] = STATE(54),
    [sym_define_statement] = STATE(3),
    [sym_define_table_statement] = STATE(16),
    [sym_define_field_statement] = STATE(16),
    [sym_create_statement] = STATE(3),
    [sym_select_statement] = STATE(3),
    [sym_update_statement] = STATE(3),
    [sym_delete_statement] = STATE(3),
    [sym_let_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_LET] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_define_token,
    STATE(36), 1,
      sym_delete_token,
    STATE(37), 1,
      sym_update_token,
    STATE(40), 1,
      sym_select_token,
    STATE(41), 1,
      sym_create_token,
    STATE(54), 1,
      sym_let_token,
    ACTIONS(19), 2,
      anon_sym_CREATE,
      anon_sym_create,
    ACTIONS(22), 2,
      anon_sym_SELECT,
      anon_sym_select,
    ACTIONS(25), 2,
      anon_sym_UPDATE,
      anon_sym_update,
    ACTIONS(28), 2,
      anon_sym_DELETE,
      anon_sym_delete,
    ACTIONS(31), 2,
      anon_sym_DEFINE,
      anon_sym_define,
    ACTIONS(34), 2,
      anon_sym_LET,
      anon_sym_let,
    STATE(16), 2,
      sym_define_table_statement,
      sym_define_field_statement,
    STATE(2), 8,
      sym__statement,
      sym_define_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [60] = 15,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_define_token,
    STATE(36), 1,
      sym_delete_token,
    STATE(37), 1,
      sym_update_token,
    STATE(40), 1,
      sym_select_token,
    STATE(41), 1,
      sym_create_token,
    STATE(54), 1,
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
      anon_sym_LET,
      anon_sym_let,
    STATE(16), 2,
      sym_define_table_statement,
      sym_define_field_statement,
    STATE(2), 8,
      sym__statement,
      sym_define_statement,
      sym_create_statement,
      sym_select_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_let_statement,
      aux_sym_source_file_repeat1,
  [120] = 1,
    ACTIONS(39), 16,
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
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [139] = 1,
    ACTIONS(41), 16,
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
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [158] = 1,
    ACTIONS(43), 16,
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
      anon_sym_LET,
      anon_sym_let,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_string,
  [177] = 1,
    ACTIONS(45), 15,
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
      anon_sym_LET,
      anon_sym_let,
  [195] = 1,
    ACTIONS(47), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [211] = 1,
    ACTIONS(49), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [227] = 1,
    ACTIONS(51), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [243] = 1,
    ACTIONS(53), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [259] = 1,
    ACTIONS(55), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [275] = 1,
    ACTIONS(57), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [291] = 1,
    ACTIONS(59), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [307] = 1,
    ACTIONS(61), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [323] = 1,
    ACTIONS(63), 13,
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
      anon_sym_LET,
      anon_sym_let,
  [339] = 4,
    STATE(35), 1,
      sym_table_token,
    STATE(38), 1,
      sym_field_token,
    ACTIONS(65), 2,
      anon_sym_FIELD,
      anon_sym_field,
    ACTIONS(67), 2,
      anon_sym_TABLE,
      anon_sym_table,
  [354] = 4,
    STATE(31), 1,
      sym_on_table_token,
    STATE(43), 1,
      sym__on_token,
    ACTIONS(69), 2,
      anon_sym_ON,
      anon_sym_on,
    ACTIONS(71), 2,
      anon_sym_ON_TABLE,
      anon_sym_on_table,
  [369] = 4,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_object,
    STATE(9), 1,
      sym_value,
    ACTIONS(75), 2,
      sym_string,
      sym_number,
  [383] = 4,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_object,
    STATE(29), 1,
      sym_value,
    ACTIONS(75), 2,
      sym_string,
      sym_number,
  [397] = 1,
    ACTIONS(77), 4,
      anon_sym_FIELD,
      anon_sym_field,
      anon_sym_TABLE,
      anon_sym_table,
  [404] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym_string,
    STATE(25), 2,
      sym_field,
      aux_sym_object_repeat1,
  [415] = 2,
    ACTIONS(83), 2,
      anon_sym_ON,
      anon_sym_on,
    ACTIONS(85), 2,
      anon_sym_ON_TABLE,
      anon_sym_on_table,
  [424] = 3,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      sym_string,
    STATE(24), 2,
      sym_field,
      aux_sym_object_repeat1,
  [435] = 3,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_field,
      aux_sym_object_repeat1,
  [446] = 2,
    STATE(30), 1,
      sym_content_token,
    ACTIONS(94), 2,
      anon_sym_CONTENT,
      anon_sym_content,
  [454] = 2,
    STATE(32), 1,
      sym_from_token,
    ACTIONS(96), 2,
      anon_sym_FROM,
      anon_sym_from,
  [462] = 2,
    STATE(33), 1,
      sym_content_token,
    ACTIONS(94), 2,
      anon_sym_CONTENT,
      anon_sym_content,
  [470] = 2,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      sym_string,
  [478] = 2,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_object,
  [485] = 2,
    ACTIONS(102), 1,
      aux_sym_table_name_token1,
    STATE(8), 1,
      sym_table_def,
  [492] = 2,
    ACTIONS(104), 1,
      aux_sym_table_name_token1,
    STATE(11), 1,
      sym_table_name,
  [499] = 2,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_object,
  [506] = 1,
    ACTIONS(106), 2,
      anon_sym_FROM,
      anon_sym_from,
  [511] = 2,
    ACTIONS(102), 1,
      aux_sym_table_name_token1,
    STATE(13), 1,
      sym_table_def,
  [518] = 2,
    ACTIONS(104), 1,
      aux_sym_table_name_token1,
    STATE(15), 1,
      sym_table_name,
  [525] = 2,
    ACTIONS(104), 1,
      aux_sym_table_name_token1,
    STATE(28), 1,
      sym_table_name,
  [532] = 2,
    ACTIONS(108), 1,
      aux_sym_table_name_token1,
    STATE(18), 1,
      sym_field_def,
  [539] = 1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      sym_string,
  [544] = 2,
    ACTIONS(112), 1,
      aux_sym_table_name_token1,
    STATE(27), 1,
      sym_field_name,
  [551] = 2,
    ACTIONS(104), 1,
      aux_sym_table_name_token1,
    STATE(26), 1,
      sym_table_name,
  [558] = 1,
    ACTIONS(114), 1,
      anon_sym_EQ,
  [562] = 1,
    ACTIONS(116), 1,
      aux_sym_table_name_token1,
  [566] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [570] = 1,
    ACTIONS(120), 1,
      sym_variable_name,
  [574] = 1,
    ACTIONS(122), 1,
      aux_sym_table_name_token1,
  [578] = 1,
    ACTIONS(124), 1,
      aux_sym_table_name_token1,
  [582] = 1,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [586] = 1,
    ACTIONS(128), 1,
      aux_sym_table_name_token1,
  [590] = 1,
    ACTIONS(130), 1,
      aux_sym_table_name_token1,
  [594] = 1,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
  [598] = 1,
    ACTIONS(134), 1,
      aux_sym_table_name_token1,
  [602] = 1,
    ACTIONS(136), 1,
      aux_sym_table_name_token1,
  [606] = 1,
    ACTIONS(138), 1,
      sym_variable_name,
  [610] = 1,
    ACTIONS(140), 1,
      aux_sym_table_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 259,
  [SMALL_STATE(13)] = 275,
  [SMALL_STATE(14)] = 291,
  [SMALL_STATE(15)] = 307,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 339,
  [SMALL_STATE(18)] = 354,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 383,
  [SMALL_STATE(21)] = 397,
  [SMALL_STATE(22)] = 404,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 454,
  [SMALL_STATE(28)] = 462,
  [SMALL_STATE(29)] = 470,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 485,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 499,
  [SMALL_STATE(34)] = 506,
  [SMALL_STATE(35)] = 511,
  [SMALL_STATE(36)] = 518,
  [SMALL_STATE(37)] = 525,
  [SMALL_STATE(38)] = 532,
  [SMALL_STATE(39)] = 539,
  [SMALL_STATE(40)] = 544,
  [SMALL_STATE(41)] = 551,
  [SMALL_STATE(42)] = 558,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 566,
  [SMALL_STATE(45)] = 570,
  [SMALL_STATE(46)] = 574,
  [SMALL_STATE(47)] = 578,
  [SMALL_STATE(48)] = 582,
  [SMALL_STATE(49)] = 586,
  [SMALL_STATE(50)] = 590,
  [SMALL_STATE(51)] = 594,
  [SMALL_STATE(52)] = 598,
  [SMALL_STATE(53)] = 602,
  [SMALL_STATE(54)] = 606,
  [SMALL_STATE(55)] = 610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_field_statement, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_table_statement, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_def, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_token, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_def, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(48),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_table_token, 1),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_token, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_token, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_token, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_token, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_token, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_token, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_token, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_token, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_token, 1),
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
