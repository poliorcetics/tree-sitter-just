#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_invocation_dir = 17,
  anon_sym_invocation_dir_native = 18,
  anon_sym_invocation_directory = 19,
  anon_sym_invocation_directory_native = 20,
  anon_sym_justfile = 21,
  anon_sym_justfile_dir = 22,
  anon_sym_justfile_directory = 23,
  anon_sym_source_dir = 24,
  anon_sym_source_directory = 25,
  anon_sym_source_file = 26,
  anon_sym_just_executable = 27,
  anon_sym_just_pid = 28,
  anon_sym_append = 29,
  anon_sym_prepend = 30,
  anon_sym_encode_uri_component = 31,
  anon_sym_quote = 32,
  anon_sym_replace = 33,
  anon_sym_replace_regex = 34,
  anon_sym_trim = 35,
  anon_sym_trim_end = 36,
  anon_sym_trim_end_match = 37,
  anon_sym_trim_end_matches = 38,
  anon_sym_trim_start = 39,
  anon_sym_trim_start_match = 40,
  anon_sym_trim_start_matches = 41,
  anon_sym_COMMA = 42,
  anon_sym_set = 43,
  anon_sym_allow_DASHduplicate_DASHrecipes = 44,
  anon_sym_allow_DASHduplicate_DASHvariables = 45,
  anon_sym_dotenv_DASHfilename = 46,
  anon_sym_dotenv_DASHload = 47,
  anon_sym_dotenv_DASHpath = 48,
  anon_sym_dotenv_DASHrequired = 49,
  anon_sym_export = 50,
  anon_sym_fallback = 51,
  anon_sym_ignore_DASHcomments = 52,
  anon_sym_positional_DASHarguments = 53,
  anon_sym_tempdir = 54,
  anon_sym_unstable = 55,
  anon_sym_windows_DASHpowershell = 56,
  anon_sym_windows_DASHshell = 57,
  anon_sym_LBRACK = 58,
  anon_sym_RBRACK = 59,
  anon_sym_BQUOTE = 60,
  aux_sym_backtick_token1 = 61,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 62,
  aux_sym_indented_backtick_token1 = 63,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 64,
  aux_sym_indented_normal_string_token1 = 65,
  anon_sym_DQUOTE = 66,
  aux_sym_normal_string_token1 = 67,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 68,
  aux_sym_indented_raw_string_token1 = 69,
  anon_sym_SQUOTE = 70,
  aux_sym_raw_string_token1 = 71,
  anon_sym_BSLASHn = 72,
  anon_sym_BSLASHr = 73,
  anon_sym_BSLASHt = 74,
  anon_sym_BSLASH_DQUOTE = 75,
  anon_sym_BSLASH_BSLASH = 76,
  anon_sym_true = 77,
  anon_sym_false = 78,
  aux_sym_comment_token1 = 79,
  sym_file = 80,
  sym_alias = 81,
  sym_import = 82,
  sym_mod = 83,
  sym_expression = 84,
  sym_value = 85,
  sym_builtin_function_call = 86,
  sym__p0 = 87,
  sym__p1 = 88,
  sym__p2 = 89,
  sym__p3 = 90,
  sym_function_call = 91,
  sym_function_parameters = 92,
  sym_setting = 93,
  sym__setting_boolean = 94,
  sym__setting_string = 95,
  sym__setting_list = 96,
  sym_backtick = 97,
  sym_indented_backtick = 98,
  sym_string = 99,
  sym_indented_normal_string = 100,
  sym_normal_string = 101,
  sym_indented_raw_string = 102,
  sym_raw_string = 103,
  sym_escape_sequence = 104,
  sym_boolean = 105,
  sym_comment = 106,
  aux_sym_file_repeat1 = 107,
  aux_sym_function_parameters_repeat1 = 108,
  aux_sym__setting_list_repeat1 = 109,
  aux_sym_indented_backtick_repeat1 = 110,
  aux_sym_indented_normal_string_repeat1 = 111,
  aux_sym_normal_string_repeat1 = 112,
  aux_sym_indented_raw_string_repeat1 = 113,
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
  [anon_sym_invocation_dir] = "invocation_dir",
  [anon_sym_invocation_dir_native] = "invocation_dir_native",
  [anon_sym_invocation_directory] = "invocation_directory",
  [anon_sym_invocation_directory_native] = "invocation_directory_native",
  [anon_sym_justfile] = "justfile",
  [anon_sym_justfile_dir] = "justfile_dir",
  [anon_sym_justfile_directory] = "justfile_directory",
  [anon_sym_source_dir] = "source_dir",
  [anon_sym_source_directory] = "source_directory",
  [anon_sym_source_file] = "source_file",
  [anon_sym_just_executable] = "just_executable",
  [anon_sym_just_pid] = "just_pid",
  [anon_sym_append] = "append",
  [anon_sym_prepend] = "prepend",
  [anon_sym_encode_uri_component] = "encode_uri_component",
  [anon_sym_quote] = "quote",
  [anon_sym_replace] = "replace",
  [anon_sym_replace_regex] = "replace_regex",
  [anon_sym_trim] = "trim",
  [anon_sym_trim_end] = "trim_end",
  [anon_sym_trim_end_match] = "trim_end_match",
  [anon_sym_trim_end_matches] = "trim_end_matches",
  [anon_sym_trim_start] = "trim_start",
  [anon_sym_trim_start_match] = "trim_start_match",
  [anon_sym_trim_start_matches] = "trim_start_matches",
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
  [sym__p3] = "_p3",
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
  [anon_sym_invocation_dir] = anon_sym_invocation_dir,
  [anon_sym_invocation_dir_native] = anon_sym_invocation_dir_native,
  [anon_sym_invocation_directory] = anon_sym_invocation_directory,
  [anon_sym_invocation_directory_native] = anon_sym_invocation_directory_native,
  [anon_sym_justfile] = anon_sym_justfile,
  [anon_sym_justfile_dir] = anon_sym_justfile_dir,
  [anon_sym_justfile_directory] = anon_sym_justfile_directory,
  [anon_sym_source_dir] = anon_sym_source_dir,
  [anon_sym_source_directory] = anon_sym_source_directory,
  [anon_sym_source_file] = anon_sym_source_file,
  [anon_sym_just_executable] = anon_sym_just_executable,
  [anon_sym_just_pid] = anon_sym_just_pid,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_encode_uri_component] = anon_sym_encode_uri_component,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_replace_regex] = anon_sym_replace_regex,
  [anon_sym_trim] = anon_sym_trim,
  [anon_sym_trim_end] = anon_sym_trim_end,
  [anon_sym_trim_end_match] = anon_sym_trim_end_match,
  [anon_sym_trim_end_matches] = anon_sym_trim_end_matches,
  [anon_sym_trim_start] = anon_sym_trim_start,
  [anon_sym_trim_start_match] = anon_sym_trim_start_match,
  [anon_sym_trim_start_matches] = anon_sym_trim_start_matches,
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
  [sym__p3] = sym__p3,
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
  [anon_sym_invocation_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_dir_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invocation_directory_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justfile_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_just_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_just_pid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encode_uri_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_end_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trim_start_matches] = {
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
  [sym__p3] = {
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
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
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '`') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
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
        'j', 6,
        'n', 7,
        'o', 8,
        'p', 9,
        'q', 10,
        'r', 11,
        's', 12,
        't', 13,
        'u', 14,
        'w', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(117);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(145);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'x') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(183);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(201);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(207);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 194:
      if (lookahead == 'q') ADVANCE(215);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 216:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 217:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 219:
      if (lookahead == '_') ADVANCE(239);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(243);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 229:
      if (lookahead == 'w') ADVANCE(249);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(275);
      END_STATE();
    case 259:
      if (lookahead == 'b') ADVANCE(276);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 262:
      if (lookahead == 'x') ADVANCE(279);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 269:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 271:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 272:
      if (lookahead == 'f') ADVANCE(289);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 277:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 278:
      if (lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 281:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 298:
      if (lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 299:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 310:
      if (lookahead == 'y') ADVANCE(321);
      END_STATE();
    case 311:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 312:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(326);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 331:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 348:
      if (lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 349:
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 358:
      if (lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 361:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 370:
      if (lookahead == 'v') ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_invocation_directory_native);
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
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
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
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {(TSStateId)(-1)},
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
    [anon_sym_invocation_dir] = ACTIONS(1),
    [anon_sym_invocation_dir_native] = ACTIONS(1),
    [anon_sym_invocation_directory] = ACTIONS(1),
    [anon_sym_invocation_directory_native] = ACTIONS(1),
    [anon_sym_justfile] = ACTIONS(1),
    [anon_sym_justfile_dir] = ACTIONS(1),
    [anon_sym_justfile_directory] = ACTIONS(1),
    [anon_sym_source_dir] = ACTIONS(1),
    [anon_sym_source_directory] = ACTIONS(1),
    [anon_sym_source_file] = ACTIONS(1),
    [anon_sym_just_executable] = ACTIONS(1),
    [anon_sym_just_pid] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
    [anon_sym_encode_uri_component] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_replace] = ACTIONS(1),
    [anon_sym_replace_regex] = ACTIONS(1),
    [anon_sym_trim] = ACTIONS(1),
    [anon_sym_trim_end] = ACTIONS(1),
    [anon_sym_trim_end_match] = ACTIONS(1),
    [anon_sym_trim_end_matches] = ACTIONS(1),
    [anon_sym_trim_start] = ACTIONS(1),
    [anon_sym_trim_start_match] = ACTIONS(1),
    [anon_sym_trim_start_matches] = ACTIONS(1),
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
    [sym_file] = STATE(124),
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(2),
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
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
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
    [anon_sym_invocation_dir] = ACTIONS(17),
    [anon_sym_invocation_dir_native] = ACTIONS(17),
    [anon_sym_invocation_directory] = ACTIONS(17),
    [anon_sym_invocation_directory_native] = ACTIONS(17),
    [anon_sym_justfile] = ACTIONS(17),
    [anon_sym_justfile_dir] = ACTIONS(17),
    [anon_sym_justfile_directory] = ACTIONS(17),
    [anon_sym_source_dir] = ACTIONS(17),
    [anon_sym_source_directory] = ACTIONS(17),
    [anon_sym_source_file] = ACTIONS(17),
    [anon_sym_just_executable] = ACTIONS(17),
    [anon_sym_just_pid] = ACTIONS(17),
    [anon_sym_append] = ACTIONS(23),
    [anon_sym_prepend] = ACTIONS(23),
    [anon_sym_encode_uri_component] = ACTIONS(21),
    [anon_sym_quote] = ACTIONS(21),
    [anon_sym_replace] = ACTIONS(27),
    [anon_sym_replace_regex] = ACTIONS(27),
    [anon_sym_trim] = ACTIONS(21),
    [anon_sym_trim_end] = ACTIONS(21),
    [anon_sym_trim_end_match] = ACTIONS(23),
    [anon_sym_trim_end_matches] = ACTIONS(23),
    [anon_sym_trim_start] = ACTIONS(21),
    [anon_sym_trim_start_match] = ACTIONS(23),
    [anon_sym_trim_start_matches] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_alias] = STATE(56),
    [sym_import] = STATE(56),
    [sym_mod] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(56),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_alias] = ACTIONS(50),
    [aux_sym_import_token1] = ACTIONS(53),
    [aux_sym_mod_token1] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_arch] = ACTIONS(62),
    [anon_sym_num_cpus] = ACTIONS(62),
    [anon_sym_os] = ACTIONS(62),
    [anon_sym_os_family] = ACTIONS(62),
    [anon_sym_shell] = ACTIONS(65),
    [anon_sym_env_var] = ACTIONS(68),
    [anon_sym_env_var_or_default] = ACTIONS(71),
    [anon_sym_env] = ACTIONS(74),
    [anon_sym_is_dependency] = ACTIONS(62),
    [anon_sym_invocation_dir] = ACTIONS(62),
    [anon_sym_invocation_dir_native] = ACTIONS(62),
    [anon_sym_invocation_directory] = ACTIONS(62),
    [anon_sym_invocation_directory_native] = ACTIONS(62),
    [anon_sym_justfile] = ACTIONS(62),
    [anon_sym_justfile_dir] = ACTIONS(62),
    [anon_sym_justfile_directory] = ACTIONS(62),
    [anon_sym_source_dir] = ACTIONS(62),
    [anon_sym_source_directory] = ACTIONS(62),
    [anon_sym_source_file] = ACTIONS(62),
    [anon_sym_just_executable] = ACTIONS(62),
    [anon_sym_just_pid] = ACTIONS(62),
    [anon_sym_append] = ACTIONS(71),
    [anon_sym_prepend] = ACTIONS(71),
    [anon_sym_encode_uri_component] = ACTIONS(68),
    [anon_sym_quote] = ACTIONS(68),
    [anon_sym_replace] = ACTIONS(77),
    [anon_sym_replace_regex] = ACTIONS(77),
    [anon_sym_trim] = ACTIONS(68),
    [anon_sym_trim_end] = ACTIONS(68),
    [anon_sym_trim_end_match] = ACTIONS(71),
    [anon_sym_trim_end_matches] = ACTIONS(71),
    [anon_sym_trim_start] = ACTIONS(68),
    [anon_sym_trim_start_match] = ACTIONS(71),
    [anon_sym_trim_start_matches] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(87), 1,
      sym_expression,
    STATE(118), 1,
      sym_function_parameters,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [102] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(102), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [201] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(87), 1,
      sym_expression,
    STATE(113), 1,
      sym_function_parameters,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [300] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(100), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [399] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(100), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [498] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(102), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [594] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(91), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [690] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(115), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [786] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(122), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [882] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(96), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [978] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(104), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [1074] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(98), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [1170] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(100), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [1266] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_shell,
    ACTIONS(25), 1,
      anon_sym_env,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    STATE(119), 1,
      sym_expression,
    ACTIONS(27), 2,
      anon_sym_replace,
      anon_sym_replace_regex,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    STATE(36), 5,
      sym_builtin_function_call,
      sym_function_call,
      sym_backtick,
      sym_indented_backtick,
      sym_string,
    ACTIONS(21), 6,
      anon_sym_env_var,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_start,
    ACTIONS(23), 7,
      anon_sym_env_var_or_default,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
    ACTIONS(17), 17,
      anon_sym_arch,
      anon_sym_num_cpus,
      anon_sym_os,
      anon_sym_os_family,
      anon_sym_is_dependency,
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
  [1362] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_comment,
    STATE(55), 1,
      sym_string,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(111), 40,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      sym_identifier,
  [1437] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      anon_sym_COLON_EQ,
    STATE(19), 1,
      sym_comment,
    STATE(47), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(115), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1503] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(121), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1564] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(125), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1625] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(129), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1686] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(133), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1747] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(137), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1808] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(141), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1869] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(145), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1930] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(149), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [1991] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(153), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2051] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      anon_sym_COLON_EQ,
    STATE(29), 1,
      sym_comment,
    STATE(47), 1,
      sym__setting_boolean,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(115), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2115] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(159), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2175] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(163), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2235] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(167), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2297] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(173), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2357] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(177), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2417] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(181), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2477] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(167), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2537] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(185), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2597] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(189), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2657] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(193), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2717] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(197), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2777] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(201), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2837] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(205), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2897] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(209), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2957] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(213), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3017] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(217), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3077] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(221), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3137] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(225), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3195] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(229), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3253] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(233), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3311] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(237), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3369] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(241), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3427] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(245), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3485] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(249), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3543] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(253), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3601] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(257), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3659] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(259), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(261), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3717] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(263), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(265), 42,
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
      anon_sym_invocation_dir,
      anon_sym_invocation_dir_native,
      anon_sym_invocation_directory,
      anon_sym_invocation_directory_native,
      anon_sym_justfile,
      anon_sym_justfile_dir,
      anon_sym_justfile_directory,
      anon_sym_source_dir,
      anon_sym_source_directory,
      anon_sym_source_file,
      anon_sym_just_executable,
      anon_sym_just_pid,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_encode_uri_component,
      anon_sym_quote,
      anon_sym_replace,
      anon_sym_replace_regex,
      anon_sym_trim,
      anon_sym_trim_end,
      anon_sym_trim_end_match,
      anon_sym_trim_end_matches,
      anon_sym_trim_start,
      anon_sym_trim_start_match,
      anon_sym_trim_start_matches,
      anon_sym_set,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [3775] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(273), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(271), 10,
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
  [3806] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_string,
    STATE(54), 1,
      sym_boolean,
    STATE(59), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [3844] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_comment,
    STATE(101), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [3875] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_comment,
    STATE(101), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [3906] = 7,
    ACTIONS(283), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(287), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [3932] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_string,
    STATE(63), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [3960] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_comment,
    STATE(81), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [3988] = 7,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_normal_string_token1,
    STATE(65), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_normal_string_repeat1,
    STATE(73), 1,
      sym_escape_sequence,
    ACTIONS(295), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4014] = 7,
    ACTIONS(285), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(66), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(75), 1,
      sym_escape_sequence,
    ACTIONS(287), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4040] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym_normal_string_token1,
    STATE(73), 1,
      sym_escape_sequence,
    STATE(67), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(304), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4064] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(309), 1,
      aux_sym_indented_normal_string_token1,
    STATE(75), 1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(312), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4088] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_string,
    STATE(69), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [4116] = 7,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      aux_sym_normal_string_token1,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_normal_string_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(73), 1,
      sym_escape_sequence,
    ACTIONS(295), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4142] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym_comment,
    STATE(101), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [4170] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4186] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(319), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4202] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4218] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [4234] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [4248] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__setting_list_repeat1,
  [4264] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    STATE(78), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_indented_raw_string_repeat1,
  [4280] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_boolean,
    STATE(79), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
  [4294] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(80), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [4308] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__setting_list_repeat1,
    STATE(81), 1,
      sym_comment,
  [4324] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(345), 1,
      aux_sym_indented_raw_string_token1,
    STATE(82), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [4338] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(41), 2,
      sym__p1,
      sym__p2,
  [4352] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(84), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [4366] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(357), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(85), 1,
      sym_comment,
  [4382] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(359), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(85), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(86), 1,
      sym_comment,
  [4398] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_function_parameters_repeat1,
  [4414] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_function_parameters_repeat1,
    STATE(88), 1,
      sym_comment,
  [4430] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(367), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(82), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(89), 1,
      sym_comment,
  [4446] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_string,
    STATE(90), 1,
      sym_comment,
  [4459] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_comment,
  [4472] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p1,
    STATE(92), 1,
      sym_comment,
  [4485] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p3,
    STATE(93), 1,
      sym_comment,
  [4498] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p0,
    STATE(94), 1,
      sym_comment,
  [4511] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [4522] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
  [4535] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p2,
    STATE(97), 1,
      sym_comment,
  [4548] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_comment,
  [4561] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(99), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [4572] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4583] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4594] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      sym_comment,
  [4607] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_list,
    STATE(103), 1,
      sym_comment,
  [4620] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_comment,
  [4630] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_comment,
  [4640] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_comment,
  [4650] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
  [4660] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_comment,
  [4670] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [4680] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      sym_identifier,
    STATE(110), 1,
      sym_comment,
  [4690] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      aux_sym_raw_string_token1,
    STATE(111), 1,
      sym_comment,
  [4700] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(112), 1,
      sym_comment,
  [4710] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
  [4720] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    STATE(114), 1,
      sym_comment,
  [4730] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      sym_comment,
  [4740] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
  [4750] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      aux_sym_backtick_token1,
    STATE(117), 1,
      sym_comment,
  [4760] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
  [4770] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      sym_comment,
  [4780] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [4790] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [4800] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [4810] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_COLON_EQ,
    STATE(123), 1,
      sym_comment,
  [4820] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_comment,
  [4830] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 201,
  [SMALL_STATE(7)] = 300,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 498,
  [SMALL_STATE(10)] = 594,
  [SMALL_STATE(11)] = 690,
  [SMALL_STATE(12)] = 786,
  [SMALL_STATE(13)] = 882,
  [SMALL_STATE(14)] = 978,
  [SMALL_STATE(15)] = 1074,
  [SMALL_STATE(16)] = 1170,
  [SMALL_STATE(17)] = 1266,
  [SMALL_STATE(18)] = 1362,
  [SMALL_STATE(19)] = 1437,
  [SMALL_STATE(20)] = 1503,
  [SMALL_STATE(21)] = 1564,
  [SMALL_STATE(22)] = 1625,
  [SMALL_STATE(23)] = 1686,
  [SMALL_STATE(24)] = 1747,
  [SMALL_STATE(25)] = 1808,
  [SMALL_STATE(26)] = 1869,
  [SMALL_STATE(27)] = 1930,
  [SMALL_STATE(28)] = 1991,
  [SMALL_STATE(29)] = 2051,
  [SMALL_STATE(30)] = 2115,
  [SMALL_STATE(31)] = 2175,
  [SMALL_STATE(32)] = 2235,
  [SMALL_STATE(33)] = 2297,
  [SMALL_STATE(34)] = 2357,
  [SMALL_STATE(35)] = 2417,
  [SMALL_STATE(36)] = 2477,
  [SMALL_STATE(37)] = 2537,
  [SMALL_STATE(38)] = 2597,
  [SMALL_STATE(39)] = 2657,
  [SMALL_STATE(40)] = 2717,
  [SMALL_STATE(41)] = 2777,
  [SMALL_STATE(42)] = 2837,
  [SMALL_STATE(43)] = 2897,
  [SMALL_STATE(44)] = 2957,
  [SMALL_STATE(45)] = 3017,
  [SMALL_STATE(46)] = 3077,
  [SMALL_STATE(47)] = 3137,
  [SMALL_STATE(48)] = 3195,
  [SMALL_STATE(49)] = 3253,
  [SMALL_STATE(50)] = 3311,
  [SMALL_STATE(51)] = 3369,
  [SMALL_STATE(52)] = 3427,
  [SMALL_STATE(53)] = 3485,
  [SMALL_STATE(54)] = 3543,
  [SMALL_STATE(55)] = 3601,
  [SMALL_STATE(56)] = 3659,
  [SMALL_STATE(57)] = 3717,
  [SMALL_STATE(58)] = 3775,
  [SMALL_STATE(59)] = 3806,
  [SMALL_STATE(60)] = 3844,
  [SMALL_STATE(61)] = 3875,
  [SMALL_STATE(62)] = 3906,
  [SMALL_STATE(63)] = 3932,
  [SMALL_STATE(64)] = 3960,
  [SMALL_STATE(65)] = 3988,
  [SMALL_STATE(66)] = 4014,
  [SMALL_STATE(67)] = 4040,
  [SMALL_STATE(68)] = 4064,
  [SMALL_STATE(69)] = 4088,
  [SMALL_STATE(70)] = 4116,
  [SMALL_STATE(71)] = 4142,
  [SMALL_STATE(72)] = 4170,
  [SMALL_STATE(73)] = 4186,
  [SMALL_STATE(74)] = 4202,
  [SMALL_STATE(75)] = 4218,
  [SMALL_STATE(76)] = 4234,
  [SMALL_STATE(77)] = 4248,
  [SMALL_STATE(78)] = 4264,
  [SMALL_STATE(79)] = 4280,
  [SMALL_STATE(80)] = 4294,
  [SMALL_STATE(81)] = 4308,
  [SMALL_STATE(82)] = 4324,
  [SMALL_STATE(83)] = 4338,
  [SMALL_STATE(84)] = 4352,
  [SMALL_STATE(85)] = 4366,
  [SMALL_STATE(86)] = 4382,
  [SMALL_STATE(87)] = 4398,
  [SMALL_STATE(88)] = 4414,
  [SMALL_STATE(89)] = 4430,
  [SMALL_STATE(90)] = 4446,
  [SMALL_STATE(91)] = 4459,
  [SMALL_STATE(92)] = 4472,
  [SMALL_STATE(93)] = 4485,
  [SMALL_STATE(94)] = 4498,
  [SMALL_STATE(95)] = 4511,
  [SMALL_STATE(96)] = 4522,
  [SMALL_STATE(97)] = 4535,
  [SMALL_STATE(98)] = 4548,
  [SMALL_STATE(99)] = 4561,
  [SMALL_STATE(100)] = 4572,
  [SMALL_STATE(101)] = 4583,
  [SMALL_STATE(102)] = 4594,
  [SMALL_STATE(103)] = 4607,
  [SMALL_STATE(104)] = 4620,
  [SMALL_STATE(105)] = 4630,
  [SMALL_STATE(106)] = 4640,
  [SMALL_STATE(107)] = 4650,
  [SMALL_STATE(108)] = 4660,
  [SMALL_STATE(109)] = 4670,
  [SMALL_STATE(110)] = 4680,
  [SMALL_STATE(111)] = 4690,
  [SMALL_STATE(112)] = 4700,
  [SMALL_STATE(113)] = 4710,
  [SMALL_STATE(114)] = 4720,
  [SMALL_STATE(115)] = 4730,
  [SMALL_STATE(116)] = 4740,
  [SMALL_STATE(117)] = 4750,
  [SMALL_STATE(118)] = 4760,
  [SMALL_STATE(119)] = 4770,
  [SMALL_STATE(120)] = 4780,
  [SMALL_STATE(121)] = 4790,
  [SMALL_STATE(122)] = 4800,
  [SMALL_STATE(123)] = 4810,
  [SMALL_STATE(124)] = 4820,
  [SMALL_STATE(125)] = 4830,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 4, 0, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [435] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
