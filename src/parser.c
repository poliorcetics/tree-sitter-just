#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  anon_sym_dotenv_DASHfilename = 6,
  anon_sym_dotenv_DASHload = 7,
  anon_sym_alias = 8,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 9,
  aux_sym_indented_normal_string_token1 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_normal_string_token1 = 12,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 13,
  aux_sym_indented_raw_string_token1 = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_raw_string_token1 = 16,
  anon_sym_BSLASHn = 17,
  anon_sym_BSLASHr = 18,
  anon_sym_BSLASHt = 19,
  anon_sym_BSLASH_DQUOTE = 20,
  anon_sym_BSLASH_BSLASH = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  aux_sym_comment_token1 = 24,
  sym_file = 25,
  sym_setting = 26,
  sym_alias = 27,
  sym_string = 28,
  sym_indented_normal_string = 29,
  sym_normal_string = 30,
  sym_indented_raw_string = 31,
  sym_raw_string = 32,
  sym_escape_sequence = 33,
  sym_boolean = 34,
  sym_comment = 35,
  aux_sym_file_repeat1 = 36,
  aux_sym_indented_normal_string_repeat1 = 37,
  aux_sym_normal_string_repeat1 = 38,
  aux_sym_indented_raw_string_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_alias] = "alias",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_indented_normal_string_token1] = "indented_normal_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_normal_string_token1] = "normal_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_indented_raw_string_token1] = "indented_raw_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_raw_string_token1] = "raw_string_token1",
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
  [sym_alias] = "alias",
  [sym_string] = "string",
  [sym_indented_normal_string] = "indented_normal_string",
  [sym_normal_string] = "normal_string",
  [sym_indented_raw_string] = "indented_raw_string",
  [sym_raw_string] = "raw_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_indented_normal_string_repeat1] = "indented_normal_string_repeat1",
  [aux_sym_normal_string_repeat1] = "normal_string_repeat1",
  [aux_sym_indented_raw_string_repeat1] = "indented_raw_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_indented_normal_string_token1] = aux_sym_indented_normal_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_normal_string_token1] = aux_sym_normal_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_indented_raw_string_token1] = aux_sym_indented_raw_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_raw_string_token1] = aux_sym_raw_string_token1,
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
  [sym_alias] = sym_alias,
  [sym_string] = sym_string,
  [sym_indented_normal_string] = sym_indented_normal_string,
  [sym_normal_string] = sym_normal_string,
  [sym_indented_raw_string] = sym_indented_raw_string,
  [sym_raw_string] = sym_raw_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_indented_normal_string_repeat1] = aux_sym_indented_normal_string_repeat1,
  [aux_sym_normal_string_repeat1] = aux_sym_normal_string_repeat1,
  [aux_sym_indented_raw_string_repeat1] = aux_sym_indented_raw_string_repeat1,
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
  [anon_sym_dotenv_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_normal_string_token1] = {
    .visible = false,
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
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_string_token1] = {
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
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_normal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
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
  [aux_sym_indented_normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_raw_string_repeat1] = {
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
  [26] = 24,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(12);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
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
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 66:
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
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
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
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 0},
  [41] = {(TSStateId)(-1)},
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
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_file] = STATE(34),
    [sym_setting] = STATE(22),
    [sym_alias] = STATE(22),
    [sym_string] = STATE(22),
    [sym_indented_normal_string] = STATE(18),
    [sym_normal_string] = STATE(18),
    [sym_indented_raw_string] = STATE(18),
    [sym_raw_string] = STATE(18),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_alias] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_alias,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_file_repeat1,
    STATE(22), 3,
      sym_setting,
      sym_alias,
      sym_string,
    STATE(18), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [45] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_set,
    ACTIONS(31), 1,
      anon_sym_alias,
    ACTIONS(34), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(3), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(22), 3,
      sym_setting,
      sym_alias,
      sym_string,
    STATE(18), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [88] = 6,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      aux_sym_normal_string_token1,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_escape_sequence,
    STATE(4), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(51), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [112] = 6,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(56), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(58), 1,
      aux_sym_indented_normal_string_token1,
    STATE(27), 1,
      sym_escape_sequence,
    STATE(5), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(61), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [136] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(13), 1,
      sym_string,
    STATE(18), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [164] = 7,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(64), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_indented_normal_string_token1,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(27), 1,
      sym_escape_sequence,
    ACTIONS(68), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [190] = 7,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_normal_string_token1,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_normal_string_repeat1,
    STATE(25), 1,
      sym_escape_sequence,
    ACTIONS(74), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [216] = 7,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(72), 1,
      aux_sym_normal_string_token1,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      aux_sym_normal_string_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(25), 1,
      sym_escape_sequence,
    ACTIONS(74), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [242] = 7,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(78), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(5), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(27), 1,
      sym_escape_sequence,
    ACTIONS(68), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [268] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(84), 1,
      anon_sym_COLON_EQ,
    STATE(11), 1,
      sym_comment,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [290] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(88), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [309] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(92), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [328] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(96), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [347] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(100), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [366] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(104), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [385] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(108), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [404] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(112), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [423] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [442] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(120), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [461] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(124), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [480] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(128), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [499] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(132), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [518] = 3,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(134), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [534] = 3,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(136), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [550] = 3,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(134), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [566] = 3,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(138), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [582] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      anon_sym_dotenv_DASHfilename,
    STATE(28), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
  [597] = 5,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(146), 1,
      aux_sym_indented_raw_string_token1,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_indented_raw_string_repeat1,
  [613] = 4,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(150), 1,
      aux_sym_indented_raw_string_token1,
    STATE(30), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [627] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_boolean,
    STATE(31), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
  [641] = 5,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(29), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(32), 1,
      sym_comment,
  [657] = 3,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [668] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
  [678] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_comment,
  [688] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(36), 1,
      sym_comment,
  [698] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      anon_sym_COLON_EQ,
    STATE(37), 1,
      sym_comment,
  [708] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_COLON_EQ,
    STATE(38), 1,
      sym_comment,
  [718] = 3,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      aux_sym_raw_string_token1,
    STATE(39), 1,
      sym_comment,
  [728] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(40), 1,
      sym_comment,
  [738] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 164,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 309,
  [SMALL_STATE(14)] = 328,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 423,
  [SMALL_STATE(20)] = 442,
  [SMALL_STATE(21)] = 461,
  [SMALL_STATE(22)] = 480,
  [SMALL_STATE(23)] = 499,
  [SMALL_STATE(24)] = 518,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 550,
  [SMALL_STATE(27)] = 566,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 597,
  [SMALL_STATE(30)] = 613,
  [SMALL_STATE(31)] = 627,
  [SMALL_STATE(32)] = 641,
  [SMALL_STATE(33)] = 657,
  [SMALL_STATE(34)] = 668,
  [SMALL_STATE(35)] = 678,
  [SMALL_STATE(36)] = 688,
  [SMALL_STATE(37)] = 698,
  [SMALL_STATE(38)] = 708,
  [SMALL_STATE(39)] = 718,
  [SMALL_STATE(40)] = 728,
  [SMALL_STATE(41)] = 738,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
