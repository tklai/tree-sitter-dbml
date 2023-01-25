#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
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
  anon_sym_SLASH_SLASH = 6,
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
  sym_comment = 24,
  sym__definition = 25,
  sym_modifiers = 26,
  sym_modifier = 27,
  sym_project_definition = 28,
  sym_project_block = 29,
  sym_keypair = 30,
  sym_note_string = 31,
  sym_column_definition = 32,
  sym_table_definition = 33,
  sym_table_group_definition = 34,
  sym_table_group_block = 35,
  sym_data_type = 36,
  sym_enum_definition = 37,
  sym_enum_block = 38,
  sym_block = 39,
  sym__statement = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_modifiers_repeat1 = 42,
  aux_sym_project_block_repeat1 = 43,
  aux_sym_table_group_block_repeat1 = 44,
  aux_sym_enum_block_repeat1 = 45,
  aux_sym_block_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_word] = "word",
  [aux_sym_text_token1] = "text_token1",
  [sym_string] = "string",
  [anon_sym_SLASH_SLASH] = "//",
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
  [sym_comment] = "comment",
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
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
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
  [sym_comment] = sym_comment,
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
  [67] = 65,
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
  [82] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'j') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
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
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {(TSStateId)(-1)},
  [82] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
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
    [sym_source_file] = STATE(57),
    [sym_comment] = STATE(1),
    [sym__definition] = STATE(10),
    [sym_project_definition] = STATE(11),
    [sym_table_definition] = STATE(11),
    [sym_table_group_definition] = STATE(11),
    [sym_enum_definition] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
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
    STATE(10), 1,
      sym__definition,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(11), 4,
      sym_project_definition,
      sym_table_definition,
      sym_table_group_definition,
      sym_enum_definition,
  [32] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
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
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(10), 1,
      sym__definition,
    STATE(11), 4,
      sym_project_definition,
      sym_table_definition,
      sym_table_group_definition,
      sym_enum_definition,
  [66] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_Note,
    STATE(4), 2,
      sym_comment,
      aux_sym_project_block_repeat1,
    STATE(36), 2,
      sym_keypair,
      sym_note_string,
  [87] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_Note,
    STATE(4), 1,
      aux_sym_project_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(36), 2,
      sym_keypair,
      sym_note_string,
  [110] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_Note,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_project_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(36), 2,
      sym_keypair,
      sym_note_string,
  [133] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_Table,
    STATE(7), 1,
      sym_comment,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_Table,
    STATE(8), 1,
      sym_comment,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [165] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_Table,
    STATE(9), 1,
      sym_comment,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_Table,
    STATE(10), 1,
      sym_comment,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_Table,
    STATE(11), 1,
      sym_comment,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [213] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym__statement,
    STATE(54), 1,
      sym_column_definition,
    STATE(12), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(74), 1,
      anon_sym_Table,
    STATE(13), 1,
      sym_comment,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [249] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_Table,
    STATE(14), 1,
      sym_comment,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(82), 1,
      anon_sym_Table,
    STATE(15), 1,
      sym_comment,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [281] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 1,
      sym_word,
    STATE(42), 1,
      sym_modifier,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(16), 2,
      sym_comment,
      aux_sym_modifiers_repeat1,
  [299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(91), 1,
      anon_sym_Table,
    STATE(17), 1,
      sym_comment,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 1,
      anon_sym_Table,
    STATE(18), 1,
      sym_comment,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [331] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(97), 1,
      sym_word,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_modifiers_repeat1,
    STATE(42), 1,
      sym_modifier,
  [353] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_Table,
    STATE(20), 1,
      sym_comment,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [369] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_block_repeat1,
    STATE(53), 1,
      sym__statement,
    STATE(54), 1,
      sym_column_definition,
  [391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_Table,
    STATE(22), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(117), 1,
      anon_sym_Table,
    STATE(23), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [423] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(53), 1,
      sym__statement,
    STATE(54), 1,
      sym_column_definition,
  [445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_Table,
    STATE(25), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [461] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(97), 1,
      sym_word,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(42), 1,
      sym_modifier,
  [483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(131), 1,
      anon_sym_Table,
    STATE(27), 1,
      sym_comment,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [499] = 6,
    ACTIONS(133), 1,
      aux_sym_text_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_table_group_block_repeat1,
    STATE(50), 1,
      sym_text,
  [518] = 6,
    ACTIONS(133), 1,
      aux_sym_text_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_enum_block_repeat1,
    STATE(44), 1,
      sym_text,
  [537] = 5,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      aux_sym_text_token1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_text,
    STATE(30), 2,
      sym_comment,
      aux_sym_enum_block_repeat1,
  [554] = 6,
    ACTIONS(133), 1,
      aux_sym_text_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_table_group_block_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(50), 1,
      sym_text,
  [573] = 6,
    ACTIONS(133), 1,
      aux_sym_text_token1,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_enum_block_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(44), 1,
      sym_text,
  [592] = 5,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      aux_sym_text_token1,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_text,
    STATE(33), 2,
      sym_comment,
      aux_sym_table_group_block_repeat1,
  [609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(157), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym_comment,
    ACTIONS(155), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [624] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(159), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [636] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(161), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [648] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(163), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [660] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(165), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [672] = 5,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      sym__line_break,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    STATE(63), 1,
      sym_modifiers,
  [688] = 5,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      sym__line_break,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_comment,
  [704] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_as,
    STATE(23), 1,
      sym_block,
    STATE(41), 1,
      sym_comment,
  [720] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(42), 1,
      sym_comment,
    ACTIONS(181), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(39), 1,
      sym_data_type,
    STATE(43), 1,
      sym_comment,
  [745] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(44), 1,
      sym_comment,
    ACTIONS(185), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [767] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(189), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_table_group_block,
    STATE(47), 1,
      sym_comment,
  [791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_enum_block,
    STATE(48), 1,
      sym_comment,
  [804] = 4,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(195), 1,
      aux_sym_text_token1,
    STATE(49), 1,
      sym_comment,
    STATE(81), 1,
      sym_text,
  [817] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    STATE(50), 1,
      sym_comment,
    ACTIONS(197), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_project_block,
    STATE(51), 1,
      sym_comment,
  [841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
    STATE(52), 1,
      sym_comment,
  [854] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(201), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [865] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(203), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [876] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [887] = 4,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      sym__line_break,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_comment,
  [900] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [910] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      sym_comment,
  [920] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(215), 1,
      sym__line_break,
    STATE(59), 1,
      sym_comment,
  [930] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(217), 1,
      sym_number,
    STATE(60), 1,
      sym_comment,
  [940] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(61), 1,
      sym_comment,
  [950] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(62), 1,
      sym_comment,
  [960] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(223), 1,
      sym__line_break,
    STATE(63), 1,
      sym_comment,
  [970] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(225), 1,
      sym_word,
    STATE(64), 1,
      sym_comment,
  [980] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(227), 1,
      sym__line_break,
    STATE(65), 1,
      sym_comment,
  [990] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_comment,
  [1000] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(231), 1,
      sym__line_break,
    STATE(67), 1,
      sym_comment,
  [1010] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym_comment,
  [1020] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(235), 1,
      sym__line_break,
    STATE(69), 1,
      sym_comment,
  [1030] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(237), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_comment,
  [1040] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
  [1050] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(241), 1,
      sym_string,
    STATE(72), 1,
      sym_comment,
  [1060] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 1,
      sym_string,
    STATE(73), 1,
      sym_comment,
  [1070] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      sym_word,
    STATE(74), 1,
      sym_comment,
  [1080] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(247), 1,
      sym__line_break,
    STATE(75), 1,
      sym_comment,
  [1090] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      sym__line_break,
    STATE(76), 1,
      sym_comment,
  [1100] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(251), 1,
      sym__line_break,
    STATE(77), 1,
      sym_comment,
  [1110] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(78), 1,
      sym_comment,
  [1120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_comment,
  [1130] = 3,
    ACTIONS(135), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      sym__line_break,
    STATE(80), 1,
      sym_comment,
  [1140] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [1144] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 331,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 369,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 407,
  [SMALL_STATE(24)] = 423,
  [SMALL_STATE(25)] = 445,
  [SMALL_STATE(26)] = 461,
  [SMALL_STATE(27)] = 483,
  [SMALL_STATE(28)] = 499,
  [SMALL_STATE(29)] = 518,
  [SMALL_STATE(30)] = 537,
  [SMALL_STATE(31)] = 554,
  [SMALL_STATE(32)] = 573,
  [SMALL_STATE(33)] = 592,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 624,
  [SMALL_STATE(36)] = 636,
  [SMALL_STATE(37)] = 648,
  [SMALL_STATE(38)] = 660,
  [SMALL_STATE(39)] = 672,
  [SMALL_STATE(40)] = 688,
  [SMALL_STATE(41)] = 704,
  [SMALL_STATE(42)] = 720,
  [SMALL_STATE(43)] = 732,
  [SMALL_STATE(44)] = 745,
  [SMALL_STATE(45)] = 756,
  [SMALL_STATE(46)] = 767,
  [SMALL_STATE(47)] = 778,
  [SMALL_STATE(48)] = 791,
  [SMALL_STATE(49)] = 804,
  [SMALL_STATE(50)] = 817,
  [SMALL_STATE(51)] = 828,
  [SMALL_STATE(52)] = 841,
  [SMALL_STATE(53)] = 854,
  [SMALL_STATE(54)] = 865,
  [SMALL_STATE(55)] = 876,
  [SMALL_STATE(56)] = 887,
  [SMALL_STATE(57)] = 900,
  [SMALL_STATE(58)] = 910,
  [SMALL_STATE(59)] = 920,
  [SMALL_STATE(60)] = 930,
  [SMALL_STATE(61)] = 940,
  [SMALL_STATE(62)] = 950,
  [SMALL_STATE(63)] = 960,
  [SMALL_STATE(64)] = 970,
  [SMALL_STATE(65)] = 980,
  [SMALL_STATE(66)] = 990,
  [SMALL_STATE(67)] = 1000,
  [SMALL_STATE(68)] = 1010,
  [SMALL_STATE(69)] = 1020,
  [SMALL_STATE(70)] = 1030,
  [SMALL_STATE(71)] = 1040,
  [SMALL_STATE(72)] = 1050,
  [SMALL_STATE(73)] = 1060,
  [SMALL_STATE(74)] = 1070,
  [SMALL_STATE(75)] = 1080,
  [SMALL_STATE(76)] = 1090,
  [SMALL_STATE(77)] = 1100,
  [SMALL_STATE(78)] = 1110,
  [SMALL_STATE(79)] = 1120,
  [SMALL_STATE(80)] = 1130,
  [SMALL_STATE(81)] = 1140,
  [SMALL_STATE(82)] = 1144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(70),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(79),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 3, .production_id = 7),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 3, .production_id = 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 3, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(65),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 10),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 8), SHIFT_REPEAT(65),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, .production_id = 13),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3, .production_id = 16),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keypair, 4, .production_id = 12),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_string, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 1, .production_id = 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 14),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 1, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 11),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 4),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3, .production_id = 15),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 4, .production_id = 15),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
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
