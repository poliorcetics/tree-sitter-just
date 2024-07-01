#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  anon_sym_true = 8,
  anon_sym_false = 9,
  aux_sym_comment_token1 = 10,
  sym_file = 11,
  sym_setting = 12,
  sym_string = 13,
  sym_normal_string = 14,
  sym_boolean = 15,
  sym_comment = 16,
  aux_sym_file_repeat1 = 17,
  aux_sym_normal_string_repeat1 = 18,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_file] = "file",
  [sym_setting] = "setting",
  [sym_string] = "string",
  [sym_normal_string] = "normal_string",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_file] = sym_file,
  [sym_setting] = sym_setting,
  [sym_string] = sym_string,
  [sym_normal_string] = sym_normal_string,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == ':') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {(TSStateId)(-1)},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(17),
    [sym_setting] = STATE(5),
    [sym_string] = STATE(5),
    [sym_normal_string] = STATE(6),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_setting] = STATE(5),
    [sym_string] = STATE(5),
    [sym_normal_string] = STATE(6),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_setting] = STATE(5),
    [sym_string] = STATE(5),
    [sym_normal_string] = STATE(6),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_set] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(30), 1,
      anon_sym_COLON_EQ,
    STATE(4), 1,
      sym_comment,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(28), 2,
      anon_sym_set,
      sym_identifier,
  [18] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(34), 2,
      anon_sym_set,
      sym_identifier,
  [33] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(38), 2,
      anon_sym_set,
      sym_identifier,
  [48] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(42), 2,
      anon_sym_set,
      sym_identifier,
  [63] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(46), 2,
      anon_sym_set,
      sym_identifier,
  [78] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(50), 2,
      anon_sym_set,
      sym_identifier,
  [93] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(54), 2,
      anon_sym_set,
      sym_identifier,
  [108] = 5,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      aux_sym_normal_string_token1,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_normal_string_repeat1,
  [124] = 5,
    ACTIONS(58), 1,
      aux_sym_normal_string_token1,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_normal_string_repeat1,
  [140] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_boolean,
    STATE(13), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
  [154] = 4,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_normal_string_token1,
    STATE(14), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
  [168] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
  [179] = 3,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
  [190] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
  [200] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 93,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 140,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
