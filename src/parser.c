#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 15

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
  anon_sym_TableGroup = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_Enum = 17,
  sym_source_file = 18,
  sym_text = 19,
  sym_comment = 20,
  sym__definition = 21,
  sym_modifiers = 22,
  sym_modifier = 23,
  sym_column_definition = 24,
  sym_table_definition = 25,
  sym_table_group_definition = 26,
  sym_table_group_block = 27,
  sym_data_type = 28,
  sym_enum_definition = 29,
  sym_enum_block = 30,
  sym_block = 31,
  sym__statement = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_modifiers_repeat1 = 34,
  aux_sym_table_group_block_repeat1 = 35,
  aux_sym_enum_block_repeat1 = 36,
  aux_sym_block_repeat1 = 37,
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
  field_column_name = 1,
  field_constant = 2,
  field_data_type = 3,
  field_definition_block = 4,
  field_enum_name = 5,
  field_modifier = 6,
  field_modifiers = 7,
  field_name = 8,
  field_table_name = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 2},
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
    {field_table_name, 1, .inherited = true},
  [7] =
    {field_table_name, 0, .inherited = true},
    {field_table_name, 1, .inherited = true},
  [9] =
    {field_constant, 1, .inherited = true},
  [10] =
    {field_constant, 0, .inherited = true},
    {field_constant, 1, .inherited = true},
  [12] =
    {field_column_name, 0},
    {field_data_type, 1},
  [14] =
    {field_name, 0},
  [15] =
    {field_column_name, 0},
    {field_data_type, 1},
    {field_modifiers, 2},
  [18] =
    {field_modifier, 1},
  [19] =
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
  [60] = 45,
  [61] = 39,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(16);
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
          lookahead != '\n') ADVANCE(27);
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
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 3},
  [61] = {(TSStateId)(-1)},
  [62] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_comment] = STATE(1),
    [sym__definition] = STATE(17),
    [sym_table_definition] = STATE(21),
    [sym_table_group_definition] = STATE(21),
    [sym_enum_definition] = STATE(21),
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
    STATE(17), 1,
      sym__definition,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(21), 3,
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
    STATE(17), 1,
      sym__definition,
    STATE(21), 3,
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
    STATE(7), 1,
      aux_sym_modifiers_repeat1,
    STATE(28), 1,
      sym_modifier,
  [80] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_block_repeat1,
    STATE(36), 1,
      sym__statement,
    STATE(37), 1,
      sym_column_definition,
  [102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      sym_word,
    STATE(28), 1,
      sym_modifier,
    ACTIONS(39), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(6), 2,
      sym_comment,
      aux_sym_modifiers_repeat1,
  [120] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(26), 1,
      sym_word,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_modifiers_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(28), 1,
      sym_modifier,
  [142] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym__statement,
    STATE(37), 1,
      sym_column_definition,
    STATE(8), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [162] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(36), 1,
      sym__statement,
    STATE(37), 1,
      sym_column_definition,
  [184] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(54), 1,
      anon_sym_Table,
    STATE(10), 1,
      sym_comment,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [199] = 6,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_enum_block_repeat1,
    STATE(33), 1,
      sym_text,
  [218] = 5,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(62), 1,
      aux_sym_text_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_text,
    STATE(12), 2,
      sym_comment,
      aux_sym_enum_block_repeat1,
  [235] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 1,
      anon_sym_Table,
    STATE(13), 1,
      sym_comment,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [250] = 5,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_text,
    STATE(14), 2,
      sym_comment,
      aux_sym_table_group_block_repeat1,
  [267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_Table,
    STATE(15), 1,
      sym_comment,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [282] = 6,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_enum_block_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(33), 1,
      sym_text,
  [301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 1,
      anon_sym_Table,
    STATE(17), 1,
      sym_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(88), 1,
      anon_sym_Table,
    STATE(18), 1,
      sym_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [331] = 6,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_table_group_block_repeat1,
    STATE(35), 1,
      sym_text,
  [350] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 1,
      anon_sym_Table,
    STATE(20), 1,
      sym_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [365] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      anon_sym_Table,
    STATE(21), 1,
      sym_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [380] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_Table,
    STATE(22), 1,
      sym_comment,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_COLON,
    STATE(23), 1,
      sym_comment,
    ACTIONS(104), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [410] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_Table,
    STATE(24), 1,
      sym_comment,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(114), 1,
      anon_sym_Table,
    STATE(25), 1,
      sym_comment,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [440] = 6,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_table_group_block_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(35), 1,
      sym_text,
  [459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 1,
      anon_sym_Table,
    STATE(27), 1,
      sym_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [474] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_comment,
    ACTIONS(122), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [486] = 5,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      sym__line_break,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_comment,
  [502] = 5,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      sym__line_break,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(46), 1,
      sym_modifiers,
  [518] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_comment,
    ACTIONS(134), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_enum_block,
    STATE(32), 1,
      sym_comment,
  [543] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(138), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [554] = 4,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_text_token1,
    STATE(34), 1,
      sym_comment,
    STATE(62), 1,
      sym_text,
  [567] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(142), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [578] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [589] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(146), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [600] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(30), 1,
      sym_data_type,
    STATE(38), 1,
      sym_comment,
  [613] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(150), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_table_group_block,
    STATE(40), 1,
      sym_comment,
  [637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    STATE(41), 1,
      sym_comment,
  [650] = 4,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      sym__line_break,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
  [663] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(43), 1,
      sym_comment,
    ACTIONS(160), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [674] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(44), 1,
      sym_comment,
    ACTIONS(162), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [685] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 1,
      sym__line_break,
    STATE(45), 1,
      sym_comment,
  [695] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(166), 1,
      sym__line_break,
    STATE(46), 1,
      sym_comment,
  [705] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_comment,
  [715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym_comment,
  [725] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      sym__line_break,
    STATE(49), 1,
      sym_comment,
  [735] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_comment,
  [745] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(51), 1,
      sym_comment,
  [755] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 1,
      sym_word,
    STATE(52), 1,
      sym_comment,
  [765] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 1,
      sym__line_break,
    STATE(53), 1,
      sym_comment,
  [775] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      sym_comment,
  [785] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 1,
      sym__line_break,
    STATE(55), 1,
      sym_comment,
  [795] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(56), 1,
      sym_comment,
  [805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(57), 1,
      sym_comment,
  [815] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(58), 1,
      sym_comment,
  [825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(192), 1,
      sym_number,
    STATE(59), 1,
      sym_comment,
  [835] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      sym__line_break,
    STATE(60), 1,
      sym_comment,
  [845] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [849] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 235,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 282,
  [SMALL_STATE(17)] = 301,
  [SMALL_STATE(18)] = 316,
  [SMALL_STATE(19)] = 331,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 440,
  [SMALL_STATE(27)] = 459,
  [SMALL_STATE(28)] = 474,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 502,
  [SMALL_STATE(31)] = 518,
  [SMALL_STATE(32)] = 530,
  [SMALL_STATE(33)] = 543,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 567,
  [SMALL_STATE(36)] = 578,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 600,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 624,
  [SMALL_STATE(41)] = 637,
  [SMALL_STATE(42)] = 650,
  [SMALL_STATE(43)] = 663,
  [SMALL_STATE(44)] = 674,
  [SMALL_STATE(45)] = 685,
  [SMALL_STATE(46)] = 695,
  [SMALL_STATE(47)] = 705,
  [SMALL_STATE(48)] = 715,
  [SMALL_STATE(49)] = 725,
  [SMALL_STATE(50)] = 735,
  [SMALL_STATE(51)] = 745,
  [SMALL_STATE(52)] = 755,
  [SMALL_STATE(53)] = 765,
  [SMALL_STATE(54)] = 775,
  [SMALL_STATE(55)] = 785,
  [SMALL_STATE(56)] = 795,
  [SMALL_STATE(57)] = 805,
  [SMALL_STATE(58)] = 815,
  [SMALL_STATE(59)] = 825,
  [SMALL_STATE(60)] = 835,
  [SMALL_STATE(61)] = 845,
  [SMALL_STATE(62)] = 849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 3, .production_id = 6),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 3, .production_id = 6),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 9), SHIFT_REPEAT(60),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 9),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, .production_id = 8),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 3, .production_id = 8),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 7), SHIFT_REPEAT(60),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 7),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 3, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 3, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, .production_id = 11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3, .production_id = 14),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 1, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 1, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 10),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 12),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 2),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3, .production_id = 13),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 4, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
