#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 19

enum {
  sym_identifier = 1,
  sym_number = 2,
  sym_word = 3,
  aux_sym_text_token1 = 4,
  aux_sym_string_token1 = 5,
  aux_sym_string_token2 = 6,
  sym_comment = 7,
  sym__line_break = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_COLON = 12,
  anon_sym_Project = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_Note = 16,
  sym_multi_line_string = 17,
  anon_sym_Table = 18,
  anon_sym_DOT = 19,
  anon_sym_as = 20,
  anon_sym_TableGroup = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_Enum = 24,
  sym_source_file = 25,
  sym_text = 26,
  sym_string = 27,
  sym__definition = 28,
  sym_modifiers = 29,
  sym_modifier = 30,
  sym_project_definition = 31,
  sym_project_block = 32,
  sym_keypair = 33,
  sym_note_string = 34,
  sym_column_definition = 35,
  sym_table_definition = 36,
  sym_table_group_definition = 37,
  sym_table_group_block = 38,
  sym_data_type = 39,
  sym_enum_definition = 40,
  sym_enum_block = 41,
  sym_block = 42,
  sym__statement = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_modifiers_repeat1 = 45,
  aux_sym_project_block_repeat1 = 46,
  aux_sym_table_group_block_repeat1 = 47,
  aux_sym_enum_block_repeat1 = 48,
  aux_sym_block_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_word] = "word",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
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
  [sym_multi_line_string] = "multi_line_string",
  [anon_sym_Table] = "Table",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_TableGroup] = "TableGroup",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Enum] = "Enum",
  [sym_source_file] = "source_file",
  [sym_text] = "text",
  [sym_string] = "string",
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
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
  [sym_multi_line_string] = sym_multi_line_string,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Enum] = anon_sym_Enum,
  [sym_source_file] = sym_source_file,
  [sym_text] = sym_text,
  [sym_string] = sym_string,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
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
  [sym_multi_line_string] = {
    .visible = true,
    .named = true,
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
  [sym_string] = {
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
  [79] = 79,
  [80] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'j') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\r' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '?') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_multi_line_string);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
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
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
    [sym_multi_line_string] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
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
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_Note,
    STATE(5), 3,
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
    STATE(6), 3,
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
  [134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(9), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_Table,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym_column_definition,
      sym__statement,
      aux_sym_block_repeat1,
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_Table,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_Table,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_Table,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_word,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(21), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_Table,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_Table,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_Table,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_word,
    ACTIONS(107), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(21), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_Table,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_Table,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_Table,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_Table,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_word,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(17), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
  [384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(44), 1,
      sym_data_type,
    STATE(47), 1,
      sym_string,
    ACTIONS(131), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_Table,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      anon_sym_Enum,
  [414] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_string_token2,
    ACTIONS(137), 1,
      aux_sym_string_token1,
    ACTIONS(139), 1,
      sym_multi_line_string,
    STATE(73), 1,
      sym_string,
  [430] = 5,
    ACTIONS(141), 1,
      aux_sym_text_token1,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_enum_block_repeat1,
    STATE(57), 1,
      sym_text,
  [446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(147), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [458] = 5,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_text_token1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_enum_block_repeat1,
    STATE(57), 1,
      sym_text,
  [474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(160), 1,
      anon_sym_as,
    STATE(8), 1,
      sym_block,
  [490] = 5,
    ACTIONS(141), 1,
      aux_sym_text_token1,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_enum_block_repeat1,
    STATE(57), 1,
      sym_text,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_as,
    STATE(12), 1,
      sym_block,
  [528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_table_group_block_repeat1,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_table_group_block_repeat1,
  [563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(79), 1,
      sym_string,
    ACTIONS(131), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_Note,
  [583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_table_group_block_repeat1,
  [596] = 4,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__line_break,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
  [609] = 4,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__line_break,
    ACTIONS(191), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_modifiers,
  [622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [630] = 3,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
  [640] = 3,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__line_break,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
  [650] = 3,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__line_break,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
  [660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_enum_block,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_table_group_block,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [706] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(211), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_project_block,
  [724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [734] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(215), 2,
      aux_sym_text_token1,
      anon_sym_RBRACE,
  [742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_identifier,
  [749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
  [756] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__line_break,
  [763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [770] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__line_break,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_word,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COLON,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_identifier,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
  [819] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__line_break,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_number,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_word,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_identifier,
  [847] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__line_break,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_word,
  [861] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__line_break,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
  [875] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__line_break,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
  [889] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__line_break,
  [896] = 2,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(261), 1,
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
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 177,
  [SMALL_STATE(13)] = 190,
  [SMALL_STATE(14)] = 205,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 231,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 287,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 401,
  [SMALL_STATE(29)] = 414,
  [SMALL_STATE(30)] = 430,
  [SMALL_STATE(31)] = 446,
  [SMALL_STATE(32)] = 458,
  [SMALL_STATE(33)] = 474,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 506,
  [SMALL_STATE(36)] = 515,
  [SMALL_STATE(37)] = 528,
  [SMALL_STATE(38)] = 541,
  [SMALL_STATE(39)] = 550,
  [SMALL_STATE(40)] = 563,
  [SMALL_STATE(41)] = 574,
  [SMALL_STATE(42)] = 583,
  [SMALL_STATE(43)] = 596,
  [SMALL_STATE(44)] = 609,
  [SMALL_STATE(45)] = 622,
  [SMALL_STATE(46)] = 630,
  [SMALL_STATE(47)] = 640,
  [SMALL_STATE(48)] = 650,
  [SMALL_STATE(49)] = 660,
  [SMALL_STATE(50)] = 670,
  [SMALL_STATE(51)] = 680,
  [SMALL_STATE(52)] = 690,
  [SMALL_STATE(53)] = 698,
  [SMALL_STATE(54)] = 706,
  [SMALL_STATE(55)] = 714,
  [SMALL_STATE(56)] = 724,
  [SMALL_STATE(57)] = 734,
  [SMALL_STATE(58)] = 742,
  [SMALL_STATE(59)] = 749,
  [SMALL_STATE(60)] = 756,
  [SMALL_STATE(61)] = 763,
  [SMALL_STATE(62)] = 770,
  [SMALL_STATE(63)] = 777,
  [SMALL_STATE(64)] = 784,
  [SMALL_STATE(65)] = 791,
  [SMALL_STATE(66)] = 798,
  [SMALL_STATE(67)] = 805,
  [SMALL_STATE(68)] = 812,
  [SMALL_STATE(69)] = 819,
  [SMALL_STATE(70)] = 826,
  [SMALL_STATE(71)] = 833,
  [SMALL_STATE(72)] = 840,
  [SMALL_STATE(73)] = 847,
  [SMALL_STATE(74)] = 854,
  [SMALL_STATE(75)] = 861,
  [SMALL_STATE(76)] = 868,
  [SMALL_STATE(77)] = 875,
  [SMALL_STATE(78)] = 882,
  [SMALL_STATE(79)] = 889,
  [SMALL_STATE(80)] = 896,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(65),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_block_repeat1, 2), SHIFT_REPEAT(63),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 3, .production_id = 8),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 3, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 6),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, .production_id = 16),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 7, .production_id = 16),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, .production_id = 10),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 3, .production_id = 10),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 3, .production_id = 1),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_block, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_block, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_block, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_block, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_definition, 3, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, .production_id = 14),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(60),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 2, .production_id = 11),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_string, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3, .production_id = 18),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 9), SHIFT_REPEAT(53),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_block_repeat1, 2, .production_id = 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keypair, 4, .production_id = 13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 12),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_block_repeat1, 1, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_block_repeat1, 1, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 3, .production_id = 17),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 4, .production_id = 17),
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
