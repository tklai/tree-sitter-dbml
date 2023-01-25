#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum {
  sym_identifier = 1,
  sym_number = 2,
  sym_word = 3,
  aux_sym_text_token1 = 4,
  anon_sym_SLASH_SLASH = 5,
  sym__line_break = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  anon_sym_COLON = 10,
  anon_sym_Table = 11,
  anon_sym_as = 12,
  anon_sym_TableGroup = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_Enum = 18,
  sym_source_file = 19,
  sym_text = 20,
  sym_comment = 21,
  sym__definition = 22,
  sym_modifiers = 23,
  sym_modifier = 24,
  sym_column_definition = 25,
  sym_table_definition = 26,
  sym_table_group_definition = 27,
  sym_table_group_block = 28,
  sym_data_type = 29,
  sym_enum_definition = 30,
  sym_enum_block = 31,
  sym_block = 32,
  sym__statement = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_modifiers_repeat1 = 35,
  aux_sym_table_group_block_repeat1 = 36,
  aux_sym_enum_block_repeat1 = 37,
  aux_sym_block_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_word] = "word",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [sym__line_break] = "_line_break",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_Table] = "Table",
  [anon_sym_as] = "as",
  [anon_sym_TableGroup] = "TableGroup",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Enum] = "Enum",
  [sym_source_file] = "source_file",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym__definition] = "_definition",
  [sym_modifiers] = "modifiers",
  [sym_modifier] = "modifier",
  [sym_column_definition] = "column_definition",
  [sym_table_definition] = "table_definition",
  [sym_table_group_definition] = "table_group_definition",
  [sym_table_group_block] = "table_group_block",
  [sym_data_type] = "data_type",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_block] = "enum_block",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_table_group_block_repeat1] = "table_group_block_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_word] = sym_word,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym__line_break] = sym__line_break,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Enum] = anon_sym_Enum,
  [sym_source_file] = sym_source_file,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym__definition] = sym__definition,
  [sym_modifiers] = sym_modifiers,
  [sym_modifier] = sym_modifier,
  [sym_column_definition] = sym_column_definition,
  [sym_table_definition] = sym_table_definition,
  [sym_table_group_definition] = sym_table_group_definition,
  [sym_table_group_block] = sym_table_group_block,
  [sym_data_type] = sym_data_type,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_block] = sym_enum_block,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_table_group_block_repeat1] = aux_sym_table_group_block_repeat1,
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
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
  [anon_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableGroup] = {
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
  [anon_sym_Enum] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_group_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_group_block] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_group_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_column_name = 2,
  field_constant = 3,
  field_data_type = 4,
  field_definition_block = 5,
  field_enum_name = 6,
  field_modifier = 7,
  field_modifiers = 8,
  field_name = 9,
  field_table_name = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_column_name] = "column_name",
  [field_constant] = "constant",
  [field_data_type] = "data_type",
  [field_definition_block] = "definition_block",
  [field_enum_name] = "enum_name",
  [field_modifier] = "modifier",
  [field_modifiers] = "modifiers",
  [field_name] = "name",
  [field_table_name] = "table_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_definition_block, 2},
    {field_name, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_enum_name, 1},
  [4] =
    {field_table_name, 0},
  [5] =
    {field_constant, 0},
  [6] =
    {field_alias, 3},
    {field_definition_block, 4},
    {field_name, 1},
  [9] =
    {field_table_name, 1, .inherited = true},
  [10] =
    {field_table_name, 0, .inherited = true},
    {field_table_name, 1, .inherited = true},
  [12] =
    {field_constant, 1, .inherited = true},
  [13] =
    {field_constant, 0, .inherited = true},
    {field_constant, 1, .inherited = true},
  [15] =
    {field_column_name, 0},
    {field_data_type, 1},
  [17] =
    {field_name, 0},
  [18] =
    {field_column_name, 0},
    {field_data_type, 1},
    {field_modifiers, 2},
  [21] =
    {field_modifier, 1},
  [22] =
    {field_name, 0},
    {field_value, 2},
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
  [63] = 54,
  [64] = 46,
  [65] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(15);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Enum);
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
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 3},
  [64] = {(TSStateId)(-1)},
  [65] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym_comment] = STATE(1),
    [sym__definition] = STATE(12),
    [sym_table_definition] = STATE(13),
    [sym_table_group_definition] = STATE(13),
    [sym_enum_definition] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_Table] = ACTIONS(7),
    [anon_sym_TableGroup] = ACTIONS(9),
    [anon_sym_Enum] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_Table,
    ACTIONS(18), 1,
      anon_sym_TableGroup,
    ACTIONS(21), 1,
      anon_sym_Enum,
    STATE(12), 1,
      sym__definition,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(13), 3,
      sym_table_definition,
      sym_table_group_definition,
      sym_enum_definition,
  [28] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_Table,
    ACTIONS(9), 1,
      anon_sym_TableGroup,
    ACTIONS(11), 1,
      anon_sym_Enum,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(12), 1,
      sym__definition,
    STATE(13), 3,
      sym_table_definition,
      sym_table_group_definition,
      sym_enum_definition,
  [58] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(26), 1,
      sym_word,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(30), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_modifiers_repeat1,
    STATE(32), 1,
      sym_modifier,
  [80] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym__statement,
    STATE(39), 1,
      sym_column_definition,
    STATE(5), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [100] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(37), 1,
      sym__statement,
    STATE(39), 1,
      sym_column_definition,
  [122] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_word,
    STATE(32), 1,
      sym_modifier,
    ACTIONS(44), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(7), 2,
      sym_comment,
      aux_sym_modifiers_repeat1,
  [140] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(26), 1,
      sym_word,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_modifiers_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(32), 1,
      sym_modifier,
  [162] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(37), 1,
      sym__statement,
    STATE(39), 1,
      sym_column_definition,
  [184] = 6,
    ACTIONS(52), 1,
      aux_sym_text_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_enum_block_repeat1,
    STATE(38), 1,
      sym_text,
  [203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_Table,
    STATE(11), 1,
      sym_comment,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_Table,
    STATE(12), 1,
      sym_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_Table,
    STATE(13), 1,
      sym_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [248] = 5,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_text,
    STATE(14), 2,
      sym_comment,
      aux_sym_enum_block_repeat1,
  [265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_Table,
    STATE(15), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [280] = 5,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      aux_sym_text_token1,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_text,
    STATE(16), 2,
      sym_comment,
      aux_sym_table_group_block_repeat1,
  [297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 1,
      anon_sym_Table,
    STATE(17), 1,
      sym_comment,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 1,
      anon_sym_Table,
    STATE(18), 1,
      sym_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 1,
      anon_sym_Table,
    STATE(19), 1,
      sym_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [342] = 6,
    ACTIONS(52), 1,
      aux_sym_text_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_table_group_block_repeat1,
    STATE(35), 1,
      sym_text,
  [361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      anon_sym_Table,
    STATE(21), 1,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [376] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_COLON,
    STATE(22), 1,
      sym_comment,
    ACTIONS(102), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 1,
      anon_sym_Table,
    STATE(23), 1,
      sym_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 1,
      anon_sym_Table,
    STATE(24), 1,
      sym_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [421] = 6,
    ACTIONS(52), 1,
      aux_sym_text_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_enum_block_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(38), 1,
      sym_text,
  [440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 1,
      anon_sym_Table,
    STATE(26), 1,
      sym_comment,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_Table,
    STATE(27), 1,
      sym_comment,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [470] = 6,
    ACTIONS(52), 1,
      aux_sym_text_token1,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_table_group_block_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(35), 1,
      sym_text,
  [489] = 5,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 1,
      sym__line_break,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(48), 1,
      sym_modifiers,
  [505] = 5,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      sym__line_break,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_comment,
  [521] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_comment,
    ACTIONS(136), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [533] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_comment,
    ACTIONS(138), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [545] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_as,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    STATE(33), 1,
      sym_comment,
  [561] = 4,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_text_token1,
    STATE(34), 1,
      sym_comment,
    STATE(65), 1,
      sym_text,
  [574] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(146), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [585] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(148), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [596] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [607] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(152), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [618] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(154), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(29), 1,
      sym_data_type,
    STATE(40), 1,
      sym_comment,
  [642] = 4,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      sym__line_break,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_comment,
  [655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    STATE(42), 1,
      sym_comment,
  [668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_enum_block,
    STATE(43), 1,
      sym_comment,
  [681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_table_group_block,
    STATE(44), 1,
      sym_comment,
  [694] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [705] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(168), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [716] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(170), 1,
      sym_word,
    STATE(47), 1,
      sym_comment,
  [726] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      sym__line_break,
    STATE(48), 1,
      sym_comment,
  [736] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_comment,
  [746] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(176), 1,
      sym_number,
    STATE(50), 1,
      sym_comment,
  [756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_comment,
  [766] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 1,
      sym__line_break,
    STATE(52), 1,
      sym_comment,
  [776] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(53), 1,
      sym_comment,
  [786] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 1,
      sym__line_break,
    STATE(54), 1,
      sym_comment,
  [796] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      sym_word,
    STATE(55), 1,
      sym_comment,
  [806] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 1,
      sym__line_break,
    STATE(56), 1,
      sym_comment,
  [816] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym_comment,
  [826] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(58), 1,
      sym_comment,
  [836] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
  [846] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
  [856] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      sym__line_break,
    STATE(61), 1,
      sym_comment,
  [866] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(62), 1,
      sym_comment,
  [876] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(202), 1,
      sym__line_break,
    STATE(63), 1,
      sym_comment,
  [886] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [890] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 297,
  [SMALL_STATE(18)] = 312,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 361,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 391,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 440,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 470,
  [SMALL_STATE(29)] = 489,
  [SMALL_STATE(30)] = 505,
  [SMALL_STATE(31)] = 521,
  [SMALL_STATE(32)] = 533,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 561,
  [SMALL_STATE(35)] = 574,
  [SMALL_STATE(36)] = 585,
  [SMALL_STATE(37)] = 596,
  [SMALL_STATE(38)] = 607,
  [SMALL_STATE(39)] = 618,
  [SMALL_STATE(40)] = 629,
  [SMALL_STATE(41)] = 642,
  [SMALL_STATE(42)] = 655,
  [SMALL_STATE(43)] = 668,
  [SMALL_STATE(44)] = 681,
  [SMALL_STATE(45)] = 694,
  [SMALL_STATE(46)] = 705,
  [SMALL_STATE(47)] = 716,
  [SMALL_STATE(48)] = 726,
  [SMALL_STATE(49)] = 736,
  [SMALL_STATE(50)] = 746,
  [SMALL_STATE(51)] = 756,
  [SMALL_STATE(52)] = 766,
  [SMALL_STATE(53)] = 776,
  [SMALL_STATE(54)] = 786,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 806,
  [SMALL_STATE(57)] = 816,
  [SMALL_STATE(58)] = 826,
  [SMALL_STATE(59)] = 836,
  [SMALL_STATE(60)] = 846,
  [SMALL_STATE(61)] = 856,
  [SMALL_STATE(62)] = 866,
  [SMALL_STATE(63)] = 876,
  [SMALL_STATE(64)] = 886,
  [SMALL_STATE(65)] = 890,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(22),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(63),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, .production_id = 9),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 3, .production_id = 9),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 8), SHIFT_REPEAT(63),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 3, .production_id = 7),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 3, .production_id = 7),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 3, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 3, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, .production_id = 12),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3, .production_id = 15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 1, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 13),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 1, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 11),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3, .production_id = 14),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 4, .production_id = 14),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dbml(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
