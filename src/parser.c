#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 58
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
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
  anon_sym_capitalize = 42,
  anon_sym_kebabcase = 43,
  anon_sym_lowercamelcase = 44,
  anon_sym_lowercase = 45,
  anon_sym_shoutykebabcase = 46,
  anon_sym_shoutysnakecase = 47,
  anon_sym_snakecase = 48,
  anon_sym_titlecase = 49,
  anon_sym_uppercamelcase = 50,
  anon_sym_uppercase = 51,
  anon_sym_absolute_path = 52,
  anon_sym_canonicalize = 53,
  anon_sym_extension = 54,
  anon_sym_file_name = 55,
  anon_sym_file_stem = 56,
  anon_sym_parent_dir = 57,
  anon_sym_parent_directory = 58,
  anon_sym_without_extension = 59,
  anon_sym_clean = 60,
  anon_sym_join = 61,
  anon_sym_path_exists = 62,
  anon_sym_error = 63,
  anon_sym_blake3 = 64,
  anon_sym_blake3_file = 65,
  anon_sym_sha256 = 66,
  anon_sym_sha256_file = 67,
  anon_sym_uuid = 68,
  anon_sym_choose = 69,
  anon_sym_COMMA = 70,
  anon_sym_set = 71,
  anon_sym_allow_DASHduplicate_DASHrecipes = 72,
  anon_sym_allow_DASHduplicate_DASHvariables = 73,
  anon_sym_dotenv_DASHfilename = 74,
  anon_sym_dotenv_DASHload = 75,
  anon_sym_dotenv_DASHpath = 76,
  anon_sym_dotenv_DASHrequired = 77,
  anon_sym_export = 78,
  anon_sym_fallback = 79,
  anon_sym_ignore_DASHcomments = 80,
  anon_sym_positional_DASHarguments = 81,
  anon_sym_tempdir = 82,
  anon_sym_unstable = 83,
  anon_sym_windows_DASHpowershell = 84,
  anon_sym_windows_DASHshell = 85,
  anon_sym_LBRACK = 86,
  anon_sym_RBRACK = 87,
  anon_sym_BQUOTE = 88,
  aux_sym_backtick_token1 = 89,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 90,
  aux_sym_indented_backtick_token1 = 91,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 92,
  aux_sym_indented_normal_string_token1 = 93,
  anon_sym_DQUOTE = 94,
  aux_sym_normal_string_token1 = 95,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 96,
  aux_sym_indented_raw_string_token1 = 97,
  anon_sym_SQUOTE = 98,
  aux_sym_raw_string_token1 = 99,
  anon_sym_BSLASHn = 100,
  anon_sym_BSLASHr = 101,
  anon_sym_BSLASHt = 102,
  anon_sym_BSLASH_DQUOTE = 103,
  anon_sym_BSLASH_BSLASH = 104,
  anon_sym_true = 105,
  anon_sym_false = 106,
  aux_sym_comment_token1 = 107,
  sym_file = 108,
  sym_alias = 109,
  sym_import = 110,
  sym_mod = 111,
  sym_expression = 112,
  sym_value = 113,
  sym_builtin_function_call = 114,
  sym__p0 = 115,
  sym__p1 = 116,
  sym__p2 = 117,
  sym__p3 = 118,
  sym__pN = 119,
  sym_function_call = 120,
  sym_function_parameters = 121,
  sym_setting = 122,
  sym__setting_boolean = 123,
  sym__setting_string = 124,
  sym__setting_list = 125,
  sym_backtick = 126,
  sym_indented_backtick = 127,
  sym_string = 128,
  sym_indented_normal_string = 129,
  sym_normal_string = 130,
  sym_indented_raw_string = 131,
  sym_raw_string = 132,
  sym_escape_sequence = 133,
  sym_boolean = 134,
  sym_comment = 135,
  aux_sym_file_repeat1 = 136,
  aux_sym_function_parameters_repeat1 = 137,
  aux_sym__setting_list_repeat1 = 138,
  aux_sym_indented_backtick_repeat1 = 139,
  aux_sym_indented_normal_string_repeat1 = 140,
  aux_sym_normal_string_repeat1 = 141,
  aux_sym_indented_raw_string_repeat1 = 142,
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
  [anon_sym_capitalize] = "capitalize",
  [anon_sym_kebabcase] = "kebabcase",
  [anon_sym_lowercamelcase] = "lowercamelcase",
  [anon_sym_lowercase] = "lowercase",
  [anon_sym_shoutykebabcase] = "shoutykebabcase",
  [anon_sym_shoutysnakecase] = "shoutysnakecase",
  [anon_sym_snakecase] = "snakecase",
  [anon_sym_titlecase] = "titlecase",
  [anon_sym_uppercamelcase] = "uppercamelcase",
  [anon_sym_uppercase] = "uppercase",
  [anon_sym_absolute_path] = "absolute_path",
  [anon_sym_canonicalize] = "canonicalize",
  [anon_sym_extension] = "extension",
  [anon_sym_file_name] = "file_name",
  [anon_sym_file_stem] = "file_stem",
  [anon_sym_parent_dir] = "parent_dir",
  [anon_sym_parent_directory] = "parent_directory",
  [anon_sym_without_extension] = "without_extension",
  [anon_sym_clean] = "clean",
  [anon_sym_join] = "join",
  [anon_sym_path_exists] = "path_exists",
  [anon_sym_error] = "error",
  [anon_sym_blake3] = "blake3",
  [anon_sym_blake3_file] = "blake3_file",
  [anon_sym_sha256] = "sha256",
  [anon_sym_sha256_file] = "sha256_file",
  [anon_sym_uuid] = "uuid",
  [anon_sym_choose] = "choose",
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
  [sym__pN] = "_pN",
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
  [anon_sym_capitalize] = anon_sym_capitalize,
  [anon_sym_kebabcase] = anon_sym_kebabcase,
  [anon_sym_lowercamelcase] = anon_sym_lowercamelcase,
  [anon_sym_lowercase] = anon_sym_lowercase,
  [anon_sym_shoutykebabcase] = anon_sym_shoutykebabcase,
  [anon_sym_shoutysnakecase] = anon_sym_shoutysnakecase,
  [anon_sym_snakecase] = anon_sym_snakecase,
  [anon_sym_titlecase] = anon_sym_titlecase,
  [anon_sym_uppercamelcase] = anon_sym_uppercamelcase,
  [anon_sym_uppercase] = anon_sym_uppercase,
  [anon_sym_absolute_path] = anon_sym_absolute_path,
  [anon_sym_canonicalize] = anon_sym_canonicalize,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_file_name] = anon_sym_file_name,
  [anon_sym_file_stem] = anon_sym_file_stem,
  [anon_sym_parent_dir] = anon_sym_parent_dir,
  [anon_sym_parent_directory] = anon_sym_parent_directory,
  [anon_sym_without_extension] = anon_sym_without_extension,
  [anon_sym_clean] = anon_sym_clean,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_path_exists] = anon_sym_path_exists,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_blake3] = anon_sym_blake3,
  [anon_sym_blake3_file] = anon_sym_blake3_file,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_sha256_file] = anon_sym_sha256_file,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_choose] = anon_sym_choose,
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
  [sym__pN] = sym__pN,
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
  [anon_sym_capitalize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kebabcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowercamelcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowercase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shoutykebabcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shoutysnakecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snakecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_titlecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uppercamelcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uppercase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolute_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_canonicalize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_stem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_without_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake3_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choose] = {
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
  [sym__pN] = {
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
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'i', 7,
        'j', 8,
        'k', 9,
        'l', 10,
        'n', 11,
        'o', 12,
        'p', 13,
        'q', 14,
        'r', 15,
        's', 16,
        't', 17,
        'u', 18,
        'w', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 93:
      if (lookahead == '2') ADVANCE(141);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 119:
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(183);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 141:
      if (lookahead == '5') ADVANCE(188);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 159:
      if (lookahead == '3') ADVANCE(203);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 164:
      if (lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 188:
      if (lookahead == '6') ADVANCE(230);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(238);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 198:
      if (lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_blake3);
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_choose);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(247);
      END_STATE();
    case 208:
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 218:
      if (lookahead == 'x') ADVANCE(257);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 225:
      if (lookahead == '_') ADVANCE(264);
      END_STATE();
    case 226:
      if (lookahead == 'x') ADVANCE(265);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_sha256);
      if (lookahead == '_') ADVANCE(269);
      END_STATE();
    case 231:
      if (lookahead == 'k') ADVANCE(270);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 233:
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 244:
      if (lookahead == 'f') ADVANCE(284);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 247:
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 251:
      if (lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 261:
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(311);
      END_STATE();
    case 269:
      if (lookahead == 'f') ADVANCE(312);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'f') ADVANCE(317);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 280:
      if (lookahead == '-') ADVANCE(324);
      END_STATE();
    case 281:
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 282:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 286:
      if (lookahead == 'z') ADVANCE(330);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 296:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 299:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(344);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 313:
      if (lookahead == 'b') ADVANCE(354);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 324:
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 326:
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 334:
      if (lookahead == 'q') ADVANCE(375);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 355:
      if (lookahead == 'k') ADVANCE(390);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 360:
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 365:
      if (lookahead == 'h') ADVANCE(397);
      END_STATE();
    case 366:
      if (lookahead == 'x') ADVANCE(398);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 370:
      if (lookahead == 'z') ADVANCE(402);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 374:
      if (lookahead == 'h') ADVANCE(405);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 376:
      if (lookahead == '_') ADVANCE(407);
      END_STATE();
    case 377:
      if (lookahead == '_') ADVANCE(408);
      END_STATE();
    case 378:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 379:
      if (lookahead == '_') ADVANCE(410);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 383:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_parent_dir);
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 386:
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 389:
      if (lookahead == 'b') ADVANCE(420);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 395:
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 396:
      if (lookahead == 'w') ADVANCE(427);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 400:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_blake3_file);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 407:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 411:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 415:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_path_exists);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_sha256_file);
      END_STATE();
    case 420:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 421:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 425:
      if (lookahead == 'm') ADVANCE(450);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(455);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 439:
      if (lookahead == 'y') ADVANCE(463);
      END_STATE();
    case 440:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 445:
      if (lookahead == 'x') ADVANCE(469);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 449:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 457:
      if (lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 459:
      if (lookahead == 'm') ADVANCE(482);
      END_STATE();
    case 460:
      if (lookahead == 'f') ADVANCE(483);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 468:
      if (lookahead == 'g') ADVANCE(490);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 473:
      if (lookahead == 'h') ADVANCE(494);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 481:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 482:
      if (lookahead == 'p') ADVANCE(502);
      END_STATE();
    case 483:
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(510);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 495:
      if (lookahead == 'c') ADVANCE(515);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 497:
      if (lookahead == 'h') ADVANCE(516);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 499:
      if (lookahead == '-') ADVANCE(518);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 503:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 506:
      if (lookahead == 'c') ADVANCE(522);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 509:
      if (lookahead == 'y') ADVANCE(524);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 513:
      if (lookahead == 'y') ADVANCE(526);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 515:
      if (lookahead == 'h') ADVANCE(528);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(531);
      if (lookahead == 'v') ADVANCE(532);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 521:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(541);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 532:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 537:
      if (lookahead == 'y') ADVANCE(548);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(549);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(550);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 542:
      if (lookahead == 'c') ADVANCE(552);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 552:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 553:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 555:
      if (lookahead == 'v') ADVANCE(561);
      END_STATE();
    case 556:
      if (lookahead == 'y') ADVANCE(562);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 558:
      if (lookahead == 'p') ADVANCE(564);
      END_STATE();
    case 559:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 561:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(567);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 564:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 565:
      if (lookahead == 'b') ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 570:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 572:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 577:
      if (lookahead == 'v') ADVANCE(578);
      END_STATE();
    case 578:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 579:
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
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
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
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 62},
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
    [anon_sym_capitalize] = ACTIONS(1),
    [anon_sym_kebabcase] = ACTIONS(1),
    [anon_sym_lowercamelcase] = ACTIONS(1),
    [anon_sym_lowercase] = ACTIONS(1),
    [anon_sym_shoutykebabcase] = ACTIONS(1),
    [anon_sym_shoutysnakecase] = ACTIONS(1),
    [anon_sym_snakecase] = ACTIONS(1),
    [anon_sym_titlecase] = ACTIONS(1),
    [anon_sym_uppercamelcase] = ACTIONS(1),
    [anon_sym_uppercase] = ACTIONS(1),
    [anon_sym_absolute_path] = ACTIONS(1),
    [anon_sym_canonicalize] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_file_name] = ACTIONS(1),
    [anon_sym_file_stem] = ACTIONS(1),
    [anon_sym_parent_dir] = ACTIONS(1),
    [anon_sym_parent_directory] = ACTIONS(1),
    [anon_sym_without_extension] = ACTIONS(1),
    [anon_sym_clean] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_path_exists] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_blake3] = ACTIONS(1),
    [anon_sym_blake3_file] = ACTIONS(1),
    [anon_sym_sha256] = ACTIONS(1),
    [anon_sym_sha256_file] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
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
    [sym_file] = STATE(123),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
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
    [anon_sym_capitalize] = ACTIONS(68),
    [anon_sym_kebabcase] = ACTIONS(68),
    [anon_sym_lowercamelcase] = ACTIONS(68),
    [anon_sym_lowercase] = ACTIONS(68),
    [anon_sym_shoutykebabcase] = ACTIONS(68),
    [anon_sym_shoutysnakecase] = ACTIONS(68),
    [anon_sym_snakecase] = ACTIONS(68),
    [anon_sym_titlecase] = ACTIONS(68),
    [anon_sym_uppercamelcase] = ACTIONS(68),
    [anon_sym_uppercase] = ACTIONS(68),
    [anon_sym_absolute_path] = ACTIONS(68),
    [anon_sym_canonicalize] = ACTIONS(68),
    [anon_sym_extension] = ACTIONS(68),
    [anon_sym_file_name] = ACTIONS(68),
    [anon_sym_file_stem] = ACTIONS(68),
    [anon_sym_parent_dir] = ACTIONS(68),
    [anon_sym_parent_directory] = ACTIONS(68),
    [anon_sym_without_extension] = ACTIONS(68),
    [anon_sym_clean] = ACTIONS(68),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_path_exists] = ACTIONS(68),
    [anon_sym_error] = ACTIONS(68),
    [anon_sym_blake3] = ACTIONS(68),
    [anon_sym_blake3_file] = ACTIONS(68),
    [anon_sym_sha256] = ACTIONS(68),
    [anon_sym_sha256_file] = ACTIONS(68),
    [anon_sym_uuid] = ACTIONS(62),
    [anon_sym_choose] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(89),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(117),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(101),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(102),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(103),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(89),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(114),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(6),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(105),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(107),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(102),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(9),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(90),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(10),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(108),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(11),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(121),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(12),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(96),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(13),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(105),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(14),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(101),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(15),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(100),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(16),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(118),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(17),
    [sym_identifier] = ACTIONS(7),
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
    [anon_sym_capitalize] = ACTIONS(21),
    [anon_sym_kebabcase] = ACTIONS(21),
    [anon_sym_lowercamelcase] = ACTIONS(21),
    [anon_sym_lowercase] = ACTIONS(21),
    [anon_sym_shoutykebabcase] = ACTIONS(21),
    [anon_sym_shoutysnakecase] = ACTIONS(21),
    [anon_sym_snakecase] = ACTIONS(21),
    [anon_sym_titlecase] = ACTIONS(21),
    [anon_sym_uppercamelcase] = ACTIONS(21),
    [anon_sym_uppercase] = ACTIONS(21),
    [anon_sym_absolute_path] = ACTIONS(21),
    [anon_sym_canonicalize] = ACTIONS(21),
    [anon_sym_extension] = ACTIONS(21),
    [anon_sym_file_name] = ACTIONS(21),
    [anon_sym_file_stem] = ACTIONS(21),
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_string] = STATE(55),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_alias] = ACTIONS(111),
    [aux_sym_import_token1] = ACTIONS(111),
    [aux_sym_mod_token1] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_arch] = ACTIONS(111),
    [anon_sym_num_cpus] = ACTIONS(111),
    [anon_sym_os] = ACTIONS(111),
    [anon_sym_os_family] = ACTIONS(111),
    [anon_sym_shell] = ACTIONS(111),
    [anon_sym_env_var] = ACTIONS(111),
    [anon_sym_env_var_or_default] = ACTIONS(111),
    [anon_sym_env] = ACTIONS(111),
    [anon_sym_is_dependency] = ACTIONS(111),
    [anon_sym_invocation_dir] = ACTIONS(111),
    [anon_sym_invocation_dir_native] = ACTIONS(111),
    [anon_sym_invocation_directory] = ACTIONS(111),
    [anon_sym_invocation_directory_native] = ACTIONS(111),
    [anon_sym_justfile] = ACTIONS(111),
    [anon_sym_justfile_dir] = ACTIONS(111),
    [anon_sym_justfile_directory] = ACTIONS(111),
    [anon_sym_source_dir] = ACTIONS(111),
    [anon_sym_source_directory] = ACTIONS(111),
    [anon_sym_source_file] = ACTIONS(111),
    [anon_sym_just_executable] = ACTIONS(111),
    [anon_sym_just_pid] = ACTIONS(111),
    [anon_sym_append] = ACTIONS(111),
    [anon_sym_prepend] = ACTIONS(111),
    [anon_sym_encode_uri_component] = ACTIONS(111),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_replace] = ACTIONS(111),
    [anon_sym_replace_regex] = ACTIONS(111),
    [anon_sym_trim] = ACTIONS(111),
    [anon_sym_trim_end] = ACTIONS(111),
    [anon_sym_trim_end_match] = ACTIONS(111),
    [anon_sym_trim_end_matches] = ACTIONS(111),
    [anon_sym_trim_start] = ACTIONS(111),
    [anon_sym_trim_start_match] = ACTIONS(111),
    [anon_sym_trim_start_matches] = ACTIONS(111),
    [anon_sym_capitalize] = ACTIONS(111),
    [anon_sym_kebabcase] = ACTIONS(111),
    [anon_sym_lowercamelcase] = ACTIONS(111),
    [anon_sym_lowercase] = ACTIONS(111),
    [anon_sym_shoutykebabcase] = ACTIONS(111),
    [anon_sym_shoutysnakecase] = ACTIONS(111),
    [anon_sym_snakecase] = ACTIONS(111),
    [anon_sym_titlecase] = ACTIONS(111),
    [anon_sym_uppercamelcase] = ACTIONS(111),
    [anon_sym_uppercase] = ACTIONS(111),
    [anon_sym_absolute_path] = ACTIONS(111),
    [anon_sym_canonicalize] = ACTIONS(111),
    [anon_sym_extension] = ACTIONS(111),
    [anon_sym_file_name] = ACTIONS(111),
    [anon_sym_file_stem] = ACTIONS(111),
    [anon_sym_parent_dir] = ACTIONS(111),
    [anon_sym_parent_directory] = ACTIONS(111),
    [anon_sym_without_extension] = ACTIONS(111),
    [anon_sym_clean] = ACTIONS(111),
    [anon_sym_join] = ACTIONS(111),
    [anon_sym_path_exists] = ACTIONS(111),
    [anon_sym_error] = ACTIONS(111),
    [anon_sym_blake3] = ACTIONS(111),
    [anon_sym_blake3_file] = ACTIONS(111),
    [anon_sym_sha256] = ACTIONS(111),
    [anon_sym_sha256_file] = ACTIONS(111),
    [anon_sym_uuid] = ACTIONS(111),
    [anon_sym_choose] = ACTIONS(111),
    [anon_sym_set] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym__setting_boolean] = STATE(47),
    [sym__setting_string] = STATE(47),
    [sym__setting_list] = STATE(47),
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_alias] = ACTIONS(115),
    [anon_sym_COLON_EQ] = ACTIONS(117),
    [aux_sym_import_token1] = ACTIONS(115),
    [aux_sym_mod_token1] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_arch] = ACTIONS(115),
    [anon_sym_num_cpus] = ACTIONS(115),
    [anon_sym_os] = ACTIONS(115),
    [anon_sym_os_family] = ACTIONS(115),
    [anon_sym_shell] = ACTIONS(115),
    [anon_sym_env_var] = ACTIONS(115),
    [anon_sym_env_var_or_default] = ACTIONS(115),
    [anon_sym_env] = ACTIONS(115),
    [anon_sym_is_dependency] = ACTIONS(115),
    [anon_sym_invocation_dir] = ACTIONS(115),
    [anon_sym_invocation_dir_native] = ACTIONS(115),
    [anon_sym_invocation_directory] = ACTIONS(115),
    [anon_sym_invocation_directory_native] = ACTIONS(115),
    [anon_sym_justfile] = ACTIONS(115),
    [anon_sym_justfile_dir] = ACTIONS(115),
    [anon_sym_justfile_directory] = ACTIONS(115),
    [anon_sym_source_dir] = ACTIONS(115),
    [anon_sym_source_directory] = ACTIONS(115),
    [anon_sym_source_file] = ACTIONS(115),
    [anon_sym_just_executable] = ACTIONS(115),
    [anon_sym_just_pid] = ACTIONS(115),
    [anon_sym_append] = ACTIONS(115),
    [anon_sym_prepend] = ACTIONS(115),
    [anon_sym_encode_uri_component] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_replace] = ACTIONS(115),
    [anon_sym_replace_regex] = ACTIONS(115),
    [anon_sym_trim] = ACTIONS(115),
    [anon_sym_trim_end] = ACTIONS(115),
    [anon_sym_trim_end_match] = ACTIONS(115),
    [anon_sym_trim_end_matches] = ACTIONS(115),
    [anon_sym_trim_start] = ACTIONS(115),
    [anon_sym_trim_start_match] = ACTIONS(115),
    [anon_sym_trim_start_matches] = ACTIONS(115),
    [anon_sym_capitalize] = ACTIONS(115),
    [anon_sym_kebabcase] = ACTIONS(115),
    [anon_sym_lowercamelcase] = ACTIONS(115),
    [anon_sym_lowercase] = ACTIONS(115),
    [anon_sym_shoutykebabcase] = ACTIONS(115),
    [anon_sym_shoutysnakecase] = ACTIONS(115),
    [anon_sym_snakecase] = ACTIONS(115),
    [anon_sym_titlecase] = ACTIONS(115),
    [anon_sym_uppercamelcase] = ACTIONS(115),
    [anon_sym_uppercase] = ACTIONS(115),
    [anon_sym_absolute_path] = ACTIONS(115),
    [anon_sym_canonicalize] = ACTIONS(115),
    [anon_sym_extension] = ACTIONS(115),
    [anon_sym_file_name] = ACTIONS(115),
    [anon_sym_file_stem] = ACTIONS(115),
    [anon_sym_parent_dir] = ACTIONS(115),
    [anon_sym_parent_directory] = ACTIONS(115),
    [anon_sym_without_extension] = ACTIONS(115),
    [anon_sym_clean] = ACTIONS(115),
    [anon_sym_join] = ACTIONS(115),
    [anon_sym_path_exists] = ACTIONS(115),
    [anon_sym_error] = ACTIONS(115),
    [anon_sym_blake3] = ACTIONS(115),
    [anon_sym_blake3_file] = ACTIONS(115),
    [anon_sym_sha256] = ACTIONS(115),
    [anon_sym_sha256_file] = ACTIONS(115),
    [anon_sym_uuid] = ACTIONS(115),
    [anon_sym_choose] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_alias] = ACTIONS(121),
    [aux_sym_import_token1] = ACTIONS(121),
    [aux_sym_mod_token1] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_arch] = ACTIONS(121),
    [anon_sym_num_cpus] = ACTIONS(121),
    [anon_sym_os] = ACTIONS(121),
    [anon_sym_os_family] = ACTIONS(121),
    [anon_sym_shell] = ACTIONS(121),
    [anon_sym_env_var] = ACTIONS(121),
    [anon_sym_env_var_or_default] = ACTIONS(121),
    [anon_sym_env] = ACTIONS(121),
    [anon_sym_is_dependency] = ACTIONS(121),
    [anon_sym_invocation_dir] = ACTIONS(121),
    [anon_sym_invocation_dir_native] = ACTIONS(121),
    [anon_sym_invocation_directory] = ACTIONS(121),
    [anon_sym_invocation_directory_native] = ACTIONS(121),
    [anon_sym_justfile] = ACTIONS(121),
    [anon_sym_justfile_dir] = ACTIONS(121),
    [anon_sym_justfile_directory] = ACTIONS(121),
    [anon_sym_source_dir] = ACTIONS(121),
    [anon_sym_source_directory] = ACTIONS(121),
    [anon_sym_source_file] = ACTIONS(121),
    [anon_sym_just_executable] = ACTIONS(121),
    [anon_sym_just_pid] = ACTIONS(121),
    [anon_sym_append] = ACTIONS(121),
    [anon_sym_prepend] = ACTIONS(121),
    [anon_sym_encode_uri_component] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_replace] = ACTIONS(121),
    [anon_sym_replace_regex] = ACTIONS(121),
    [anon_sym_trim] = ACTIONS(121),
    [anon_sym_trim_end] = ACTIONS(121),
    [anon_sym_trim_end_match] = ACTIONS(121),
    [anon_sym_trim_end_matches] = ACTIONS(121),
    [anon_sym_trim_start] = ACTIONS(121),
    [anon_sym_trim_start_match] = ACTIONS(121),
    [anon_sym_trim_start_matches] = ACTIONS(121),
    [anon_sym_capitalize] = ACTIONS(121),
    [anon_sym_kebabcase] = ACTIONS(121),
    [anon_sym_lowercamelcase] = ACTIONS(121),
    [anon_sym_lowercase] = ACTIONS(121),
    [anon_sym_shoutykebabcase] = ACTIONS(121),
    [anon_sym_shoutysnakecase] = ACTIONS(121),
    [anon_sym_snakecase] = ACTIONS(121),
    [anon_sym_titlecase] = ACTIONS(121),
    [anon_sym_uppercamelcase] = ACTIONS(121),
    [anon_sym_uppercase] = ACTIONS(121),
    [anon_sym_absolute_path] = ACTIONS(121),
    [anon_sym_canonicalize] = ACTIONS(121),
    [anon_sym_extension] = ACTIONS(121),
    [anon_sym_file_name] = ACTIONS(121),
    [anon_sym_file_stem] = ACTIONS(121),
    [anon_sym_parent_dir] = ACTIONS(121),
    [anon_sym_parent_directory] = ACTIONS(121),
    [anon_sym_without_extension] = ACTIONS(121),
    [anon_sym_clean] = ACTIONS(121),
    [anon_sym_join] = ACTIONS(121),
    [anon_sym_path_exists] = ACTIONS(121),
    [anon_sym_error] = ACTIONS(121),
    [anon_sym_blake3] = ACTIONS(121),
    [anon_sym_blake3_file] = ACTIONS(121),
    [anon_sym_sha256] = ACTIONS(121),
    [anon_sym_sha256_file] = ACTIONS(121),
    [anon_sym_uuid] = ACTIONS(121),
    [anon_sym_choose] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_set] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_alias] = ACTIONS(125),
    [aux_sym_import_token1] = ACTIONS(125),
    [aux_sym_mod_token1] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_arch] = ACTIONS(125),
    [anon_sym_num_cpus] = ACTIONS(125),
    [anon_sym_os] = ACTIONS(125),
    [anon_sym_os_family] = ACTIONS(125),
    [anon_sym_shell] = ACTIONS(125),
    [anon_sym_env_var] = ACTIONS(125),
    [anon_sym_env_var_or_default] = ACTIONS(125),
    [anon_sym_env] = ACTIONS(125),
    [anon_sym_is_dependency] = ACTIONS(125),
    [anon_sym_invocation_dir] = ACTIONS(125),
    [anon_sym_invocation_dir_native] = ACTIONS(125),
    [anon_sym_invocation_directory] = ACTIONS(125),
    [anon_sym_invocation_directory_native] = ACTIONS(125),
    [anon_sym_justfile] = ACTIONS(125),
    [anon_sym_justfile_dir] = ACTIONS(125),
    [anon_sym_justfile_directory] = ACTIONS(125),
    [anon_sym_source_dir] = ACTIONS(125),
    [anon_sym_source_directory] = ACTIONS(125),
    [anon_sym_source_file] = ACTIONS(125),
    [anon_sym_just_executable] = ACTIONS(125),
    [anon_sym_just_pid] = ACTIONS(125),
    [anon_sym_append] = ACTIONS(125),
    [anon_sym_prepend] = ACTIONS(125),
    [anon_sym_encode_uri_component] = ACTIONS(125),
    [anon_sym_quote] = ACTIONS(125),
    [anon_sym_replace] = ACTIONS(125),
    [anon_sym_replace_regex] = ACTIONS(125),
    [anon_sym_trim] = ACTIONS(125),
    [anon_sym_trim_end] = ACTIONS(125),
    [anon_sym_trim_end_match] = ACTIONS(125),
    [anon_sym_trim_end_matches] = ACTIONS(125),
    [anon_sym_trim_start] = ACTIONS(125),
    [anon_sym_trim_start_match] = ACTIONS(125),
    [anon_sym_trim_start_matches] = ACTIONS(125),
    [anon_sym_capitalize] = ACTIONS(125),
    [anon_sym_kebabcase] = ACTIONS(125),
    [anon_sym_lowercamelcase] = ACTIONS(125),
    [anon_sym_lowercase] = ACTIONS(125),
    [anon_sym_shoutykebabcase] = ACTIONS(125),
    [anon_sym_shoutysnakecase] = ACTIONS(125),
    [anon_sym_snakecase] = ACTIONS(125),
    [anon_sym_titlecase] = ACTIONS(125),
    [anon_sym_uppercamelcase] = ACTIONS(125),
    [anon_sym_uppercase] = ACTIONS(125),
    [anon_sym_absolute_path] = ACTIONS(125),
    [anon_sym_canonicalize] = ACTIONS(125),
    [anon_sym_extension] = ACTIONS(125),
    [anon_sym_file_name] = ACTIONS(125),
    [anon_sym_file_stem] = ACTIONS(125),
    [anon_sym_parent_dir] = ACTIONS(125),
    [anon_sym_parent_directory] = ACTIONS(125),
    [anon_sym_without_extension] = ACTIONS(125),
    [anon_sym_clean] = ACTIONS(125),
    [anon_sym_join] = ACTIONS(125),
    [anon_sym_path_exists] = ACTIONS(125),
    [anon_sym_error] = ACTIONS(125),
    [anon_sym_blake3] = ACTIONS(125),
    [anon_sym_blake3_file] = ACTIONS(125),
    [anon_sym_sha256] = ACTIONS(125),
    [anon_sym_sha256_file] = ACTIONS(125),
    [anon_sym_uuid] = ACTIONS(125),
    [anon_sym_choose] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_set] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_alias] = ACTIONS(129),
    [aux_sym_import_token1] = ACTIONS(129),
    [aux_sym_mod_token1] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_arch] = ACTIONS(129),
    [anon_sym_num_cpus] = ACTIONS(129),
    [anon_sym_os] = ACTIONS(129),
    [anon_sym_os_family] = ACTIONS(129),
    [anon_sym_shell] = ACTIONS(129),
    [anon_sym_env_var] = ACTIONS(129),
    [anon_sym_env_var_or_default] = ACTIONS(129),
    [anon_sym_env] = ACTIONS(129),
    [anon_sym_is_dependency] = ACTIONS(129),
    [anon_sym_invocation_dir] = ACTIONS(129),
    [anon_sym_invocation_dir_native] = ACTIONS(129),
    [anon_sym_invocation_directory] = ACTIONS(129),
    [anon_sym_invocation_directory_native] = ACTIONS(129),
    [anon_sym_justfile] = ACTIONS(129),
    [anon_sym_justfile_dir] = ACTIONS(129),
    [anon_sym_justfile_directory] = ACTIONS(129),
    [anon_sym_source_dir] = ACTIONS(129),
    [anon_sym_source_directory] = ACTIONS(129),
    [anon_sym_source_file] = ACTIONS(129),
    [anon_sym_just_executable] = ACTIONS(129),
    [anon_sym_just_pid] = ACTIONS(129),
    [anon_sym_append] = ACTIONS(129),
    [anon_sym_prepend] = ACTIONS(129),
    [anon_sym_encode_uri_component] = ACTIONS(129),
    [anon_sym_quote] = ACTIONS(129),
    [anon_sym_replace] = ACTIONS(129),
    [anon_sym_replace_regex] = ACTIONS(129),
    [anon_sym_trim] = ACTIONS(129),
    [anon_sym_trim_end] = ACTIONS(129),
    [anon_sym_trim_end_match] = ACTIONS(129),
    [anon_sym_trim_end_matches] = ACTIONS(129),
    [anon_sym_trim_start] = ACTIONS(129),
    [anon_sym_trim_start_match] = ACTIONS(129),
    [anon_sym_trim_start_matches] = ACTIONS(129),
    [anon_sym_capitalize] = ACTIONS(129),
    [anon_sym_kebabcase] = ACTIONS(129),
    [anon_sym_lowercamelcase] = ACTIONS(129),
    [anon_sym_lowercase] = ACTIONS(129),
    [anon_sym_shoutykebabcase] = ACTIONS(129),
    [anon_sym_shoutysnakecase] = ACTIONS(129),
    [anon_sym_snakecase] = ACTIONS(129),
    [anon_sym_titlecase] = ACTIONS(129),
    [anon_sym_uppercamelcase] = ACTIONS(129),
    [anon_sym_uppercase] = ACTIONS(129),
    [anon_sym_absolute_path] = ACTIONS(129),
    [anon_sym_canonicalize] = ACTIONS(129),
    [anon_sym_extension] = ACTIONS(129),
    [anon_sym_file_name] = ACTIONS(129),
    [anon_sym_file_stem] = ACTIONS(129),
    [anon_sym_parent_dir] = ACTIONS(129),
    [anon_sym_parent_directory] = ACTIONS(129),
    [anon_sym_without_extension] = ACTIONS(129),
    [anon_sym_clean] = ACTIONS(129),
    [anon_sym_join] = ACTIONS(129),
    [anon_sym_path_exists] = ACTIONS(129),
    [anon_sym_error] = ACTIONS(129),
    [anon_sym_blake3] = ACTIONS(129),
    [anon_sym_blake3_file] = ACTIONS(129),
    [anon_sym_sha256] = ACTIONS(129),
    [anon_sym_sha256_file] = ACTIONS(129),
    [anon_sym_uuid] = ACTIONS(129),
    [anon_sym_choose] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_set] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_alias] = ACTIONS(133),
    [aux_sym_import_token1] = ACTIONS(133),
    [aux_sym_mod_token1] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_arch] = ACTIONS(133),
    [anon_sym_num_cpus] = ACTIONS(133),
    [anon_sym_os] = ACTIONS(133),
    [anon_sym_os_family] = ACTIONS(133),
    [anon_sym_shell] = ACTIONS(133),
    [anon_sym_env_var] = ACTIONS(133),
    [anon_sym_env_var_or_default] = ACTIONS(133),
    [anon_sym_env] = ACTIONS(133),
    [anon_sym_is_dependency] = ACTIONS(133),
    [anon_sym_invocation_dir] = ACTIONS(133),
    [anon_sym_invocation_dir_native] = ACTIONS(133),
    [anon_sym_invocation_directory] = ACTIONS(133),
    [anon_sym_invocation_directory_native] = ACTIONS(133),
    [anon_sym_justfile] = ACTIONS(133),
    [anon_sym_justfile_dir] = ACTIONS(133),
    [anon_sym_justfile_directory] = ACTIONS(133),
    [anon_sym_source_dir] = ACTIONS(133),
    [anon_sym_source_directory] = ACTIONS(133),
    [anon_sym_source_file] = ACTIONS(133),
    [anon_sym_just_executable] = ACTIONS(133),
    [anon_sym_just_pid] = ACTIONS(133),
    [anon_sym_append] = ACTIONS(133),
    [anon_sym_prepend] = ACTIONS(133),
    [anon_sym_encode_uri_component] = ACTIONS(133),
    [anon_sym_quote] = ACTIONS(133),
    [anon_sym_replace] = ACTIONS(133),
    [anon_sym_replace_regex] = ACTIONS(133),
    [anon_sym_trim] = ACTIONS(133),
    [anon_sym_trim_end] = ACTIONS(133),
    [anon_sym_trim_end_match] = ACTIONS(133),
    [anon_sym_trim_end_matches] = ACTIONS(133),
    [anon_sym_trim_start] = ACTIONS(133),
    [anon_sym_trim_start_match] = ACTIONS(133),
    [anon_sym_trim_start_matches] = ACTIONS(133),
    [anon_sym_capitalize] = ACTIONS(133),
    [anon_sym_kebabcase] = ACTIONS(133),
    [anon_sym_lowercamelcase] = ACTIONS(133),
    [anon_sym_lowercase] = ACTIONS(133),
    [anon_sym_shoutykebabcase] = ACTIONS(133),
    [anon_sym_shoutysnakecase] = ACTIONS(133),
    [anon_sym_snakecase] = ACTIONS(133),
    [anon_sym_titlecase] = ACTIONS(133),
    [anon_sym_uppercamelcase] = ACTIONS(133),
    [anon_sym_uppercase] = ACTIONS(133),
    [anon_sym_absolute_path] = ACTIONS(133),
    [anon_sym_canonicalize] = ACTIONS(133),
    [anon_sym_extension] = ACTIONS(133),
    [anon_sym_file_name] = ACTIONS(133),
    [anon_sym_file_stem] = ACTIONS(133),
    [anon_sym_parent_dir] = ACTIONS(133),
    [anon_sym_parent_directory] = ACTIONS(133),
    [anon_sym_without_extension] = ACTIONS(133),
    [anon_sym_clean] = ACTIONS(133),
    [anon_sym_join] = ACTIONS(133),
    [anon_sym_path_exists] = ACTIONS(133),
    [anon_sym_error] = ACTIONS(133),
    [anon_sym_blake3] = ACTIONS(133),
    [anon_sym_blake3_file] = ACTIONS(133),
    [anon_sym_sha256] = ACTIONS(133),
    [anon_sym_sha256_file] = ACTIONS(133),
    [anon_sym_uuid] = ACTIONS(133),
    [anon_sym_choose] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_set] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_alias] = ACTIONS(137),
    [aux_sym_import_token1] = ACTIONS(137),
    [aux_sym_mod_token1] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_arch] = ACTIONS(137),
    [anon_sym_num_cpus] = ACTIONS(137),
    [anon_sym_os] = ACTIONS(137),
    [anon_sym_os_family] = ACTIONS(137),
    [anon_sym_shell] = ACTIONS(137),
    [anon_sym_env_var] = ACTIONS(137),
    [anon_sym_env_var_or_default] = ACTIONS(137),
    [anon_sym_env] = ACTIONS(137),
    [anon_sym_is_dependency] = ACTIONS(137),
    [anon_sym_invocation_dir] = ACTIONS(137),
    [anon_sym_invocation_dir_native] = ACTIONS(137),
    [anon_sym_invocation_directory] = ACTIONS(137),
    [anon_sym_invocation_directory_native] = ACTIONS(137),
    [anon_sym_justfile] = ACTIONS(137),
    [anon_sym_justfile_dir] = ACTIONS(137),
    [anon_sym_justfile_directory] = ACTIONS(137),
    [anon_sym_source_dir] = ACTIONS(137),
    [anon_sym_source_directory] = ACTIONS(137),
    [anon_sym_source_file] = ACTIONS(137),
    [anon_sym_just_executable] = ACTIONS(137),
    [anon_sym_just_pid] = ACTIONS(137),
    [anon_sym_append] = ACTIONS(137),
    [anon_sym_prepend] = ACTIONS(137),
    [anon_sym_encode_uri_component] = ACTIONS(137),
    [anon_sym_quote] = ACTIONS(137),
    [anon_sym_replace] = ACTIONS(137),
    [anon_sym_replace_regex] = ACTIONS(137),
    [anon_sym_trim] = ACTIONS(137),
    [anon_sym_trim_end] = ACTIONS(137),
    [anon_sym_trim_end_match] = ACTIONS(137),
    [anon_sym_trim_end_matches] = ACTIONS(137),
    [anon_sym_trim_start] = ACTIONS(137),
    [anon_sym_trim_start_match] = ACTIONS(137),
    [anon_sym_trim_start_matches] = ACTIONS(137),
    [anon_sym_capitalize] = ACTIONS(137),
    [anon_sym_kebabcase] = ACTIONS(137),
    [anon_sym_lowercamelcase] = ACTIONS(137),
    [anon_sym_lowercase] = ACTIONS(137),
    [anon_sym_shoutykebabcase] = ACTIONS(137),
    [anon_sym_shoutysnakecase] = ACTIONS(137),
    [anon_sym_snakecase] = ACTIONS(137),
    [anon_sym_titlecase] = ACTIONS(137),
    [anon_sym_uppercamelcase] = ACTIONS(137),
    [anon_sym_uppercase] = ACTIONS(137),
    [anon_sym_absolute_path] = ACTIONS(137),
    [anon_sym_canonicalize] = ACTIONS(137),
    [anon_sym_extension] = ACTIONS(137),
    [anon_sym_file_name] = ACTIONS(137),
    [anon_sym_file_stem] = ACTIONS(137),
    [anon_sym_parent_dir] = ACTIONS(137),
    [anon_sym_parent_directory] = ACTIONS(137),
    [anon_sym_without_extension] = ACTIONS(137),
    [anon_sym_clean] = ACTIONS(137),
    [anon_sym_join] = ACTIONS(137),
    [anon_sym_path_exists] = ACTIONS(137),
    [anon_sym_error] = ACTIONS(137),
    [anon_sym_blake3] = ACTIONS(137),
    [anon_sym_blake3_file] = ACTIONS(137),
    [anon_sym_sha256] = ACTIONS(137),
    [anon_sym_sha256_file] = ACTIONS(137),
    [anon_sym_uuid] = ACTIONS(137),
    [anon_sym_choose] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_set] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_alias] = ACTIONS(141),
    [aux_sym_import_token1] = ACTIONS(141),
    [aux_sym_mod_token1] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_arch] = ACTIONS(141),
    [anon_sym_num_cpus] = ACTIONS(141),
    [anon_sym_os] = ACTIONS(141),
    [anon_sym_os_family] = ACTIONS(141),
    [anon_sym_shell] = ACTIONS(141),
    [anon_sym_env_var] = ACTIONS(141),
    [anon_sym_env_var_or_default] = ACTIONS(141),
    [anon_sym_env] = ACTIONS(141),
    [anon_sym_is_dependency] = ACTIONS(141),
    [anon_sym_invocation_dir] = ACTIONS(141),
    [anon_sym_invocation_dir_native] = ACTIONS(141),
    [anon_sym_invocation_directory] = ACTIONS(141),
    [anon_sym_invocation_directory_native] = ACTIONS(141),
    [anon_sym_justfile] = ACTIONS(141),
    [anon_sym_justfile_dir] = ACTIONS(141),
    [anon_sym_justfile_directory] = ACTIONS(141),
    [anon_sym_source_dir] = ACTIONS(141),
    [anon_sym_source_directory] = ACTIONS(141),
    [anon_sym_source_file] = ACTIONS(141),
    [anon_sym_just_executable] = ACTIONS(141),
    [anon_sym_just_pid] = ACTIONS(141),
    [anon_sym_append] = ACTIONS(141),
    [anon_sym_prepend] = ACTIONS(141),
    [anon_sym_encode_uri_component] = ACTIONS(141),
    [anon_sym_quote] = ACTIONS(141),
    [anon_sym_replace] = ACTIONS(141),
    [anon_sym_replace_regex] = ACTIONS(141),
    [anon_sym_trim] = ACTIONS(141),
    [anon_sym_trim_end] = ACTIONS(141),
    [anon_sym_trim_end_match] = ACTIONS(141),
    [anon_sym_trim_end_matches] = ACTIONS(141),
    [anon_sym_trim_start] = ACTIONS(141),
    [anon_sym_trim_start_match] = ACTIONS(141),
    [anon_sym_trim_start_matches] = ACTIONS(141),
    [anon_sym_capitalize] = ACTIONS(141),
    [anon_sym_kebabcase] = ACTIONS(141),
    [anon_sym_lowercamelcase] = ACTIONS(141),
    [anon_sym_lowercase] = ACTIONS(141),
    [anon_sym_shoutykebabcase] = ACTIONS(141),
    [anon_sym_shoutysnakecase] = ACTIONS(141),
    [anon_sym_snakecase] = ACTIONS(141),
    [anon_sym_titlecase] = ACTIONS(141),
    [anon_sym_uppercamelcase] = ACTIONS(141),
    [anon_sym_uppercase] = ACTIONS(141),
    [anon_sym_absolute_path] = ACTIONS(141),
    [anon_sym_canonicalize] = ACTIONS(141),
    [anon_sym_extension] = ACTIONS(141),
    [anon_sym_file_name] = ACTIONS(141),
    [anon_sym_file_stem] = ACTIONS(141),
    [anon_sym_parent_dir] = ACTIONS(141),
    [anon_sym_parent_directory] = ACTIONS(141),
    [anon_sym_without_extension] = ACTIONS(141),
    [anon_sym_clean] = ACTIONS(141),
    [anon_sym_join] = ACTIONS(141),
    [anon_sym_path_exists] = ACTIONS(141),
    [anon_sym_error] = ACTIONS(141),
    [anon_sym_blake3] = ACTIONS(141),
    [anon_sym_blake3_file] = ACTIONS(141),
    [anon_sym_sha256] = ACTIONS(141),
    [anon_sym_sha256_file] = ACTIONS(141),
    [anon_sym_uuid] = ACTIONS(141),
    [anon_sym_choose] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_set] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_alias] = ACTIONS(145),
    [aux_sym_import_token1] = ACTIONS(145),
    [aux_sym_mod_token1] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_arch] = ACTIONS(145),
    [anon_sym_num_cpus] = ACTIONS(145),
    [anon_sym_os] = ACTIONS(145),
    [anon_sym_os_family] = ACTIONS(145),
    [anon_sym_shell] = ACTIONS(145),
    [anon_sym_env_var] = ACTIONS(145),
    [anon_sym_env_var_or_default] = ACTIONS(145),
    [anon_sym_env] = ACTIONS(145),
    [anon_sym_is_dependency] = ACTIONS(145),
    [anon_sym_invocation_dir] = ACTIONS(145),
    [anon_sym_invocation_dir_native] = ACTIONS(145),
    [anon_sym_invocation_directory] = ACTIONS(145),
    [anon_sym_invocation_directory_native] = ACTIONS(145),
    [anon_sym_justfile] = ACTIONS(145),
    [anon_sym_justfile_dir] = ACTIONS(145),
    [anon_sym_justfile_directory] = ACTIONS(145),
    [anon_sym_source_dir] = ACTIONS(145),
    [anon_sym_source_directory] = ACTIONS(145),
    [anon_sym_source_file] = ACTIONS(145),
    [anon_sym_just_executable] = ACTIONS(145),
    [anon_sym_just_pid] = ACTIONS(145),
    [anon_sym_append] = ACTIONS(145),
    [anon_sym_prepend] = ACTIONS(145),
    [anon_sym_encode_uri_component] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_replace] = ACTIONS(145),
    [anon_sym_replace_regex] = ACTIONS(145),
    [anon_sym_trim] = ACTIONS(145),
    [anon_sym_trim_end] = ACTIONS(145),
    [anon_sym_trim_end_match] = ACTIONS(145),
    [anon_sym_trim_end_matches] = ACTIONS(145),
    [anon_sym_trim_start] = ACTIONS(145),
    [anon_sym_trim_start_match] = ACTIONS(145),
    [anon_sym_trim_start_matches] = ACTIONS(145),
    [anon_sym_capitalize] = ACTIONS(145),
    [anon_sym_kebabcase] = ACTIONS(145),
    [anon_sym_lowercamelcase] = ACTIONS(145),
    [anon_sym_lowercase] = ACTIONS(145),
    [anon_sym_shoutykebabcase] = ACTIONS(145),
    [anon_sym_shoutysnakecase] = ACTIONS(145),
    [anon_sym_snakecase] = ACTIONS(145),
    [anon_sym_titlecase] = ACTIONS(145),
    [anon_sym_uppercamelcase] = ACTIONS(145),
    [anon_sym_uppercase] = ACTIONS(145),
    [anon_sym_absolute_path] = ACTIONS(145),
    [anon_sym_canonicalize] = ACTIONS(145),
    [anon_sym_extension] = ACTIONS(145),
    [anon_sym_file_name] = ACTIONS(145),
    [anon_sym_file_stem] = ACTIONS(145),
    [anon_sym_parent_dir] = ACTIONS(145),
    [anon_sym_parent_directory] = ACTIONS(145),
    [anon_sym_without_extension] = ACTIONS(145),
    [anon_sym_clean] = ACTIONS(145),
    [anon_sym_join] = ACTIONS(145),
    [anon_sym_path_exists] = ACTIONS(145),
    [anon_sym_error] = ACTIONS(145),
    [anon_sym_blake3] = ACTIONS(145),
    [anon_sym_blake3_file] = ACTIONS(145),
    [anon_sym_sha256] = ACTIONS(145),
    [anon_sym_sha256_file] = ACTIONS(145),
    [anon_sym_uuid] = ACTIONS(145),
    [anon_sym_choose] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_set] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(143),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_alias] = ACTIONS(149),
    [aux_sym_import_token1] = ACTIONS(149),
    [aux_sym_mod_token1] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_arch] = ACTIONS(149),
    [anon_sym_num_cpus] = ACTIONS(149),
    [anon_sym_os] = ACTIONS(149),
    [anon_sym_os_family] = ACTIONS(149),
    [anon_sym_shell] = ACTIONS(149),
    [anon_sym_env_var] = ACTIONS(149),
    [anon_sym_env_var_or_default] = ACTIONS(149),
    [anon_sym_env] = ACTIONS(149),
    [anon_sym_is_dependency] = ACTIONS(149),
    [anon_sym_invocation_dir] = ACTIONS(149),
    [anon_sym_invocation_dir_native] = ACTIONS(149),
    [anon_sym_invocation_directory] = ACTIONS(149),
    [anon_sym_invocation_directory_native] = ACTIONS(149),
    [anon_sym_justfile] = ACTIONS(149),
    [anon_sym_justfile_dir] = ACTIONS(149),
    [anon_sym_justfile_directory] = ACTIONS(149),
    [anon_sym_source_dir] = ACTIONS(149),
    [anon_sym_source_directory] = ACTIONS(149),
    [anon_sym_source_file] = ACTIONS(149),
    [anon_sym_just_executable] = ACTIONS(149),
    [anon_sym_just_pid] = ACTIONS(149),
    [anon_sym_append] = ACTIONS(149),
    [anon_sym_prepend] = ACTIONS(149),
    [anon_sym_encode_uri_component] = ACTIONS(149),
    [anon_sym_quote] = ACTIONS(149),
    [anon_sym_replace] = ACTIONS(149),
    [anon_sym_replace_regex] = ACTIONS(149),
    [anon_sym_trim] = ACTIONS(149),
    [anon_sym_trim_end] = ACTIONS(149),
    [anon_sym_trim_end_match] = ACTIONS(149),
    [anon_sym_trim_end_matches] = ACTIONS(149),
    [anon_sym_trim_start] = ACTIONS(149),
    [anon_sym_trim_start_match] = ACTIONS(149),
    [anon_sym_trim_start_matches] = ACTIONS(149),
    [anon_sym_capitalize] = ACTIONS(149),
    [anon_sym_kebabcase] = ACTIONS(149),
    [anon_sym_lowercamelcase] = ACTIONS(149),
    [anon_sym_lowercase] = ACTIONS(149),
    [anon_sym_shoutykebabcase] = ACTIONS(149),
    [anon_sym_shoutysnakecase] = ACTIONS(149),
    [anon_sym_snakecase] = ACTIONS(149),
    [anon_sym_titlecase] = ACTIONS(149),
    [anon_sym_uppercamelcase] = ACTIONS(149),
    [anon_sym_uppercase] = ACTIONS(149),
    [anon_sym_absolute_path] = ACTIONS(149),
    [anon_sym_canonicalize] = ACTIONS(149),
    [anon_sym_extension] = ACTIONS(149),
    [anon_sym_file_name] = ACTIONS(149),
    [anon_sym_file_stem] = ACTIONS(149),
    [anon_sym_parent_dir] = ACTIONS(149),
    [anon_sym_parent_directory] = ACTIONS(149),
    [anon_sym_without_extension] = ACTIONS(149),
    [anon_sym_clean] = ACTIONS(149),
    [anon_sym_join] = ACTIONS(149),
    [anon_sym_path_exists] = ACTIONS(149),
    [anon_sym_error] = ACTIONS(149),
    [anon_sym_blake3] = ACTIONS(149),
    [anon_sym_blake3_file] = ACTIONS(149),
    [anon_sym_sha256] = ACTIONS(149),
    [anon_sym_sha256_file] = ACTIONS(149),
    [anon_sym_uuid] = ACTIONS(149),
    [anon_sym_choose] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_set] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_alias] = ACTIONS(153),
    [aux_sym_import_token1] = ACTIONS(153),
    [aux_sym_mod_token1] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_arch] = ACTIONS(153),
    [anon_sym_num_cpus] = ACTIONS(153),
    [anon_sym_os] = ACTIONS(153),
    [anon_sym_os_family] = ACTIONS(153),
    [anon_sym_shell] = ACTIONS(153),
    [anon_sym_env_var] = ACTIONS(153),
    [anon_sym_env_var_or_default] = ACTIONS(153),
    [anon_sym_env] = ACTIONS(153),
    [anon_sym_is_dependency] = ACTIONS(153),
    [anon_sym_invocation_dir] = ACTIONS(153),
    [anon_sym_invocation_dir_native] = ACTIONS(153),
    [anon_sym_invocation_directory] = ACTIONS(153),
    [anon_sym_invocation_directory_native] = ACTIONS(153),
    [anon_sym_justfile] = ACTIONS(153),
    [anon_sym_justfile_dir] = ACTIONS(153),
    [anon_sym_justfile_directory] = ACTIONS(153),
    [anon_sym_source_dir] = ACTIONS(153),
    [anon_sym_source_directory] = ACTIONS(153),
    [anon_sym_source_file] = ACTIONS(153),
    [anon_sym_just_executable] = ACTIONS(153),
    [anon_sym_just_pid] = ACTIONS(153),
    [anon_sym_append] = ACTIONS(153),
    [anon_sym_prepend] = ACTIONS(153),
    [anon_sym_encode_uri_component] = ACTIONS(153),
    [anon_sym_quote] = ACTIONS(153),
    [anon_sym_replace] = ACTIONS(153),
    [anon_sym_replace_regex] = ACTIONS(153),
    [anon_sym_trim] = ACTIONS(153),
    [anon_sym_trim_end] = ACTIONS(153),
    [anon_sym_trim_end_match] = ACTIONS(153),
    [anon_sym_trim_end_matches] = ACTIONS(153),
    [anon_sym_trim_start] = ACTIONS(153),
    [anon_sym_trim_start_match] = ACTIONS(153),
    [anon_sym_trim_start_matches] = ACTIONS(153),
    [anon_sym_capitalize] = ACTIONS(153),
    [anon_sym_kebabcase] = ACTIONS(153),
    [anon_sym_lowercamelcase] = ACTIONS(153),
    [anon_sym_lowercase] = ACTIONS(153),
    [anon_sym_shoutykebabcase] = ACTIONS(153),
    [anon_sym_shoutysnakecase] = ACTIONS(153),
    [anon_sym_snakecase] = ACTIONS(153),
    [anon_sym_titlecase] = ACTIONS(153),
    [anon_sym_uppercamelcase] = ACTIONS(153),
    [anon_sym_uppercase] = ACTIONS(153),
    [anon_sym_absolute_path] = ACTIONS(153),
    [anon_sym_canonicalize] = ACTIONS(153),
    [anon_sym_extension] = ACTIONS(153),
    [anon_sym_file_name] = ACTIONS(153),
    [anon_sym_file_stem] = ACTIONS(153),
    [anon_sym_parent_dir] = ACTIONS(153),
    [anon_sym_parent_directory] = ACTIONS(153),
    [anon_sym_without_extension] = ACTIONS(153),
    [anon_sym_clean] = ACTIONS(153),
    [anon_sym_join] = ACTIONS(153),
    [anon_sym_path_exists] = ACTIONS(153),
    [anon_sym_error] = ACTIONS(153),
    [anon_sym_blake3] = ACTIONS(153),
    [anon_sym_blake3_file] = ACTIONS(153),
    [anon_sym_sha256] = ACTIONS(153),
    [anon_sym_sha256_file] = ACTIONS(153),
    [anon_sym_uuid] = ACTIONS(153),
    [anon_sym_choose] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_set] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym__setting_boolean] = STATE(47),
    [sym_comment] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_alias] = ACTIONS(115),
    [anon_sym_COLON_EQ] = ACTIONS(155),
    [aux_sym_import_token1] = ACTIONS(115),
    [aux_sym_mod_token1] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_arch] = ACTIONS(115),
    [anon_sym_num_cpus] = ACTIONS(115),
    [anon_sym_os] = ACTIONS(115),
    [anon_sym_os_family] = ACTIONS(115),
    [anon_sym_shell] = ACTIONS(115),
    [anon_sym_env_var] = ACTIONS(115),
    [anon_sym_env_var_or_default] = ACTIONS(115),
    [anon_sym_env] = ACTIONS(115),
    [anon_sym_is_dependency] = ACTIONS(115),
    [anon_sym_invocation_dir] = ACTIONS(115),
    [anon_sym_invocation_dir_native] = ACTIONS(115),
    [anon_sym_invocation_directory] = ACTIONS(115),
    [anon_sym_invocation_directory_native] = ACTIONS(115),
    [anon_sym_justfile] = ACTIONS(115),
    [anon_sym_justfile_dir] = ACTIONS(115),
    [anon_sym_justfile_directory] = ACTIONS(115),
    [anon_sym_source_dir] = ACTIONS(115),
    [anon_sym_source_directory] = ACTIONS(115),
    [anon_sym_source_file] = ACTIONS(115),
    [anon_sym_just_executable] = ACTIONS(115),
    [anon_sym_just_pid] = ACTIONS(115),
    [anon_sym_append] = ACTIONS(115),
    [anon_sym_prepend] = ACTIONS(115),
    [anon_sym_encode_uri_component] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_replace] = ACTIONS(115),
    [anon_sym_replace_regex] = ACTIONS(115),
    [anon_sym_trim] = ACTIONS(115),
    [anon_sym_trim_end] = ACTIONS(115),
    [anon_sym_trim_end_match] = ACTIONS(115),
    [anon_sym_trim_end_matches] = ACTIONS(115),
    [anon_sym_trim_start] = ACTIONS(115),
    [anon_sym_trim_start_match] = ACTIONS(115),
    [anon_sym_trim_start_matches] = ACTIONS(115),
    [anon_sym_capitalize] = ACTIONS(115),
    [anon_sym_kebabcase] = ACTIONS(115),
    [anon_sym_lowercamelcase] = ACTIONS(115),
    [anon_sym_lowercase] = ACTIONS(115),
    [anon_sym_shoutykebabcase] = ACTIONS(115),
    [anon_sym_shoutysnakecase] = ACTIONS(115),
    [anon_sym_snakecase] = ACTIONS(115),
    [anon_sym_titlecase] = ACTIONS(115),
    [anon_sym_uppercamelcase] = ACTIONS(115),
    [anon_sym_uppercase] = ACTIONS(115),
    [anon_sym_absolute_path] = ACTIONS(115),
    [anon_sym_canonicalize] = ACTIONS(115),
    [anon_sym_extension] = ACTIONS(115),
    [anon_sym_file_name] = ACTIONS(115),
    [anon_sym_file_stem] = ACTIONS(115),
    [anon_sym_parent_dir] = ACTIONS(115),
    [anon_sym_parent_directory] = ACTIONS(115),
    [anon_sym_without_extension] = ACTIONS(115),
    [anon_sym_clean] = ACTIONS(115),
    [anon_sym_join] = ACTIONS(115),
    [anon_sym_path_exists] = ACTIONS(115),
    [anon_sym_error] = ACTIONS(115),
    [anon_sym_blake3] = ACTIONS(115),
    [anon_sym_blake3_file] = ACTIONS(115),
    [anon_sym_sha256] = ACTIONS(115),
    [anon_sym_sha256_file] = ACTIONS(115),
    [anon_sym_uuid] = ACTIONS(115),
    [anon_sym_choose] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_alias] = ACTIONS(159),
    [aux_sym_import_token1] = ACTIONS(159),
    [aux_sym_mod_token1] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_arch] = ACTIONS(159),
    [anon_sym_num_cpus] = ACTIONS(159),
    [anon_sym_os] = ACTIONS(159),
    [anon_sym_os_family] = ACTIONS(159),
    [anon_sym_shell] = ACTIONS(159),
    [anon_sym_env_var] = ACTIONS(159),
    [anon_sym_env_var_or_default] = ACTIONS(159),
    [anon_sym_env] = ACTIONS(159),
    [anon_sym_is_dependency] = ACTIONS(159),
    [anon_sym_invocation_dir] = ACTIONS(159),
    [anon_sym_invocation_dir_native] = ACTIONS(159),
    [anon_sym_invocation_directory] = ACTIONS(159),
    [anon_sym_invocation_directory_native] = ACTIONS(159),
    [anon_sym_justfile] = ACTIONS(159),
    [anon_sym_justfile_dir] = ACTIONS(159),
    [anon_sym_justfile_directory] = ACTIONS(159),
    [anon_sym_source_dir] = ACTIONS(159),
    [anon_sym_source_directory] = ACTIONS(159),
    [anon_sym_source_file] = ACTIONS(159),
    [anon_sym_just_executable] = ACTIONS(159),
    [anon_sym_just_pid] = ACTIONS(159),
    [anon_sym_append] = ACTIONS(159),
    [anon_sym_prepend] = ACTIONS(159),
    [anon_sym_encode_uri_component] = ACTIONS(159),
    [anon_sym_quote] = ACTIONS(159),
    [anon_sym_replace] = ACTIONS(159),
    [anon_sym_replace_regex] = ACTIONS(159),
    [anon_sym_trim] = ACTIONS(159),
    [anon_sym_trim_end] = ACTIONS(159),
    [anon_sym_trim_end_match] = ACTIONS(159),
    [anon_sym_trim_end_matches] = ACTIONS(159),
    [anon_sym_trim_start] = ACTIONS(159),
    [anon_sym_trim_start_match] = ACTIONS(159),
    [anon_sym_trim_start_matches] = ACTIONS(159),
    [anon_sym_capitalize] = ACTIONS(159),
    [anon_sym_kebabcase] = ACTIONS(159),
    [anon_sym_lowercamelcase] = ACTIONS(159),
    [anon_sym_lowercase] = ACTIONS(159),
    [anon_sym_shoutykebabcase] = ACTIONS(159),
    [anon_sym_shoutysnakecase] = ACTIONS(159),
    [anon_sym_snakecase] = ACTIONS(159),
    [anon_sym_titlecase] = ACTIONS(159),
    [anon_sym_uppercamelcase] = ACTIONS(159),
    [anon_sym_uppercase] = ACTIONS(159),
    [anon_sym_absolute_path] = ACTIONS(159),
    [anon_sym_canonicalize] = ACTIONS(159),
    [anon_sym_extension] = ACTIONS(159),
    [anon_sym_file_name] = ACTIONS(159),
    [anon_sym_file_stem] = ACTIONS(159),
    [anon_sym_parent_dir] = ACTIONS(159),
    [anon_sym_parent_directory] = ACTIONS(159),
    [anon_sym_without_extension] = ACTIONS(159),
    [anon_sym_clean] = ACTIONS(159),
    [anon_sym_join] = ACTIONS(159),
    [anon_sym_path_exists] = ACTIONS(159),
    [anon_sym_error] = ACTIONS(159),
    [anon_sym_blake3] = ACTIONS(159),
    [anon_sym_blake3_file] = ACTIONS(159),
    [anon_sym_sha256] = ACTIONS(159),
    [anon_sym_sha256_file] = ACTIONS(159),
    [anon_sym_uuid] = ACTIONS(159),
    [anon_sym_choose] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_set] = ACTIONS(159),
    [anon_sym_BQUOTE] = ACTIONS(159),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_alias] = ACTIONS(163),
    [aux_sym_import_token1] = ACTIONS(163),
    [aux_sym_mod_token1] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_arch] = ACTIONS(163),
    [anon_sym_num_cpus] = ACTIONS(163),
    [anon_sym_os] = ACTIONS(163),
    [anon_sym_os_family] = ACTIONS(163),
    [anon_sym_shell] = ACTIONS(163),
    [anon_sym_env_var] = ACTIONS(163),
    [anon_sym_env_var_or_default] = ACTIONS(163),
    [anon_sym_env] = ACTIONS(163),
    [anon_sym_is_dependency] = ACTIONS(163),
    [anon_sym_invocation_dir] = ACTIONS(163),
    [anon_sym_invocation_dir_native] = ACTIONS(163),
    [anon_sym_invocation_directory] = ACTIONS(163),
    [anon_sym_invocation_directory_native] = ACTIONS(163),
    [anon_sym_justfile] = ACTIONS(163),
    [anon_sym_justfile_dir] = ACTIONS(163),
    [anon_sym_justfile_directory] = ACTIONS(163),
    [anon_sym_source_dir] = ACTIONS(163),
    [anon_sym_source_directory] = ACTIONS(163),
    [anon_sym_source_file] = ACTIONS(163),
    [anon_sym_just_executable] = ACTIONS(163),
    [anon_sym_just_pid] = ACTIONS(163),
    [anon_sym_append] = ACTIONS(163),
    [anon_sym_prepend] = ACTIONS(163),
    [anon_sym_encode_uri_component] = ACTIONS(163),
    [anon_sym_quote] = ACTIONS(163),
    [anon_sym_replace] = ACTIONS(163),
    [anon_sym_replace_regex] = ACTIONS(163),
    [anon_sym_trim] = ACTIONS(163),
    [anon_sym_trim_end] = ACTIONS(163),
    [anon_sym_trim_end_match] = ACTIONS(163),
    [anon_sym_trim_end_matches] = ACTIONS(163),
    [anon_sym_trim_start] = ACTIONS(163),
    [anon_sym_trim_start_match] = ACTIONS(163),
    [anon_sym_trim_start_matches] = ACTIONS(163),
    [anon_sym_capitalize] = ACTIONS(163),
    [anon_sym_kebabcase] = ACTIONS(163),
    [anon_sym_lowercamelcase] = ACTIONS(163),
    [anon_sym_lowercase] = ACTIONS(163),
    [anon_sym_shoutykebabcase] = ACTIONS(163),
    [anon_sym_shoutysnakecase] = ACTIONS(163),
    [anon_sym_snakecase] = ACTIONS(163),
    [anon_sym_titlecase] = ACTIONS(163),
    [anon_sym_uppercamelcase] = ACTIONS(163),
    [anon_sym_uppercase] = ACTIONS(163),
    [anon_sym_absolute_path] = ACTIONS(163),
    [anon_sym_canonicalize] = ACTIONS(163),
    [anon_sym_extension] = ACTIONS(163),
    [anon_sym_file_name] = ACTIONS(163),
    [anon_sym_file_stem] = ACTIONS(163),
    [anon_sym_parent_dir] = ACTIONS(163),
    [anon_sym_parent_directory] = ACTIONS(163),
    [anon_sym_without_extension] = ACTIONS(163),
    [anon_sym_clean] = ACTIONS(163),
    [anon_sym_join] = ACTIONS(163),
    [anon_sym_path_exists] = ACTIONS(163),
    [anon_sym_error] = ACTIONS(163),
    [anon_sym_blake3] = ACTIONS(163),
    [anon_sym_blake3_file] = ACTIONS(163),
    [anon_sym_sha256] = ACTIONS(163),
    [anon_sym_sha256_file] = ACTIONS(163),
    [anon_sym_uuid] = ACTIONS(163),
    [anon_sym_choose] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_set] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_comment] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_alias] = ACTIONS(167),
    [aux_sym_import_token1] = ACTIONS(167),
    [aux_sym_mod_token1] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_arch] = ACTIONS(167),
    [anon_sym_num_cpus] = ACTIONS(167),
    [anon_sym_os] = ACTIONS(167),
    [anon_sym_os_family] = ACTIONS(167),
    [anon_sym_shell] = ACTIONS(167),
    [anon_sym_env_var] = ACTIONS(167),
    [anon_sym_env_var_or_default] = ACTIONS(167),
    [anon_sym_env] = ACTIONS(167),
    [anon_sym_is_dependency] = ACTIONS(167),
    [anon_sym_invocation_dir] = ACTIONS(167),
    [anon_sym_invocation_dir_native] = ACTIONS(167),
    [anon_sym_invocation_directory] = ACTIONS(167),
    [anon_sym_invocation_directory_native] = ACTIONS(167),
    [anon_sym_justfile] = ACTIONS(167),
    [anon_sym_justfile_dir] = ACTIONS(167),
    [anon_sym_justfile_directory] = ACTIONS(167),
    [anon_sym_source_dir] = ACTIONS(167),
    [anon_sym_source_directory] = ACTIONS(167),
    [anon_sym_source_file] = ACTIONS(167),
    [anon_sym_just_executable] = ACTIONS(167),
    [anon_sym_just_pid] = ACTIONS(167),
    [anon_sym_append] = ACTIONS(167),
    [anon_sym_prepend] = ACTIONS(167),
    [anon_sym_encode_uri_component] = ACTIONS(167),
    [anon_sym_quote] = ACTIONS(167),
    [anon_sym_replace] = ACTIONS(167),
    [anon_sym_replace_regex] = ACTIONS(167),
    [anon_sym_trim] = ACTIONS(167),
    [anon_sym_trim_end] = ACTIONS(167),
    [anon_sym_trim_end_match] = ACTIONS(167),
    [anon_sym_trim_end_matches] = ACTIONS(167),
    [anon_sym_trim_start] = ACTIONS(167),
    [anon_sym_trim_start_match] = ACTIONS(167),
    [anon_sym_trim_start_matches] = ACTIONS(167),
    [anon_sym_capitalize] = ACTIONS(167),
    [anon_sym_kebabcase] = ACTIONS(167),
    [anon_sym_lowercamelcase] = ACTIONS(167),
    [anon_sym_lowercase] = ACTIONS(167),
    [anon_sym_shoutykebabcase] = ACTIONS(167),
    [anon_sym_shoutysnakecase] = ACTIONS(167),
    [anon_sym_snakecase] = ACTIONS(167),
    [anon_sym_titlecase] = ACTIONS(167),
    [anon_sym_uppercamelcase] = ACTIONS(167),
    [anon_sym_uppercase] = ACTIONS(167),
    [anon_sym_absolute_path] = ACTIONS(167),
    [anon_sym_canonicalize] = ACTIONS(167),
    [anon_sym_extension] = ACTIONS(167),
    [anon_sym_file_name] = ACTIONS(167),
    [anon_sym_file_stem] = ACTIONS(167),
    [anon_sym_parent_dir] = ACTIONS(167),
    [anon_sym_parent_directory] = ACTIONS(167),
    [anon_sym_without_extension] = ACTIONS(167),
    [anon_sym_clean] = ACTIONS(167),
    [anon_sym_join] = ACTIONS(167),
    [anon_sym_path_exists] = ACTIONS(167),
    [anon_sym_error] = ACTIONS(167),
    [anon_sym_blake3] = ACTIONS(167),
    [anon_sym_blake3_file] = ACTIONS(167),
    [anon_sym_sha256] = ACTIONS(167),
    [anon_sym_sha256_file] = ACTIONS(167),
    [anon_sym_uuid] = ACTIONS(167),
    [anon_sym_choose] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_comment] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_alias] = ACTIONS(173),
    [aux_sym_import_token1] = ACTIONS(173),
    [aux_sym_mod_token1] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_arch] = ACTIONS(173),
    [anon_sym_num_cpus] = ACTIONS(173),
    [anon_sym_os] = ACTIONS(173),
    [anon_sym_os_family] = ACTIONS(173),
    [anon_sym_shell] = ACTIONS(173),
    [anon_sym_env_var] = ACTIONS(173),
    [anon_sym_env_var_or_default] = ACTIONS(173),
    [anon_sym_env] = ACTIONS(173),
    [anon_sym_is_dependency] = ACTIONS(173),
    [anon_sym_invocation_dir] = ACTIONS(173),
    [anon_sym_invocation_dir_native] = ACTIONS(173),
    [anon_sym_invocation_directory] = ACTIONS(173),
    [anon_sym_invocation_directory_native] = ACTIONS(173),
    [anon_sym_justfile] = ACTIONS(173),
    [anon_sym_justfile_dir] = ACTIONS(173),
    [anon_sym_justfile_directory] = ACTIONS(173),
    [anon_sym_source_dir] = ACTIONS(173),
    [anon_sym_source_directory] = ACTIONS(173),
    [anon_sym_source_file] = ACTIONS(173),
    [anon_sym_just_executable] = ACTIONS(173),
    [anon_sym_just_pid] = ACTIONS(173),
    [anon_sym_append] = ACTIONS(173),
    [anon_sym_prepend] = ACTIONS(173),
    [anon_sym_encode_uri_component] = ACTIONS(173),
    [anon_sym_quote] = ACTIONS(173),
    [anon_sym_replace] = ACTIONS(173),
    [anon_sym_replace_regex] = ACTIONS(173),
    [anon_sym_trim] = ACTIONS(173),
    [anon_sym_trim_end] = ACTIONS(173),
    [anon_sym_trim_end_match] = ACTIONS(173),
    [anon_sym_trim_end_matches] = ACTIONS(173),
    [anon_sym_trim_start] = ACTIONS(173),
    [anon_sym_trim_start_match] = ACTIONS(173),
    [anon_sym_trim_start_matches] = ACTIONS(173),
    [anon_sym_capitalize] = ACTIONS(173),
    [anon_sym_kebabcase] = ACTIONS(173),
    [anon_sym_lowercamelcase] = ACTIONS(173),
    [anon_sym_lowercase] = ACTIONS(173),
    [anon_sym_shoutykebabcase] = ACTIONS(173),
    [anon_sym_shoutysnakecase] = ACTIONS(173),
    [anon_sym_snakecase] = ACTIONS(173),
    [anon_sym_titlecase] = ACTIONS(173),
    [anon_sym_uppercamelcase] = ACTIONS(173),
    [anon_sym_uppercase] = ACTIONS(173),
    [anon_sym_absolute_path] = ACTIONS(173),
    [anon_sym_canonicalize] = ACTIONS(173),
    [anon_sym_extension] = ACTIONS(173),
    [anon_sym_file_name] = ACTIONS(173),
    [anon_sym_file_stem] = ACTIONS(173),
    [anon_sym_parent_dir] = ACTIONS(173),
    [anon_sym_parent_directory] = ACTIONS(173),
    [anon_sym_without_extension] = ACTIONS(173),
    [anon_sym_clean] = ACTIONS(173),
    [anon_sym_join] = ACTIONS(173),
    [anon_sym_path_exists] = ACTIONS(173),
    [anon_sym_error] = ACTIONS(173),
    [anon_sym_blake3] = ACTIONS(173),
    [anon_sym_blake3_file] = ACTIONS(173),
    [anon_sym_sha256] = ACTIONS(173),
    [anon_sym_sha256_file] = ACTIONS(173),
    [anon_sym_uuid] = ACTIONS(173),
    [anon_sym_choose] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_set] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_comment] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_alias] = ACTIONS(177),
    [aux_sym_import_token1] = ACTIONS(177),
    [aux_sym_mod_token1] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_arch] = ACTIONS(177),
    [anon_sym_num_cpus] = ACTIONS(177),
    [anon_sym_os] = ACTIONS(177),
    [anon_sym_os_family] = ACTIONS(177),
    [anon_sym_shell] = ACTIONS(177),
    [anon_sym_env_var] = ACTIONS(177),
    [anon_sym_env_var_or_default] = ACTIONS(177),
    [anon_sym_env] = ACTIONS(177),
    [anon_sym_is_dependency] = ACTIONS(177),
    [anon_sym_invocation_dir] = ACTIONS(177),
    [anon_sym_invocation_dir_native] = ACTIONS(177),
    [anon_sym_invocation_directory] = ACTIONS(177),
    [anon_sym_invocation_directory_native] = ACTIONS(177),
    [anon_sym_justfile] = ACTIONS(177),
    [anon_sym_justfile_dir] = ACTIONS(177),
    [anon_sym_justfile_directory] = ACTIONS(177),
    [anon_sym_source_dir] = ACTIONS(177),
    [anon_sym_source_directory] = ACTIONS(177),
    [anon_sym_source_file] = ACTIONS(177),
    [anon_sym_just_executable] = ACTIONS(177),
    [anon_sym_just_pid] = ACTIONS(177),
    [anon_sym_append] = ACTIONS(177),
    [anon_sym_prepend] = ACTIONS(177),
    [anon_sym_encode_uri_component] = ACTIONS(177),
    [anon_sym_quote] = ACTIONS(177),
    [anon_sym_replace] = ACTIONS(177),
    [anon_sym_replace_regex] = ACTIONS(177),
    [anon_sym_trim] = ACTIONS(177),
    [anon_sym_trim_end] = ACTIONS(177),
    [anon_sym_trim_end_match] = ACTIONS(177),
    [anon_sym_trim_end_matches] = ACTIONS(177),
    [anon_sym_trim_start] = ACTIONS(177),
    [anon_sym_trim_start_match] = ACTIONS(177),
    [anon_sym_trim_start_matches] = ACTIONS(177),
    [anon_sym_capitalize] = ACTIONS(177),
    [anon_sym_kebabcase] = ACTIONS(177),
    [anon_sym_lowercamelcase] = ACTIONS(177),
    [anon_sym_lowercase] = ACTIONS(177),
    [anon_sym_shoutykebabcase] = ACTIONS(177),
    [anon_sym_shoutysnakecase] = ACTIONS(177),
    [anon_sym_snakecase] = ACTIONS(177),
    [anon_sym_titlecase] = ACTIONS(177),
    [anon_sym_uppercamelcase] = ACTIONS(177),
    [anon_sym_uppercase] = ACTIONS(177),
    [anon_sym_absolute_path] = ACTIONS(177),
    [anon_sym_canonicalize] = ACTIONS(177),
    [anon_sym_extension] = ACTIONS(177),
    [anon_sym_file_name] = ACTIONS(177),
    [anon_sym_file_stem] = ACTIONS(177),
    [anon_sym_parent_dir] = ACTIONS(177),
    [anon_sym_parent_directory] = ACTIONS(177),
    [anon_sym_without_extension] = ACTIONS(177),
    [anon_sym_clean] = ACTIONS(177),
    [anon_sym_join] = ACTIONS(177),
    [anon_sym_path_exists] = ACTIONS(177),
    [anon_sym_error] = ACTIONS(177),
    [anon_sym_blake3] = ACTIONS(177),
    [anon_sym_blake3_file] = ACTIONS(177),
    [anon_sym_sha256] = ACTIONS(177),
    [anon_sym_sha256_file] = ACTIONS(177),
    [anon_sym_uuid] = ACTIONS(177),
    [anon_sym_choose] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_set] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_comment] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_identifier] = ACTIONS(181),
    [anon_sym_alias] = ACTIONS(181),
    [aux_sym_import_token1] = ACTIONS(181),
    [aux_sym_mod_token1] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_arch] = ACTIONS(181),
    [anon_sym_num_cpus] = ACTIONS(181),
    [anon_sym_os] = ACTIONS(181),
    [anon_sym_os_family] = ACTIONS(181),
    [anon_sym_shell] = ACTIONS(181),
    [anon_sym_env_var] = ACTIONS(181),
    [anon_sym_env_var_or_default] = ACTIONS(181),
    [anon_sym_env] = ACTIONS(181),
    [anon_sym_is_dependency] = ACTIONS(181),
    [anon_sym_invocation_dir] = ACTIONS(181),
    [anon_sym_invocation_dir_native] = ACTIONS(181),
    [anon_sym_invocation_directory] = ACTIONS(181),
    [anon_sym_invocation_directory_native] = ACTIONS(181),
    [anon_sym_justfile] = ACTIONS(181),
    [anon_sym_justfile_dir] = ACTIONS(181),
    [anon_sym_justfile_directory] = ACTIONS(181),
    [anon_sym_source_dir] = ACTIONS(181),
    [anon_sym_source_directory] = ACTIONS(181),
    [anon_sym_source_file] = ACTIONS(181),
    [anon_sym_just_executable] = ACTIONS(181),
    [anon_sym_just_pid] = ACTIONS(181),
    [anon_sym_append] = ACTIONS(181),
    [anon_sym_prepend] = ACTIONS(181),
    [anon_sym_encode_uri_component] = ACTIONS(181),
    [anon_sym_quote] = ACTIONS(181),
    [anon_sym_replace] = ACTIONS(181),
    [anon_sym_replace_regex] = ACTIONS(181),
    [anon_sym_trim] = ACTIONS(181),
    [anon_sym_trim_end] = ACTIONS(181),
    [anon_sym_trim_end_match] = ACTIONS(181),
    [anon_sym_trim_end_matches] = ACTIONS(181),
    [anon_sym_trim_start] = ACTIONS(181),
    [anon_sym_trim_start_match] = ACTIONS(181),
    [anon_sym_trim_start_matches] = ACTIONS(181),
    [anon_sym_capitalize] = ACTIONS(181),
    [anon_sym_kebabcase] = ACTIONS(181),
    [anon_sym_lowercamelcase] = ACTIONS(181),
    [anon_sym_lowercase] = ACTIONS(181),
    [anon_sym_shoutykebabcase] = ACTIONS(181),
    [anon_sym_shoutysnakecase] = ACTIONS(181),
    [anon_sym_snakecase] = ACTIONS(181),
    [anon_sym_titlecase] = ACTIONS(181),
    [anon_sym_uppercamelcase] = ACTIONS(181),
    [anon_sym_uppercase] = ACTIONS(181),
    [anon_sym_absolute_path] = ACTIONS(181),
    [anon_sym_canonicalize] = ACTIONS(181),
    [anon_sym_extension] = ACTIONS(181),
    [anon_sym_file_name] = ACTIONS(181),
    [anon_sym_file_stem] = ACTIONS(181),
    [anon_sym_parent_dir] = ACTIONS(181),
    [anon_sym_parent_directory] = ACTIONS(181),
    [anon_sym_without_extension] = ACTIONS(181),
    [anon_sym_clean] = ACTIONS(181),
    [anon_sym_join] = ACTIONS(181),
    [anon_sym_path_exists] = ACTIONS(181),
    [anon_sym_error] = ACTIONS(181),
    [anon_sym_blake3] = ACTIONS(181),
    [anon_sym_blake3_file] = ACTIONS(181),
    [anon_sym_sha256] = ACTIONS(181),
    [anon_sym_sha256_file] = ACTIONS(181),
    [anon_sym_uuid] = ACTIONS(181),
    [anon_sym_choose] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_set] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym_comment] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_alias] = ACTIONS(167),
    [aux_sym_import_token1] = ACTIONS(167),
    [aux_sym_mod_token1] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_arch] = ACTIONS(167),
    [anon_sym_num_cpus] = ACTIONS(167),
    [anon_sym_os] = ACTIONS(167),
    [anon_sym_os_family] = ACTIONS(167),
    [anon_sym_shell] = ACTIONS(167),
    [anon_sym_env_var] = ACTIONS(167),
    [anon_sym_env_var_or_default] = ACTIONS(167),
    [anon_sym_env] = ACTIONS(167),
    [anon_sym_is_dependency] = ACTIONS(167),
    [anon_sym_invocation_dir] = ACTIONS(167),
    [anon_sym_invocation_dir_native] = ACTIONS(167),
    [anon_sym_invocation_directory] = ACTIONS(167),
    [anon_sym_invocation_directory_native] = ACTIONS(167),
    [anon_sym_justfile] = ACTIONS(167),
    [anon_sym_justfile_dir] = ACTIONS(167),
    [anon_sym_justfile_directory] = ACTIONS(167),
    [anon_sym_source_dir] = ACTIONS(167),
    [anon_sym_source_directory] = ACTIONS(167),
    [anon_sym_source_file] = ACTIONS(167),
    [anon_sym_just_executable] = ACTIONS(167),
    [anon_sym_just_pid] = ACTIONS(167),
    [anon_sym_append] = ACTIONS(167),
    [anon_sym_prepend] = ACTIONS(167),
    [anon_sym_encode_uri_component] = ACTIONS(167),
    [anon_sym_quote] = ACTIONS(167),
    [anon_sym_replace] = ACTIONS(167),
    [anon_sym_replace_regex] = ACTIONS(167),
    [anon_sym_trim] = ACTIONS(167),
    [anon_sym_trim_end] = ACTIONS(167),
    [anon_sym_trim_end_match] = ACTIONS(167),
    [anon_sym_trim_end_matches] = ACTIONS(167),
    [anon_sym_trim_start] = ACTIONS(167),
    [anon_sym_trim_start_match] = ACTIONS(167),
    [anon_sym_trim_start_matches] = ACTIONS(167),
    [anon_sym_capitalize] = ACTIONS(167),
    [anon_sym_kebabcase] = ACTIONS(167),
    [anon_sym_lowercamelcase] = ACTIONS(167),
    [anon_sym_lowercase] = ACTIONS(167),
    [anon_sym_shoutykebabcase] = ACTIONS(167),
    [anon_sym_shoutysnakecase] = ACTIONS(167),
    [anon_sym_snakecase] = ACTIONS(167),
    [anon_sym_titlecase] = ACTIONS(167),
    [anon_sym_uppercamelcase] = ACTIONS(167),
    [anon_sym_uppercase] = ACTIONS(167),
    [anon_sym_absolute_path] = ACTIONS(167),
    [anon_sym_canonicalize] = ACTIONS(167),
    [anon_sym_extension] = ACTIONS(167),
    [anon_sym_file_name] = ACTIONS(167),
    [anon_sym_file_stem] = ACTIONS(167),
    [anon_sym_parent_dir] = ACTIONS(167),
    [anon_sym_parent_directory] = ACTIONS(167),
    [anon_sym_without_extension] = ACTIONS(167),
    [anon_sym_clean] = ACTIONS(167),
    [anon_sym_join] = ACTIONS(167),
    [anon_sym_path_exists] = ACTIONS(167),
    [anon_sym_error] = ACTIONS(167),
    [anon_sym_blake3] = ACTIONS(167),
    [anon_sym_blake3_file] = ACTIONS(167),
    [anon_sym_sha256] = ACTIONS(167),
    [anon_sym_sha256_file] = ACTIONS(167),
    [anon_sym_uuid] = ACTIONS(167),
    [anon_sym_choose] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym_comment] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_alias] = ACTIONS(185),
    [aux_sym_import_token1] = ACTIONS(185),
    [aux_sym_mod_token1] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_arch] = ACTIONS(185),
    [anon_sym_num_cpus] = ACTIONS(185),
    [anon_sym_os] = ACTIONS(185),
    [anon_sym_os_family] = ACTIONS(185),
    [anon_sym_shell] = ACTIONS(185),
    [anon_sym_env_var] = ACTIONS(185),
    [anon_sym_env_var_or_default] = ACTIONS(185),
    [anon_sym_env] = ACTIONS(185),
    [anon_sym_is_dependency] = ACTIONS(185),
    [anon_sym_invocation_dir] = ACTIONS(185),
    [anon_sym_invocation_dir_native] = ACTIONS(185),
    [anon_sym_invocation_directory] = ACTIONS(185),
    [anon_sym_invocation_directory_native] = ACTIONS(185),
    [anon_sym_justfile] = ACTIONS(185),
    [anon_sym_justfile_dir] = ACTIONS(185),
    [anon_sym_justfile_directory] = ACTIONS(185),
    [anon_sym_source_dir] = ACTIONS(185),
    [anon_sym_source_directory] = ACTIONS(185),
    [anon_sym_source_file] = ACTIONS(185),
    [anon_sym_just_executable] = ACTIONS(185),
    [anon_sym_just_pid] = ACTIONS(185),
    [anon_sym_append] = ACTIONS(185),
    [anon_sym_prepend] = ACTIONS(185),
    [anon_sym_encode_uri_component] = ACTIONS(185),
    [anon_sym_quote] = ACTIONS(185),
    [anon_sym_replace] = ACTIONS(185),
    [anon_sym_replace_regex] = ACTIONS(185),
    [anon_sym_trim] = ACTIONS(185),
    [anon_sym_trim_end] = ACTIONS(185),
    [anon_sym_trim_end_match] = ACTIONS(185),
    [anon_sym_trim_end_matches] = ACTIONS(185),
    [anon_sym_trim_start] = ACTIONS(185),
    [anon_sym_trim_start_match] = ACTIONS(185),
    [anon_sym_trim_start_matches] = ACTIONS(185),
    [anon_sym_capitalize] = ACTIONS(185),
    [anon_sym_kebabcase] = ACTIONS(185),
    [anon_sym_lowercamelcase] = ACTIONS(185),
    [anon_sym_lowercase] = ACTIONS(185),
    [anon_sym_shoutykebabcase] = ACTIONS(185),
    [anon_sym_shoutysnakecase] = ACTIONS(185),
    [anon_sym_snakecase] = ACTIONS(185),
    [anon_sym_titlecase] = ACTIONS(185),
    [anon_sym_uppercamelcase] = ACTIONS(185),
    [anon_sym_uppercase] = ACTIONS(185),
    [anon_sym_absolute_path] = ACTIONS(185),
    [anon_sym_canonicalize] = ACTIONS(185),
    [anon_sym_extension] = ACTIONS(185),
    [anon_sym_file_name] = ACTIONS(185),
    [anon_sym_file_stem] = ACTIONS(185),
    [anon_sym_parent_dir] = ACTIONS(185),
    [anon_sym_parent_directory] = ACTIONS(185),
    [anon_sym_without_extension] = ACTIONS(185),
    [anon_sym_clean] = ACTIONS(185),
    [anon_sym_join] = ACTIONS(185),
    [anon_sym_path_exists] = ACTIONS(185),
    [anon_sym_error] = ACTIONS(185),
    [anon_sym_blake3] = ACTIONS(185),
    [anon_sym_blake3_file] = ACTIONS(185),
    [anon_sym_sha256] = ACTIONS(185),
    [anon_sym_sha256_file] = ACTIONS(185),
    [anon_sym_uuid] = ACTIONS(185),
    [anon_sym_choose] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_set] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym_comment] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [anon_sym_alias] = ACTIONS(189),
    [aux_sym_import_token1] = ACTIONS(189),
    [aux_sym_mod_token1] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_arch] = ACTIONS(189),
    [anon_sym_num_cpus] = ACTIONS(189),
    [anon_sym_os] = ACTIONS(189),
    [anon_sym_os_family] = ACTIONS(189),
    [anon_sym_shell] = ACTIONS(189),
    [anon_sym_env_var] = ACTIONS(189),
    [anon_sym_env_var_or_default] = ACTIONS(189),
    [anon_sym_env] = ACTIONS(189),
    [anon_sym_is_dependency] = ACTIONS(189),
    [anon_sym_invocation_dir] = ACTIONS(189),
    [anon_sym_invocation_dir_native] = ACTIONS(189),
    [anon_sym_invocation_directory] = ACTIONS(189),
    [anon_sym_invocation_directory_native] = ACTIONS(189),
    [anon_sym_justfile] = ACTIONS(189),
    [anon_sym_justfile_dir] = ACTIONS(189),
    [anon_sym_justfile_directory] = ACTIONS(189),
    [anon_sym_source_dir] = ACTIONS(189),
    [anon_sym_source_directory] = ACTIONS(189),
    [anon_sym_source_file] = ACTIONS(189),
    [anon_sym_just_executable] = ACTIONS(189),
    [anon_sym_just_pid] = ACTIONS(189),
    [anon_sym_append] = ACTIONS(189),
    [anon_sym_prepend] = ACTIONS(189),
    [anon_sym_encode_uri_component] = ACTIONS(189),
    [anon_sym_quote] = ACTIONS(189),
    [anon_sym_replace] = ACTIONS(189),
    [anon_sym_replace_regex] = ACTIONS(189),
    [anon_sym_trim] = ACTIONS(189),
    [anon_sym_trim_end] = ACTIONS(189),
    [anon_sym_trim_end_match] = ACTIONS(189),
    [anon_sym_trim_end_matches] = ACTIONS(189),
    [anon_sym_trim_start] = ACTIONS(189),
    [anon_sym_trim_start_match] = ACTIONS(189),
    [anon_sym_trim_start_matches] = ACTIONS(189),
    [anon_sym_capitalize] = ACTIONS(189),
    [anon_sym_kebabcase] = ACTIONS(189),
    [anon_sym_lowercamelcase] = ACTIONS(189),
    [anon_sym_lowercase] = ACTIONS(189),
    [anon_sym_shoutykebabcase] = ACTIONS(189),
    [anon_sym_shoutysnakecase] = ACTIONS(189),
    [anon_sym_snakecase] = ACTIONS(189),
    [anon_sym_titlecase] = ACTIONS(189),
    [anon_sym_uppercamelcase] = ACTIONS(189),
    [anon_sym_uppercase] = ACTIONS(189),
    [anon_sym_absolute_path] = ACTIONS(189),
    [anon_sym_canonicalize] = ACTIONS(189),
    [anon_sym_extension] = ACTIONS(189),
    [anon_sym_file_name] = ACTIONS(189),
    [anon_sym_file_stem] = ACTIONS(189),
    [anon_sym_parent_dir] = ACTIONS(189),
    [anon_sym_parent_directory] = ACTIONS(189),
    [anon_sym_without_extension] = ACTIONS(189),
    [anon_sym_clean] = ACTIONS(189),
    [anon_sym_join] = ACTIONS(189),
    [anon_sym_path_exists] = ACTIONS(189),
    [anon_sym_error] = ACTIONS(189),
    [anon_sym_blake3] = ACTIONS(189),
    [anon_sym_blake3_file] = ACTIONS(189),
    [anon_sym_sha256] = ACTIONS(189),
    [anon_sym_sha256_file] = ACTIONS(189),
    [anon_sym_uuid] = ACTIONS(189),
    [anon_sym_choose] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_set] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [39] = {
    [sym_comment] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_alias] = ACTIONS(193),
    [aux_sym_import_token1] = ACTIONS(193),
    [aux_sym_mod_token1] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_arch] = ACTIONS(193),
    [anon_sym_num_cpus] = ACTIONS(193),
    [anon_sym_os] = ACTIONS(193),
    [anon_sym_os_family] = ACTIONS(193),
    [anon_sym_shell] = ACTIONS(193),
    [anon_sym_env_var] = ACTIONS(193),
    [anon_sym_env_var_or_default] = ACTIONS(193),
    [anon_sym_env] = ACTIONS(193),
    [anon_sym_is_dependency] = ACTIONS(193),
    [anon_sym_invocation_dir] = ACTIONS(193),
    [anon_sym_invocation_dir_native] = ACTIONS(193),
    [anon_sym_invocation_directory] = ACTIONS(193),
    [anon_sym_invocation_directory_native] = ACTIONS(193),
    [anon_sym_justfile] = ACTIONS(193),
    [anon_sym_justfile_dir] = ACTIONS(193),
    [anon_sym_justfile_directory] = ACTIONS(193),
    [anon_sym_source_dir] = ACTIONS(193),
    [anon_sym_source_directory] = ACTIONS(193),
    [anon_sym_source_file] = ACTIONS(193),
    [anon_sym_just_executable] = ACTIONS(193),
    [anon_sym_just_pid] = ACTIONS(193),
    [anon_sym_append] = ACTIONS(193),
    [anon_sym_prepend] = ACTIONS(193),
    [anon_sym_encode_uri_component] = ACTIONS(193),
    [anon_sym_quote] = ACTIONS(193),
    [anon_sym_replace] = ACTIONS(193),
    [anon_sym_replace_regex] = ACTIONS(193),
    [anon_sym_trim] = ACTIONS(193),
    [anon_sym_trim_end] = ACTIONS(193),
    [anon_sym_trim_end_match] = ACTIONS(193),
    [anon_sym_trim_end_matches] = ACTIONS(193),
    [anon_sym_trim_start] = ACTIONS(193),
    [anon_sym_trim_start_match] = ACTIONS(193),
    [anon_sym_trim_start_matches] = ACTIONS(193),
    [anon_sym_capitalize] = ACTIONS(193),
    [anon_sym_kebabcase] = ACTIONS(193),
    [anon_sym_lowercamelcase] = ACTIONS(193),
    [anon_sym_lowercase] = ACTIONS(193),
    [anon_sym_shoutykebabcase] = ACTIONS(193),
    [anon_sym_shoutysnakecase] = ACTIONS(193),
    [anon_sym_snakecase] = ACTIONS(193),
    [anon_sym_titlecase] = ACTIONS(193),
    [anon_sym_uppercamelcase] = ACTIONS(193),
    [anon_sym_uppercase] = ACTIONS(193),
    [anon_sym_absolute_path] = ACTIONS(193),
    [anon_sym_canonicalize] = ACTIONS(193),
    [anon_sym_extension] = ACTIONS(193),
    [anon_sym_file_name] = ACTIONS(193),
    [anon_sym_file_stem] = ACTIONS(193),
    [anon_sym_parent_dir] = ACTIONS(193),
    [anon_sym_parent_directory] = ACTIONS(193),
    [anon_sym_without_extension] = ACTIONS(193),
    [anon_sym_clean] = ACTIONS(193),
    [anon_sym_join] = ACTIONS(193),
    [anon_sym_path_exists] = ACTIONS(193),
    [anon_sym_error] = ACTIONS(193),
    [anon_sym_blake3] = ACTIONS(193),
    [anon_sym_blake3_file] = ACTIONS(193),
    [anon_sym_sha256] = ACTIONS(193),
    [anon_sym_sha256_file] = ACTIONS(193),
    [anon_sym_uuid] = ACTIONS(193),
    [anon_sym_choose] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_set] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [40] = {
    [sym_comment] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_alias] = ACTIONS(197),
    [aux_sym_import_token1] = ACTIONS(197),
    [aux_sym_mod_token1] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_arch] = ACTIONS(197),
    [anon_sym_num_cpus] = ACTIONS(197),
    [anon_sym_os] = ACTIONS(197),
    [anon_sym_os_family] = ACTIONS(197),
    [anon_sym_shell] = ACTIONS(197),
    [anon_sym_env_var] = ACTIONS(197),
    [anon_sym_env_var_or_default] = ACTIONS(197),
    [anon_sym_env] = ACTIONS(197),
    [anon_sym_is_dependency] = ACTIONS(197),
    [anon_sym_invocation_dir] = ACTIONS(197),
    [anon_sym_invocation_dir_native] = ACTIONS(197),
    [anon_sym_invocation_directory] = ACTIONS(197),
    [anon_sym_invocation_directory_native] = ACTIONS(197),
    [anon_sym_justfile] = ACTIONS(197),
    [anon_sym_justfile_dir] = ACTIONS(197),
    [anon_sym_justfile_directory] = ACTIONS(197),
    [anon_sym_source_dir] = ACTIONS(197),
    [anon_sym_source_directory] = ACTIONS(197),
    [anon_sym_source_file] = ACTIONS(197),
    [anon_sym_just_executable] = ACTIONS(197),
    [anon_sym_just_pid] = ACTIONS(197),
    [anon_sym_append] = ACTIONS(197),
    [anon_sym_prepend] = ACTIONS(197),
    [anon_sym_encode_uri_component] = ACTIONS(197),
    [anon_sym_quote] = ACTIONS(197),
    [anon_sym_replace] = ACTIONS(197),
    [anon_sym_replace_regex] = ACTIONS(197),
    [anon_sym_trim] = ACTIONS(197),
    [anon_sym_trim_end] = ACTIONS(197),
    [anon_sym_trim_end_match] = ACTIONS(197),
    [anon_sym_trim_end_matches] = ACTIONS(197),
    [anon_sym_trim_start] = ACTIONS(197),
    [anon_sym_trim_start_match] = ACTIONS(197),
    [anon_sym_trim_start_matches] = ACTIONS(197),
    [anon_sym_capitalize] = ACTIONS(197),
    [anon_sym_kebabcase] = ACTIONS(197),
    [anon_sym_lowercamelcase] = ACTIONS(197),
    [anon_sym_lowercase] = ACTIONS(197),
    [anon_sym_shoutykebabcase] = ACTIONS(197),
    [anon_sym_shoutysnakecase] = ACTIONS(197),
    [anon_sym_snakecase] = ACTIONS(197),
    [anon_sym_titlecase] = ACTIONS(197),
    [anon_sym_uppercamelcase] = ACTIONS(197),
    [anon_sym_uppercase] = ACTIONS(197),
    [anon_sym_absolute_path] = ACTIONS(197),
    [anon_sym_canonicalize] = ACTIONS(197),
    [anon_sym_extension] = ACTIONS(197),
    [anon_sym_file_name] = ACTIONS(197),
    [anon_sym_file_stem] = ACTIONS(197),
    [anon_sym_parent_dir] = ACTIONS(197),
    [anon_sym_parent_directory] = ACTIONS(197),
    [anon_sym_without_extension] = ACTIONS(197),
    [anon_sym_clean] = ACTIONS(197),
    [anon_sym_join] = ACTIONS(197),
    [anon_sym_path_exists] = ACTIONS(197),
    [anon_sym_error] = ACTIONS(197),
    [anon_sym_blake3] = ACTIONS(197),
    [anon_sym_blake3_file] = ACTIONS(197),
    [anon_sym_sha256] = ACTIONS(197),
    [anon_sym_sha256_file] = ACTIONS(197),
    [anon_sym_uuid] = ACTIONS(197),
    [anon_sym_choose] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_set] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [41] = {
    [sym_comment] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_alias] = ACTIONS(201),
    [aux_sym_import_token1] = ACTIONS(201),
    [aux_sym_mod_token1] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_arch] = ACTIONS(201),
    [anon_sym_num_cpus] = ACTIONS(201),
    [anon_sym_os] = ACTIONS(201),
    [anon_sym_os_family] = ACTIONS(201),
    [anon_sym_shell] = ACTIONS(201),
    [anon_sym_env_var] = ACTIONS(201),
    [anon_sym_env_var_or_default] = ACTIONS(201),
    [anon_sym_env] = ACTIONS(201),
    [anon_sym_is_dependency] = ACTIONS(201),
    [anon_sym_invocation_dir] = ACTIONS(201),
    [anon_sym_invocation_dir_native] = ACTIONS(201),
    [anon_sym_invocation_directory] = ACTIONS(201),
    [anon_sym_invocation_directory_native] = ACTIONS(201),
    [anon_sym_justfile] = ACTIONS(201),
    [anon_sym_justfile_dir] = ACTIONS(201),
    [anon_sym_justfile_directory] = ACTIONS(201),
    [anon_sym_source_dir] = ACTIONS(201),
    [anon_sym_source_directory] = ACTIONS(201),
    [anon_sym_source_file] = ACTIONS(201),
    [anon_sym_just_executable] = ACTIONS(201),
    [anon_sym_just_pid] = ACTIONS(201),
    [anon_sym_append] = ACTIONS(201),
    [anon_sym_prepend] = ACTIONS(201),
    [anon_sym_encode_uri_component] = ACTIONS(201),
    [anon_sym_quote] = ACTIONS(201),
    [anon_sym_replace] = ACTIONS(201),
    [anon_sym_replace_regex] = ACTIONS(201),
    [anon_sym_trim] = ACTIONS(201),
    [anon_sym_trim_end] = ACTIONS(201),
    [anon_sym_trim_end_match] = ACTIONS(201),
    [anon_sym_trim_end_matches] = ACTIONS(201),
    [anon_sym_trim_start] = ACTIONS(201),
    [anon_sym_trim_start_match] = ACTIONS(201),
    [anon_sym_trim_start_matches] = ACTIONS(201),
    [anon_sym_capitalize] = ACTIONS(201),
    [anon_sym_kebabcase] = ACTIONS(201),
    [anon_sym_lowercamelcase] = ACTIONS(201),
    [anon_sym_lowercase] = ACTIONS(201),
    [anon_sym_shoutykebabcase] = ACTIONS(201),
    [anon_sym_shoutysnakecase] = ACTIONS(201),
    [anon_sym_snakecase] = ACTIONS(201),
    [anon_sym_titlecase] = ACTIONS(201),
    [anon_sym_uppercamelcase] = ACTIONS(201),
    [anon_sym_uppercase] = ACTIONS(201),
    [anon_sym_absolute_path] = ACTIONS(201),
    [anon_sym_canonicalize] = ACTIONS(201),
    [anon_sym_extension] = ACTIONS(201),
    [anon_sym_file_name] = ACTIONS(201),
    [anon_sym_file_stem] = ACTIONS(201),
    [anon_sym_parent_dir] = ACTIONS(201),
    [anon_sym_parent_directory] = ACTIONS(201),
    [anon_sym_without_extension] = ACTIONS(201),
    [anon_sym_clean] = ACTIONS(201),
    [anon_sym_join] = ACTIONS(201),
    [anon_sym_path_exists] = ACTIONS(201),
    [anon_sym_error] = ACTIONS(201),
    [anon_sym_blake3] = ACTIONS(201),
    [anon_sym_blake3_file] = ACTIONS(201),
    [anon_sym_sha256] = ACTIONS(201),
    [anon_sym_sha256_file] = ACTIONS(201),
    [anon_sym_uuid] = ACTIONS(201),
    [anon_sym_choose] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_set] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [42] = {
    [sym_comment] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_alias] = ACTIONS(205),
    [aux_sym_import_token1] = ACTIONS(205),
    [aux_sym_mod_token1] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_arch] = ACTIONS(205),
    [anon_sym_num_cpus] = ACTIONS(205),
    [anon_sym_os] = ACTIONS(205),
    [anon_sym_os_family] = ACTIONS(205),
    [anon_sym_shell] = ACTIONS(205),
    [anon_sym_env_var] = ACTIONS(205),
    [anon_sym_env_var_or_default] = ACTIONS(205),
    [anon_sym_env] = ACTIONS(205),
    [anon_sym_is_dependency] = ACTIONS(205),
    [anon_sym_invocation_dir] = ACTIONS(205),
    [anon_sym_invocation_dir_native] = ACTIONS(205),
    [anon_sym_invocation_directory] = ACTIONS(205),
    [anon_sym_invocation_directory_native] = ACTIONS(205),
    [anon_sym_justfile] = ACTIONS(205),
    [anon_sym_justfile_dir] = ACTIONS(205),
    [anon_sym_justfile_directory] = ACTIONS(205),
    [anon_sym_source_dir] = ACTIONS(205),
    [anon_sym_source_directory] = ACTIONS(205),
    [anon_sym_source_file] = ACTIONS(205),
    [anon_sym_just_executable] = ACTIONS(205),
    [anon_sym_just_pid] = ACTIONS(205),
    [anon_sym_append] = ACTIONS(205),
    [anon_sym_prepend] = ACTIONS(205),
    [anon_sym_encode_uri_component] = ACTIONS(205),
    [anon_sym_quote] = ACTIONS(205),
    [anon_sym_replace] = ACTIONS(205),
    [anon_sym_replace_regex] = ACTIONS(205),
    [anon_sym_trim] = ACTIONS(205),
    [anon_sym_trim_end] = ACTIONS(205),
    [anon_sym_trim_end_match] = ACTIONS(205),
    [anon_sym_trim_end_matches] = ACTIONS(205),
    [anon_sym_trim_start] = ACTIONS(205),
    [anon_sym_trim_start_match] = ACTIONS(205),
    [anon_sym_trim_start_matches] = ACTIONS(205),
    [anon_sym_capitalize] = ACTIONS(205),
    [anon_sym_kebabcase] = ACTIONS(205),
    [anon_sym_lowercamelcase] = ACTIONS(205),
    [anon_sym_lowercase] = ACTIONS(205),
    [anon_sym_shoutykebabcase] = ACTIONS(205),
    [anon_sym_shoutysnakecase] = ACTIONS(205),
    [anon_sym_snakecase] = ACTIONS(205),
    [anon_sym_titlecase] = ACTIONS(205),
    [anon_sym_uppercamelcase] = ACTIONS(205),
    [anon_sym_uppercase] = ACTIONS(205),
    [anon_sym_absolute_path] = ACTIONS(205),
    [anon_sym_canonicalize] = ACTIONS(205),
    [anon_sym_extension] = ACTIONS(205),
    [anon_sym_file_name] = ACTIONS(205),
    [anon_sym_file_stem] = ACTIONS(205),
    [anon_sym_parent_dir] = ACTIONS(205),
    [anon_sym_parent_directory] = ACTIONS(205),
    [anon_sym_without_extension] = ACTIONS(205),
    [anon_sym_clean] = ACTIONS(205),
    [anon_sym_join] = ACTIONS(205),
    [anon_sym_path_exists] = ACTIONS(205),
    [anon_sym_error] = ACTIONS(205),
    [anon_sym_blake3] = ACTIONS(205),
    [anon_sym_blake3_file] = ACTIONS(205),
    [anon_sym_sha256] = ACTIONS(205),
    [anon_sym_sha256_file] = ACTIONS(205),
    [anon_sym_uuid] = ACTIONS(205),
    [anon_sym_choose] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_set] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [43] = {
    [sym_comment] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_alias] = ACTIONS(209),
    [aux_sym_import_token1] = ACTIONS(209),
    [aux_sym_mod_token1] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_arch] = ACTIONS(209),
    [anon_sym_num_cpus] = ACTIONS(209),
    [anon_sym_os] = ACTIONS(209),
    [anon_sym_os_family] = ACTIONS(209),
    [anon_sym_shell] = ACTIONS(209),
    [anon_sym_env_var] = ACTIONS(209),
    [anon_sym_env_var_or_default] = ACTIONS(209),
    [anon_sym_env] = ACTIONS(209),
    [anon_sym_is_dependency] = ACTIONS(209),
    [anon_sym_invocation_dir] = ACTIONS(209),
    [anon_sym_invocation_dir_native] = ACTIONS(209),
    [anon_sym_invocation_directory] = ACTIONS(209),
    [anon_sym_invocation_directory_native] = ACTIONS(209),
    [anon_sym_justfile] = ACTIONS(209),
    [anon_sym_justfile_dir] = ACTIONS(209),
    [anon_sym_justfile_directory] = ACTIONS(209),
    [anon_sym_source_dir] = ACTIONS(209),
    [anon_sym_source_directory] = ACTIONS(209),
    [anon_sym_source_file] = ACTIONS(209),
    [anon_sym_just_executable] = ACTIONS(209),
    [anon_sym_just_pid] = ACTIONS(209),
    [anon_sym_append] = ACTIONS(209),
    [anon_sym_prepend] = ACTIONS(209),
    [anon_sym_encode_uri_component] = ACTIONS(209),
    [anon_sym_quote] = ACTIONS(209),
    [anon_sym_replace] = ACTIONS(209),
    [anon_sym_replace_regex] = ACTIONS(209),
    [anon_sym_trim] = ACTIONS(209),
    [anon_sym_trim_end] = ACTIONS(209),
    [anon_sym_trim_end_match] = ACTIONS(209),
    [anon_sym_trim_end_matches] = ACTIONS(209),
    [anon_sym_trim_start] = ACTIONS(209),
    [anon_sym_trim_start_match] = ACTIONS(209),
    [anon_sym_trim_start_matches] = ACTIONS(209),
    [anon_sym_capitalize] = ACTIONS(209),
    [anon_sym_kebabcase] = ACTIONS(209),
    [anon_sym_lowercamelcase] = ACTIONS(209),
    [anon_sym_lowercase] = ACTIONS(209),
    [anon_sym_shoutykebabcase] = ACTIONS(209),
    [anon_sym_shoutysnakecase] = ACTIONS(209),
    [anon_sym_snakecase] = ACTIONS(209),
    [anon_sym_titlecase] = ACTIONS(209),
    [anon_sym_uppercamelcase] = ACTIONS(209),
    [anon_sym_uppercase] = ACTIONS(209),
    [anon_sym_absolute_path] = ACTIONS(209),
    [anon_sym_canonicalize] = ACTIONS(209),
    [anon_sym_extension] = ACTIONS(209),
    [anon_sym_file_name] = ACTIONS(209),
    [anon_sym_file_stem] = ACTIONS(209),
    [anon_sym_parent_dir] = ACTIONS(209),
    [anon_sym_parent_directory] = ACTIONS(209),
    [anon_sym_without_extension] = ACTIONS(209),
    [anon_sym_clean] = ACTIONS(209),
    [anon_sym_join] = ACTIONS(209),
    [anon_sym_path_exists] = ACTIONS(209),
    [anon_sym_error] = ACTIONS(209),
    [anon_sym_blake3] = ACTIONS(209),
    [anon_sym_blake3_file] = ACTIONS(209),
    [anon_sym_sha256] = ACTIONS(209),
    [anon_sym_sha256_file] = ACTIONS(209),
    [anon_sym_uuid] = ACTIONS(209),
    [anon_sym_choose] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_set] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [44] = {
    [sym_comment] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_identifier] = ACTIONS(213),
    [anon_sym_alias] = ACTIONS(213),
    [aux_sym_import_token1] = ACTIONS(213),
    [aux_sym_mod_token1] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_arch] = ACTIONS(213),
    [anon_sym_num_cpus] = ACTIONS(213),
    [anon_sym_os] = ACTIONS(213),
    [anon_sym_os_family] = ACTIONS(213),
    [anon_sym_shell] = ACTIONS(213),
    [anon_sym_env_var] = ACTIONS(213),
    [anon_sym_env_var_or_default] = ACTIONS(213),
    [anon_sym_env] = ACTIONS(213),
    [anon_sym_is_dependency] = ACTIONS(213),
    [anon_sym_invocation_dir] = ACTIONS(213),
    [anon_sym_invocation_dir_native] = ACTIONS(213),
    [anon_sym_invocation_directory] = ACTIONS(213),
    [anon_sym_invocation_directory_native] = ACTIONS(213),
    [anon_sym_justfile] = ACTIONS(213),
    [anon_sym_justfile_dir] = ACTIONS(213),
    [anon_sym_justfile_directory] = ACTIONS(213),
    [anon_sym_source_dir] = ACTIONS(213),
    [anon_sym_source_directory] = ACTIONS(213),
    [anon_sym_source_file] = ACTIONS(213),
    [anon_sym_just_executable] = ACTIONS(213),
    [anon_sym_just_pid] = ACTIONS(213),
    [anon_sym_append] = ACTIONS(213),
    [anon_sym_prepend] = ACTIONS(213),
    [anon_sym_encode_uri_component] = ACTIONS(213),
    [anon_sym_quote] = ACTIONS(213),
    [anon_sym_replace] = ACTIONS(213),
    [anon_sym_replace_regex] = ACTIONS(213),
    [anon_sym_trim] = ACTIONS(213),
    [anon_sym_trim_end] = ACTIONS(213),
    [anon_sym_trim_end_match] = ACTIONS(213),
    [anon_sym_trim_end_matches] = ACTIONS(213),
    [anon_sym_trim_start] = ACTIONS(213),
    [anon_sym_trim_start_match] = ACTIONS(213),
    [anon_sym_trim_start_matches] = ACTIONS(213),
    [anon_sym_capitalize] = ACTIONS(213),
    [anon_sym_kebabcase] = ACTIONS(213),
    [anon_sym_lowercamelcase] = ACTIONS(213),
    [anon_sym_lowercase] = ACTIONS(213),
    [anon_sym_shoutykebabcase] = ACTIONS(213),
    [anon_sym_shoutysnakecase] = ACTIONS(213),
    [anon_sym_snakecase] = ACTIONS(213),
    [anon_sym_titlecase] = ACTIONS(213),
    [anon_sym_uppercamelcase] = ACTIONS(213),
    [anon_sym_uppercase] = ACTIONS(213),
    [anon_sym_absolute_path] = ACTIONS(213),
    [anon_sym_canonicalize] = ACTIONS(213),
    [anon_sym_extension] = ACTIONS(213),
    [anon_sym_file_name] = ACTIONS(213),
    [anon_sym_file_stem] = ACTIONS(213),
    [anon_sym_parent_dir] = ACTIONS(213),
    [anon_sym_parent_directory] = ACTIONS(213),
    [anon_sym_without_extension] = ACTIONS(213),
    [anon_sym_clean] = ACTIONS(213),
    [anon_sym_join] = ACTIONS(213),
    [anon_sym_path_exists] = ACTIONS(213),
    [anon_sym_error] = ACTIONS(213),
    [anon_sym_blake3] = ACTIONS(213),
    [anon_sym_blake3_file] = ACTIONS(213),
    [anon_sym_sha256] = ACTIONS(213),
    [anon_sym_sha256_file] = ACTIONS(213),
    [anon_sym_uuid] = ACTIONS(213),
    [anon_sym_choose] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_set] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(211),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [45] = {
    [sym_comment] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_alias] = ACTIONS(217),
    [aux_sym_import_token1] = ACTIONS(217),
    [aux_sym_mod_token1] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_arch] = ACTIONS(217),
    [anon_sym_num_cpus] = ACTIONS(217),
    [anon_sym_os] = ACTIONS(217),
    [anon_sym_os_family] = ACTIONS(217),
    [anon_sym_shell] = ACTIONS(217),
    [anon_sym_env_var] = ACTIONS(217),
    [anon_sym_env_var_or_default] = ACTIONS(217),
    [anon_sym_env] = ACTIONS(217),
    [anon_sym_is_dependency] = ACTIONS(217),
    [anon_sym_invocation_dir] = ACTIONS(217),
    [anon_sym_invocation_dir_native] = ACTIONS(217),
    [anon_sym_invocation_directory] = ACTIONS(217),
    [anon_sym_invocation_directory_native] = ACTIONS(217),
    [anon_sym_justfile] = ACTIONS(217),
    [anon_sym_justfile_dir] = ACTIONS(217),
    [anon_sym_justfile_directory] = ACTIONS(217),
    [anon_sym_source_dir] = ACTIONS(217),
    [anon_sym_source_directory] = ACTIONS(217),
    [anon_sym_source_file] = ACTIONS(217),
    [anon_sym_just_executable] = ACTIONS(217),
    [anon_sym_just_pid] = ACTIONS(217),
    [anon_sym_append] = ACTIONS(217),
    [anon_sym_prepend] = ACTIONS(217),
    [anon_sym_encode_uri_component] = ACTIONS(217),
    [anon_sym_quote] = ACTIONS(217),
    [anon_sym_replace] = ACTIONS(217),
    [anon_sym_replace_regex] = ACTIONS(217),
    [anon_sym_trim] = ACTIONS(217),
    [anon_sym_trim_end] = ACTIONS(217),
    [anon_sym_trim_end_match] = ACTIONS(217),
    [anon_sym_trim_end_matches] = ACTIONS(217),
    [anon_sym_trim_start] = ACTIONS(217),
    [anon_sym_trim_start_match] = ACTIONS(217),
    [anon_sym_trim_start_matches] = ACTIONS(217),
    [anon_sym_capitalize] = ACTIONS(217),
    [anon_sym_kebabcase] = ACTIONS(217),
    [anon_sym_lowercamelcase] = ACTIONS(217),
    [anon_sym_lowercase] = ACTIONS(217),
    [anon_sym_shoutykebabcase] = ACTIONS(217),
    [anon_sym_shoutysnakecase] = ACTIONS(217),
    [anon_sym_snakecase] = ACTIONS(217),
    [anon_sym_titlecase] = ACTIONS(217),
    [anon_sym_uppercamelcase] = ACTIONS(217),
    [anon_sym_uppercase] = ACTIONS(217),
    [anon_sym_absolute_path] = ACTIONS(217),
    [anon_sym_canonicalize] = ACTIONS(217),
    [anon_sym_extension] = ACTIONS(217),
    [anon_sym_file_name] = ACTIONS(217),
    [anon_sym_file_stem] = ACTIONS(217),
    [anon_sym_parent_dir] = ACTIONS(217),
    [anon_sym_parent_directory] = ACTIONS(217),
    [anon_sym_without_extension] = ACTIONS(217),
    [anon_sym_clean] = ACTIONS(217),
    [anon_sym_join] = ACTIONS(217),
    [anon_sym_path_exists] = ACTIONS(217),
    [anon_sym_error] = ACTIONS(217),
    [anon_sym_blake3] = ACTIONS(217),
    [anon_sym_blake3_file] = ACTIONS(217),
    [anon_sym_sha256] = ACTIONS(217),
    [anon_sym_sha256_file] = ACTIONS(217),
    [anon_sym_uuid] = ACTIONS(217),
    [anon_sym_choose] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_set] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(215),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [46] = {
    [sym_comment] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_alias] = ACTIONS(221),
    [aux_sym_import_token1] = ACTIONS(221),
    [aux_sym_mod_token1] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_arch] = ACTIONS(221),
    [anon_sym_num_cpus] = ACTIONS(221),
    [anon_sym_os] = ACTIONS(221),
    [anon_sym_os_family] = ACTIONS(221),
    [anon_sym_shell] = ACTIONS(221),
    [anon_sym_env_var] = ACTIONS(221),
    [anon_sym_env_var_or_default] = ACTIONS(221),
    [anon_sym_env] = ACTIONS(221),
    [anon_sym_is_dependency] = ACTIONS(221),
    [anon_sym_invocation_dir] = ACTIONS(221),
    [anon_sym_invocation_dir_native] = ACTIONS(221),
    [anon_sym_invocation_directory] = ACTIONS(221),
    [anon_sym_invocation_directory_native] = ACTIONS(221),
    [anon_sym_justfile] = ACTIONS(221),
    [anon_sym_justfile_dir] = ACTIONS(221),
    [anon_sym_justfile_directory] = ACTIONS(221),
    [anon_sym_source_dir] = ACTIONS(221),
    [anon_sym_source_directory] = ACTIONS(221),
    [anon_sym_source_file] = ACTIONS(221),
    [anon_sym_just_executable] = ACTIONS(221),
    [anon_sym_just_pid] = ACTIONS(221),
    [anon_sym_append] = ACTIONS(221),
    [anon_sym_prepend] = ACTIONS(221),
    [anon_sym_encode_uri_component] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_replace] = ACTIONS(221),
    [anon_sym_replace_regex] = ACTIONS(221),
    [anon_sym_trim] = ACTIONS(221),
    [anon_sym_trim_end] = ACTIONS(221),
    [anon_sym_trim_end_match] = ACTIONS(221),
    [anon_sym_trim_end_matches] = ACTIONS(221),
    [anon_sym_trim_start] = ACTIONS(221),
    [anon_sym_trim_start_match] = ACTIONS(221),
    [anon_sym_trim_start_matches] = ACTIONS(221),
    [anon_sym_capitalize] = ACTIONS(221),
    [anon_sym_kebabcase] = ACTIONS(221),
    [anon_sym_lowercamelcase] = ACTIONS(221),
    [anon_sym_lowercase] = ACTIONS(221),
    [anon_sym_shoutykebabcase] = ACTIONS(221),
    [anon_sym_shoutysnakecase] = ACTIONS(221),
    [anon_sym_snakecase] = ACTIONS(221),
    [anon_sym_titlecase] = ACTIONS(221),
    [anon_sym_uppercamelcase] = ACTIONS(221),
    [anon_sym_uppercase] = ACTIONS(221),
    [anon_sym_absolute_path] = ACTIONS(221),
    [anon_sym_canonicalize] = ACTIONS(221),
    [anon_sym_extension] = ACTIONS(221),
    [anon_sym_file_name] = ACTIONS(221),
    [anon_sym_file_stem] = ACTIONS(221),
    [anon_sym_parent_dir] = ACTIONS(221),
    [anon_sym_parent_directory] = ACTIONS(221),
    [anon_sym_without_extension] = ACTIONS(221),
    [anon_sym_clean] = ACTIONS(221),
    [anon_sym_join] = ACTIONS(221),
    [anon_sym_path_exists] = ACTIONS(221),
    [anon_sym_error] = ACTIONS(221),
    [anon_sym_blake3] = ACTIONS(221),
    [anon_sym_blake3_file] = ACTIONS(221),
    [anon_sym_sha256] = ACTIONS(221),
    [anon_sym_sha256_file] = ACTIONS(221),
    [anon_sym_uuid] = ACTIONS(221),
    [anon_sym_choose] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_set] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [47] = {
    [sym_comment] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_identifier] = ACTIONS(225),
    [anon_sym_alias] = ACTIONS(225),
    [aux_sym_import_token1] = ACTIONS(225),
    [aux_sym_mod_token1] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_arch] = ACTIONS(225),
    [anon_sym_num_cpus] = ACTIONS(225),
    [anon_sym_os] = ACTIONS(225),
    [anon_sym_os_family] = ACTIONS(225),
    [anon_sym_shell] = ACTIONS(225),
    [anon_sym_env_var] = ACTIONS(225),
    [anon_sym_env_var_or_default] = ACTIONS(225),
    [anon_sym_env] = ACTIONS(225),
    [anon_sym_is_dependency] = ACTIONS(225),
    [anon_sym_invocation_dir] = ACTIONS(225),
    [anon_sym_invocation_dir_native] = ACTIONS(225),
    [anon_sym_invocation_directory] = ACTIONS(225),
    [anon_sym_invocation_directory_native] = ACTIONS(225),
    [anon_sym_justfile] = ACTIONS(225),
    [anon_sym_justfile_dir] = ACTIONS(225),
    [anon_sym_justfile_directory] = ACTIONS(225),
    [anon_sym_source_dir] = ACTIONS(225),
    [anon_sym_source_directory] = ACTIONS(225),
    [anon_sym_source_file] = ACTIONS(225),
    [anon_sym_just_executable] = ACTIONS(225),
    [anon_sym_just_pid] = ACTIONS(225),
    [anon_sym_append] = ACTIONS(225),
    [anon_sym_prepend] = ACTIONS(225),
    [anon_sym_encode_uri_component] = ACTIONS(225),
    [anon_sym_quote] = ACTIONS(225),
    [anon_sym_replace] = ACTIONS(225),
    [anon_sym_replace_regex] = ACTIONS(225),
    [anon_sym_trim] = ACTIONS(225),
    [anon_sym_trim_end] = ACTIONS(225),
    [anon_sym_trim_end_match] = ACTIONS(225),
    [anon_sym_trim_end_matches] = ACTIONS(225),
    [anon_sym_trim_start] = ACTIONS(225),
    [anon_sym_trim_start_match] = ACTIONS(225),
    [anon_sym_trim_start_matches] = ACTIONS(225),
    [anon_sym_capitalize] = ACTIONS(225),
    [anon_sym_kebabcase] = ACTIONS(225),
    [anon_sym_lowercamelcase] = ACTIONS(225),
    [anon_sym_lowercase] = ACTIONS(225),
    [anon_sym_shoutykebabcase] = ACTIONS(225),
    [anon_sym_shoutysnakecase] = ACTIONS(225),
    [anon_sym_snakecase] = ACTIONS(225),
    [anon_sym_titlecase] = ACTIONS(225),
    [anon_sym_uppercamelcase] = ACTIONS(225),
    [anon_sym_uppercase] = ACTIONS(225),
    [anon_sym_absolute_path] = ACTIONS(225),
    [anon_sym_canonicalize] = ACTIONS(225),
    [anon_sym_extension] = ACTIONS(225),
    [anon_sym_file_name] = ACTIONS(225),
    [anon_sym_file_stem] = ACTIONS(225),
    [anon_sym_parent_dir] = ACTIONS(225),
    [anon_sym_parent_directory] = ACTIONS(225),
    [anon_sym_without_extension] = ACTIONS(225),
    [anon_sym_clean] = ACTIONS(225),
    [anon_sym_join] = ACTIONS(225),
    [anon_sym_path_exists] = ACTIONS(225),
    [anon_sym_error] = ACTIONS(225),
    [anon_sym_blake3] = ACTIONS(225),
    [anon_sym_blake3_file] = ACTIONS(225),
    [anon_sym_sha256] = ACTIONS(225),
    [anon_sym_sha256_file] = ACTIONS(225),
    [anon_sym_uuid] = ACTIONS(225),
    [anon_sym_choose] = ACTIONS(225),
    [anon_sym_set] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [48] = {
    [sym_comment] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_identifier] = ACTIONS(229),
    [anon_sym_alias] = ACTIONS(229),
    [aux_sym_import_token1] = ACTIONS(229),
    [aux_sym_mod_token1] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_arch] = ACTIONS(229),
    [anon_sym_num_cpus] = ACTIONS(229),
    [anon_sym_os] = ACTIONS(229),
    [anon_sym_os_family] = ACTIONS(229),
    [anon_sym_shell] = ACTIONS(229),
    [anon_sym_env_var] = ACTIONS(229),
    [anon_sym_env_var_or_default] = ACTIONS(229),
    [anon_sym_env] = ACTIONS(229),
    [anon_sym_is_dependency] = ACTIONS(229),
    [anon_sym_invocation_dir] = ACTIONS(229),
    [anon_sym_invocation_dir_native] = ACTIONS(229),
    [anon_sym_invocation_directory] = ACTIONS(229),
    [anon_sym_invocation_directory_native] = ACTIONS(229),
    [anon_sym_justfile] = ACTIONS(229),
    [anon_sym_justfile_dir] = ACTIONS(229),
    [anon_sym_justfile_directory] = ACTIONS(229),
    [anon_sym_source_dir] = ACTIONS(229),
    [anon_sym_source_directory] = ACTIONS(229),
    [anon_sym_source_file] = ACTIONS(229),
    [anon_sym_just_executable] = ACTIONS(229),
    [anon_sym_just_pid] = ACTIONS(229),
    [anon_sym_append] = ACTIONS(229),
    [anon_sym_prepend] = ACTIONS(229),
    [anon_sym_encode_uri_component] = ACTIONS(229),
    [anon_sym_quote] = ACTIONS(229),
    [anon_sym_replace] = ACTIONS(229),
    [anon_sym_replace_regex] = ACTIONS(229),
    [anon_sym_trim] = ACTIONS(229),
    [anon_sym_trim_end] = ACTIONS(229),
    [anon_sym_trim_end_match] = ACTIONS(229),
    [anon_sym_trim_end_matches] = ACTIONS(229),
    [anon_sym_trim_start] = ACTIONS(229),
    [anon_sym_trim_start_match] = ACTIONS(229),
    [anon_sym_trim_start_matches] = ACTIONS(229),
    [anon_sym_capitalize] = ACTIONS(229),
    [anon_sym_kebabcase] = ACTIONS(229),
    [anon_sym_lowercamelcase] = ACTIONS(229),
    [anon_sym_lowercase] = ACTIONS(229),
    [anon_sym_shoutykebabcase] = ACTIONS(229),
    [anon_sym_shoutysnakecase] = ACTIONS(229),
    [anon_sym_snakecase] = ACTIONS(229),
    [anon_sym_titlecase] = ACTIONS(229),
    [anon_sym_uppercamelcase] = ACTIONS(229),
    [anon_sym_uppercase] = ACTIONS(229),
    [anon_sym_absolute_path] = ACTIONS(229),
    [anon_sym_canonicalize] = ACTIONS(229),
    [anon_sym_extension] = ACTIONS(229),
    [anon_sym_file_name] = ACTIONS(229),
    [anon_sym_file_stem] = ACTIONS(229),
    [anon_sym_parent_dir] = ACTIONS(229),
    [anon_sym_parent_directory] = ACTIONS(229),
    [anon_sym_without_extension] = ACTIONS(229),
    [anon_sym_clean] = ACTIONS(229),
    [anon_sym_join] = ACTIONS(229),
    [anon_sym_path_exists] = ACTIONS(229),
    [anon_sym_error] = ACTIONS(229),
    [anon_sym_blake3] = ACTIONS(229),
    [anon_sym_blake3_file] = ACTIONS(229),
    [anon_sym_sha256] = ACTIONS(229),
    [anon_sym_sha256_file] = ACTIONS(229),
    [anon_sym_uuid] = ACTIONS(229),
    [anon_sym_choose] = ACTIONS(229),
    [anon_sym_set] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [49] = {
    [sym_comment] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_alias] = ACTIONS(233),
    [aux_sym_import_token1] = ACTIONS(233),
    [aux_sym_mod_token1] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_arch] = ACTIONS(233),
    [anon_sym_num_cpus] = ACTIONS(233),
    [anon_sym_os] = ACTIONS(233),
    [anon_sym_os_family] = ACTIONS(233),
    [anon_sym_shell] = ACTIONS(233),
    [anon_sym_env_var] = ACTIONS(233),
    [anon_sym_env_var_or_default] = ACTIONS(233),
    [anon_sym_env] = ACTIONS(233),
    [anon_sym_is_dependency] = ACTIONS(233),
    [anon_sym_invocation_dir] = ACTIONS(233),
    [anon_sym_invocation_dir_native] = ACTIONS(233),
    [anon_sym_invocation_directory] = ACTIONS(233),
    [anon_sym_invocation_directory_native] = ACTIONS(233),
    [anon_sym_justfile] = ACTIONS(233),
    [anon_sym_justfile_dir] = ACTIONS(233),
    [anon_sym_justfile_directory] = ACTIONS(233),
    [anon_sym_source_dir] = ACTIONS(233),
    [anon_sym_source_directory] = ACTIONS(233),
    [anon_sym_source_file] = ACTIONS(233),
    [anon_sym_just_executable] = ACTIONS(233),
    [anon_sym_just_pid] = ACTIONS(233),
    [anon_sym_append] = ACTIONS(233),
    [anon_sym_prepend] = ACTIONS(233),
    [anon_sym_encode_uri_component] = ACTIONS(233),
    [anon_sym_quote] = ACTIONS(233),
    [anon_sym_replace] = ACTIONS(233),
    [anon_sym_replace_regex] = ACTIONS(233),
    [anon_sym_trim] = ACTIONS(233),
    [anon_sym_trim_end] = ACTIONS(233),
    [anon_sym_trim_end_match] = ACTIONS(233),
    [anon_sym_trim_end_matches] = ACTIONS(233),
    [anon_sym_trim_start] = ACTIONS(233),
    [anon_sym_trim_start_match] = ACTIONS(233),
    [anon_sym_trim_start_matches] = ACTIONS(233),
    [anon_sym_capitalize] = ACTIONS(233),
    [anon_sym_kebabcase] = ACTIONS(233),
    [anon_sym_lowercamelcase] = ACTIONS(233),
    [anon_sym_lowercase] = ACTIONS(233),
    [anon_sym_shoutykebabcase] = ACTIONS(233),
    [anon_sym_shoutysnakecase] = ACTIONS(233),
    [anon_sym_snakecase] = ACTIONS(233),
    [anon_sym_titlecase] = ACTIONS(233),
    [anon_sym_uppercamelcase] = ACTIONS(233),
    [anon_sym_uppercase] = ACTIONS(233),
    [anon_sym_absolute_path] = ACTIONS(233),
    [anon_sym_canonicalize] = ACTIONS(233),
    [anon_sym_extension] = ACTIONS(233),
    [anon_sym_file_name] = ACTIONS(233),
    [anon_sym_file_stem] = ACTIONS(233),
    [anon_sym_parent_dir] = ACTIONS(233),
    [anon_sym_parent_directory] = ACTIONS(233),
    [anon_sym_without_extension] = ACTIONS(233),
    [anon_sym_clean] = ACTIONS(233),
    [anon_sym_join] = ACTIONS(233),
    [anon_sym_path_exists] = ACTIONS(233),
    [anon_sym_error] = ACTIONS(233),
    [anon_sym_blake3] = ACTIONS(233),
    [anon_sym_blake3_file] = ACTIONS(233),
    [anon_sym_sha256] = ACTIONS(233),
    [anon_sym_sha256_file] = ACTIONS(233),
    [anon_sym_uuid] = ACTIONS(233),
    [anon_sym_choose] = ACTIONS(233),
    [anon_sym_set] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [50] = {
    [sym_comment] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_alias] = ACTIONS(237),
    [aux_sym_import_token1] = ACTIONS(237),
    [aux_sym_mod_token1] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_arch] = ACTIONS(237),
    [anon_sym_num_cpus] = ACTIONS(237),
    [anon_sym_os] = ACTIONS(237),
    [anon_sym_os_family] = ACTIONS(237),
    [anon_sym_shell] = ACTIONS(237),
    [anon_sym_env_var] = ACTIONS(237),
    [anon_sym_env_var_or_default] = ACTIONS(237),
    [anon_sym_env] = ACTIONS(237),
    [anon_sym_is_dependency] = ACTIONS(237),
    [anon_sym_invocation_dir] = ACTIONS(237),
    [anon_sym_invocation_dir_native] = ACTIONS(237),
    [anon_sym_invocation_directory] = ACTIONS(237),
    [anon_sym_invocation_directory_native] = ACTIONS(237),
    [anon_sym_justfile] = ACTIONS(237),
    [anon_sym_justfile_dir] = ACTIONS(237),
    [anon_sym_justfile_directory] = ACTIONS(237),
    [anon_sym_source_dir] = ACTIONS(237),
    [anon_sym_source_directory] = ACTIONS(237),
    [anon_sym_source_file] = ACTIONS(237),
    [anon_sym_just_executable] = ACTIONS(237),
    [anon_sym_just_pid] = ACTIONS(237),
    [anon_sym_append] = ACTIONS(237),
    [anon_sym_prepend] = ACTIONS(237),
    [anon_sym_encode_uri_component] = ACTIONS(237),
    [anon_sym_quote] = ACTIONS(237),
    [anon_sym_replace] = ACTIONS(237),
    [anon_sym_replace_regex] = ACTIONS(237),
    [anon_sym_trim] = ACTIONS(237),
    [anon_sym_trim_end] = ACTIONS(237),
    [anon_sym_trim_end_match] = ACTIONS(237),
    [anon_sym_trim_end_matches] = ACTIONS(237),
    [anon_sym_trim_start] = ACTIONS(237),
    [anon_sym_trim_start_match] = ACTIONS(237),
    [anon_sym_trim_start_matches] = ACTIONS(237),
    [anon_sym_capitalize] = ACTIONS(237),
    [anon_sym_kebabcase] = ACTIONS(237),
    [anon_sym_lowercamelcase] = ACTIONS(237),
    [anon_sym_lowercase] = ACTIONS(237),
    [anon_sym_shoutykebabcase] = ACTIONS(237),
    [anon_sym_shoutysnakecase] = ACTIONS(237),
    [anon_sym_snakecase] = ACTIONS(237),
    [anon_sym_titlecase] = ACTIONS(237),
    [anon_sym_uppercamelcase] = ACTIONS(237),
    [anon_sym_uppercase] = ACTIONS(237),
    [anon_sym_absolute_path] = ACTIONS(237),
    [anon_sym_canonicalize] = ACTIONS(237),
    [anon_sym_extension] = ACTIONS(237),
    [anon_sym_file_name] = ACTIONS(237),
    [anon_sym_file_stem] = ACTIONS(237),
    [anon_sym_parent_dir] = ACTIONS(237),
    [anon_sym_parent_directory] = ACTIONS(237),
    [anon_sym_without_extension] = ACTIONS(237),
    [anon_sym_clean] = ACTIONS(237),
    [anon_sym_join] = ACTIONS(237),
    [anon_sym_path_exists] = ACTIONS(237),
    [anon_sym_error] = ACTIONS(237),
    [anon_sym_blake3] = ACTIONS(237),
    [anon_sym_blake3_file] = ACTIONS(237),
    [anon_sym_sha256] = ACTIONS(237),
    [anon_sym_sha256_file] = ACTIONS(237),
    [anon_sym_uuid] = ACTIONS(237),
    [anon_sym_choose] = ACTIONS(237),
    [anon_sym_set] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [51] = {
    [sym_comment] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_alias] = ACTIONS(241),
    [aux_sym_import_token1] = ACTIONS(241),
    [aux_sym_mod_token1] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_arch] = ACTIONS(241),
    [anon_sym_num_cpus] = ACTIONS(241),
    [anon_sym_os] = ACTIONS(241),
    [anon_sym_os_family] = ACTIONS(241),
    [anon_sym_shell] = ACTIONS(241),
    [anon_sym_env_var] = ACTIONS(241),
    [anon_sym_env_var_or_default] = ACTIONS(241),
    [anon_sym_env] = ACTIONS(241),
    [anon_sym_is_dependency] = ACTIONS(241),
    [anon_sym_invocation_dir] = ACTIONS(241),
    [anon_sym_invocation_dir_native] = ACTIONS(241),
    [anon_sym_invocation_directory] = ACTIONS(241),
    [anon_sym_invocation_directory_native] = ACTIONS(241),
    [anon_sym_justfile] = ACTIONS(241),
    [anon_sym_justfile_dir] = ACTIONS(241),
    [anon_sym_justfile_directory] = ACTIONS(241),
    [anon_sym_source_dir] = ACTIONS(241),
    [anon_sym_source_directory] = ACTIONS(241),
    [anon_sym_source_file] = ACTIONS(241),
    [anon_sym_just_executable] = ACTIONS(241),
    [anon_sym_just_pid] = ACTIONS(241),
    [anon_sym_append] = ACTIONS(241),
    [anon_sym_prepend] = ACTIONS(241),
    [anon_sym_encode_uri_component] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_replace] = ACTIONS(241),
    [anon_sym_replace_regex] = ACTIONS(241),
    [anon_sym_trim] = ACTIONS(241),
    [anon_sym_trim_end] = ACTIONS(241),
    [anon_sym_trim_end_match] = ACTIONS(241),
    [anon_sym_trim_end_matches] = ACTIONS(241),
    [anon_sym_trim_start] = ACTIONS(241),
    [anon_sym_trim_start_match] = ACTIONS(241),
    [anon_sym_trim_start_matches] = ACTIONS(241),
    [anon_sym_capitalize] = ACTIONS(241),
    [anon_sym_kebabcase] = ACTIONS(241),
    [anon_sym_lowercamelcase] = ACTIONS(241),
    [anon_sym_lowercase] = ACTIONS(241),
    [anon_sym_shoutykebabcase] = ACTIONS(241),
    [anon_sym_shoutysnakecase] = ACTIONS(241),
    [anon_sym_snakecase] = ACTIONS(241),
    [anon_sym_titlecase] = ACTIONS(241),
    [anon_sym_uppercamelcase] = ACTIONS(241),
    [anon_sym_uppercase] = ACTIONS(241),
    [anon_sym_absolute_path] = ACTIONS(241),
    [anon_sym_canonicalize] = ACTIONS(241),
    [anon_sym_extension] = ACTIONS(241),
    [anon_sym_file_name] = ACTIONS(241),
    [anon_sym_file_stem] = ACTIONS(241),
    [anon_sym_parent_dir] = ACTIONS(241),
    [anon_sym_parent_directory] = ACTIONS(241),
    [anon_sym_without_extension] = ACTIONS(241),
    [anon_sym_clean] = ACTIONS(241),
    [anon_sym_join] = ACTIONS(241),
    [anon_sym_path_exists] = ACTIONS(241),
    [anon_sym_error] = ACTIONS(241),
    [anon_sym_blake3] = ACTIONS(241),
    [anon_sym_blake3_file] = ACTIONS(241),
    [anon_sym_sha256] = ACTIONS(241),
    [anon_sym_sha256_file] = ACTIONS(241),
    [anon_sym_uuid] = ACTIONS(241),
    [anon_sym_choose] = ACTIONS(241),
    [anon_sym_set] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [52] = {
    [sym_comment] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [anon_sym_alias] = ACTIONS(245),
    [aux_sym_import_token1] = ACTIONS(245),
    [aux_sym_mod_token1] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_arch] = ACTIONS(245),
    [anon_sym_num_cpus] = ACTIONS(245),
    [anon_sym_os] = ACTIONS(245),
    [anon_sym_os_family] = ACTIONS(245),
    [anon_sym_shell] = ACTIONS(245),
    [anon_sym_env_var] = ACTIONS(245),
    [anon_sym_env_var_or_default] = ACTIONS(245),
    [anon_sym_env] = ACTIONS(245),
    [anon_sym_is_dependency] = ACTIONS(245),
    [anon_sym_invocation_dir] = ACTIONS(245),
    [anon_sym_invocation_dir_native] = ACTIONS(245),
    [anon_sym_invocation_directory] = ACTIONS(245),
    [anon_sym_invocation_directory_native] = ACTIONS(245),
    [anon_sym_justfile] = ACTIONS(245),
    [anon_sym_justfile_dir] = ACTIONS(245),
    [anon_sym_justfile_directory] = ACTIONS(245),
    [anon_sym_source_dir] = ACTIONS(245),
    [anon_sym_source_directory] = ACTIONS(245),
    [anon_sym_source_file] = ACTIONS(245),
    [anon_sym_just_executable] = ACTIONS(245),
    [anon_sym_just_pid] = ACTIONS(245),
    [anon_sym_append] = ACTIONS(245),
    [anon_sym_prepend] = ACTIONS(245),
    [anon_sym_encode_uri_component] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(245),
    [anon_sym_replace] = ACTIONS(245),
    [anon_sym_replace_regex] = ACTIONS(245),
    [anon_sym_trim] = ACTIONS(245),
    [anon_sym_trim_end] = ACTIONS(245),
    [anon_sym_trim_end_match] = ACTIONS(245),
    [anon_sym_trim_end_matches] = ACTIONS(245),
    [anon_sym_trim_start] = ACTIONS(245),
    [anon_sym_trim_start_match] = ACTIONS(245),
    [anon_sym_trim_start_matches] = ACTIONS(245),
    [anon_sym_capitalize] = ACTIONS(245),
    [anon_sym_kebabcase] = ACTIONS(245),
    [anon_sym_lowercamelcase] = ACTIONS(245),
    [anon_sym_lowercase] = ACTIONS(245),
    [anon_sym_shoutykebabcase] = ACTIONS(245),
    [anon_sym_shoutysnakecase] = ACTIONS(245),
    [anon_sym_snakecase] = ACTIONS(245),
    [anon_sym_titlecase] = ACTIONS(245),
    [anon_sym_uppercamelcase] = ACTIONS(245),
    [anon_sym_uppercase] = ACTIONS(245),
    [anon_sym_absolute_path] = ACTIONS(245),
    [anon_sym_canonicalize] = ACTIONS(245),
    [anon_sym_extension] = ACTIONS(245),
    [anon_sym_file_name] = ACTIONS(245),
    [anon_sym_file_stem] = ACTIONS(245),
    [anon_sym_parent_dir] = ACTIONS(245),
    [anon_sym_parent_directory] = ACTIONS(245),
    [anon_sym_without_extension] = ACTIONS(245),
    [anon_sym_clean] = ACTIONS(245),
    [anon_sym_join] = ACTIONS(245),
    [anon_sym_path_exists] = ACTIONS(245),
    [anon_sym_error] = ACTIONS(245),
    [anon_sym_blake3] = ACTIONS(245),
    [anon_sym_blake3_file] = ACTIONS(245),
    [anon_sym_sha256] = ACTIONS(245),
    [anon_sym_sha256_file] = ACTIONS(245),
    [anon_sym_uuid] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(245),
    [anon_sym_set] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(243),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [53] = {
    [sym_comment] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_alias] = ACTIONS(249),
    [aux_sym_import_token1] = ACTIONS(249),
    [aux_sym_mod_token1] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_arch] = ACTIONS(249),
    [anon_sym_num_cpus] = ACTIONS(249),
    [anon_sym_os] = ACTIONS(249),
    [anon_sym_os_family] = ACTIONS(249),
    [anon_sym_shell] = ACTIONS(249),
    [anon_sym_env_var] = ACTIONS(249),
    [anon_sym_env_var_or_default] = ACTIONS(249),
    [anon_sym_env] = ACTIONS(249),
    [anon_sym_is_dependency] = ACTIONS(249),
    [anon_sym_invocation_dir] = ACTIONS(249),
    [anon_sym_invocation_dir_native] = ACTIONS(249),
    [anon_sym_invocation_directory] = ACTIONS(249),
    [anon_sym_invocation_directory_native] = ACTIONS(249),
    [anon_sym_justfile] = ACTIONS(249),
    [anon_sym_justfile_dir] = ACTIONS(249),
    [anon_sym_justfile_directory] = ACTIONS(249),
    [anon_sym_source_dir] = ACTIONS(249),
    [anon_sym_source_directory] = ACTIONS(249),
    [anon_sym_source_file] = ACTIONS(249),
    [anon_sym_just_executable] = ACTIONS(249),
    [anon_sym_just_pid] = ACTIONS(249),
    [anon_sym_append] = ACTIONS(249),
    [anon_sym_prepend] = ACTIONS(249),
    [anon_sym_encode_uri_component] = ACTIONS(249),
    [anon_sym_quote] = ACTIONS(249),
    [anon_sym_replace] = ACTIONS(249),
    [anon_sym_replace_regex] = ACTIONS(249),
    [anon_sym_trim] = ACTIONS(249),
    [anon_sym_trim_end] = ACTIONS(249),
    [anon_sym_trim_end_match] = ACTIONS(249),
    [anon_sym_trim_end_matches] = ACTIONS(249),
    [anon_sym_trim_start] = ACTIONS(249),
    [anon_sym_trim_start_match] = ACTIONS(249),
    [anon_sym_trim_start_matches] = ACTIONS(249),
    [anon_sym_capitalize] = ACTIONS(249),
    [anon_sym_kebabcase] = ACTIONS(249),
    [anon_sym_lowercamelcase] = ACTIONS(249),
    [anon_sym_lowercase] = ACTIONS(249),
    [anon_sym_shoutykebabcase] = ACTIONS(249),
    [anon_sym_shoutysnakecase] = ACTIONS(249),
    [anon_sym_snakecase] = ACTIONS(249),
    [anon_sym_titlecase] = ACTIONS(249),
    [anon_sym_uppercamelcase] = ACTIONS(249),
    [anon_sym_uppercase] = ACTIONS(249),
    [anon_sym_absolute_path] = ACTIONS(249),
    [anon_sym_canonicalize] = ACTIONS(249),
    [anon_sym_extension] = ACTIONS(249),
    [anon_sym_file_name] = ACTIONS(249),
    [anon_sym_file_stem] = ACTIONS(249),
    [anon_sym_parent_dir] = ACTIONS(249),
    [anon_sym_parent_directory] = ACTIONS(249),
    [anon_sym_without_extension] = ACTIONS(249),
    [anon_sym_clean] = ACTIONS(249),
    [anon_sym_join] = ACTIONS(249),
    [anon_sym_path_exists] = ACTIONS(249),
    [anon_sym_error] = ACTIONS(249),
    [anon_sym_blake3] = ACTIONS(249),
    [anon_sym_blake3_file] = ACTIONS(249),
    [anon_sym_sha256] = ACTIONS(249),
    [anon_sym_sha256_file] = ACTIONS(249),
    [anon_sym_uuid] = ACTIONS(249),
    [anon_sym_choose] = ACTIONS(249),
    [anon_sym_set] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [54] = {
    [sym_comment] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_identifier] = ACTIONS(253),
    [anon_sym_alias] = ACTIONS(253),
    [aux_sym_import_token1] = ACTIONS(253),
    [aux_sym_mod_token1] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_arch] = ACTIONS(253),
    [anon_sym_num_cpus] = ACTIONS(253),
    [anon_sym_os] = ACTIONS(253),
    [anon_sym_os_family] = ACTIONS(253),
    [anon_sym_shell] = ACTIONS(253),
    [anon_sym_env_var] = ACTIONS(253),
    [anon_sym_env_var_or_default] = ACTIONS(253),
    [anon_sym_env] = ACTIONS(253),
    [anon_sym_is_dependency] = ACTIONS(253),
    [anon_sym_invocation_dir] = ACTIONS(253),
    [anon_sym_invocation_dir_native] = ACTIONS(253),
    [anon_sym_invocation_directory] = ACTIONS(253),
    [anon_sym_invocation_directory_native] = ACTIONS(253),
    [anon_sym_justfile] = ACTIONS(253),
    [anon_sym_justfile_dir] = ACTIONS(253),
    [anon_sym_justfile_directory] = ACTIONS(253),
    [anon_sym_source_dir] = ACTIONS(253),
    [anon_sym_source_directory] = ACTIONS(253),
    [anon_sym_source_file] = ACTIONS(253),
    [anon_sym_just_executable] = ACTIONS(253),
    [anon_sym_just_pid] = ACTIONS(253),
    [anon_sym_append] = ACTIONS(253),
    [anon_sym_prepend] = ACTIONS(253),
    [anon_sym_encode_uri_component] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(253),
    [anon_sym_replace] = ACTIONS(253),
    [anon_sym_replace_regex] = ACTIONS(253),
    [anon_sym_trim] = ACTIONS(253),
    [anon_sym_trim_end] = ACTIONS(253),
    [anon_sym_trim_end_match] = ACTIONS(253),
    [anon_sym_trim_end_matches] = ACTIONS(253),
    [anon_sym_trim_start] = ACTIONS(253),
    [anon_sym_trim_start_match] = ACTIONS(253),
    [anon_sym_trim_start_matches] = ACTIONS(253),
    [anon_sym_capitalize] = ACTIONS(253),
    [anon_sym_kebabcase] = ACTIONS(253),
    [anon_sym_lowercamelcase] = ACTIONS(253),
    [anon_sym_lowercase] = ACTIONS(253),
    [anon_sym_shoutykebabcase] = ACTIONS(253),
    [anon_sym_shoutysnakecase] = ACTIONS(253),
    [anon_sym_snakecase] = ACTIONS(253),
    [anon_sym_titlecase] = ACTIONS(253),
    [anon_sym_uppercamelcase] = ACTIONS(253),
    [anon_sym_uppercase] = ACTIONS(253),
    [anon_sym_absolute_path] = ACTIONS(253),
    [anon_sym_canonicalize] = ACTIONS(253),
    [anon_sym_extension] = ACTIONS(253),
    [anon_sym_file_name] = ACTIONS(253),
    [anon_sym_file_stem] = ACTIONS(253),
    [anon_sym_parent_dir] = ACTIONS(253),
    [anon_sym_parent_directory] = ACTIONS(253),
    [anon_sym_without_extension] = ACTIONS(253),
    [anon_sym_clean] = ACTIONS(253),
    [anon_sym_join] = ACTIONS(253),
    [anon_sym_path_exists] = ACTIONS(253),
    [anon_sym_error] = ACTIONS(253),
    [anon_sym_blake3] = ACTIONS(253),
    [anon_sym_blake3_file] = ACTIONS(253),
    [anon_sym_sha256] = ACTIONS(253),
    [anon_sym_sha256_file] = ACTIONS(253),
    [anon_sym_uuid] = ACTIONS(253),
    [anon_sym_choose] = ACTIONS(253),
    [anon_sym_set] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [55] = {
    [sym_comment] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_identifier] = ACTIONS(257),
    [anon_sym_alias] = ACTIONS(257),
    [aux_sym_import_token1] = ACTIONS(257),
    [aux_sym_mod_token1] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_arch] = ACTIONS(257),
    [anon_sym_num_cpus] = ACTIONS(257),
    [anon_sym_os] = ACTIONS(257),
    [anon_sym_os_family] = ACTIONS(257),
    [anon_sym_shell] = ACTIONS(257),
    [anon_sym_env_var] = ACTIONS(257),
    [anon_sym_env_var_or_default] = ACTIONS(257),
    [anon_sym_env] = ACTIONS(257),
    [anon_sym_is_dependency] = ACTIONS(257),
    [anon_sym_invocation_dir] = ACTIONS(257),
    [anon_sym_invocation_dir_native] = ACTIONS(257),
    [anon_sym_invocation_directory] = ACTIONS(257),
    [anon_sym_invocation_directory_native] = ACTIONS(257),
    [anon_sym_justfile] = ACTIONS(257),
    [anon_sym_justfile_dir] = ACTIONS(257),
    [anon_sym_justfile_directory] = ACTIONS(257),
    [anon_sym_source_dir] = ACTIONS(257),
    [anon_sym_source_directory] = ACTIONS(257),
    [anon_sym_source_file] = ACTIONS(257),
    [anon_sym_just_executable] = ACTIONS(257),
    [anon_sym_just_pid] = ACTIONS(257),
    [anon_sym_append] = ACTIONS(257),
    [anon_sym_prepend] = ACTIONS(257),
    [anon_sym_encode_uri_component] = ACTIONS(257),
    [anon_sym_quote] = ACTIONS(257),
    [anon_sym_replace] = ACTIONS(257),
    [anon_sym_replace_regex] = ACTIONS(257),
    [anon_sym_trim] = ACTIONS(257),
    [anon_sym_trim_end] = ACTIONS(257),
    [anon_sym_trim_end_match] = ACTIONS(257),
    [anon_sym_trim_end_matches] = ACTIONS(257),
    [anon_sym_trim_start] = ACTIONS(257),
    [anon_sym_trim_start_match] = ACTIONS(257),
    [anon_sym_trim_start_matches] = ACTIONS(257),
    [anon_sym_capitalize] = ACTIONS(257),
    [anon_sym_kebabcase] = ACTIONS(257),
    [anon_sym_lowercamelcase] = ACTIONS(257),
    [anon_sym_lowercase] = ACTIONS(257),
    [anon_sym_shoutykebabcase] = ACTIONS(257),
    [anon_sym_shoutysnakecase] = ACTIONS(257),
    [anon_sym_snakecase] = ACTIONS(257),
    [anon_sym_titlecase] = ACTIONS(257),
    [anon_sym_uppercamelcase] = ACTIONS(257),
    [anon_sym_uppercase] = ACTIONS(257),
    [anon_sym_absolute_path] = ACTIONS(257),
    [anon_sym_canonicalize] = ACTIONS(257),
    [anon_sym_extension] = ACTIONS(257),
    [anon_sym_file_name] = ACTIONS(257),
    [anon_sym_file_stem] = ACTIONS(257),
    [anon_sym_parent_dir] = ACTIONS(257),
    [anon_sym_parent_directory] = ACTIONS(257),
    [anon_sym_without_extension] = ACTIONS(257),
    [anon_sym_clean] = ACTIONS(257),
    [anon_sym_join] = ACTIONS(257),
    [anon_sym_path_exists] = ACTIONS(257),
    [anon_sym_error] = ACTIONS(257),
    [anon_sym_blake3] = ACTIONS(257),
    [anon_sym_blake3_file] = ACTIONS(257),
    [anon_sym_sha256] = ACTIONS(257),
    [anon_sym_sha256_file] = ACTIONS(257),
    [anon_sym_uuid] = ACTIONS(257),
    [anon_sym_choose] = ACTIONS(257),
    [anon_sym_set] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [56] = {
    [sym_comment] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_alias] = ACTIONS(261),
    [aux_sym_import_token1] = ACTIONS(261),
    [aux_sym_mod_token1] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_arch] = ACTIONS(261),
    [anon_sym_num_cpus] = ACTIONS(261),
    [anon_sym_os] = ACTIONS(261),
    [anon_sym_os_family] = ACTIONS(261),
    [anon_sym_shell] = ACTIONS(261),
    [anon_sym_env_var] = ACTIONS(261),
    [anon_sym_env_var_or_default] = ACTIONS(261),
    [anon_sym_env] = ACTIONS(261),
    [anon_sym_is_dependency] = ACTIONS(261),
    [anon_sym_invocation_dir] = ACTIONS(261),
    [anon_sym_invocation_dir_native] = ACTIONS(261),
    [anon_sym_invocation_directory] = ACTIONS(261),
    [anon_sym_invocation_directory_native] = ACTIONS(261),
    [anon_sym_justfile] = ACTIONS(261),
    [anon_sym_justfile_dir] = ACTIONS(261),
    [anon_sym_justfile_directory] = ACTIONS(261),
    [anon_sym_source_dir] = ACTIONS(261),
    [anon_sym_source_directory] = ACTIONS(261),
    [anon_sym_source_file] = ACTIONS(261),
    [anon_sym_just_executable] = ACTIONS(261),
    [anon_sym_just_pid] = ACTIONS(261),
    [anon_sym_append] = ACTIONS(261),
    [anon_sym_prepend] = ACTIONS(261),
    [anon_sym_encode_uri_component] = ACTIONS(261),
    [anon_sym_quote] = ACTIONS(261),
    [anon_sym_replace] = ACTIONS(261),
    [anon_sym_replace_regex] = ACTIONS(261),
    [anon_sym_trim] = ACTIONS(261),
    [anon_sym_trim_end] = ACTIONS(261),
    [anon_sym_trim_end_match] = ACTIONS(261),
    [anon_sym_trim_end_matches] = ACTIONS(261),
    [anon_sym_trim_start] = ACTIONS(261),
    [anon_sym_trim_start_match] = ACTIONS(261),
    [anon_sym_trim_start_matches] = ACTIONS(261),
    [anon_sym_capitalize] = ACTIONS(261),
    [anon_sym_kebabcase] = ACTIONS(261),
    [anon_sym_lowercamelcase] = ACTIONS(261),
    [anon_sym_lowercase] = ACTIONS(261),
    [anon_sym_shoutykebabcase] = ACTIONS(261),
    [anon_sym_shoutysnakecase] = ACTIONS(261),
    [anon_sym_snakecase] = ACTIONS(261),
    [anon_sym_titlecase] = ACTIONS(261),
    [anon_sym_uppercamelcase] = ACTIONS(261),
    [anon_sym_uppercase] = ACTIONS(261),
    [anon_sym_absolute_path] = ACTIONS(261),
    [anon_sym_canonicalize] = ACTIONS(261),
    [anon_sym_extension] = ACTIONS(261),
    [anon_sym_file_name] = ACTIONS(261),
    [anon_sym_file_stem] = ACTIONS(261),
    [anon_sym_parent_dir] = ACTIONS(261),
    [anon_sym_parent_directory] = ACTIONS(261),
    [anon_sym_without_extension] = ACTIONS(261),
    [anon_sym_clean] = ACTIONS(261),
    [anon_sym_join] = ACTIONS(261),
    [anon_sym_path_exists] = ACTIONS(261),
    [anon_sym_error] = ACTIONS(261),
    [anon_sym_blake3] = ACTIONS(261),
    [anon_sym_blake3_file] = ACTIONS(261),
    [anon_sym_sha256] = ACTIONS(261),
    [anon_sym_sha256_file] = ACTIONS(261),
    [anon_sym_uuid] = ACTIONS(261),
    [anon_sym_choose] = ACTIONS(261),
    [anon_sym_set] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_identifier] = ACTIONS(265),
    [anon_sym_alias] = ACTIONS(265),
    [aux_sym_import_token1] = ACTIONS(265),
    [aux_sym_mod_token1] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_arch] = ACTIONS(265),
    [anon_sym_num_cpus] = ACTIONS(265),
    [anon_sym_os] = ACTIONS(265),
    [anon_sym_os_family] = ACTIONS(265),
    [anon_sym_shell] = ACTIONS(265),
    [anon_sym_env_var] = ACTIONS(265),
    [anon_sym_env_var_or_default] = ACTIONS(265),
    [anon_sym_env] = ACTIONS(265),
    [anon_sym_is_dependency] = ACTIONS(265),
    [anon_sym_invocation_dir] = ACTIONS(265),
    [anon_sym_invocation_dir_native] = ACTIONS(265),
    [anon_sym_invocation_directory] = ACTIONS(265),
    [anon_sym_invocation_directory_native] = ACTIONS(265),
    [anon_sym_justfile] = ACTIONS(265),
    [anon_sym_justfile_dir] = ACTIONS(265),
    [anon_sym_justfile_directory] = ACTIONS(265),
    [anon_sym_source_dir] = ACTIONS(265),
    [anon_sym_source_directory] = ACTIONS(265),
    [anon_sym_source_file] = ACTIONS(265),
    [anon_sym_just_executable] = ACTIONS(265),
    [anon_sym_just_pid] = ACTIONS(265),
    [anon_sym_append] = ACTIONS(265),
    [anon_sym_prepend] = ACTIONS(265),
    [anon_sym_encode_uri_component] = ACTIONS(265),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_replace] = ACTIONS(265),
    [anon_sym_replace_regex] = ACTIONS(265),
    [anon_sym_trim] = ACTIONS(265),
    [anon_sym_trim_end] = ACTIONS(265),
    [anon_sym_trim_end_match] = ACTIONS(265),
    [anon_sym_trim_end_matches] = ACTIONS(265),
    [anon_sym_trim_start] = ACTIONS(265),
    [anon_sym_trim_start_match] = ACTIONS(265),
    [anon_sym_trim_start_matches] = ACTIONS(265),
    [anon_sym_capitalize] = ACTIONS(265),
    [anon_sym_kebabcase] = ACTIONS(265),
    [anon_sym_lowercamelcase] = ACTIONS(265),
    [anon_sym_lowercase] = ACTIONS(265),
    [anon_sym_shoutykebabcase] = ACTIONS(265),
    [anon_sym_shoutysnakecase] = ACTIONS(265),
    [anon_sym_snakecase] = ACTIONS(265),
    [anon_sym_titlecase] = ACTIONS(265),
    [anon_sym_uppercamelcase] = ACTIONS(265),
    [anon_sym_uppercase] = ACTIONS(265),
    [anon_sym_absolute_path] = ACTIONS(265),
    [anon_sym_canonicalize] = ACTIONS(265),
    [anon_sym_extension] = ACTIONS(265),
    [anon_sym_file_name] = ACTIONS(265),
    [anon_sym_file_stem] = ACTIONS(265),
    [anon_sym_parent_dir] = ACTIONS(265),
    [anon_sym_parent_directory] = ACTIONS(265),
    [anon_sym_without_extension] = ACTIONS(265),
    [anon_sym_clean] = ACTIONS(265),
    [anon_sym_join] = ACTIONS(265),
    [anon_sym_path_exists] = ACTIONS(265),
    [anon_sym_error] = ACTIONS(265),
    [anon_sym_blake3] = ACTIONS(265),
    [anon_sym_blake3_file] = ACTIONS(265),
    [anon_sym_sha256] = ACTIONS(265),
    [anon_sym_sha256_file] = ACTIONS(265),
    [anon_sym_uuid] = ACTIONS(265),
    [anon_sym_choose] = ACTIONS(265),
    [anon_sym_set] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
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
  [31] = 11,
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
  [69] = 9,
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
    STATE(103), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [100] = 9,
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
    STATE(103), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [131] = 7,
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
  [157] = 8,
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
  [185] = 8,
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
    STATE(84), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [213] = 7,
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
  [239] = 7,
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
  [265] = 6,
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
  [289] = 6,
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
  [313] = 8,
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
  [341] = 7,
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
  [367] = 8,
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
    STATE(103), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [395] = 3,
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
  [411] = 3,
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
  [427] = 3,
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
  [443] = 3,
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
  [459] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [473] = 5,
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
  [489] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    STATE(78), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_indented_raw_string_repeat1,
  [505] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_boolean,
    STATE(79), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
  [519] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(80), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [533] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(339), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(81), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_indented_raw_string_repeat1,
  [549] = 4,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(343), 1,
      aux_sym_indented_raw_string_token1,
    STATE(82), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [563] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(41), 2,
      sym__p1,
      sym__p2,
  [577] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__setting_list_repeat1,
    STATE(84), 1,
      sym_comment,
  [593] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(85), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [607] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(359), 1,
      aux_sym_indented_backtick_token1,
    STATE(76), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(86), 1,
      sym_comment,
  [623] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(361), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(86), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(87), 1,
      sym_comment,
  [639] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_function_parameters_repeat1,
    STATE(88), 1,
      sym_comment,
  [655] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_function_parameters_repeat1,
    STATE(89), 1,
      sym_comment,
  [671] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym_comment,
  [684] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [695] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p1,
    STATE(92), 1,
      sym_comment,
  [708] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__pN,
    STATE(93), 1,
      sym_comment,
  [721] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p0,
    STATE(94), 1,
      sym_comment,
  [734] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p3,
    STATE(95), 1,
      sym_comment,
  [747] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
  [760] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(387), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_string,
    STATE(97), 1,
      sym_comment,
  [773] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__p2,
    STATE(99), 1,
      sym_comment,
  [797] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [808] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      sym_comment,
  [821] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      sym_comment,
  [834] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(103), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [845] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON_EQ,
    STATE(47), 1,
      sym__setting_list,
    STATE(104), 1,
      sym_comment,
  [858] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_comment,
  [868] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_comment,
  [878] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
  [888] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_comment,
  [898] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [908] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(110), 1,
      sym_comment,
  [918] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym_comment,
  [928] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(112), 1,
      sym_comment,
  [938] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_BQUOTE,
    STATE(113), 1,
      sym_comment,
  [948] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
  [958] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [968] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      aux_sym_backtick_token1,
    STATE(116), 1,
      sym_comment,
  [978] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
  [988] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_comment,
  [998] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [1008] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [1018] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [1028] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_COLON_EQ,
    STATE(122), 1,
      sym_comment,
  [1038] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_comment,
  [1048] = 3,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      aux_sym_raw_string_token1,
    STATE(124), 1,
      sym_comment,
  [1058] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(58)] = 0,
  [SMALL_STATE(59)] = 31,
  [SMALL_STATE(60)] = 69,
  [SMALL_STATE(61)] = 100,
  [SMALL_STATE(62)] = 131,
  [SMALL_STATE(63)] = 157,
  [SMALL_STATE(64)] = 185,
  [SMALL_STATE(65)] = 213,
  [SMALL_STATE(66)] = 239,
  [SMALL_STATE(67)] = 265,
  [SMALL_STATE(68)] = 289,
  [SMALL_STATE(69)] = 313,
  [SMALL_STATE(70)] = 341,
  [SMALL_STATE(71)] = 367,
  [SMALL_STATE(72)] = 395,
  [SMALL_STATE(73)] = 411,
  [SMALL_STATE(74)] = 427,
  [SMALL_STATE(75)] = 443,
  [SMALL_STATE(76)] = 459,
  [SMALL_STATE(77)] = 473,
  [SMALL_STATE(78)] = 489,
  [SMALL_STATE(79)] = 505,
  [SMALL_STATE(80)] = 519,
  [SMALL_STATE(81)] = 533,
  [SMALL_STATE(82)] = 549,
  [SMALL_STATE(83)] = 563,
  [SMALL_STATE(84)] = 577,
  [SMALL_STATE(85)] = 593,
  [SMALL_STATE(86)] = 607,
  [SMALL_STATE(87)] = 623,
  [SMALL_STATE(88)] = 639,
  [SMALL_STATE(89)] = 655,
  [SMALL_STATE(90)] = 671,
  [SMALL_STATE(91)] = 684,
  [SMALL_STATE(92)] = 695,
  [SMALL_STATE(93)] = 708,
  [SMALL_STATE(94)] = 721,
  [SMALL_STATE(95)] = 734,
  [SMALL_STATE(96)] = 747,
  [SMALL_STATE(97)] = 760,
  [SMALL_STATE(98)] = 773,
  [SMALL_STATE(99)] = 784,
  [SMALL_STATE(100)] = 797,
  [SMALL_STATE(101)] = 808,
  [SMALL_STATE(102)] = 821,
  [SMALL_STATE(103)] = 834,
  [SMALL_STATE(104)] = 845,
  [SMALL_STATE(105)] = 858,
  [SMALL_STATE(106)] = 868,
  [SMALL_STATE(107)] = 878,
  [SMALL_STATE(108)] = 888,
  [SMALL_STATE(109)] = 898,
  [SMALL_STATE(110)] = 908,
  [SMALL_STATE(111)] = 918,
  [SMALL_STATE(112)] = 928,
  [SMALL_STATE(113)] = 938,
  [SMALL_STATE(114)] = 948,
  [SMALL_STATE(115)] = 958,
  [SMALL_STATE(116)] = 968,
  [SMALL_STATE(117)] = 978,
  [SMALL_STATE(118)] = 988,
  [SMALL_STATE(119)] = 998,
  [SMALL_STATE(120)] = 1008,
  [SMALL_STATE(121)] = 1018,
  [SMALL_STATE(122)] = 1028,
  [SMALL_STATE(123)] = 1038,
  [SMALL_STATE(124)] = 1048,
  [SMALL_STATE(125)] = 1058,
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
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
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
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
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
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
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
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [433] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
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
