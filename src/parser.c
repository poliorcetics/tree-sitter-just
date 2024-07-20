#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  aux_sym_import_token1 = 4,
  aux_sym_mod_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_arch = 8,
  anon_sym_num_cpus = 9,
  anon_sym_os = 10,
  anon_sym_os_family = 11,
  anon_sym_shell = 12,
  anon_sym_env_var = 13,
  anon_sym_env_var_or_default = 14,
  anon_sym_env = 15,
  anon_sym_is_dependency = 16,
  anon_sym_COMMA = 17,
  anon_sym_set = 18,
  anon_sym_allow_DASHduplicate_DASHrecipes = 19,
  anon_sym_allow_DASHduplicate_DASHvariables = 20,
  anon_sym_dotenv_DASHfilename = 21,
  anon_sym_dotenv_DASHload = 22,
  anon_sym_dotenv_DASHpath = 23,
  anon_sym_dotenv_DASHrequired = 24,
  anon_sym_export = 25,
  anon_sym_fallback = 26,
  anon_sym_ignore_DASHcomments = 27,
  anon_sym_positional_DASHarguments = 28,
  anon_sym_tempdir = 29,
  anon_sym_unstable = 30,
  anon_sym_windows_DASHpowershell = 31,
  anon_sym_windows_DASHshell = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_BQUOTE = 35,
  aux_sym_backtick_token1 = 36,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 37,
  aux_sym_indented_backtick_token1 = 38,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 39,
  aux_sym_indented_normal_string_token1 = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_normal_string_token1 = 42,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 43,
  aux_sym_indented_raw_string_token1 = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_raw_string_token1 = 46,
  anon_sym_BSLASHn = 47,
  anon_sym_BSLASHr = 48,
  anon_sym_BSLASHt = 49,
  anon_sym_BSLASH_DQUOTE = 50,
  anon_sym_BSLASH_BSLASH = 51,
  anon_sym_true = 52,
  anon_sym_false = 53,
  aux_sym_comment_token1 = 54,
  sym_file = 55,
  sym_alias = 56,
  sym_import = 57,
  sym_mod = 58,
  sym_expression = 59,
  sym_value = 60,
  sym_builtin_function_call = 61,
  sym__p0 = 62,
  sym__p1 = 63,
  sym__p2 = 64,
  sym_function_call = 65,
  sym_function_parameters = 66,
  sym_setting = 67,
  sym__setting_boolean = 68,
  sym__setting_string = 69,
  sym__setting_list = 70,
  sym_backtick = 71,
  sym_indented_backtick = 72,
  sym_string = 73,
  sym_indented_normal_string = 74,
  sym_normal_string = 75,
  sym_indented_raw_string = 76,
  sym_raw_string = 77,
  sym_escape_sequence = 78,
  sym_boolean = 79,
  sym_comment = 80,
  aux_sym_file_repeat1 = 81,
  aux_sym_function_parameters_repeat1 = 82,
  aux_sym__setting_list_repeat1 = 83,
  aux_sym_indented_backtick_repeat1 = 84,
  aux_sym_indented_normal_string_repeat1 = 85,
  aux_sym_normal_string_repeat1 = 86,
  aux_sym_indented_raw_string_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_arch] = "arch",
  [anon_sym_num_cpus] = "num_cpus",
  [anon_sym_os] = "os",
  [anon_sym_os_family] = "os_family",
  [anon_sym_shell] = "shell",
  [anon_sym_env_var] = "env_var",
  [anon_sym_env_var_or_default] = "env_var_or_default",
  [anon_sym_env] = "env",
  [anon_sym_is_dependency] = "is_dependency",
  [anon_sym_COMMA] = ",",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
  [anon_sym_export] = "export",
  [anon_sym_fallback] = "fallback",
  [anon_sym_ignore_DASHcomments] = "ignore-comments",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_windows_DASHshell] = "windows-shell",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_backtick_token1] = "backtick_token1",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [aux_sym_indented_backtick_token1] = "indented_backtick_token1",
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
  [sym_alias] = "alias",
  [sym_import] = "import",
  [sym_mod] = "mod",
  [sym_expression] = "expression",
  [sym_value] = "value",
  [sym_builtin_function_call] = "builtin_function_call",
  [sym__p0] = "_p0",
  [sym__p1] = "_p1",
  [sym__p2] = "_p2",
  [sym_function_call] = "function_call",
  [sym_function_parameters] = "function_parameters",
  [sym_setting] = "setting",
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
  [sym_backtick] = "backtick",
  [sym_indented_backtick] = "indented_backtick",
  [sym_string] = "string",
  [sym_indented_normal_string] = "indented_normal_string",
  [sym_normal_string] = "normal_string",
  [sym_indented_raw_string] = "indented_raw_string",
  [sym_raw_string] = "raw_string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_indented_backtick_repeat1] = "indented_backtick_repeat1",
  [aux_sym_indented_normal_string_repeat1] = "indented_normal_string_repeat1",
  [aux_sym_normal_string_repeat1] = "normal_string_repeat1",
  [aux_sym_indented_raw_string_repeat1] = "indented_raw_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_mod_token1] = aux_sym_mod_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_arch] = anon_sym_arch,
  [anon_sym_num_cpus] = anon_sym_num_cpus,
  [anon_sym_os] = anon_sym_os,
  [anon_sym_os_family] = anon_sym_os_family,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_env_var] = anon_sym_env_var,
  [anon_sym_env_var_or_default] = anon_sym_env_var_or_default,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_is_dependency] = anon_sym_is_dependency,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_ignore_DASHcomments] = anon_sym_ignore_DASHcomments,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_windows_DASHshell] = anon_sym_windows_DASHshell,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_backtick_token1] = aux_sym_backtick_token1,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [aux_sym_indented_backtick_token1] = aux_sym_indented_backtick_token1,
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
  [sym_alias] = sym_alias,
  [sym_import] = sym_import,
  [sym_mod] = sym_mod,
  [sym_expression] = sym_expression,
  [sym_value] = sym_value,
  [sym_builtin_function_call] = sym_builtin_function_call,
  [sym__p0] = sym__p0,
  [sym__p1] = sym__p1,
  [sym__p2] = sym__p2,
  [sym_function_call] = sym_function_call,
  [sym_function_parameters] = sym_function_parameters,
  [sym_setting] = sym_setting,
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
  [sym_backtick] = sym_backtick,
  [sym_indented_backtick] = sym_indented_backtick,
  [sym_string] = sym_string,
  [sym_indented_normal_string] = sym_indented_normal_string,
  [sym_normal_string] = sym_normal_string,
  [sym_indented_raw_string] = sym_indented_raw_string,
  [sym_raw_string] = sym_raw_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
  [aux_sym_indented_backtick_repeat1] = aux_sym_indented_backtick_repeat1,
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
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_token1] = {
    .visible = false,
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
  [anon_sym_arch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_num_cpus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os_family] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var_or_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_dependency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHduplicate_DASHrecipes] = {
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
  [anon_sym_tempdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unstable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows_DASHpowershell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows_DASHshell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_backtick_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indented_backtick_token1] = {
    .visible = false,
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
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__p0] = {
    .visible = false,
    .named = true,
  },
  [sym__p1] = {
    .visible = false,
    .named = true,
  },
  [sym__p2] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym__setting_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__setting_string] = {
    .visible = false,
    .named = true,
  },
  [sym__setting_list] = {
    .visible = false,
    .named = true,
  },
  [sym_backtick] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_backtick] = {
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
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__setting_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_backtick_repeat1] = {
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

enum ts_field_identifiers {
  field_function_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
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
  [69] = 67,
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 46,
        '#', 77,
        '\'', 60,
        '(', 18,
        ')', 19,
        ',', 20,
        ':', 10,
        '[', 21,
        '\\', 5,
        ']', 22,
        '`', 24,
        'i', 70,
        'm', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '`') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '`') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(11);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
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
        'n', 6,
        'o', 7,
        'p', 8,
        's', 9,
        't', 10,
        'u', 11,
        'w', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(113);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'q') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 'v') ADVANCE(192);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 214:
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
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 62},
  [114] = {.lex_state = 0},
  [115] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_mod_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_num_cpus] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_os_family] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_env_var] = ACTIONS(1),
    [anon_sym_env_var_or_default] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_is_dependency] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_ignore_DASHcomments] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_windows_DASHshell] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
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
    [sym_file] = STATE(114),
    [sym_alias] = STATE(46),
    [sym_import] = STATE(46),
    [sym_mod] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_value] = STATE(33),
    [sym_builtin_function_call] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_setting] = STATE(46),
    [sym_backtick] = STATE(26),
    [sym_indented_backtick] = STATE(26),
    [sym_string] = STATE(26),
    [sym_indented_normal_string] = STATE(24),
    [sym_normal_string] = STATE(24),
    [sym_indented_raw_string] = STATE(24),
    [sym_raw_string] = STATE(24),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_arch] = ACTIONS(17),
    [anon_sym_num_cpus] = ACTIONS(17),
    [anon_sym_os] = ACTIONS(17),
    [anon_sym_os_family] = ACTIONS(17),
    [anon_sym_shell] = ACTIONS(19),
    [anon_sym_env_var] = ACTIONS(21),
    [anon_sym_env_var_or_default] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(25),
    [anon_sym_is_dependency] = ACTIONS(17),
    [anon_sym_set] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_alias,
    ACTIONS(49), 1,
      aux_sym_import_token1,
    ACTIONS(52), 1,
      aux_sym_mod_token1,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_shell,
    ACTIONS(64), 1,
      anon_sym_env_var,
    ACTIONS(67), 1,
      anon_sym_env_var_or_default,
    ACTIONS(70), 1,
      anon_sym_env,
    ACTIONS(73), 1,
      anon_sym_set,
    ACTIONS(76), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_value,
    STATE(2), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(58), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    STATE(46), 5,
      sym_alias,
      sym_import,
      sym_mod,
      sym_expression,
      sym_setting,
  [89] = 25,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_alias,
    ACTIONS(11), 1,
      aux_sym_import_token1,
    ACTIONS(13), 1,
      aux_sym_mod_token1,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(27), 1,
      anon_sym_set,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    STATE(46), 5,
      sym_alias,
      sym_import,
      sym_mod,
      sym_expression,
      sym_setting,
  [180] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(74), 1,
      sym_expression,
    STATE(111), 1,
      sym_function_parameters,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [255] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(93), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [327] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(74), 1,
      sym_expression,
    STATE(105), 1,
      sym_function_parameters,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [399] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(96), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [471] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(96), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [543] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(93), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [612] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(91), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [681] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(97), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [750] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(87), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [819] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(96), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [888] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(21), 1,
      anon_sym_env_var,
    ACTIONS(23), 1,
      anon_sym_env_var_or_default,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    STATE(101), 1,
      sym_expression,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(17), 5,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
    STATE(26), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
  [957] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(42), 1,
      sym_string,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(106), 15,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      sym_identifier,
  [1007] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(112), 1,
      anon_sym_COLON_EQ,
    STATE(16), 1,
      sym_comment,
    STATE(44), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(110), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1048] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1084] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(120), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1120] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(124), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1156] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(128), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1192] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(132), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1228] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(136), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1264] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(140), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1300] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(144), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1336] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(148), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1371] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1406] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(156), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1441] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1476] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(164), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1511] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(168), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1546] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(172), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1581] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(152), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1618] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(178), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1653] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(182), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1688] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(184), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(186), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1723] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(188), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(190), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1758] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_COLON_EQ,
    STATE(37), 1,
      sym_comment,
    STATE(44), 1,
      sym__setting_boolean,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(110), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1797] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(196), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1832] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(200), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1867] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(204), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1902] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(208), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1937] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(212), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1970] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(216), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2003] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(220), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2036] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(224), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2069] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(228), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2102] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(230), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(232), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2135] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(236), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2168] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(240), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2201] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(242), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(244), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2234] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(246), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(248), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2267] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(250), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(252), 17,
      anon_sym_alias,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_shell,
      anon_sym_env_var,
      anon_sym_env_var_or_default,
      anon_sym_env,
      anon_sym_is_dependency,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2300] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(53), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(260), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(258), 10,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_export,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_positional_DASHarguments,
      anon_sym_unstable,
      anon_sym_windows_DASHpowershell,
  [2331] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_string,
    STATE(52), 1,
      sym_boolean,
    STATE(54), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2369] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_comment,
    STATE(86), 1,
      sym_string,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2400] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_comment,
    STATE(86), 1,
      sym_string,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2431] = 7,
    ACTIONS(270), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(272), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(70), 1,
      sym_escape_sequence,
    ACTIONS(274), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2457] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      sym_string,
    STATE(58), 1,
      sym_comment,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2485] = 7,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_normal_string_token1,
    STATE(59), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_normal_string_repeat1,
    STATE(68), 1,
      sym_escape_sequence,
    ACTIONS(282), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2511] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2539] = 7,
    ACTIONS(272), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(61), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(70), 1,
      sym_escape_sequence,
    ACTIONS(274), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2565] = 6,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      aux_sym_normal_string_token1,
    STATE(68), 1,
      sym_escape_sequence,
    STATE(62), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(291), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2589] = 7,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      aux_sym_normal_string_token1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_normal_string_repeat1,
    STATE(63), 1,
      sym_comment,
    STATE(68), 1,
      sym_escape_sequence,
    ACTIONS(282), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2615] = 6,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(296), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(298), 1,
      aux_sym_indented_normal_string_token1,
    STATE(70), 1,
      sym_escape_sequence,
    STATE(64), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(301), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2639] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym_string,
    STATE(65), 1,
      sym_comment,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2667] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_comment,
    STATE(86), 1,
      sym_string,
    STATE(24), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2695] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(304), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2711] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(306), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2727] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(304), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2743] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(308), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2759] = 5,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(310), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(312), 1,
      aux_sym_indented_raw_string_token1,
    STATE(71), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_indented_raw_string_repeat1,
  [2775] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__setting_list_repeat1,
  [2791] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_boolean,
    STATE(73), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_true,
      anon_sym_false,
  [2805] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_function_parameters_repeat1,
  [2821] = 4,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(320), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(322), 1,
      aux_sym_indented_backtick_token1,
    STATE(75), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [2835] = 5,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(325), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(327), 1,
      aux_sym_indented_backtick_token1,
    STATE(75), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(76), 1,
      sym_comment,
  [2851] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym__setting_list_repeat1,
    STATE(77), 1,
      sym_comment,
  [2867] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(78), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [2881] = 4,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(338), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(340), 1,
      aux_sym_indented_raw_string_token1,
    STATE(79), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [2895] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(80), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [2909] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_comment,
    STATE(31), 2,
      sym__p1,
      sym__p2,
  [2923] = 5,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(350), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(79), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(82), 1,
      sym_comment,
  [2939] = 5,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(327), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(352), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(76), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(83), 1,
      sym_comment,
  [2955] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_function_parameters_repeat1,
    STATE(84), 1,
      sym_comment,
  [2971] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_COLON_EQ,
    STATE(44), 1,
      sym__setting_string,
    STATE(85), 1,
      sym_comment,
  [2984] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2995] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
  [3008] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      anon_sym_COLON_EQ,
    STATE(44), 1,
      sym__setting_list,
    STATE(88), 1,
      sym_comment,
  [3021] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [3032] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__p2,
    STATE(90), 1,
      sym_comment,
  [3045] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_comment,
  [3058] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [3069] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_comment,
  [3082] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__p0,
    STATE(94), 1,
      sym_comment,
  [3095] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__p1,
    STATE(95), 1,
      sym_comment,
  [3108] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3119] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym_comment,
  [3129] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_comment,
  [3139] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(384), 1,
      anon_sym_COLON_EQ,
    STATE(99), 1,
      sym_comment,
  [3149] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
  [3159] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [3169] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(390), 1,
      sym_identifier,
    STATE(102), 1,
      sym_comment,
  [3179] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(392), 1,
      sym_identifier,
    STATE(103), 1,
      sym_comment,
  [3189] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_comment,
  [3199] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_comment,
  [3209] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_comment,
  [3219] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
  [3229] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(400), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym_comment,
  [3239] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(402), 1,
      aux_sym_backtick_token1,
    STATE(109), 1,
      sym_comment,
  [3249] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym_comment,
  [3259] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
  [3269] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(406), 1,
      anon_sym_BQUOTE,
    STATE(112), 1,
      sym_comment,
  [3279] = 3,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(408), 1,
      aux_sym_raw_string_token1,
    STATE(113), 1,
      sym_comment,
  [3289] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_comment,
  [3299] = 1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 327,
  [SMALL_STATE(7)] = 399,
  [SMALL_STATE(8)] = 471,
  [SMALL_STATE(9)] = 543,
  [SMALL_STATE(10)] = 612,
  [SMALL_STATE(11)] = 681,
  [SMALL_STATE(12)] = 750,
  [SMALL_STATE(13)] = 819,
  [SMALL_STATE(14)] = 888,
  [SMALL_STATE(15)] = 957,
  [SMALL_STATE(16)] = 1007,
  [SMALL_STATE(17)] = 1048,
  [SMALL_STATE(18)] = 1084,
  [SMALL_STATE(19)] = 1120,
  [SMALL_STATE(20)] = 1156,
  [SMALL_STATE(21)] = 1192,
  [SMALL_STATE(22)] = 1228,
  [SMALL_STATE(23)] = 1264,
  [SMALL_STATE(24)] = 1300,
  [SMALL_STATE(25)] = 1336,
  [SMALL_STATE(26)] = 1371,
  [SMALL_STATE(27)] = 1406,
  [SMALL_STATE(28)] = 1441,
  [SMALL_STATE(29)] = 1476,
  [SMALL_STATE(30)] = 1511,
  [SMALL_STATE(31)] = 1546,
  [SMALL_STATE(32)] = 1581,
  [SMALL_STATE(33)] = 1618,
  [SMALL_STATE(34)] = 1653,
  [SMALL_STATE(35)] = 1688,
  [SMALL_STATE(36)] = 1723,
  [SMALL_STATE(37)] = 1758,
  [SMALL_STATE(38)] = 1797,
  [SMALL_STATE(39)] = 1832,
  [SMALL_STATE(40)] = 1867,
  [SMALL_STATE(41)] = 1902,
  [SMALL_STATE(42)] = 1937,
  [SMALL_STATE(43)] = 1970,
  [SMALL_STATE(44)] = 2003,
  [SMALL_STATE(45)] = 2036,
  [SMALL_STATE(46)] = 2069,
  [SMALL_STATE(47)] = 2102,
  [SMALL_STATE(48)] = 2135,
  [SMALL_STATE(49)] = 2168,
  [SMALL_STATE(50)] = 2201,
  [SMALL_STATE(51)] = 2234,
  [SMALL_STATE(52)] = 2267,
  [SMALL_STATE(53)] = 2300,
  [SMALL_STATE(54)] = 2331,
  [SMALL_STATE(55)] = 2369,
  [SMALL_STATE(56)] = 2400,
  [SMALL_STATE(57)] = 2431,
  [SMALL_STATE(58)] = 2457,
  [SMALL_STATE(59)] = 2485,
  [SMALL_STATE(60)] = 2511,
  [SMALL_STATE(61)] = 2539,
  [SMALL_STATE(62)] = 2565,
  [SMALL_STATE(63)] = 2589,
  [SMALL_STATE(64)] = 2615,
  [SMALL_STATE(65)] = 2639,
  [SMALL_STATE(66)] = 2667,
  [SMALL_STATE(67)] = 2695,
  [SMALL_STATE(68)] = 2711,
  [SMALL_STATE(69)] = 2727,
  [SMALL_STATE(70)] = 2743,
  [SMALL_STATE(71)] = 2759,
  [SMALL_STATE(72)] = 2775,
  [SMALL_STATE(73)] = 2791,
  [SMALL_STATE(74)] = 2805,
  [SMALL_STATE(75)] = 2821,
  [SMALL_STATE(76)] = 2835,
  [SMALL_STATE(77)] = 2851,
  [SMALL_STATE(78)] = 2867,
  [SMALL_STATE(79)] = 2881,
  [SMALL_STATE(80)] = 2895,
  [SMALL_STATE(81)] = 2909,
  [SMALL_STATE(82)] = 2923,
  [SMALL_STATE(83)] = 2939,
  [SMALL_STATE(84)] = 2955,
  [SMALL_STATE(85)] = 2971,
  [SMALL_STATE(86)] = 2984,
  [SMALL_STATE(87)] = 2995,
  [SMALL_STATE(88)] = 3008,
  [SMALL_STATE(89)] = 3021,
  [SMALL_STATE(90)] = 3032,
  [SMALL_STATE(91)] = 3045,
  [SMALL_STATE(92)] = 3058,
  [SMALL_STATE(93)] = 3069,
  [SMALL_STATE(94)] = 3082,
  [SMALL_STATE(95)] = 3095,
  [SMALL_STATE(96)] = 3108,
  [SMALL_STATE(97)] = 3119,
  [SMALL_STATE(98)] = 3129,
  [SMALL_STATE(99)] = 3139,
  [SMALL_STATE(100)] = 3149,
  [SMALL_STATE(101)] = 3159,
  [SMALL_STATE(102)] = 3169,
  [SMALL_STATE(103)] = 3179,
  [SMALL_STATE(104)] = 3189,
  [SMALL_STATE(105)] = 3199,
  [SMALL_STATE(106)] = 3209,
  [SMALL_STATE(107)] = 3219,
  [SMALL_STATE(108)] = 3229,
  [SMALL_STATE(109)] = 3239,
  [SMALL_STATE(110)] = 3249,
  [SMALL_STATE(111)] = 3259,
  [SMALL_STATE(112)] = 3269,
  [SMALL_STATE(113)] = 3279,
  [SMALL_STATE(114)] = 3289,
  [SMALL_STATE(115)] = 3299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [410] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
