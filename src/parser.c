#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 19

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
  anon_sym_DOT = 17,
  anon_sym_as = 18,
  anon_sym_TableGroup = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_Enum = 22,
  sym_source_file = 23,
  sym_text = 24,
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
  [anon_sym_DOT] = ".",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_DOT] = {
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
  field_schema_name = 11,
  field_table_name = 12,
  field_value = 13,
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
  [field_schema_name] = "schema_name",
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
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 4},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 2},
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
    {field_definition_block, 4},
    {field_name, 3},
    {field_schema_name, 1},
  [9] =
    {field_alias, 3},
    {field_definition_block, 4},
    {field_name, 1},
  [12] =
    {field_table_name, 1, .inherited = true},
  [13] =
    {field_table_name, 0, .inherited = true},
    {field_table_name, 1, .inherited = true},
  [15] =
    {field_constant, 1, .inherited = true},
  [16] =
    {field_constant, 0, .inherited = true},
    {field_constant, 1, .inherited = true},
  [18] =
    {field_column_name, 0},
    {field_data_type, 1},
  [20] =
    {field_key, 0},
    {field_value, 2},
  [22] =
    {field_name, 0},
  [23] =
    {field_column_name, 0},
    {field_data_type, 1},
    {field_modifiers, 2},
  [26] =
    {field_alias, 5},
    {field_definition_block, 6},
    {field_name, 3},
    {field_schema_name, 1},
  [30] =
    {field_modifier, 1},
  [31] =
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
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(55);
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
      if (lookahead == '(') ADVANCE(58);
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
      if (lookahead == 'm') ADVANCE(60);
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
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(56);
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
          lookahead != '\n') ADVANCE(38);
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
          lookahead != '?') ADVANCE(42);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 3},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym__definition] = STATE(2),
    [sym_project_definition] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_table_group_definition] = STATE(2),
    [sym_enum_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    ACTIONS(7), 1,
      anon_sym_Project,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(11), 1,
      anon_sym_TableGroup,
    ACTIONS(13), 1,
      anon_sym_Enum,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(3), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_table_group_definition,
      sym_enum_definition,
      aux_sym_source_file_repeat1,
  [27] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_Project,
    ACTIONS(22), 1,
      anon_sym_Table,
    ACTIONS(25), 1,
      anon_sym_TableGroup,
    ACTIONS(28), 1,
      anon_sym_Enum,
    STATE(3), 6,
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
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_Note,
    STATE(4), 3,
      sym_keypair,
      sym_note_string,
      aux_sym_project_block_repeat1,
  [72] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_Note,
    STATE(4), 3,
      sym_keypair,
      sym_note_string,
      aux_sym_project_block_repeat1,
  [90] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_Note,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(5), 3,
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
  [147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_Table,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_Table,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_word,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(22), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_Table,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(21), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(16), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Table,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Table,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_Table,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_Table,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(16), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_word,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(26), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_Table,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_Table,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_Table,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_word,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(26), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_Table,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [397] = 5,
    ACTIONS(133), 1,
      aux_sym_text_token1,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_table_group_block_repeat1,
    STATE(46), 1,
      sym_text,
  [413] = 5,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_text_token1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_enum_block_repeat1,
    STATE(42), 1,
      sym_text,
  [429] = 5,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_text_token1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_table_group_block_repeat1,
    STATE(46), 1,
      sym_text,
  [445] = 5,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_text_token1,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_block_repeat1,
    STATE(42), 1,
      sym_text,
  [461] = 5,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_text_token1,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_block_repeat1,
    STATE(42), 1,
      sym_text,
  [477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_as,
    STATE(18), 1,
      sym_block,
  [493] = 5,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_text_token1,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_table_group_block_repeat1,
    STATE(46), 1,
      sym_text,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(161), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_as,
    STATE(19), 1,
      sym_block,
  [543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [552] = 4,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__line_break,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_modifiers,
  [565] = 4,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [587] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(183), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [603] = 3,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym__line_break,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [621] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(193), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_project_block,
  [639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_table_group_block,
  [649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [659] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(199), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(39), 1,
      sym_data_type,
  [677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_enum_block,
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [704] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__line_break,
  [711] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__line_break,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_number,
  [725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_identifier,
  [739] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__line_break,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_word,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_string,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [774] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__line_break,
  [781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
  [788] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__line_break,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_word,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_identifier,
  [816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_string,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_word,
  [830] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__line_break,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
  [844] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__line_break,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_identifier,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
  [865] = 2,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(253), 1,
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
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 231,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 272,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 413,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 445,
  [SMALL_STATE(32)] = 461,
  [SMALL_STATE(33)] = 477,
  [SMALL_STATE(34)] = 493,
  [SMALL_STATE(35)] = 509,
  [SMALL_STATE(36)] = 521,
  [SMALL_STATE(37)] = 530,
  [SMALL_STATE(38)] = 543,
  [SMALL_STATE(39)] = 552,
  [SMALL_STATE(40)] = 565,
  [SMALL_STATE(41)] = 578,
  [SMALL_STATE(42)] = 587,
  [SMALL_STATE(43)] = 595,
  [SMALL_STATE(44)] = 603,
  [SMALL_STATE(45)] = 613,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 629,
  [SMALL_STATE(48)] = 639,
  [SMALL_STATE(49)] = 649,
  [SMALL_STATE(50)] = 659,
  [SMALL_STATE(51)] = 667,
  [SMALL_STATE(52)] = 677,
  [SMALL_STATE(53)] = 687,
  [SMALL_STATE(54)] = 697,
  [SMALL_STATE(55)] = 704,
  [SMALL_STATE(56)] = 711,
  [SMALL_STATE(57)] = 718,
  [SMALL_STATE(58)] = 725,
  [SMALL_STATE(59)] = 732,
  [SMALL_STATE(60)] = 739,
  [SMALL_STATE(61)] = 746,
  [SMALL_STATE(62)] = 753,
  [SMALL_STATE(63)] = 760,
  [SMALL_STATE(64)] = 767,
  [SMALL_STATE(65)] = 774,
  [SMALL_STATE(66)] = 781,
  [SMALL_STATE(67)] = 788,
  [SMALL_STATE(68)] = 795,
  [SMALL_STATE(69)] = 802,
  [SMALL_STATE(70)] = 809,
  [SMALL_STATE(71)] = 816,
  [SMALL_STATE(72)] = 823,
  [SMALL_STATE(73)] = 830,
  [SMALL_STATE(74)] = 837,
  [SMALL_STATE(75)] = 844,
  [SMALL_STATE(76)] = 851,
  [SMALL_STATE(77)] = 858,
  [SMALL_STATE(78)] = 865,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(62),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, .production_id = 10),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 3, .production_id = 10),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 3, .production_id = 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 3, .production_id = 8),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(35),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, .production_id = 16),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 7, .production_id = 16),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 9), SHIFT_REPEAT(65),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 9),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(65),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, .production_id = 14),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keypair, 4, .production_id = 13),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3, .production_id = 18),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_string, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 1, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 12),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 15),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_group_block_repeat1, 1, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3, .production_id = 17),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 4, .production_id = 17),
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
