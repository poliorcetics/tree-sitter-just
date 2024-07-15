#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_dotenv_DASHpath = 8,
  anon_sym_dotenv_DASHrequired = 9,
  anon_sym_export = 10,
  anon_sym_fallback = 11,
  anon_sym_ignore_DASHcomments = 12,
  anon_sym_positional_DASHarguments = 13,
  anon_sym_alias = 14,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 15,
  aux_sym_indented_normal_string_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_normal_string_token1 = 18,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 19,
  aux_sym_indented_raw_string_token1 = 20,
  anon_sym_SQUOTE = 21,
  aux_sym_raw_string_token1 = 22,
  anon_sym_BSLASHn = 23,
  anon_sym_BSLASHr = 24,
  anon_sym_BSLASHt = 25,
  anon_sym_BSLASH_DQUOTE = 26,
  anon_sym_BSLASH_BSLASH = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  aux_sym_comment_token1 = 30,
  sym_file = 31,
  sym_setting = 32,
  sym_alias = 33,
  sym_string = 34,
  sym_indented_normal_string = 35,
  sym_normal_string = 36,
  sym_indented_raw_string = 37,
  sym_raw_string = 38,
  sym_escape_sequence = 39,
  sym_boolean = 40,
  sym_comment = 41,
  aux_sym_file_repeat1 = 42,
  aux_sym_indented_normal_string_repeat1 = 43,
  aux_sym_normal_string_repeat1 = 44,
  aux_sym_indented_raw_string_repeat1 = 45,
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
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
  [anon_sym_export] = "export",
  [anon_sym_fallback] = "fallback",
  [anon_sym_ignore_DASHcomments] = "ignore-comments",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
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
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_ignore_DASHcomments] = anon_sym_ignore_DASHcomments,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
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
  [anon_sym_dotenv_DASHpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHrequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcomments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positional_DASHarguments] = {
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
  [26] = 26,
  [27] = 26,
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
      ADVANCE_MAP(
        'a', 1,
        'd', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'p', 6,
        's', 7,
        't', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'q') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 124:
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
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 1},
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
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
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
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_ignore_DASHcomments] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
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
    [sym_setting] = STATE(19),
    [sym_alias] = STATE(19),
    [sym_string] = STATE(19),
    [sym_indented_normal_string] = STATE(17),
    [sym_normal_string] = STATE(17),
    [sym_indented_raw_string] = STATE(17),
    [sym_raw_string] = STATE(17),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(3),
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
  [0] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_set,
    ACTIONS(29), 1,
      anon_sym_alias,
    ACTIONS(32), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(2), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(19), 3,
      sym_setting,
      sym_alias,
      sym_string,
    STATE(17), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [43] = 13,
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
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(19), 3,
      sym_setting,
      sym_alias,
      sym_string,
    STATE(17), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [88] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
    ACTIONS(46), 8,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_export,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_positional_DASHarguments,
  [109] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_COLON_EQ,
    STATE(5), 1,
      sym_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(52), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [131] = 6,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      aux_sym_normal_string_token1,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_escape_sequence,
    STATE(6), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(61), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [155] = 6,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_indented_normal_string_token1,
    STATE(25), 1,
      sym_escape_sequence,
    STATE(7), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(71), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [179] = 7,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(74), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(76), 1,
      aux_sym_indented_normal_string_token1,
    STATE(8), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(25), 1,
      sym_escape_sequence,
    ACTIONS(78), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [205] = 7,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      aux_sym_normal_string_token1,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_normal_string_repeat1,
    STATE(28), 1,
      sym_escape_sequence,
    ACTIONS(84), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [231] = 8,
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
    STATE(10), 1,
      sym_comment,
    STATE(20), 1,
      sym_string,
    STATE(17), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [259] = 7,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(82), 1,
      aux_sym_normal_string_token1,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_normal_string_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(28), 1,
      sym_escape_sequence,
    ACTIONS(84), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [285] = 7,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(76), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(88), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(7), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(25), 1,
      sym_escape_sequence,
    ACTIONS(78), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [311] = 4,
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
  [330] = 4,
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
  [349] = 4,
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
  [368] = 4,
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
  [387] = 4,
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
  [406] = 4,
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
  [425] = 4,
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
  [444] = 4,
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
  [463] = 4,
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
  [482] = 4,
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
  [501] = 4,
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
  [520] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(136), 5,
      anon_sym_set,
      anon_sym_alias,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [539] = 3,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(138), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [555] = 3,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(140), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [571] = 3,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(140), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [587] = 3,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(142), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [603] = 4,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(146), 1,
      aux_sym_indented_raw_string_token1,
    STATE(29), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [617] = 5,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(151), 1,
      aux_sym_indented_raw_string_token1,
    STATE(29), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(30), 1,
      sym_comment,
  [633] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_boolean,
    STATE(31), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
  [647] = 5,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(151), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(30), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(32), 1,
      sym_comment,
  [663] = 3,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [674] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
  [684] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_comment,
  [694] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(36), 1,
      sym_comment,
  [704] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      anon_sym_COLON_EQ,
    STATE(37), 1,
      sym_comment,
  [714] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_COLON_EQ,
    STATE(38), 1,
      sym_comment,
  [724] = 3,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      aux_sym_raw_string_token1,
    STATE(39), 1,
      sym_comment,
  [734] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(40), 1,
      sym_comment,
  [744] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 155,
  [SMALL_STATE(8)] = 179,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 285,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 406,
  [SMALL_STATE(19)] = 425,
  [SMALL_STATE(20)] = 444,
  [SMALL_STATE(21)] = 463,
  [SMALL_STATE(22)] = 482,
  [SMALL_STATE(23)] = 501,
  [SMALL_STATE(24)] = 520,
  [SMALL_STATE(25)] = 539,
  [SMALL_STATE(26)] = 555,
  [SMALL_STATE(27)] = 571,
  [SMALL_STATE(28)] = 587,
  [SMALL_STATE(29)] = 603,
  [SMALL_STATE(30)] = 617,
  [SMALL_STATE(31)] = 633,
  [SMALL_STATE(32)] = 647,
  [SMALL_STATE(33)] = 663,
  [SMALL_STATE(34)] = 674,
  [SMALL_STATE(35)] = 684,
  [SMALL_STATE(36)] = 694,
  [SMALL_STATE(37)] = 704,
  [SMALL_STATE(38)] = 714,
  [SMALL_STATE(39)] = 724,
  [SMALL_STATE(40)] = 734,
  [SMALL_STATE(41)] = 744,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
