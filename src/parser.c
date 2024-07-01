#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_set = 2,
  anon_sym_allow_DASHduplicate_DASHrecipes = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_allow_DASHduplicate_DASHvariables = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_normal_string_token1 = 7,
  anon_sym_BSLASHn = 8,
  anon_sym_BSLASHr = 9,
  anon_sym_BSLASHt = 10,
  anon_sym_BSLASH_DQUOTE = 11,
  anon_sym_BSLASH_BSLASH = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  aux_sym_comment_token1 = 15,
  sym_file = 16,
  sym_setting = 17,
  sym_string = 18,
  sym_normal_string = 19,
  sym_escape_sequence = 20,
  sym_boolean = 21,
  sym_comment = 22,
  aux_sym_file_repeat1 = 23,
  aux_sym_normal_string_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_normal_string_token1] = "normal_string_token1",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_file] = "file",
  [sym_setting] = "setting",
  [sym_string] = "string",
  [sym_normal_string] = "normal_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_normal_string_repeat1] = "normal_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_normal_string_token1] = aux_sym_normal_string_token1,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_file] = sym_file,
  [sym_setting] = sym_setting,
  [sym_string] = sym_string,
  [sym_normal_string] = sym_normal_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_normal_string_repeat1] = aux_sym_normal_string_repeat1,
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
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHduplicate_DASHrecipes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHduplicate_DASHvariables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_normal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_string_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
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
  [19] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(18),
    [sym_setting] = STATE(10),
    [sym_string] = STATE(10),
    [sym_normal_string] = STATE(11),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_normal_string_token1,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_normal_string_repeat1,
    STATE(7), 1,
      sym_escape_sequence,
    ACTIONS(17), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [26] = 7,
    ACTIONS(15), 1,
      aux_sym_normal_string_token1,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_normal_string_repeat1,
    STATE(7), 1,
      sym_escape_sequence,
    ACTIONS(17), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [52] = 6,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_normal_string_token1,
    STATE(7), 1,
      sym_escape_sequence,
    STATE(4), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(28), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [76] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_file_repeat1,
    STATE(11), 1,
      sym_normal_string,
    STATE(10), 2,
      sym_setting,
      sym_string,
  [105] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_normal_string,
    STATE(6), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(10), 2,
      sym_setting,
      sym_string,
  [132] = 3,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(44), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [148] = 3,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(46), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [164] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      anon_sym_COLON_EQ,
    STATE(9), 1,
      sym_comment,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(50), 2,
      anon_sym_set,
      sym_identifier,
  [182] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(56), 2,
      anon_sym_set,
      sym_identifier,
  [197] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(60), 2,
      anon_sym_set,
      sym_identifier,
  [212] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(64), 2,
      anon_sym_set,
      sym_identifier,
  [227] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(68), 2,
      anon_sym_set,
      sym_identifier,
  [242] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(72), 2,
      anon_sym_set,
      sym_identifier,
  [257] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(76), 2,
      anon_sym_set,
      sym_identifier,
  [272] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_boolean,
    STATE(16), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_true,
      anon_sym_false,
  [286] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
  [297] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
  [307] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 307,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_just(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
