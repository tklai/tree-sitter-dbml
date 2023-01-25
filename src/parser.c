#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 17

enum {
  sym_identifier = 1,
  sym_number = 2,
  sym_word = 3,
  aux_sym_text_token1 = 4,
  sym_string = 5,
  sym_comment = 6,
  sym__line_break = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  anon_sym_COLON = 11,
  anon_sym_Project = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_Note = 15,
  anon_sym_Table = 16,
  anon_sym_as = 17,
  anon_sym_TableGroup = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_Enum = 21,
  sym_source_file = 22,
  sym_text = 23,
  sym__definition = 24,
  sym_modifiers = 25,
  sym_modifier = 26,
  sym_project_definition = 27,
  sym_project_block = 28,
  sym_keypair = 29,
  sym_note_string = 30,
  sym_column_definition = 31,
  sym_table_definition = 32,
  sym_table_group_definition = 33,
  sym_table_group_block = 34,
  sym_data_type = 35,
  sym_enum_definition = 36,
  sym_enum_block = 37,
  sym_block = 38,
  sym__statement = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_modifiers_repeat1 = 41,
  aux_sym_project_block_repeat1 = 42,
  aux_sym_table_group_block_repeat1 = 43,
  aux_sym_enum_block_repeat1 = 44,
  aux_sym_block_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_word] = "word",
  [aux_sym_text_token1] = "text_token1",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym__line_break] = "_line_break",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_Project] = "Project",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_Note] = "Note",
  [anon_sym_Table] = "Table",
  [anon_sym_as] = "as",
  [anon_sym_TableGroup] = "TableGroup",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Enum] = "Enum",
  [sym_source_file] = "source_file",
  [sym_text] = "text",
  [sym__definition] = "_definition",
  [sym_modifiers] = "modifiers",
  [sym_modifier] = "modifier",
  [sym_project_definition] = "project_definition",
  [sym_project_block] = "project_block",
  [sym_keypair] = "keypair",
  [sym_note_string] = "note_string",
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
  [aux_sym_project_block_repeat1] = "project_block_repeat1",
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
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym__line_break] = sym__line_break,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Project] = anon_sym_Project,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_Note] = anon_sym_Note,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Enum] = anon_sym_Enum,
  [sym_source_file] = sym_source_file,
  [sym_text] = sym_text,
  [sym__definition] = sym__definition,
  [sym_modifiers] = sym_modifiers,
  [sym_modifier] = sym_modifier,
  [sym_project_definition] = sym_project_definition,
  [sym_project_block] = sym_project_block,
  [sym_keypair] = sym_keypair,
  [sym_note_string] = sym_note_string,
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
  [aux_sym_project_block_repeat1] = aux_sym_project_block_repeat1,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [anon_sym_Project] = {
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
  [anon_sym_Note] = {
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
  [sym_project_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_project_block] = {
    .visible = true,
    .named = true,
  },
  [sym_keypair] = {
    .visible = true,
    .named = true,
  },
  [sym_note_string] = {
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
  [aux_sym_project_block_repeat1] = {
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
  field_key = 7,
  field_modifier = 8,
  field_modifiers = 9,
  field_name = 10,
  field_table_name = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_column_name] = "column_name",
  [field_constant] = "constant",
  [field_data_type] = "data_type",
  [field_definition_block] = "definition_block",
  [field_enum_name] = "enum_name",
  [field_key] = "key",
  [field_modifier] = "modifier",
  [field_modifiers] = "modifiers",
  [field_name] = "name",
  [field_table_name] = "table_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_definition_block, 2},
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
    {field_key, 0},
    {field_value, 2},
  [19] =
    {field_name, 0},
  [20] =
    {field_column_name, 0},
    {field_data_type, 1},
    {field_modifiers, 2},
  [23] =
    {field_modifier, 1},
  [24] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'j') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\r' ||
          lookahead == '?') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
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
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym__definition] = STATE(3),
    [sym_project_definition] = STATE(3),
    [sym_table_definition] = STATE(3),
    [sym_table_group_definition] = STATE(3),
    [sym_enum_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_Project,
    ACTIONS(20), 1,
      anon_sym_Table,
    ACTIONS(23), 1,
      anon_sym_TableGroup,
    ACTIONS(26), 1,
      anon_sym_Enum,
    STATE(2), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_table_group_definition,
      sym_enum_definition,
      aux_sym_source_file_repeat1,
  [27] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_Project,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(11), 1,
      anon_sym_TableGroup,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(2), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_table_group_definition,
      sym_enum_definition,
      aux_sym_source_file_repeat1,
  [54] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_Note,
    STATE(6), 3,
      sym_keypair,
      sym_note_string,
      aux_sym_project_block_repeat1,
  [72] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_Note,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym_keypair,
      sym_note_string,
      aux_sym_project_block_repeat1,
  [90] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_Note,
    STATE(6), 3,
      sym_keypair,
      sym_note_string,
      aux_sym_project_block_repeat1,
  [108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_Table,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_Table,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_Table,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_word,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(11), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_word,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(13), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_Table,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_word,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(13), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_Table,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(23), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_Table,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Table,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(18), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_Table,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_Table,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_Table,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_Table,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(18), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_Table,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_Table,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [371] = 5,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_table_group_block_repeat1,
    STATE(43), 1,
      sym_text,
  [387] = 5,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_block_repeat1,
    STATE(39), 1,
      sym_text,
  [403] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_text_token1,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_table_group_block_repeat1,
    STATE(43), 1,
      sym_text,
  [419] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_text_token1,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_enum_block_repeat1,
    STATE(39), 1,
      sym_text,
  [435] = 5,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_table_group_block_repeat1,
    STATE(43), 1,
      sym_text,
  [451] = 5,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_enum_block_repeat1,
    STATE(39), 1,
      sym_text,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(147), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [488] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym__line_break,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
  [501] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym__line_break,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_modifiers,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_as,
    STATE(17), 1,
      sym_block,
  [527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [545] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(171), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [561] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [579] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(181), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_project_block,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [607] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(185), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(35), 1,
      sym_data_type,
  [625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_table_group_block,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_enum_block,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
  [659] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__line_break,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_number,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_string,
  [680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_word,
  [687] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__line_break,
  [694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_string,
  [708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
  [715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [722] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym__line_break,
  [729] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__line_break,
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
  [743] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__line_break,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
  [757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_word,
  [764] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__line_break,
  [771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
  [778] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__line_break,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_identifier,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_identifier,
  [799] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__line_break,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 222,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 278,
  [SMALL_STATE(20)] = 291,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 317,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 387,
  [SMALL_STATE(28)] = 403,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 435,
  [SMALL_STATE(31)] = 451,
  [SMALL_STATE(32)] = 467,
  [SMALL_STATE(33)] = 479,
  [SMALL_STATE(34)] = 488,
  [SMALL_STATE(35)] = 501,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 527,
  [SMALL_STATE(38)] = 536,
  [SMALL_STATE(39)] = 545,
  [SMALL_STATE(40)] = 553,
  [SMALL_STATE(41)] = 561,
  [SMALL_STATE(42)] = 571,
  [SMALL_STATE(43)] = 579,
  [SMALL_STATE(44)] = 587,
  [SMALL_STATE(45)] = 597,
  [SMALL_STATE(46)] = 607,
  [SMALL_STATE(47)] = 615,
  [SMALL_STATE(48)] = 625,
  [SMALL_STATE(49)] = 635,
  [SMALL_STATE(50)] = 645,
  [SMALL_STATE(51)] = 652,
  [SMALL_STATE(52)] = 659,
  [SMALL_STATE(53)] = 666,
  [SMALL_STATE(54)] = 673,
  [SMALL_STATE(55)] = 680,
  [SMALL_STATE(56)] = 687,
  [SMALL_STATE(57)] = 694,
  [SMALL_STATE(58)] = 701,
  [SMALL_STATE(59)] = 708,
  [SMALL_STATE(60)] = 715,
  [SMALL_STATE(61)] = 722,
  [SMALL_STATE(62)] = 729,
  [SMALL_STATE(63)] = 736,
  [SMALL_STATE(64)] = 743,
  [SMALL_STATE(65)] = 750,
  [SMALL_STATE(66)] = 757,
  [SMALL_STATE(67)] = 764,
  [SMALL_STATE(68)] = 771,
  [SMALL_STATE(69)] = 778,
  [SMALL_STATE(70)] = 785,
  [SMALL_STATE(71)] = 792,
  [SMALL_STATE(72)] = 799,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(57),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(50),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 3),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, .production_id = 9),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 3, .production_id = 9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 3, .production_id = 7),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 3, .production_id = 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 8), SHIFT_REPEAT(64),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 8),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(64),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 10),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, .production_id = 13),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3, .production_id = 16),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keypair, 4, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_string, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 1, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 11),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 14),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 1, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3, .production_id = 15),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 4, .production_id = 15),
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
