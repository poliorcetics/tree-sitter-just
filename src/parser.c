#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 64
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 0
#define TOKEN_COUNT 130
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  aux_sym_import_token1 = 4,
  aux_sym_mod_token1 = 5,
  anon_sym_assert = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_SLASH = 10,
  anon_sym_PLUS = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_arch = 14,
  anon_sym_num_cpus = 15,
  anon_sym_os = 16,
  anon_sym_os_family = 17,
  anon_sym_shell = 18,
  anon_sym_env_var = 19,
  anon_sym_env_var_or_default = 20,
  anon_sym_env = 21,
  anon_sym_is_dependency = 22,
  anon_sym_invocation_dir = 23,
  anon_sym_invocation_dir_native = 24,
  anon_sym_invocation_directory = 25,
  anon_sym_invocation_directory_native = 26,
  anon_sym_justfile = 27,
  anon_sym_justfile_dir = 28,
  anon_sym_justfile_directory = 29,
  anon_sym_source_dir = 30,
  anon_sym_source_directory = 31,
  anon_sym_source_file = 32,
  anon_sym_just_executable = 33,
  anon_sym_just_pid = 34,
  anon_sym_append = 35,
  anon_sym_prepend = 36,
  anon_sym_encode_uri_component = 37,
  anon_sym_quote = 38,
  anon_sym_replace = 39,
  anon_sym_replace_regex = 40,
  anon_sym_trim = 41,
  anon_sym_trim_end = 42,
  anon_sym_trim_end_match = 43,
  anon_sym_trim_end_matches = 44,
  anon_sym_trim_start = 45,
  anon_sym_trim_start_match = 46,
  anon_sym_trim_start_matches = 47,
  anon_sym_capitalize = 48,
  anon_sym_kebabcase = 49,
  anon_sym_lowercamelcase = 50,
  anon_sym_lowercase = 51,
  anon_sym_shoutykebabcase = 52,
  anon_sym_shoutysnakecase = 53,
  anon_sym_snakecase = 54,
  anon_sym_titlecase = 55,
  anon_sym_uppercamelcase = 56,
  anon_sym_uppercase = 57,
  anon_sym_absolute_path = 58,
  anon_sym_canonicalize = 59,
  anon_sym_extension = 60,
  anon_sym_file_name = 61,
  anon_sym_file_stem = 62,
  anon_sym_parent_dir = 63,
  anon_sym_parent_directory = 64,
  anon_sym_without_extension = 65,
  anon_sym_clean = 66,
  anon_sym_join = 67,
  anon_sym_path_exists = 68,
  anon_sym_error = 69,
  anon_sym_blake3 = 70,
  anon_sym_blake3_file = 71,
  anon_sym_sha256 = 72,
  anon_sym_sha256_file = 73,
  anon_sym_uuid = 74,
  anon_sym_choose = 75,
  anon_sym_datetime = 76,
  anon_sym_datetime_utc = 77,
  anon_sym_semver_matches = 78,
  anon_sym_cache_dir = 79,
  anon_sym_cache_directory = 80,
  anon_sym_config_dir = 81,
  anon_sym_config_directory = 82,
  anon_sym_config_local_dir = 83,
  anon_sym_config_local_directory = 84,
  anon_sym_data_dir = 85,
  anon_sym_data_directory = 86,
  anon_sym_data_local_dir = 87,
  anon_sym_data_local_directory = 88,
  anon_sym_executable_dir = 89,
  anon_sym_executable_directory = 90,
  anon_sym_home_dir = 91,
  anon_sym_home_directory = 92,
  anon_sym_set = 93,
  anon_sym_allow_DASHduplicate_DASHrecipes = 94,
  anon_sym_allow_DASHduplicate_DASHvariables = 95,
  anon_sym_dotenv_DASHfilename = 96,
  anon_sym_dotenv_DASHload = 97,
  anon_sym_dotenv_DASHpath = 98,
  anon_sym_dotenv_DASHrequired = 99,
  anon_sym_export = 100,
  anon_sym_fallback = 101,
  anon_sym_ignore_DASHcomments = 102,
  anon_sym_positional_DASHarguments = 103,
  anon_sym_tempdir = 104,
  anon_sym_unstable = 105,
  anon_sym_windows_DASHpowershell = 106,
  anon_sym_windows_DASHshell = 107,
  anon_sym_LBRACK = 108,
  anon_sym_RBRACK = 109,
  anon_sym_BQUOTE = 110,
  aux_sym_backtick_token1 = 111,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 112,
  aux_sym_indented_backtick_token1 = 113,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 114,
  aux_sym_indented_normal_string_token1 = 115,
  anon_sym_DQUOTE = 116,
  aux_sym_normal_string_token1 = 117,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 118,
  aux_sym_indented_raw_string_token1 = 119,
  anon_sym_SQUOTE = 120,
  aux_sym_raw_string_token1 = 121,
  anon_sym_BSLASHn = 122,
  anon_sym_BSLASHr = 123,
  anon_sym_BSLASHt = 124,
  anon_sym_BSLASH_DQUOTE = 125,
  anon_sym_BSLASH_BSLASH = 126,
  anon_sym_true = 127,
  anon_sym_false = 128,
  aux_sym_comment_token1 = 129,
  sym_file = 130,
  sym_alias = 131,
  sym_import = 132,
  sym_mod = 133,
  sym_expression = 134,
  sym_condition = 135,
  sym_value = 136,
  sym_builtin_function_call = 137,
  sym__p0 = 138,
  sym__p1 = 139,
  sym__p2 = 140,
  sym__p3 = 141,
  sym__pN = 142,
  sym_function_call = 143,
  sym_function_parameters = 144,
  sym_setting = 145,
  sym__setting_boolean = 146,
  sym__setting_string = 147,
  sym__setting_list = 148,
  sym_backtick = 149,
  sym_indented_backtick = 150,
  sym_string = 151,
  sym_indented_normal_string = 152,
  sym_normal_string = 153,
  sym_indented_raw_string = 154,
  sym_raw_string = 155,
  sym_escape_sequence = 156,
  sym_boolean = 157,
  sym_comment = 158,
  aux_sym_file_repeat1 = 159,
  aux_sym_function_parameters_repeat1 = 160,
  aux_sym__setting_list_repeat1 = 161,
  aux_sym_indented_backtick_repeat1 = 162,
  aux_sym_indented_normal_string_repeat1 = 163,
  aux_sym_normal_string_repeat1 = 164,
  aux_sym_indented_raw_string_repeat1 = 165,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_assert] = "assert",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
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
  [anon_sym_datetime] = "datetime",
  [anon_sym_datetime_utc] = "datetime_utc",
  [anon_sym_semver_matches] = "semver_matches",
  [anon_sym_cache_dir] = "cache_dir",
  [anon_sym_cache_directory] = "cache_directory",
  [anon_sym_config_dir] = "config_dir",
  [anon_sym_config_directory] = "config_directory",
  [anon_sym_config_local_dir] = "config_local_dir",
  [anon_sym_config_local_directory] = "config_local_directory",
  [anon_sym_data_dir] = "data_dir",
  [anon_sym_data_directory] = "data_directory",
  [anon_sym_data_local_dir] = "data_local_dir",
  [anon_sym_data_local_directory] = "data_local_directory",
  [anon_sym_executable_dir] = "executable_dir",
  [anon_sym_executable_directory] = "executable_directory",
  [anon_sym_home_dir] = "home_dir",
  [anon_sym_home_directory] = "home_directory",
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
  [sym_condition] = "condition",
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
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
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
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_datetime_utc] = anon_sym_datetime_utc,
  [anon_sym_semver_matches] = anon_sym_semver_matches,
  [anon_sym_cache_dir] = anon_sym_cache_dir,
  [anon_sym_cache_directory] = anon_sym_cache_directory,
  [anon_sym_config_dir] = anon_sym_config_dir,
  [anon_sym_config_directory] = anon_sym_config_directory,
  [anon_sym_config_local_dir] = anon_sym_config_local_dir,
  [anon_sym_config_local_directory] = anon_sym_config_local_directory,
  [anon_sym_data_dir] = anon_sym_data_dir,
  [anon_sym_data_directory] = anon_sym_data_directory,
  [anon_sym_data_local_dir] = anon_sym_data_local_dir,
  [anon_sym_data_local_directory] = anon_sym_data_local_directory,
  [anon_sym_executable_dir] = anon_sym_executable_dir,
  [anon_sym_executable_directory] = anon_sym_executable_directory,
  [anon_sym_home_dir] = anon_sym_home_dir,
  [anon_sym_home_directory] = anon_sym_home_directory,
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
  [sym_condition] = sym_condition,
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
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime_utc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_semver_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cache_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cache_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_local_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_local_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_local_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_local_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home_directory] = {
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
  [sym_condition] = {
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
  field_setting_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
  [field_setting_name] = "setting_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
  [1] =
    {field_setting_name, 1},
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
  [80] = 78,
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
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 10,
        '"', 52,
        '#', 83,
        '\'', 66,
        '(', 20,
        ')', 22,
        '+', 24,
        ',', 21,
        '/', 23,
        ':', 11,
        '=', 12,
        '[', 27,
        '\\', 5,
        ']', 28,
        '`', 30,
        'i', 76,
        'm', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '`') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '`') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '`') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(34);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_mod_token1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(13);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '`') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(58);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
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
        'h', 7,
        'i', 8,
        'j', 9,
        'k', 10,
        'l', 11,
        'n', 12,
        'o', 13,
        'p', 14,
        'q', 15,
        'r', 16,
        's', 17,
        't', 18,
        'u', 19,
        'w', 20,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(152);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 103:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 105:
      if (lookahead == '2') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(164);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(174);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 121:
      if (lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 136:
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(198);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(210);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 161:
      if (lookahead == '5') ADVANCE(216);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(223);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 180:
      if (lookahead == '3') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == '_') ADVANCE(233);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 189:
      if (lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 216:
      if (lookahead == '6') ADVANCE(267);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 218:
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 224:
      if (lookahead == 'b') ADVANCE(275);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 226:
      if (lookahead == 'w') ADVANCE(277);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_blake3);
      if (lookahead == '_') ADVANCE(281);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_choose);
      END_STATE();
    case 237:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 240:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 242:
      if (lookahead == '_') ADVANCE(290);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(298);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 254:
      if (lookahead == 'x') ADVANCE(301);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 261:
      if (lookahead == '_') ADVANCE(308);
      END_STATE();
    case 262:
      if (lookahead == 'x') ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 266:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_sha256);
      if (lookahead == '_') ADVANCE(314);
      END_STATE();
    case 268:
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 270:
      if (lookahead == '_') ADVANCE(318);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 281:
      if (lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 289:
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(342);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(343);
      END_STATE();
    case 292:
      if (lookahead == 'b') ADVANCE(344);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 294:
      if (lookahead == 'k') ADVANCE(346);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 302:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 305:
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(364);
      END_STATE();
    case 313:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 314:
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(371);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 324:
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 325:
      if (lookahead == '-') ADVANCE(378);
      END_STATE();
    case 326:
      if (lookahead == '_') ADVANCE(379);
      END_STATE();
    case 327:
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 328:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 332:
      if (lookahead == 'z') ADVANCE(385);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_data_dir);
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '_') ADVANCE(390);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_home_dir);
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(406);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 360:
      if (lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 367:
      if (lookahead == 'b') ADVANCE(417);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_cache_dir);
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 387:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 388:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 394:
      if (lookahead == 'q') ADVANCE(444);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 401:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 402:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 405:
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 418:
      if (lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 423:
      if (lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(469);
      END_STATE();
    case 429:
      if (lookahead == 'x') ADVANCE(470);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 433:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 434:
      if (lookahead == 'z') ADVANCE(475);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_config_dir);
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 439:
      if (lookahead == '_') ADVANCE(479);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 442:
      if (lookahead == 'd') ADVANCE(482);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(483);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 445:
      if (lookahead == '_') ADVANCE(485);
      END_STATE();
    case 446:
      if (lookahead == '_') ADVANCE(486);
      END_STATE();
    case 447:
      if (lookahead == '_') ADVANCE(487);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 449:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 450:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 454:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_parent_dir);
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 457:
      if (lookahead == '-') ADVANCE(497);
      END_STATE();
    case 458:
      if (lookahead == 'g') ADVANCE(498);
      END_STATE();
    case 459:
      if (lookahead == 'c') ADVANCE(499);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 461:
      if (lookahead == 'b') ADVANCE(501);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(506);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 468:
      if (lookahead == 'w') ADVANCE(508);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 472:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_blake3_file);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(515);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 479:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 481:
      if (lookahead == 'n') ADVANCE(520);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 485:
      if (lookahead == 'c') ADVANCE(522);
      END_STATE();
    case 486:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 487:
      if (lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 490:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 491:
      if (lookahead == 'c') ADVANCE(528);
      END_STATE();
    case 492:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 494:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 495:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_path_exists);
      END_STATE();
    case 497:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 499:
      if (lookahead == 'h') ADVANCE(535);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_sha256_file);
      END_STATE();
    case 501:
      if (lookahead == 'c') ADVANCE(536);
      END_STATE();
    case 502:
      if (lookahead == 'c') ADVANCE(537);
      END_STATE();
    case 503:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 507:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 511:
      if (lookahead == 'h') ADVANCE(545);
      END_STATE();
    case 512:
      if (lookahead == 'a') ADVANCE(546);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 516:
      if (lookahead == '_') ADVANCE(549);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_datetime_utc);
      END_STATE();
    case 520:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 528:
      if (lookahead == 'y') ADVANCE(560);
      END_STATE();
    case 529:
      if (lookahead == 'b') ADVANCE(561);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 534:
      if (lookahead == 'x') ADVANCE(566);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 536:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 537:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 539:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 540:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(573);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(575);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 549:
      if (lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 550:
      if (lookahead == 'y') ADVANCE(581);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 554:
      if (lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 555:
      if (lookahead == 'f') ADVANCE(586);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 557:
      if (lookahead == 'y') ADVANCE(588);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(591);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(592);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 565:
      if (lookahead == 'g') ADVANCE(595);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 571:
      if (lookahead == 'h') ADVANCE(600);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 578:
      if (lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(607);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_data_directory);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_data_local_dir);
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 583:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 584:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(612);
      END_STATE();
    case 586:
      if (lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_executable_dir);
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_home_directory);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(616);
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 591:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(621);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_semver_matches);
      END_STATE();
    case 597:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 598:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 601:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 603:
      if (lookahead == 'h') ADVANCE(627);
      END_STATE();
    case 604:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 605:
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_cache_directory);
      END_STATE();
    case 607:
      if (lookahead == 'y') ADVANCE(630);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 609:
      if (lookahead == 'c') ADVANCE(632);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 613:
      if (lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 614:
      if (lookahead == 'c') ADVANCE(635);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 617:
      if (lookahead == 'c') ADVANCE(637);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 620:
      if (lookahead == 'y') ADVANCE(639);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(640);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 624:
      if (lookahead == 'y') ADVANCE(641);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(642);
      END_STATE();
    case 626:
      if (lookahead == 'h') ADVANCE(643);
      END_STATE();
    case 627:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 629:
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead == 'v') ADVANCE(647);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_config_directory);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_config_local_dir);
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 634:
      if (lookahead == 'l') ADVANCE(651);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 636:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(655);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 640:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 644:
      if (lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 646:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 647:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 648:
      if (lookahead == 'c') ADVANCE(662);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 655:
      if (lookahead == 'y') ADVANCE(669);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 658:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 660:
      if (lookahead == 'c') ADVANCE(673);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 676:
      if (lookahead == 'y') ADVANCE(685);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 678:
      if (lookahead == 'y') ADVANCE(687);
      END_STATE();
    case 679:
      if (lookahead == 'v') ADVANCE(688);
      END_STATE();
    case 680:
      if (lookahead == 'y') ADVANCE(689);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 682:
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 683:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_data_local_directory);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_executable_directory);
      END_STATE();
    case 688:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(695);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 691:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 692:
      if (lookahead == 'b') ADVANCE(697);
      END_STATE();
    case 693:
      if (lookahead == 'y') ADVANCE(698);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 695:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 697:
      if (lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_config_local_directory);
      END_STATE();
    case 699:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 701:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(705);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 706:
      if (lookahead == 'v') ADVANCE(707);
      END_STATE();
    case 707:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 708:
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
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
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 32},
  [136] = {(TSStateId)(-1)},
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
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
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
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_datetime_utc] = ACTIONS(1),
    [anon_sym_semver_matches] = ACTIONS(1),
    [anon_sym_cache_dir] = ACTIONS(1),
    [anon_sym_cache_directory] = ACTIONS(1),
    [anon_sym_config_dir] = ACTIONS(1),
    [anon_sym_config_directory] = ACTIONS(1),
    [anon_sym_config_local_dir] = ACTIONS(1),
    [anon_sym_config_local_directory] = ACTIONS(1),
    [anon_sym_data_dir] = ACTIONS(1),
    [anon_sym_data_directory] = ACTIONS(1),
    [anon_sym_data_local_dir] = ACTIONS(1),
    [anon_sym_data_local_directory] = ACTIONS(1),
    [anon_sym_executable_dir] = ACTIONS(1),
    [anon_sym_executable_directory] = ACTIONS(1),
    [anon_sym_home_dir] = ACTIONS(1),
    [anon_sym_home_directory] = ACTIONS(1),
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
    [sym_alias] = STATE(59),
    [sym_import] = STATE(59),
    [sym_mod] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_setting] = STATE(59),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_alias] = STATE(59),
    [sym_import] = STATE(59),
    [sym_mod] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_setting] = STATE(59),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_alias] = ACTIONS(50),
    [aux_sym_import_token1] = ACTIONS(53),
    [aux_sym_mod_token1] = ACTIONS(56),
    [anon_sym_assert] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_arch] = ACTIONS(65),
    [anon_sym_num_cpus] = ACTIONS(65),
    [anon_sym_os] = ACTIONS(65),
    [anon_sym_os_family] = ACTIONS(65),
    [anon_sym_shell] = ACTIONS(68),
    [anon_sym_env_var] = ACTIONS(71),
    [anon_sym_env_var_or_default] = ACTIONS(74),
    [anon_sym_env] = ACTIONS(77),
    [anon_sym_is_dependency] = ACTIONS(65),
    [anon_sym_invocation_dir] = ACTIONS(65),
    [anon_sym_invocation_dir_native] = ACTIONS(65),
    [anon_sym_invocation_directory] = ACTIONS(65),
    [anon_sym_invocation_directory_native] = ACTIONS(65),
    [anon_sym_justfile] = ACTIONS(65),
    [anon_sym_justfile_dir] = ACTIONS(65),
    [anon_sym_justfile_directory] = ACTIONS(65),
    [anon_sym_source_dir] = ACTIONS(65),
    [anon_sym_source_directory] = ACTIONS(65),
    [anon_sym_source_file] = ACTIONS(65),
    [anon_sym_just_executable] = ACTIONS(65),
    [anon_sym_just_pid] = ACTIONS(65),
    [anon_sym_append] = ACTIONS(74),
    [anon_sym_prepend] = ACTIONS(74),
    [anon_sym_encode_uri_component] = ACTIONS(71),
    [anon_sym_quote] = ACTIONS(71),
    [anon_sym_replace] = ACTIONS(80),
    [anon_sym_replace_regex] = ACTIONS(80),
    [anon_sym_trim] = ACTIONS(71),
    [anon_sym_trim_end] = ACTIONS(71),
    [anon_sym_trim_end_match] = ACTIONS(74),
    [anon_sym_trim_end_matches] = ACTIONS(74),
    [anon_sym_trim_start] = ACTIONS(71),
    [anon_sym_trim_start_match] = ACTIONS(74),
    [anon_sym_trim_start_matches] = ACTIONS(74),
    [anon_sym_capitalize] = ACTIONS(71),
    [anon_sym_kebabcase] = ACTIONS(71),
    [anon_sym_lowercamelcase] = ACTIONS(71),
    [anon_sym_lowercase] = ACTIONS(71),
    [anon_sym_shoutykebabcase] = ACTIONS(71),
    [anon_sym_shoutysnakecase] = ACTIONS(71),
    [anon_sym_snakecase] = ACTIONS(71),
    [anon_sym_titlecase] = ACTIONS(71),
    [anon_sym_uppercamelcase] = ACTIONS(71),
    [anon_sym_uppercase] = ACTIONS(71),
    [anon_sym_absolute_path] = ACTIONS(71),
    [anon_sym_canonicalize] = ACTIONS(71),
    [anon_sym_extension] = ACTIONS(71),
    [anon_sym_file_name] = ACTIONS(71),
    [anon_sym_file_stem] = ACTIONS(71),
    [anon_sym_parent_dir] = ACTIONS(71),
    [anon_sym_parent_directory] = ACTIONS(71),
    [anon_sym_without_extension] = ACTIONS(71),
    [anon_sym_clean] = ACTIONS(71),
    [anon_sym_join] = ACTIONS(68),
    [anon_sym_path_exists] = ACTIONS(71),
    [anon_sym_error] = ACTIONS(71),
    [anon_sym_blake3] = ACTIONS(71),
    [anon_sym_blake3_file] = ACTIONS(71),
    [anon_sym_sha256] = ACTIONS(71),
    [anon_sym_sha256_file] = ACTIONS(71),
    [anon_sym_uuid] = ACTIONS(65),
    [anon_sym_choose] = ACTIONS(74),
    [anon_sym_datetime] = ACTIONS(71),
    [anon_sym_datetime_utc] = ACTIONS(71),
    [anon_sym_semver_matches] = ACTIONS(74),
    [anon_sym_cache_dir] = ACTIONS(65),
    [anon_sym_cache_directory] = ACTIONS(65),
    [anon_sym_config_dir] = ACTIONS(65),
    [anon_sym_config_directory] = ACTIONS(65),
    [anon_sym_config_local_dir] = ACTIONS(65),
    [anon_sym_config_local_directory] = ACTIONS(65),
    [anon_sym_data_dir] = ACTIONS(65),
    [anon_sym_data_directory] = ACTIONS(65),
    [anon_sym_data_local_dir] = ACTIONS(65),
    [anon_sym_data_local_directory] = ACTIONS(65),
    [anon_sym_executable_dir] = ACTIONS(65),
    [anon_sym_executable_directory] = ACTIONS(65),
    [anon_sym_home_dir] = ACTIONS(65),
    [anon_sym_home_directory] = ACTIONS(65),
    [anon_sym_set] = ACTIONS(83),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(89),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_alias] = STATE(59),
    [sym_import] = STATE(59),
    [sym_mod] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_setting] = STATE(59),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [aux_sym_import_token1] = ACTIONS(11),
    [aux_sym_mod_token1] = ACTIONS(13),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(91),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_function_parameters] = STATE(133),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [anon_sym_alias] = ACTIONS(110),
    [aux_sym_import_token1] = ACTIONS(110),
    [aux_sym_mod_token1] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [anon_sym_BANG_EQ] = ACTIONS(108),
    [anon_sym_arch] = ACTIONS(110),
    [anon_sym_num_cpus] = ACTIONS(110),
    [anon_sym_os] = ACTIONS(110),
    [anon_sym_os_family] = ACTIONS(110),
    [anon_sym_shell] = ACTIONS(110),
    [anon_sym_env_var] = ACTIONS(110),
    [anon_sym_env_var_or_default] = ACTIONS(110),
    [anon_sym_env] = ACTIONS(110),
    [anon_sym_is_dependency] = ACTIONS(110),
    [anon_sym_invocation_dir] = ACTIONS(110),
    [anon_sym_invocation_dir_native] = ACTIONS(110),
    [anon_sym_invocation_directory] = ACTIONS(110),
    [anon_sym_invocation_directory_native] = ACTIONS(110),
    [anon_sym_justfile] = ACTIONS(110),
    [anon_sym_justfile_dir] = ACTIONS(110),
    [anon_sym_justfile_directory] = ACTIONS(110),
    [anon_sym_source_dir] = ACTIONS(110),
    [anon_sym_source_directory] = ACTIONS(110),
    [anon_sym_source_file] = ACTIONS(110),
    [anon_sym_just_executable] = ACTIONS(110),
    [anon_sym_just_pid] = ACTIONS(110),
    [anon_sym_append] = ACTIONS(110),
    [anon_sym_prepend] = ACTIONS(110),
    [anon_sym_encode_uri_component] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_replace] = ACTIONS(110),
    [anon_sym_replace_regex] = ACTIONS(110),
    [anon_sym_trim] = ACTIONS(110),
    [anon_sym_trim_end] = ACTIONS(110),
    [anon_sym_trim_end_match] = ACTIONS(110),
    [anon_sym_trim_end_matches] = ACTIONS(110),
    [anon_sym_trim_start] = ACTIONS(110),
    [anon_sym_trim_start_match] = ACTIONS(110),
    [anon_sym_trim_start_matches] = ACTIONS(110),
    [anon_sym_capitalize] = ACTIONS(110),
    [anon_sym_kebabcase] = ACTIONS(110),
    [anon_sym_lowercamelcase] = ACTIONS(110),
    [anon_sym_lowercase] = ACTIONS(110),
    [anon_sym_shoutykebabcase] = ACTIONS(110),
    [anon_sym_shoutysnakecase] = ACTIONS(110),
    [anon_sym_snakecase] = ACTIONS(110),
    [anon_sym_titlecase] = ACTIONS(110),
    [anon_sym_uppercamelcase] = ACTIONS(110),
    [anon_sym_uppercase] = ACTIONS(110),
    [anon_sym_absolute_path] = ACTIONS(110),
    [anon_sym_canonicalize] = ACTIONS(110),
    [anon_sym_extension] = ACTIONS(110),
    [anon_sym_file_name] = ACTIONS(110),
    [anon_sym_file_stem] = ACTIONS(110),
    [anon_sym_parent_dir] = ACTIONS(110),
    [anon_sym_parent_directory] = ACTIONS(110),
    [anon_sym_without_extension] = ACTIONS(110),
    [anon_sym_clean] = ACTIONS(110),
    [anon_sym_join] = ACTIONS(110),
    [anon_sym_path_exists] = ACTIONS(110),
    [anon_sym_error] = ACTIONS(110),
    [anon_sym_blake3] = ACTIONS(110),
    [anon_sym_blake3_file] = ACTIONS(110),
    [anon_sym_sha256] = ACTIONS(110),
    [anon_sym_sha256_file] = ACTIONS(110),
    [anon_sym_uuid] = ACTIONS(110),
    [anon_sym_choose] = ACTIONS(110),
    [anon_sym_datetime] = ACTIONS(110),
    [anon_sym_datetime_utc] = ACTIONS(110),
    [anon_sym_semver_matches] = ACTIONS(110),
    [anon_sym_cache_dir] = ACTIONS(110),
    [anon_sym_cache_directory] = ACTIONS(110),
    [anon_sym_config_dir] = ACTIONS(110),
    [anon_sym_config_directory] = ACTIONS(110),
    [anon_sym_config_local_dir] = ACTIONS(110),
    [anon_sym_config_local_directory] = ACTIONS(110),
    [anon_sym_data_dir] = ACTIONS(110),
    [anon_sym_data_directory] = ACTIONS(110),
    [anon_sym_data_local_dir] = ACTIONS(110),
    [anon_sym_data_local_directory] = ACTIONS(110),
    [anon_sym_executable_dir] = ACTIONS(110),
    [anon_sym_executable_directory] = ACTIONS(110),
    [anon_sym_home_dir] = ACTIONS(110),
    [anon_sym_home_directory] = ACTIONS(110),
    [anon_sym_set] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(110),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(108),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(110),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(104),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(110),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [anon_sym_alias] = ACTIONS(120),
    [aux_sym_import_token1] = ACTIONS(120),
    [aux_sym_mod_token1] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [anon_sym_BANG_EQ] = ACTIONS(118),
    [anon_sym_arch] = ACTIONS(120),
    [anon_sym_num_cpus] = ACTIONS(120),
    [anon_sym_os] = ACTIONS(120),
    [anon_sym_os_family] = ACTIONS(120),
    [anon_sym_shell] = ACTIONS(120),
    [anon_sym_env_var] = ACTIONS(120),
    [anon_sym_env_var_or_default] = ACTIONS(120),
    [anon_sym_env] = ACTIONS(120),
    [anon_sym_is_dependency] = ACTIONS(120),
    [anon_sym_invocation_dir] = ACTIONS(120),
    [anon_sym_invocation_dir_native] = ACTIONS(120),
    [anon_sym_invocation_directory] = ACTIONS(120),
    [anon_sym_invocation_directory_native] = ACTIONS(120),
    [anon_sym_justfile] = ACTIONS(120),
    [anon_sym_justfile_dir] = ACTIONS(120),
    [anon_sym_justfile_directory] = ACTIONS(120),
    [anon_sym_source_dir] = ACTIONS(120),
    [anon_sym_source_directory] = ACTIONS(120),
    [anon_sym_source_file] = ACTIONS(120),
    [anon_sym_just_executable] = ACTIONS(120),
    [anon_sym_just_pid] = ACTIONS(120),
    [anon_sym_append] = ACTIONS(120),
    [anon_sym_prepend] = ACTIONS(120),
    [anon_sym_encode_uri_component] = ACTIONS(120),
    [anon_sym_quote] = ACTIONS(120),
    [anon_sym_replace] = ACTIONS(120),
    [anon_sym_replace_regex] = ACTIONS(120),
    [anon_sym_trim] = ACTIONS(120),
    [anon_sym_trim_end] = ACTIONS(120),
    [anon_sym_trim_end_match] = ACTIONS(120),
    [anon_sym_trim_end_matches] = ACTIONS(120),
    [anon_sym_trim_start] = ACTIONS(120),
    [anon_sym_trim_start_match] = ACTIONS(120),
    [anon_sym_trim_start_matches] = ACTIONS(120),
    [anon_sym_capitalize] = ACTIONS(120),
    [anon_sym_kebabcase] = ACTIONS(120),
    [anon_sym_lowercamelcase] = ACTIONS(120),
    [anon_sym_lowercase] = ACTIONS(120),
    [anon_sym_shoutykebabcase] = ACTIONS(120),
    [anon_sym_shoutysnakecase] = ACTIONS(120),
    [anon_sym_snakecase] = ACTIONS(120),
    [anon_sym_titlecase] = ACTIONS(120),
    [anon_sym_uppercamelcase] = ACTIONS(120),
    [anon_sym_uppercase] = ACTIONS(120),
    [anon_sym_absolute_path] = ACTIONS(120),
    [anon_sym_canonicalize] = ACTIONS(120),
    [anon_sym_extension] = ACTIONS(120),
    [anon_sym_file_name] = ACTIONS(120),
    [anon_sym_file_stem] = ACTIONS(120),
    [anon_sym_parent_dir] = ACTIONS(120),
    [anon_sym_parent_directory] = ACTIONS(120),
    [anon_sym_without_extension] = ACTIONS(120),
    [anon_sym_clean] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_path_exists] = ACTIONS(120),
    [anon_sym_error] = ACTIONS(120),
    [anon_sym_blake3] = ACTIONS(120),
    [anon_sym_blake3_file] = ACTIONS(120),
    [anon_sym_sha256] = ACTIONS(120),
    [anon_sym_sha256_file] = ACTIONS(120),
    [anon_sym_uuid] = ACTIONS(120),
    [anon_sym_choose] = ACTIONS(120),
    [anon_sym_datetime] = ACTIONS(120),
    [anon_sym_datetime_utc] = ACTIONS(120),
    [anon_sym_semver_matches] = ACTIONS(120),
    [anon_sym_cache_dir] = ACTIONS(120),
    [anon_sym_cache_directory] = ACTIONS(120),
    [anon_sym_config_dir] = ACTIONS(120),
    [anon_sym_config_directory] = ACTIONS(120),
    [anon_sym_config_local_dir] = ACTIONS(120),
    [anon_sym_config_local_directory] = ACTIONS(120),
    [anon_sym_data_dir] = ACTIONS(120),
    [anon_sym_data_directory] = ACTIONS(120),
    [anon_sym_data_local_dir] = ACTIONS(120),
    [anon_sym_data_local_directory] = ACTIONS(120),
    [anon_sym_executable_dir] = ACTIONS(120),
    [anon_sym_executable_directory] = ACTIONS(120),
    [anon_sym_home_dir] = ACTIONS(120),
    [anon_sym_home_directory] = ACTIONS(120),
    [anon_sym_set] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_identifier] = ACTIONS(124),
    [anon_sym_alias] = ACTIONS(124),
    [aux_sym_import_token1] = ACTIONS(124),
    [aux_sym_mod_token1] = ACTIONS(124),
    [anon_sym_assert] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_EQ_EQ] = ACTIONS(122),
    [anon_sym_BANG_EQ] = ACTIONS(122),
    [anon_sym_arch] = ACTIONS(124),
    [anon_sym_num_cpus] = ACTIONS(124),
    [anon_sym_os] = ACTIONS(124),
    [anon_sym_os_family] = ACTIONS(124),
    [anon_sym_shell] = ACTIONS(124),
    [anon_sym_env_var] = ACTIONS(124),
    [anon_sym_env_var_or_default] = ACTIONS(124),
    [anon_sym_env] = ACTIONS(124),
    [anon_sym_is_dependency] = ACTIONS(124),
    [anon_sym_invocation_dir] = ACTIONS(124),
    [anon_sym_invocation_dir_native] = ACTIONS(124),
    [anon_sym_invocation_directory] = ACTIONS(124),
    [anon_sym_invocation_directory_native] = ACTIONS(124),
    [anon_sym_justfile] = ACTIONS(124),
    [anon_sym_justfile_dir] = ACTIONS(124),
    [anon_sym_justfile_directory] = ACTIONS(124),
    [anon_sym_source_dir] = ACTIONS(124),
    [anon_sym_source_directory] = ACTIONS(124),
    [anon_sym_source_file] = ACTIONS(124),
    [anon_sym_just_executable] = ACTIONS(124),
    [anon_sym_just_pid] = ACTIONS(124),
    [anon_sym_append] = ACTIONS(124),
    [anon_sym_prepend] = ACTIONS(124),
    [anon_sym_encode_uri_component] = ACTIONS(124),
    [anon_sym_quote] = ACTIONS(124),
    [anon_sym_replace] = ACTIONS(124),
    [anon_sym_replace_regex] = ACTIONS(124),
    [anon_sym_trim] = ACTIONS(124),
    [anon_sym_trim_end] = ACTIONS(124),
    [anon_sym_trim_end_match] = ACTIONS(124),
    [anon_sym_trim_end_matches] = ACTIONS(124),
    [anon_sym_trim_start] = ACTIONS(124),
    [anon_sym_trim_start_match] = ACTIONS(124),
    [anon_sym_trim_start_matches] = ACTIONS(124),
    [anon_sym_capitalize] = ACTIONS(124),
    [anon_sym_kebabcase] = ACTIONS(124),
    [anon_sym_lowercamelcase] = ACTIONS(124),
    [anon_sym_lowercase] = ACTIONS(124),
    [anon_sym_shoutykebabcase] = ACTIONS(124),
    [anon_sym_shoutysnakecase] = ACTIONS(124),
    [anon_sym_snakecase] = ACTIONS(124),
    [anon_sym_titlecase] = ACTIONS(124),
    [anon_sym_uppercamelcase] = ACTIONS(124),
    [anon_sym_uppercase] = ACTIONS(124),
    [anon_sym_absolute_path] = ACTIONS(124),
    [anon_sym_canonicalize] = ACTIONS(124),
    [anon_sym_extension] = ACTIONS(124),
    [anon_sym_file_name] = ACTIONS(124),
    [anon_sym_file_stem] = ACTIONS(124),
    [anon_sym_parent_dir] = ACTIONS(124),
    [anon_sym_parent_directory] = ACTIONS(124),
    [anon_sym_without_extension] = ACTIONS(124),
    [anon_sym_clean] = ACTIONS(124),
    [anon_sym_join] = ACTIONS(124),
    [anon_sym_path_exists] = ACTIONS(124),
    [anon_sym_error] = ACTIONS(124),
    [anon_sym_blake3] = ACTIONS(124),
    [anon_sym_blake3_file] = ACTIONS(124),
    [anon_sym_sha256] = ACTIONS(124),
    [anon_sym_sha256_file] = ACTIONS(124),
    [anon_sym_uuid] = ACTIONS(124),
    [anon_sym_choose] = ACTIONS(124),
    [anon_sym_datetime] = ACTIONS(124),
    [anon_sym_datetime_utc] = ACTIONS(124),
    [anon_sym_semver_matches] = ACTIONS(124),
    [anon_sym_cache_dir] = ACTIONS(124),
    [anon_sym_cache_directory] = ACTIONS(124),
    [anon_sym_config_dir] = ACTIONS(124),
    [anon_sym_config_directory] = ACTIONS(124),
    [anon_sym_config_local_dir] = ACTIONS(124),
    [anon_sym_config_local_directory] = ACTIONS(124),
    [anon_sym_data_dir] = ACTIONS(124),
    [anon_sym_data_directory] = ACTIONS(124),
    [anon_sym_data_local_dir] = ACTIONS(124),
    [anon_sym_data_local_directory] = ACTIONS(124),
    [anon_sym_executable_dir] = ACTIONS(124),
    [anon_sym_executable_directory] = ACTIONS(124),
    [anon_sym_home_dir] = ACTIONS(124),
    [anon_sym_home_directory] = ACTIONS(124),
    [anon_sym_set] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(124),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(122),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_alias] = ACTIONS(128),
    [aux_sym_import_token1] = ACTIONS(128),
    [aux_sym_mod_token1] = ACTIONS(128),
    [anon_sym_assert] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_arch] = ACTIONS(128),
    [anon_sym_num_cpus] = ACTIONS(128),
    [anon_sym_os] = ACTIONS(128),
    [anon_sym_os_family] = ACTIONS(128),
    [anon_sym_shell] = ACTIONS(128),
    [anon_sym_env_var] = ACTIONS(128),
    [anon_sym_env_var_or_default] = ACTIONS(128),
    [anon_sym_env] = ACTIONS(128),
    [anon_sym_is_dependency] = ACTIONS(128),
    [anon_sym_invocation_dir] = ACTIONS(128),
    [anon_sym_invocation_dir_native] = ACTIONS(128),
    [anon_sym_invocation_directory] = ACTIONS(128),
    [anon_sym_invocation_directory_native] = ACTIONS(128),
    [anon_sym_justfile] = ACTIONS(128),
    [anon_sym_justfile_dir] = ACTIONS(128),
    [anon_sym_justfile_directory] = ACTIONS(128),
    [anon_sym_source_dir] = ACTIONS(128),
    [anon_sym_source_directory] = ACTIONS(128),
    [anon_sym_source_file] = ACTIONS(128),
    [anon_sym_just_executable] = ACTIONS(128),
    [anon_sym_just_pid] = ACTIONS(128),
    [anon_sym_append] = ACTIONS(128),
    [anon_sym_prepend] = ACTIONS(128),
    [anon_sym_encode_uri_component] = ACTIONS(128),
    [anon_sym_quote] = ACTIONS(128),
    [anon_sym_replace] = ACTIONS(128),
    [anon_sym_replace_regex] = ACTIONS(128),
    [anon_sym_trim] = ACTIONS(128),
    [anon_sym_trim_end] = ACTIONS(128),
    [anon_sym_trim_end_match] = ACTIONS(128),
    [anon_sym_trim_end_matches] = ACTIONS(128),
    [anon_sym_trim_start] = ACTIONS(128),
    [anon_sym_trim_start_match] = ACTIONS(128),
    [anon_sym_trim_start_matches] = ACTIONS(128),
    [anon_sym_capitalize] = ACTIONS(128),
    [anon_sym_kebabcase] = ACTIONS(128),
    [anon_sym_lowercamelcase] = ACTIONS(128),
    [anon_sym_lowercase] = ACTIONS(128),
    [anon_sym_shoutykebabcase] = ACTIONS(128),
    [anon_sym_shoutysnakecase] = ACTIONS(128),
    [anon_sym_snakecase] = ACTIONS(128),
    [anon_sym_titlecase] = ACTIONS(128),
    [anon_sym_uppercamelcase] = ACTIONS(128),
    [anon_sym_uppercase] = ACTIONS(128),
    [anon_sym_absolute_path] = ACTIONS(128),
    [anon_sym_canonicalize] = ACTIONS(128),
    [anon_sym_extension] = ACTIONS(128),
    [anon_sym_file_name] = ACTIONS(128),
    [anon_sym_file_stem] = ACTIONS(128),
    [anon_sym_parent_dir] = ACTIONS(128),
    [anon_sym_parent_directory] = ACTIONS(128),
    [anon_sym_without_extension] = ACTIONS(128),
    [anon_sym_clean] = ACTIONS(128),
    [anon_sym_join] = ACTIONS(128),
    [anon_sym_path_exists] = ACTIONS(128),
    [anon_sym_error] = ACTIONS(128),
    [anon_sym_blake3] = ACTIONS(128),
    [anon_sym_blake3_file] = ACTIONS(128),
    [anon_sym_sha256] = ACTIONS(128),
    [anon_sym_sha256_file] = ACTIONS(128),
    [anon_sym_uuid] = ACTIONS(128),
    [anon_sym_choose] = ACTIONS(128),
    [anon_sym_datetime] = ACTIONS(128),
    [anon_sym_datetime_utc] = ACTIONS(128),
    [anon_sym_semver_matches] = ACTIONS(128),
    [anon_sym_cache_dir] = ACTIONS(128),
    [anon_sym_cache_directory] = ACTIONS(128),
    [anon_sym_config_dir] = ACTIONS(128),
    [anon_sym_config_directory] = ACTIONS(128),
    [anon_sym_config_local_dir] = ACTIONS(128),
    [anon_sym_config_local_directory] = ACTIONS(128),
    [anon_sym_data_dir] = ACTIONS(128),
    [anon_sym_data_directory] = ACTIONS(128),
    [anon_sym_data_local_dir] = ACTIONS(128),
    [anon_sym_data_local_directory] = ACTIONS(128),
    [anon_sym_executable_dir] = ACTIONS(128),
    [anon_sym_executable_directory] = ACTIONS(128),
    [anon_sym_home_dir] = ACTIONS(128),
    [anon_sym_home_directory] = ACTIONS(128),
    [anon_sym_set] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(128),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_identifier] = ACTIONS(132),
    [anon_sym_alias] = ACTIONS(132),
    [aux_sym_import_token1] = ACTIONS(132),
    [aux_sym_mod_token1] = ACTIONS(132),
    [anon_sym_assert] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_arch] = ACTIONS(132),
    [anon_sym_num_cpus] = ACTIONS(132),
    [anon_sym_os] = ACTIONS(132),
    [anon_sym_os_family] = ACTIONS(132),
    [anon_sym_shell] = ACTIONS(132),
    [anon_sym_env_var] = ACTIONS(132),
    [anon_sym_env_var_or_default] = ACTIONS(132),
    [anon_sym_env] = ACTIONS(132),
    [anon_sym_is_dependency] = ACTIONS(132),
    [anon_sym_invocation_dir] = ACTIONS(132),
    [anon_sym_invocation_dir_native] = ACTIONS(132),
    [anon_sym_invocation_directory] = ACTIONS(132),
    [anon_sym_invocation_directory_native] = ACTIONS(132),
    [anon_sym_justfile] = ACTIONS(132),
    [anon_sym_justfile_dir] = ACTIONS(132),
    [anon_sym_justfile_directory] = ACTIONS(132),
    [anon_sym_source_dir] = ACTIONS(132),
    [anon_sym_source_directory] = ACTIONS(132),
    [anon_sym_source_file] = ACTIONS(132),
    [anon_sym_just_executable] = ACTIONS(132),
    [anon_sym_just_pid] = ACTIONS(132),
    [anon_sym_append] = ACTIONS(132),
    [anon_sym_prepend] = ACTIONS(132),
    [anon_sym_encode_uri_component] = ACTIONS(132),
    [anon_sym_quote] = ACTIONS(132),
    [anon_sym_replace] = ACTIONS(132),
    [anon_sym_replace_regex] = ACTIONS(132),
    [anon_sym_trim] = ACTIONS(132),
    [anon_sym_trim_end] = ACTIONS(132),
    [anon_sym_trim_end_match] = ACTIONS(132),
    [anon_sym_trim_end_matches] = ACTIONS(132),
    [anon_sym_trim_start] = ACTIONS(132),
    [anon_sym_trim_start_match] = ACTIONS(132),
    [anon_sym_trim_start_matches] = ACTIONS(132),
    [anon_sym_capitalize] = ACTIONS(132),
    [anon_sym_kebabcase] = ACTIONS(132),
    [anon_sym_lowercamelcase] = ACTIONS(132),
    [anon_sym_lowercase] = ACTIONS(132),
    [anon_sym_shoutykebabcase] = ACTIONS(132),
    [anon_sym_shoutysnakecase] = ACTIONS(132),
    [anon_sym_snakecase] = ACTIONS(132),
    [anon_sym_titlecase] = ACTIONS(132),
    [anon_sym_uppercamelcase] = ACTIONS(132),
    [anon_sym_uppercase] = ACTIONS(132),
    [anon_sym_absolute_path] = ACTIONS(132),
    [anon_sym_canonicalize] = ACTIONS(132),
    [anon_sym_extension] = ACTIONS(132),
    [anon_sym_file_name] = ACTIONS(132),
    [anon_sym_file_stem] = ACTIONS(132),
    [anon_sym_parent_dir] = ACTIONS(132),
    [anon_sym_parent_directory] = ACTIONS(132),
    [anon_sym_without_extension] = ACTIONS(132),
    [anon_sym_clean] = ACTIONS(132),
    [anon_sym_join] = ACTIONS(132),
    [anon_sym_path_exists] = ACTIONS(132),
    [anon_sym_error] = ACTIONS(132),
    [anon_sym_blake3] = ACTIONS(132),
    [anon_sym_blake3_file] = ACTIONS(132),
    [anon_sym_sha256] = ACTIONS(132),
    [anon_sym_sha256_file] = ACTIONS(132),
    [anon_sym_uuid] = ACTIONS(132),
    [anon_sym_choose] = ACTIONS(132),
    [anon_sym_datetime] = ACTIONS(132),
    [anon_sym_datetime_utc] = ACTIONS(132),
    [anon_sym_semver_matches] = ACTIONS(132),
    [anon_sym_cache_dir] = ACTIONS(132),
    [anon_sym_cache_directory] = ACTIONS(132),
    [anon_sym_config_dir] = ACTIONS(132),
    [anon_sym_config_directory] = ACTIONS(132),
    [anon_sym_config_local_dir] = ACTIONS(132),
    [anon_sym_config_local_directory] = ACTIONS(132),
    [anon_sym_data_dir] = ACTIONS(132),
    [anon_sym_data_directory] = ACTIONS(132),
    [anon_sym_data_local_dir] = ACTIONS(132),
    [anon_sym_data_local_directory] = ACTIONS(132),
    [anon_sym_executable_dir] = ACTIONS(132),
    [anon_sym_executable_directory] = ACTIONS(132),
    [anon_sym_home_dir] = ACTIONS(132),
    [anon_sym_home_directory] = ACTIONS(132),
    [anon_sym_set] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(132),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(130),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [anon_sym_alias] = ACTIONS(136),
    [aux_sym_import_token1] = ACTIONS(136),
    [aux_sym_mod_token1] = ACTIONS(136),
    [anon_sym_assert] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(134),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_arch] = ACTIONS(136),
    [anon_sym_num_cpus] = ACTIONS(136),
    [anon_sym_os] = ACTIONS(136),
    [anon_sym_os_family] = ACTIONS(136),
    [anon_sym_shell] = ACTIONS(136),
    [anon_sym_env_var] = ACTIONS(136),
    [anon_sym_env_var_or_default] = ACTIONS(136),
    [anon_sym_env] = ACTIONS(136),
    [anon_sym_is_dependency] = ACTIONS(136),
    [anon_sym_invocation_dir] = ACTIONS(136),
    [anon_sym_invocation_dir_native] = ACTIONS(136),
    [anon_sym_invocation_directory] = ACTIONS(136),
    [anon_sym_invocation_directory_native] = ACTIONS(136),
    [anon_sym_justfile] = ACTIONS(136),
    [anon_sym_justfile_dir] = ACTIONS(136),
    [anon_sym_justfile_directory] = ACTIONS(136),
    [anon_sym_source_dir] = ACTIONS(136),
    [anon_sym_source_directory] = ACTIONS(136),
    [anon_sym_source_file] = ACTIONS(136),
    [anon_sym_just_executable] = ACTIONS(136),
    [anon_sym_just_pid] = ACTIONS(136),
    [anon_sym_append] = ACTIONS(136),
    [anon_sym_prepend] = ACTIONS(136),
    [anon_sym_encode_uri_component] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_replace] = ACTIONS(136),
    [anon_sym_replace_regex] = ACTIONS(136),
    [anon_sym_trim] = ACTIONS(136),
    [anon_sym_trim_end] = ACTIONS(136),
    [anon_sym_trim_end_match] = ACTIONS(136),
    [anon_sym_trim_end_matches] = ACTIONS(136),
    [anon_sym_trim_start] = ACTIONS(136),
    [anon_sym_trim_start_match] = ACTIONS(136),
    [anon_sym_trim_start_matches] = ACTIONS(136),
    [anon_sym_capitalize] = ACTIONS(136),
    [anon_sym_kebabcase] = ACTIONS(136),
    [anon_sym_lowercamelcase] = ACTIONS(136),
    [anon_sym_lowercase] = ACTIONS(136),
    [anon_sym_shoutykebabcase] = ACTIONS(136),
    [anon_sym_shoutysnakecase] = ACTIONS(136),
    [anon_sym_snakecase] = ACTIONS(136),
    [anon_sym_titlecase] = ACTIONS(136),
    [anon_sym_uppercamelcase] = ACTIONS(136),
    [anon_sym_uppercase] = ACTIONS(136),
    [anon_sym_absolute_path] = ACTIONS(136),
    [anon_sym_canonicalize] = ACTIONS(136),
    [anon_sym_extension] = ACTIONS(136),
    [anon_sym_file_name] = ACTIONS(136),
    [anon_sym_file_stem] = ACTIONS(136),
    [anon_sym_parent_dir] = ACTIONS(136),
    [anon_sym_parent_directory] = ACTIONS(136),
    [anon_sym_without_extension] = ACTIONS(136),
    [anon_sym_clean] = ACTIONS(136),
    [anon_sym_join] = ACTIONS(136),
    [anon_sym_path_exists] = ACTIONS(136),
    [anon_sym_error] = ACTIONS(136),
    [anon_sym_blake3] = ACTIONS(136),
    [anon_sym_blake3_file] = ACTIONS(136),
    [anon_sym_sha256] = ACTIONS(136),
    [anon_sym_sha256_file] = ACTIONS(136),
    [anon_sym_uuid] = ACTIONS(136),
    [anon_sym_choose] = ACTIONS(136),
    [anon_sym_datetime] = ACTIONS(136),
    [anon_sym_datetime_utc] = ACTIONS(136),
    [anon_sym_semver_matches] = ACTIONS(136),
    [anon_sym_cache_dir] = ACTIONS(136),
    [anon_sym_cache_directory] = ACTIONS(136),
    [anon_sym_config_dir] = ACTIONS(136),
    [anon_sym_config_directory] = ACTIONS(136),
    [anon_sym_config_local_dir] = ACTIONS(136),
    [anon_sym_config_local_directory] = ACTIONS(136),
    [anon_sym_data_dir] = ACTIONS(136),
    [anon_sym_data_directory] = ACTIONS(136),
    [anon_sym_data_local_dir] = ACTIONS(136),
    [anon_sym_data_local_directory] = ACTIONS(136),
    [anon_sym_executable_dir] = ACTIONS(136),
    [anon_sym_executable_directory] = ACTIONS(136),
    [anon_sym_home_dir] = ACTIONS(136),
    [anon_sym_home_directory] = ACTIONS(136),
    [anon_sym_set] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(134),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_identifier] = ACTIONS(140),
    [anon_sym_alias] = ACTIONS(140),
    [aux_sym_import_token1] = ACTIONS(140),
    [aux_sym_mod_token1] = ACTIONS(140),
    [anon_sym_assert] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_arch] = ACTIONS(140),
    [anon_sym_num_cpus] = ACTIONS(140),
    [anon_sym_os] = ACTIONS(140),
    [anon_sym_os_family] = ACTIONS(140),
    [anon_sym_shell] = ACTIONS(140),
    [anon_sym_env_var] = ACTIONS(140),
    [anon_sym_env_var_or_default] = ACTIONS(140),
    [anon_sym_env] = ACTIONS(140),
    [anon_sym_is_dependency] = ACTIONS(140),
    [anon_sym_invocation_dir] = ACTIONS(140),
    [anon_sym_invocation_dir_native] = ACTIONS(140),
    [anon_sym_invocation_directory] = ACTIONS(140),
    [anon_sym_invocation_directory_native] = ACTIONS(140),
    [anon_sym_justfile] = ACTIONS(140),
    [anon_sym_justfile_dir] = ACTIONS(140),
    [anon_sym_justfile_directory] = ACTIONS(140),
    [anon_sym_source_dir] = ACTIONS(140),
    [anon_sym_source_directory] = ACTIONS(140),
    [anon_sym_source_file] = ACTIONS(140),
    [anon_sym_just_executable] = ACTIONS(140),
    [anon_sym_just_pid] = ACTIONS(140),
    [anon_sym_append] = ACTIONS(140),
    [anon_sym_prepend] = ACTIONS(140),
    [anon_sym_encode_uri_component] = ACTIONS(140),
    [anon_sym_quote] = ACTIONS(140),
    [anon_sym_replace] = ACTIONS(140),
    [anon_sym_replace_regex] = ACTIONS(140),
    [anon_sym_trim] = ACTIONS(140),
    [anon_sym_trim_end] = ACTIONS(140),
    [anon_sym_trim_end_match] = ACTIONS(140),
    [anon_sym_trim_end_matches] = ACTIONS(140),
    [anon_sym_trim_start] = ACTIONS(140),
    [anon_sym_trim_start_match] = ACTIONS(140),
    [anon_sym_trim_start_matches] = ACTIONS(140),
    [anon_sym_capitalize] = ACTIONS(140),
    [anon_sym_kebabcase] = ACTIONS(140),
    [anon_sym_lowercamelcase] = ACTIONS(140),
    [anon_sym_lowercase] = ACTIONS(140),
    [anon_sym_shoutykebabcase] = ACTIONS(140),
    [anon_sym_shoutysnakecase] = ACTIONS(140),
    [anon_sym_snakecase] = ACTIONS(140),
    [anon_sym_titlecase] = ACTIONS(140),
    [anon_sym_uppercamelcase] = ACTIONS(140),
    [anon_sym_uppercase] = ACTIONS(140),
    [anon_sym_absolute_path] = ACTIONS(140),
    [anon_sym_canonicalize] = ACTIONS(140),
    [anon_sym_extension] = ACTIONS(140),
    [anon_sym_file_name] = ACTIONS(140),
    [anon_sym_file_stem] = ACTIONS(140),
    [anon_sym_parent_dir] = ACTIONS(140),
    [anon_sym_parent_directory] = ACTIONS(140),
    [anon_sym_without_extension] = ACTIONS(140),
    [anon_sym_clean] = ACTIONS(140),
    [anon_sym_join] = ACTIONS(140),
    [anon_sym_path_exists] = ACTIONS(140),
    [anon_sym_error] = ACTIONS(140),
    [anon_sym_blake3] = ACTIONS(140),
    [anon_sym_blake3_file] = ACTIONS(140),
    [anon_sym_sha256] = ACTIONS(140),
    [anon_sym_sha256_file] = ACTIONS(140),
    [anon_sym_uuid] = ACTIONS(140),
    [anon_sym_choose] = ACTIONS(140),
    [anon_sym_datetime] = ACTIONS(140),
    [anon_sym_datetime_utc] = ACTIONS(140),
    [anon_sym_semver_matches] = ACTIONS(140),
    [anon_sym_cache_dir] = ACTIONS(140),
    [anon_sym_cache_directory] = ACTIONS(140),
    [anon_sym_config_dir] = ACTIONS(140),
    [anon_sym_config_directory] = ACTIONS(140),
    [anon_sym_config_local_dir] = ACTIONS(140),
    [anon_sym_config_local_directory] = ACTIONS(140),
    [anon_sym_data_dir] = ACTIONS(140),
    [anon_sym_data_directory] = ACTIONS(140),
    [anon_sym_data_local_dir] = ACTIONS(140),
    [anon_sym_data_local_directory] = ACTIONS(140),
    [anon_sym_executable_dir] = ACTIONS(140),
    [anon_sym_executable_directory] = ACTIONS(140),
    [anon_sym_home_dir] = ACTIONS(140),
    [anon_sym_home_directory] = ACTIONS(140),
    [anon_sym_set] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(138),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_identifier] = ACTIONS(144),
    [anon_sym_alias] = ACTIONS(144),
    [aux_sym_import_token1] = ACTIONS(144),
    [aux_sym_mod_token1] = ACTIONS(144),
    [anon_sym_assert] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(142),
    [anon_sym_BANG_EQ] = ACTIONS(142),
    [anon_sym_arch] = ACTIONS(144),
    [anon_sym_num_cpus] = ACTIONS(144),
    [anon_sym_os] = ACTIONS(144),
    [anon_sym_os_family] = ACTIONS(144),
    [anon_sym_shell] = ACTIONS(144),
    [anon_sym_env_var] = ACTIONS(144),
    [anon_sym_env_var_or_default] = ACTIONS(144),
    [anon_sym_env] = ACTIONS(144),
    [anon_sym_is_dependency] = ACTIONS(144),
    [anon_sym_invocation_dir] = ACTIONS(144),
    [anon_sym_invocation_dir_native] = ACTIONS(144),
    [anon_sym_invocation_directory] = ACTIONS(144),
    [anon_sym_invocation_directory_native] = ACTIONS(144),
    [anon_sym_justfile] = ACTIONS(144),
    [anon_sym_justfile_dir] = ACTIONS(144),
    [anon_sym_justfile_directory] = ACTIONS(144),
    [anon_sym_source_dir] = ACTIONS(144),
    [anon_sym_source_directory] = ACTIONS(144),
    [anon_sym_source_file] = ACTIONS(144),
    [anon_sym_just_executable] = ACTIONS(144),
    [anon_sym_just_pid] = ACTIONS(144),
    [anon_sym_append] = ACTIONS(144),
    [anon_sym_prepend] = ACTIONS(144),
    [anon_sym_encode_uri_component] = ACTIONS(144),
    [anon_sym_quote] = ACTIONS(144),
    [anon_sym_replace] = ACTIONS(144),
    [anon_sym_replace_regex] = ACTIONS(144),
    [anon_sym_trim] = ACTIONS(144),
    [anon_sym_trim_end] = ACTIONS(144),
    [anon_sym_trim_end_match] = ACTIONS(144),
    [anon_sym_trim_end_matches] = ACTIONS(144),
    [anon_sym_trim_start] = ACTIONS(144),
    [anon_sym_trim_start_match] = ACTIONS(144),
    [anon_sym_trim_start_matches] = ACTIONS(144),
    [anon_sym_capitalize] = ACTIONS(144),
    [anon_sym_kebabcase] = ACTIONS(144),
    [anon_sym_lowercamelcase] = ACTIONS(144),
    [anon_sym_lowercase] = ACTIONS(144),
    [anon_sym_shoutykebabcase] = ACTIONS(144),
    [anon_sym_shoutysnakecase] = ACTIONS(144),
    [anon_sym_snakecase] = ACTIONS(144),
    [anon_sym_titlecase] = ACTIONS(144),
    [anon_sym_uppercamelcase] = ACTIONS(144),
    [anon_sym_uppercase] = ACTIONS(144),
    [anon_sym_absolute_path] = ACTIONS(144),
    [anon_sym_canonicalize] = ACTIONS(144),
    [anon_sym_extension] = ACTIONS(144),
    [anon_sym_file_name] = ACTIONS(144),
    [anon_sym_file_stem] = ACTIONS(144),
    [anon_sym_parent_dir] = ACTIONS(144),
    [anon_sym_parent_directory] = ACTIONS(144),
    [anon_sym_without_extension] = ACTIONS(144),
    [anon_sym_clean] = ACTIONS(144),
    [anon_sym_join] = ACTIONS(144),
    [anon_sym_path_exists] = ACTIONS(144),
    [anon_sym_error] = ACTIONS(144),
    [anon_sym_blake3] = ACTIONS(144),
    [anon_sym_blake3_file] = ACTIONS(144),
    [anon_sym_sha256] = ACTIONS(144),
    [anon_sym_sha256_file] = ACTIONS(144),
    [anon_sym_uuid] = ACTIONS(144),
    [anon_sym_choose] = ACTIONS(144),
    [anon_sym_datetime] = ACTIONS(144),
    [anon_sym_datetime_utc] = ACTIONS(144),
    [anon_sym_semver_matches] = ACTIONS(144),
    [anon_sym_cache_dir] = ACTIONS(144),
    [anon_sym_cache_directory] = ACTIONS(144),
    [anon_sym_config_dir] = ACTIONS(144),
    [anon_sym_config_directory] = ACTIONS(144),
    [anon_sym_config_local_dir] = ACTIONS(144),
    [anon_sym_config_local_directory] = ACTIONS(144),
    [anon_sym_data_dir] = ACTIONS(144),
    [anon_sym_data_directory] = ACTIONS(144),
    [anon_sym_data_local_dir] = ACTIONS(144),
    [anon_sym_data_local_directory] = ACTIONS(144),
    [anon_sym_executable_dir] = ACTIONS(144),
    [anon_sym_executable_directory] = ACTIONS(144),
    [anon_sym_home_dir] = ACTIONS(144),
    [anon_sym_home_directory] = ACTIONS(144),
    [anon_sym_set] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(91),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_function_parameters] = STATE(124),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(16),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(108),
    [sym_condition] = STATE(116),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(115),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(117),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(19),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_identifier] = ACTIONS(148),
    [anon_sym_alias] = ACTIONS(148),
    [aux_sym_import_token1] = ACTIONS(148),
    [aux_sym_mod_token1] = ACTIONS(148),
    [anon_sym_assert] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [anon_sym_BANG_EQ] = ACTIONS(146),
    [anon_sym_arch] = ACTIONS(148),
    [anon_sym_num_cpus] = ACTIONS(148),
    [anon_sym_os] = ACTIONS(148),
    [anon_sym_os_family] = ACTIONS(148),
    [anon_sym_shell] = ACTIONS(148),
    [anon_sym_env_var] = ACTIONS(148),
    [anon_sym_env_var_or_default] = ACTIONS(148),
    [anon_sym_env] = ACTIONS(148),
    [anon_sym_is_dependency] = ACTIONS(148),
    [anon_sym_invocation_dir] = ACTIONS(148),
    [anon_sym_invocation_dir_native] = ACTIONS(148),
    [anon_sym_invocation_directory] = ACTIONS(148),
    [anon_sym_invocation_directory_native] = ACTIONS(148),
    [anon_sym_justfile] = ACTIONS(148),
    [anon_sym_justfile_dir] = ACTIONS(148),
    [anon_sym_justfile_directory] = ACTIONS(148),
    [anon_sym_source_dir] = ACTIONS(148),
    [anon_sym_source_directory] = ACTIONS(148),
    [anon_sym_source_file] = ACTIONS(148),
    [anon_sym_just_executable] = ACTIONS(148),
    [anon_sym_just_pid] = ACTIONS(148),
    [anon_sym_append] = ACTIONS(148),
    [anon_sym_prepend] = ACTIONS(148),
    [anon_sym_encode_uri_component] = ACTIONS(148),
    [anon_sym_quote] = ACTIONS(148),
    [anon_sym_replace] = ACTIONS(148),
    [anon_sym_replace_regex] = ACTIONS(148),
    [anon_sym_trim] = ACTIONS(148),
    [anon_sym_trim_end] = ACTIONS(148),
    [anon_sym_trim_end_match] = ACTIONS(148),
    [anon_sym_trim_end_matches] = ACTIONS(148),
    [anon_sym_trim_start] = ACTIONS(148),
    [anon_sym_trim_start_match] = ACTIONS(148),
    [anon_sym_trim_start_matches] = ACTIONS(148),
    [anon_sym_capitalize] = ACTIONS(148),
    [anon_sym_kebabcase] = ACTIONS(148),
    [anon_sym_lowercamelcase] = ACTIONS(148),
    [anon_sym_lowercase] = ACTIONS(148),
    [anon_sym_shoutykebabcase] = ACTIONS(148),
    [anon_sym_shoutysnakecase] = ACTIONS(148),
    [anon_sym_snakecase] = ACTIONS(148),
    [anon_sym_titlecase] = ACTIONS(148),
    [anon_sym_uppercamelcase] = ACTIONS(148),
    [anon_sym_uppercase] = ACTIONS(148),
    [anon_sym_absolute_path] = ACTIONS(148),
    [anon_sym_canonicalize] = ACTIONS(148),
    [anon_sym_extension] = ACTIONS(148),
    [anon_sym_file_name] = ACTIONS(148),
    [anon_sym_file_stem] = ACTIONS(148),
    [anon_sym_parent_dir] = ACTIONS(148),
    [anon_sym_parent_directory] = ACTIONS(148),
    [anon_sym_without_extension] = ACTIONS(148),
    [anon_sym_clean] = ACTIONS(148),
    [anon_sym_join] = ACTIONS(148),
    [anon_sym_path_exists] = ACTIONS(148),
    [anon_sym_error] = ACTIONS(148),
    [anon_sym_blake3] = ACTIONS(148),
    [anon_sym_blake3_file] = ACTIONS(148),
    [anon_sym_sha256] = ACTIONS(148),
    [anon_sym_sha256_file] = ACTIONS(148),
    [anon_sym_uuid] = ACTIONS(148),
    [anon_sym_choose] = ACTIONS(148),
    [anon_sym_datetime] = ACTIONS(148),
    [anon_sym_datetime_utc] = ACTIONS(148),
    [anon_sym_semver_matches] = ACTIONS(148),
    [anon_sym_cache_dir] = ACTIONS(148),
    [anon_sym_cache_directory] = ACTIONS(148),
    [anon_sym_config_dir] = ACTIONS(148),
    [anon_sym_config_directory] = ACTIONS(148),
    [anon_sym_config_local_dir] = ACTIONS(148),
    [anon_sym_config_local_directory] = ACTIONS(148),
    [anon_sym_data_dir] = ACTIONS(148),
    [anon_sym_data_directory] = ACTIONS(148),
    [anon_sym_data_local_dir] = ACTIONS(148),
    [anon_sym_data_local_directory] = ACTIONS(148),
    [anon_sym_executable_dir] = ACTIONS(148),
    [anon_sym_executable_directory] = ACTIONS(148),
    [anon_sym_home_dir] = ACTIONS(148),
    [anon_sym_home_directory] = ACTIONS(148),
    [anon_sym_set] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(146),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_identifier] = ACTIONS(152),
    [anon_sym_alias] = ACTIONS(152),
    [aux_sym_import_token1] = ACTIONS(152),
    [aux_sym_mod_token1] = ACTIONS(152),
    [anon_sym_assert] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_arch] = ACTIONS(152),
    [anon_sym_num_cpus] = ACTIONS(152),
    [anon_sym_os] = ACTIONS(152),
    [anon_sym_os_family] = ACTIONS(152),
    [anon_sym_shell] = ACTIONS(152),
    [anon_sym_env_var] = ACTIONS(152),
    [anon_sym_env_var_or_default] = ACTIONS(152),
    [anon_sym_env] = ACTIONS(152),
    [anon_sym_is_dependency] = ACTIONS(152),
    [anon_sym_invocation_dir] = ACTIONS(152),
    [anon_sym_invocation_dir_native] = ACTIONS(152),
    [anon_sym_invocation_directory] = ACTIONS(152),
    [anon_sym_invocation_directory_native] = ACTIONS(152),
    [anon_sym_justfile] = ACTIONS(152),
    [anon_sym_justfile_dir] = ACTIONS(152),
    [anon_sym_justfile_directory] = ACTIONS(152),
    [anon_sym_source_dir] = ACTIONS(152),
    [anon_sym_source_directory] = ACTIONS(152),
    [anon_sym_source_file] = ACTIONS(152),
    [anon_sym_just_executable] = ACTIONS(152),
    [anon_sym_just_pid] = ACTIONS(152),
    [anon_sym_append] = ACTIONS(152),
    [anon_sym_prepend] = ACTIONS(152),
    [anon_sym_encode_uri_component] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_replace] = ACTIONS(152),
    [anon_sym_replace_regex] = ACTIONS(152),
    [anon_sym_trim] = ACTIONS(152),
    [anon_sym_trim_end] = ACTIONS(152),
    [anon_sym_trim_end_match] = ACTIONS(152),
    [anon_sym_trim_end_matches] = ACTIONS(152),
    [anon_sym_trim_start] = ACTIONS(152),
    [anon_sym_trim_start_match] = ACTIONS(152),
    [anon_sym_trim_start_matches] = ACTIONS(152),
    [anon_sym_capitalize] = ACTIONS(152),
    [anon_sym_kebabcase] = ACTIONS(152),
    [anon_sym_lowercamelcase] = ACTIONS(152),
    [anon_sym_lowercase] = ACTIONS(152),
    [anon_sym_shoutykebabcase] = ACTIONS(152),
    [anon_sym_shoutysnakecase] = ACTIONS(152),
    [anon_sym_snakecase] = ACTIONS(152),
    [anon_sym_titlecase] = ACTIONS(152),
    [anon_sym_uppercamelcase] = ACTIONS(152),
    [anon_sym_uppercase] = ACTIONS(152),
    [anon_sym_absolute_path] = ACTIONS(152),
    [anon_sym_canonicalize] = ACTIONS(152),
    [anon_sym_extension] = ACTIONS(152),
    [anon_sym_file_name] = ACTIONS(152),
    [anon_sym_file_stem] = ACTIONS(152),
    [anon_sym_parent_dir] = ACTIONS(152),
    [anon_sym_parent_directory] = ACTIONS(152),
    [anon_sym_without_extension] = ACTIONS(152),
    [anon_sym_clean] = ACTIONS(152),
    [anon_sym_join] = ACTIONS(152),
    [anon_sym_path_exists] = ACTIONS(152),
    [anon_sym_error] = ACTIONS(152),
    [anon_sym_blake3] = ACTIONS(152),
    [anon_sym_blake3_file] = ACTIONS(152),
    [anon_sym_sha256] = ACTIONS(152),
    [anon_sym_sha256_file] = ACTIONS(152),
    [anon_sym_uuid] = ACTIONS(152),
    [anon_sym_choose] = ACTIONS(152),
    [anon_sym_datetime] = ACTIONS(152),
    [anon_sym_datetime_utc] = ACTIONS(152),
    [anon_sym_semver_matches] = ACTIONS(152),
    [anon_sym_cache_dir] = ACTIONS(152),
    [anon_sym_cache_directory] = ACTIONS(152),
    [anon_sym_config_dir] = ACTIONS(152),
    [anon_sym_config_directory] = ACTIONS(152),
    [anon_sym_config_local_dir] = ACTIONS(152),
    [anon_sym_config_local_directory] = ACTIONS(152),
    [anon_sym_data_dir] = ACTIONS(152),
    [anon_sym_data_directory] = ACTIONS(152),
    [anon_sym_data_local_dir] = ACTIONS(152),
    [anon_sym_data_local_directory] = ACTIONS(152),
    [anon_sym_executable_dir] = ACTIONS(152),
    [anon_sym_executable_directory] = ACTIONS(152),
    [anon_sym_home_dir] = ACTIONS(152),
    [anon_sym_home_directory] = ACTIONS(152),
    [anon_sym_set] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [anon_sym_alias] = ACTIONS(156),
    [aux_sym_import_token1] = ACTIONS(156),
    [aux_sym_mod_token1] = ACTIONS(156),
    [anon_sym_assert] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(154),
    [anon_sym_BANG_EQ] = ACTIONS(154),
    [anon_sym_arch] = ACTIONS(156),
    [anon_sym_num_cpus] = ACTIONS(156),
    [anon_sym_os] = ACTIONS(156),
    [anon_sym_os_family] = ACTIONS(156),
    [anon_sym_shell] = ACTIONS(156),
    [anon_sym_env_var] = ACTIONS(156),
    [anon_sym_env_var_or_default] = ACTIONS(156),
    [anon_sym_env] = ACTIONS(156),
    [anon_sym_is_dependency] = ACTIONS(156),
    [anon_sym_invocation_dir] = ACTIONS(156),
    [anon_sym_invocation_dir_native] = ACTIONS(156),
    [anon_sym_invocation_directory] = ACTIONS(156),
    [anon_sym_invocation_directory_native] = ACTIONS(156),
    [anon_sym_justfile] = ACTIONS(156),
    [anon_sym_justfile_dir] = ACTIONS(156),
    [anon_sym_justfile_directory] = ACTIONS(156),
    [anon_sym_source_dir] = ACTIONS(156),
    [anon_sym_source_directory] = ACTIONS(156),
    [anon_sym_source_file] = ACTIONS(156),
    [anon_sym_just_executable] = ACTIONS(156),
    [anon_sym_just_pid] = ACTIONS(156),
    [anon_sym_append] = ACTIONS(156),
    [anon_sym_prepend] = ACTIONS(156),
    [anon_sym_encode_uri_component] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_replace] = ACTIONS(156),
    [anon_sym_replace_regex] = ACTIONS(156),
    [anon_sym_trim] = ACTIONS(156),
    [anon_sym_trim_end] = ACTIONS(156),
    [anon_sym_trim_end_match] = ACTIONS(156),
    [anon_sym_trim_end_matches] = ACTIONS(156),
    [anon_sym_trim_start] = ACTIONS(156),
    [anon_sym_trim_start_match] = ACTIONS(156),
    [anon_sym_trim_start_matches] = ACTIONS(156),
    [anon_sym_capitalize] = ACTIONS(156),
    [anon_sym_kebabcase] = ACTIONS(156),
    [anon_sym_lowercamelcase] = ACTIONS(156),
    [anon_sym_lowercase] = ACTIONS(156),
    [anon_sym_shoutykebabcase] = ACTIONS(156),
    [anon_sym_shoutysnakecase] = ACTIONS(156),
    [anon_sym_snakecase] = ACTIONS(156),
    [anon_sym_titlecase] = ACTIONS(156),
    [anon_sym_uppercamelcase] = ACTIONS(156),
    [anon_sym_uppercase] = ACTIONS(156),
    [anon_sym_absolute_path] = ACTIONS(156),
    [anon_sym_canonicalize] = ACTIONS(156),
    [anon_sym_extension] = ACTIONS(156),
    [anon_sym_file_name] = ACTIONS(156),
    [anon_sym_file_stem] = ACTIONS(156),
    [anon_sym_parent_dir] = ACTIONS(156),
    [anon_sym_parent_directory] = ACTIONS(156),
    [anon_sym_without_extension] = ACTIONS(156),
    [anon_sym_clean] = ACTIONS(156),
    [anon_sym_join] = ACTIONS(156),
    [anon_sym_path_exists] = ACTIONS(156),
    [anon_sym_error] = ACTIONS(156),
    [anon_sym_blake3] = ACTIONS(156),
    [anon_sym_blake3_file] = ACTIONS(156),
    [anon_sym_sha256] = ACTIONS(156),
    [anon_sym_sha256_file] = ACTIONS(156),
    [anon_sym_uuid] = ACTIONS(156),
    [anon_sym_choose] = ACTIONS(156),
    [anon_sym_datetime] = ACTIONS(156),
    [anon_sym_datetime_utc] = ACTIONS(156),
    [anon_sym_semver_matches] = ACTIONS(156),
    [anon_sym_cache_dir] = ACTIONS(156),
    [anon_sym_cache_directory] = ACTIONS(156),
    [anon_sym_config_dir] = ACTIONS(156),
    [anon_sym_config_directory] = ACTIONS(156),
    [anon_sym_config_local_dir] = ACTIONS(156),
    [anon_sym_config_local_directory] = ACTIONS(156),
    [anon_sym_data_dir] = ACTIONS(156),
    [anon_sym_data_directory] = ACTIONS(156),
    [anon_sym_data_local_dir] = ACTIONS(156),
    [anon_sym_data_local_directory] = ACTIONS(156),
    [anon_sym_executable_dir] = ACTIONS(156),
    [anon_sym_executable_directory] = ACTIONS(156),
    [anon_sym_home_dir] = ACTIONS(156),
    [anon_sym_home_directory] = ACTIONS(156),
    [anon_sym_set] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_identifier] = ACTIONS(160),
    [anon_sym_alias] = ACTIONS(160),
    [aux_sym_import_token1] = ACTIONS(160),
    [aux_sym_mod_token1] = ACTIONS(160),
    [anon_sym_assert] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [anon_sym_BANG_EQ] = ACTIONS(158),
    [anon_sym_arch] = ACTIONS(160),
    [anon_sym_num_cpus] = ACTIONS(160),
    [anon_sym_os] = ACTIONS(160),
    [anon_sym_os_family] = ACTIONS(160),
    [anon_sym_shell] = ACTIONS(160),
    [anon_sym_env_var] = ACTIONS(160),
    [anon_sym_env_var_or_default] = ACTIONS(160),
    [anon_sym_env] = ACTIONS(160),
    [anon_sym_is_dependency] = ACTIONS(160),
    [anon_sym_invocation_dir] = ACTIONS(160),
    [anon_sym_invocation_dir_native] = ACTIONS(160),
    [anon_sym_invocation_directory] = ACTIONS(160),
    [anon_sym_invocation_directory_native] = ACTIONS(160),
    [anon_sym_justfile] = ACTIONS(160),
    [anon_sym_justfile_dir] = ACTIONS(160),
    [anon_sym_justfile_directory] = ACTIONS(160),
    [anon_sym_source_dir] = ACTIONS(160),
    [anon_sym_source_directory] = ACTIONS(160),
    [anon_sym_source_file] = ACTIONS(160),
    [anon_sym_just_executable] = ACTIONS(160),
    [anon_sym_just_pid] = ACTIONS(160),
    [anon_sym_append] = ACTIONS(160),
    [anon_sym_prepend] = ACTIONS(160),
    [anon_sym_encode_uri_component] = ACTIONS(160),
    [anon_sym_quote] = ACTIONS(160),
    [anon_sym_replace] = ACTIONS(160),
    [anon_sym_replace_regex] = ACTIONS(160),
    [anon_sym_trim] = ACTIONS(160),
    [anon_sym_trim_end] = ACTIONS(160),
    [anon_sym_trim_end_match] = ACTIONS(160),
    [anon_sym_trim_end_matches] = ACTIONS(160),
    [anon_sym_trim_start] = ACTIONS(160),
    [anon_sym_trim_start_match] = ACTIONS(160),
    [anon_sym_trim_start_matches] = ACTIONS(160),
    [anon_sym_capitalize] = ACTIONS(160),
    [anon_sym_kebabcase] = ACTIONS(160),
    [anon_sym_lowercamelcase] = ACTIONS(160),
    [anon_sym_lowercase] = ACTIONS(160),
    [anon_sym_shoutykebabcase] = ACTIONS(160),
    [anon_sym_shoutysnakecase] = ACTIONS(160),
    [anon_sym_snakecase] = ACTIONS(160),
    [anon_sym_titlecase] = ACTIONS(160),
    [anon_sym_uppercamelcase] = ACTIONS(160),
    [anon_sym_uppercase] = ACTIONS(160),
    [anon_sym_absolute_path] = ACTIONS(160),
    [anon_sym_canonicalize] = ACTIONS(160),
    [anon_sym_extension] = ACTIONS(160),
    [anon_sym_file_name] = ACTIONS(160),
    [anon_sym_file_stem] = ACTIONS(160),
    [anon_sym_parent_dir] = ACTIONS(160),
    [anon_sym_parent_directory] = ACTIONS(160),
    [anon_sym_without_extension] = ACTIONS(160),
    [anon_sym_clean] = ACTIONS(160),
    [anon_sym_join] = ACTIONS(160),
    [anon_sym_path_exists] = ACTIONS(160),
    [anon_sym_error] = ACTIONS(160),
    [anon_sym_blake3] = ACTIONS(160),
    [anon_sym_blake3_file] = ACTIONS(160),
    [anon_sym_sha256] = ACTIONS(160),
    [anon_sym_sha256_file] = ACTIONS(160),
    [anon_sym_uuid] = ACTIONS(160),
    [anon_sym_choose] = ACTIONS(160),
    [anon_sym_datetime] = ACTIONS(160),
    [anon_sym_datetime_utc] = ACTIONS(160),
    [anon_sym_semver_matches] = ACTIONS(160),
    [anon_sym_cache_dir] = ACTIONS(160),
    [anon_sym_cache_directory] = ACTIONS(160),
    [anon_sym_config_dir] = ACTIONS(160),
    [anon_sym_config_directory] = ACTIONS(160),
    [anon_sym_config_local_dir] = ACTIONS(160),
    [anon_sym_config_local_directory] = ACTIONS(160),
    [anon_sym_data_dir] = ACTIONS(160),
    [anon_sym_data_directory] = ACTIONS(160),
    [anon_sym_data_local_dir] = ACTIONS(160),
    [anon_sym_data_local_directory] = ACTIONS(160),
    [anon_sym_executable_dir] = ACTIONS(160),
    [anon_sym_executable_directory] = ACTIONS(160),
    [anon_sym_home_dir] = ACTIONS(160),
    [anon_sym_home_directory] = ACTIONS(160),
    [anon_sym_set] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(158),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_identifier] = ACTIONS(164),
    [anon_sym_alias] = ACTIONS(164),
    [aux_sym_import_token1] = ACTIONS(164),
    [aux_sym_mod_token1] = ACTIONS(164),
    [anon_sym_assert] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [anon_sym_BANG_EQ] = ACTIONS(162),
    [anon_sym_arch] = ACTIONS(164),
    [anon_sym_num_cpus] = ACTIONS(164),
    [anon_sym_os] = ACTIONS(164),
    [anon_sym_os_family] = ACTIONS(164),
    [anon_sym_shell] = ACTIONS(164),
    [anon_sym_env_var] = ACTIONS(164),
    [anon_sym_env_var_or_default] = ACTIONS(164),
    [anon_sym_env] = ACTIONS(164),
    [anon_sym_is_dependency] = ACTIONS(164),
    [anon_sym_invocation_dir] = ACTIONS(164),
    [anon_sym_invocation_dir_native] = ACTIONS(164),
    [anon_sym_invocation_directory] = ACTIONS(164),
    [anon_sym_invocation_directory_native] = ACTIONS(164),
    [anon_sym_justfile] = ACTIONS(164),
    [anon_sym_justfile_dir] = ACTIONS(164),
    [anon_sym_justfile_directory] = ACTIONS(164),
    [anon_sym_source_dir] = ACTIONS(164),
    [anon_sym_source_directory] = ACTIONS(164),
    [anon_sym_source_file] = ACTIONS(164),
    [anon_sym_just_executable] = ACTIONS(164),
    [anon_sym_just_pid] = ACTIONS(164),
    [anon_sym_append] = ACTIONS(164),
    [anon_sym_prepend] = ACTIONS(164),
    [anon_sym_encode_uri_component] = ACTIONS(164),
    [anon_sym_quote] = ACTIONS(164),
    [anon_sym_replace] = ACTIONS(164),
    [anon_sym_replace_regex] = ACTIONS(164),
    [anon_sym_trim] = ACTIONS(164),
    [anon_sym_trim_end] = ACTIONS(164),
    [anon_sym_trim_end_match] = ACTIONS(164),
    [anon_sym_trim_end_matches] = ACTIONS(164),
    [anon_sym_trim_start] = ACTIONS(164),
    [anon_sym_trim_start_match] = ACTIONS(164),
    [anon_sym_trim_start_matches] = ACTIONS(164),
    [anon_sym_capitalize] = ACTIONS(164),
    [anon_sym_kebabcase] = ACTIONS(164),
    [anon_sym_lowercamelcase] = ACTIONS(164),
    [anon_sym_lowercase] = ACTIONS(164),
    [anon_sym_shoutykebabcase] = ACTIONS(164),
    [anon_sym_shoutysnakecase] = ACTIONS(164),
    [anon_sym_snakecase] = ACTIONS(164),
    [anon_sym_titlecase] = ACTIONS(164),
    [anon_sym_uppercamelcase] = ACTIONS(164),
    [anon_sym_uppercase] = ACTIONS(164),
    [anon_sym_absolute_path] = ACTIONS(164),
    [anon_sym_canonicalize] = ACTIONS(164),
    [anon_sym_extension] = ACTIONS(164),
    [anon_sym_file_name] = ACTIONS(164),
    [anon_sym_file_stem] = ACTIONS(164),
    [anon_sym_parent_dir] = ACTIONS(164),
    [anon_sym_parent_directory] = ACTIONS(164),
    [anon_sym_without_extension] = ACTIONS(164),
    [anon_sym_clean] = ACTIONS(164),
    [anon_sym_join] = ACTIONS(164),
    [anon_sym_path_exists] = ACTIONS(164),
    [anon_sym_error] = ACTIONS(164),
    [anon_sym_blake3] = ACTIONS(164),
    [anon_sym_blake3_file] = ACTIONS(164),
    [anon_sym_sha256] = ACTIONS(164),
    [anon_sym_sha256_file] = ACTIONS(164),
    [anon_sym_uuid] = ACTIONS(164),
    [anon_sym_choose] = ACTIONS(164),
    [anon_sym_datetime] = ACTIONS(164),
    [anon_sym_datetime_utc] = ACTIONS(164),
    [anon_sym_semver_matches] = ACTIONS(164),
    [anon_sym_cache_dir] = ACTIONS(164),
    [anon_sym_cache_directory] = ACTIONS(164),
    [anon_sym_config_dir] = ACTIONS(164),
    [anon_sym_config_directory] = ACTIONS(164),
    [anon_sym_config_local_dir] = ACTIONS(164),
    [anon_sym_config_local_directory] = ACTIONS(164),
    [anon_sym_data_dir] = ACTIONS(164),
    [anon_sym_data_directory] = ACTIONS(164),
    [anon_sym_data_local_dir] = ACTIONS(164),
    [anon_sym_data_local_directory] = ACTIONS(164),
    [anon_sym_executable_dir] = ACTIONS(164),
    [anon_sym_executable_directory] = ACTIONS(164),
    [anon_sym_home_dir] = ACTIONS(164),
    [anon_sym_home_directory] = ACTIONS(164),
    [anon_sym_set] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_alias] = ACTIONS(168),
    [aux_sym_import_token1] = ACTIONS(168),
    [aux_sym_mod_token1] = ACTIONS(168),
    [anon_sym_assert] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(166),
    [anon_sym_arch] = ACTIONS(168),
    [anon_sym_num_cpus] = ACTIONS(168),
    [anon_sym_os] = ACTIONS(168),
    [anon_sym_os_family] = ACTIONS(168),
    [anon_sym_shell] = ACTIONS(168),
    [anon_sym_env_var] = ACTIONS(168),
    [anon_sym_env_var_or_default] = ACTIONS(168),
    [anon_sym_env] = ACTIONS(168),
    [anon_sym_is_dependency] = ACTIONS(168),
    [anon_sym_invocation_dir] = ACTIONS(168),
    [anon_sym_invocation_dir_native] = ACTIONS(168),
    [anon_sym_invocation_directory] = ACTIONS(168),
    [anon_sym_invocation_directory_native] = ACTIONS(168),
    [anon_sym_justfile] = ACTIONS(168),
    [anon_sym_justfile_dir] = ACTIONS(168),
    [anon_sym_justfile_directory] = ACTIONS(168),
    [anon_sym_source_dir] = ACTIONS(168),
    [anon_sym_source_directory] = ACTIONS(168),
    [anon_sym_source_file] = ACTIONS(168),
    [anon_sym_just_executable] = ACTIONS(168),
    [anon_sym_just_pid] = ACTIONS(168),
    [anon_sym_append] = ACTIONS(168),
    [anon_sym_prepend] = ACTIONS(168),
    [anon_sym_encode_uri_component] = ACTIONS(168),
    [anon_sym_quote] = ACTIONS(168),
    [anon_sym_replace] = ACTIONS(168),
    [anon_sym_replace_regex] = ACTIONS(168),
    [anon_sym_trim] = ACTIONS(168),
    [anon_sym_trim_end] = ACTIONS(168),
    [anon_sym_trim_end_match] = ACTIONS(168),
    [anon_sym_trim_end_matches] = ACTIONS(168),
    [anon_sym_trim_start] = ACTIONS(168),
    [anon_sym_trim_start_match] = ACTIONS(168),
    [anon_sym_trim_start_matches] = ACTIONS(168),
    [anon_sym_capitalize] = ACTIONS(168),
    [anon_sym_kebabcase] = ACTIONS(168),
    [anon_sym_lowercamelcase] = ACTIONS(168),
    [anon_sym_lowercase] = ACTIONS(168),
    [anon_sym_shoutykebabcase] = ACTIONS(168),
    [anon_sym_shoutysnakecase] = ACTIONS(168),
    [anon_sym_snakecase] = ACTIONS(168),
    [anon_sym_titlecase] = ACTIONS(168),
    [anon_sym_uppercamelcase] = ACTIONS(168),
    [anon_sym_uppercase] = ACTIONS(168),
    [anon_sym_absolute_path] = ACTIONS(168),
    [anon_sym_canonicalize] = ACTIONS(168),
    [anon_sym_extension] = ACTIONS(168),
    [anon_sym_file_name] = ACTIONS(168),
    [anon_sym_file_stem] = ACTIONS(168),
    [anon_sym_parent_dir] = ACTIONS(168),
    [anon_sym_parent_directory] = ACTIONS(168),
    [anon_sym_without_extension] = ACTIONS(168),
    [anon_sym_clean] = ACTIONS(168),
    [anon_sym_join] = ACTIONS(168),
    [anon_sym_path_exists] = ACTIONS(168),
    [anon_sym_error] = ACTIONS(168),
    [anon_sym_blake3] = ACTIONS(168),
    [anon_sym_blake3_file] = ACTIONS(168),
    [anon_sym_sha256] = ACTIONS(168),
    [anon_sym_sha256_file] = ACTIONS(168),
    [anon_sym_uuid] = ACTIONS(168),
    [anon_sym_choose] = ACTIONS(168),
    [anon_sym_datetime] = ACTIONS(168),
    [anon_sym_datetime_utc] = ACTIONS(168),
    [anon_sym_semver_matches] = ACTIONS(168),
    [anon_sym_cache_dir] = ACTIONS(168),
    [anon_sym_cache_directory] = ACTIONS(168),
    [anon_sym_config_dir] = ACTIONS(168),
    [anon_sym_config_directory] = ACTIONS(168),
    [anon_sym_config_local_dir] = ACTIONS(168),
    [anon_sym_config_local_directory] = ACTIONS(168),
    [anon_sym_data_dir] = ACTIONS(168),
    [anon_sym_data_directory] = ACTIONS(168),
    [anon_sym_data_local_dir] = ACTIONS(168),
    [anon_sym_data_local_directory] = ACTIONS(168),
    [anon_sym_executable_dir] = ACTIONS(168),
    [anon_sym_executable_directory] = ACTIONS(168),
    [anon_sym_home_dir] = ACTIONS(168),
    [anon_sym_home_directory] = ACTIONS(168),
    [anon_sym_set] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_identifier] = ACTIONS(172),
    [anon_sym_alias] = ACTIONS(172),
    [aux_sym_import_token1] = ACTIONS(172),
    [aux_sym_mod_token1] = ACTIONS(172),
    [anon_sym_assert] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_arch] = ACTIONS(172),
    [anon_sym_num_cpus] = ACTIONS(172),
    [anon_sym_os] = ACTIONS(172),
    [anon_sym_os_family] = ACTIONS(172),
    [anon_sym_shell] = ACTIONS(172),
    [anon_sym_env_var] = ACTIONS(172),
    [anon_sym_env_var_or_default] = ACTIONS(172),
    [anon_sym_env] = ACTIONS(172),
    [anon_sym_is_dependency] = ACTIONS(172),
    [anon_sym_invocation_dir] = ACTIONS(172),
    [anon_sym_invocation_dir_native] = ACTIONS(172),
    [anon_sym_invocation_directory] = ACTIONS(172),
    [anon_sym_invocation_directory_native] = ACTIONS(172),
    [anon_sym_justfile] = ACTIONS(172),
    [anon_sym_justfile_dir] = ACTIONS(172),
    [anon_sym_justfile_directory] = ACTIONS(172),
    [anon_sym_source_dir] = ACTIONS(172),
    [anon_sym_source_directory] = ACTIONS(172),
    [anon_sym_source_file] = ACTIONS(172),
    [anon_sym_just_executable] = ACTIONS(172),
    [anon_sym_just_pid] = ACTIONS(172),
    [anon_sym_append] = ACTIONS(172),
    [anon_sym_prepend] = ACTIONS(172),
    [anon_sym_encode_uri_component] = ACTIONS(172),
    [anon_sym_quote] = ACTIONS(172),
    [anon_sym_replace] = ACTIONS(172),
    [anon_sym_replace_regex] = ACTIONS(172),
    [anon_sym_trim] = ACTIONS(172),
    [anon_sym_trim_end] = ACTIONS(172),
    [anon_sym_trim_end_match] = ACTIONS(172),
    [anon_sym_trim_end_matches] = ACTIONS(172),
    [anon_sym_trim_start] = ACTIONS(172),
    [anon_sym_trim_start_match] = ACTIONS(172),
    [anon_sym_trim_start_matches] = ACTIONS(172),
    [anon_sym_capitalize] = ACTIONS(172),
    [anon_sym_kebabcase] = ACTIONS(172),
    [anon_sym_lowercamelcase] = ACTIONS(172),
    [anon_sym_lowercase] = ACTIONS(172),
    [anon_sym_shoutykebabcase] = ACTIONS(172),
    [anon_sym_shoutysnakecase] = ACTIONS(172),
    [anon_sym_snakecase] = ACTIONS(172),
    [anon_sym_titlecase] = ACTIONS(172),
    [anon_sym_uppercamelcase] = ACTIONS(172),
    [anon_sym_uppercase] = ACTIONS(172),
    [anon_sym_absolute_path] = ACTIONS(172),
    [anon_sym_canonicalize] = ACTIONS(172),
    [anon_sym_extension] = ACTIONS(172),
    [anon_sym_file_name] = ACTIONS(172),
    [anon_sym_file_stem] = ACTIONS(172),
    [anon_sym_parent_dir] = ACTIONS(172),
    [anon_sym_parent_directory] = ACTIONS(172),
    [anon_sym_without_extension] = ACTIONS(172),
    [anon_sym_clean] = ACTIONS(172),
    [anon_sym_join] = ACTIONS(172),
    [anon_sym_path_exists] = ACTIONS(172),
    [anon_sym_error] = ACTIONS(172),
    [anon_sym_blake3] = ACTIONS(172),
    [anon_sym_blake3_file] = ACTIONS(172),
    [anon_sym_sha256] = ACTIONS(172),
    [anon_sym_sha256_file] = ACTIONS(172),
    [anon_sym_uuid] = ACTIONS(172),
    [anon_sym_choose] = ACTIONS(172),
    [anon_sym_datetime] = ACTIONS(172),
    [anon_sym_datetime_utc] = ACTIONS(172),
    [anon_sym_semver_matches] = ACTIONS(172),
    [anon_sym_cache_dir] = ACTIONS(172),
    [anon_sym_cache_directory] = ACTIONS(172),
    [anon_sym_config_dir] = ACTIONS(172),
    [anon_sym_config_directory] = ACTIONS(172),
    [anon_sym_config_local_dir] = ACTIONS(172),
    [anon_sym_config_local_directory] = ACTIONS(172),
    [anon_sym_data_dir] = ACTIONS(172),
    [anon_sym_data_directory] = ACTIONS(172),
    [anon_sym_data_local_dir] = ACTIONS(172),
    [anon_sym_data_local_directory] = ACTIONS(172),
    [anon_sym_executable_dir] = ACTIONS(172),
    [anon_sym_executable_directory] = ACTIONS(172),
    [anon_sym_home_dir] = ACTIONS(172),
    [anon_sym_home_directory] = ACTIONS(172),
    [anon_sym_set] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(121),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(27),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_identifier] = ACTIONS(176),
    [anon_sym_alias] = ACTIONS(176),
    [aux_sym_import_token1] = ACTIONS(176),
    [aux_sym_mod_token1] = ACTIONS(176),
    [anon_sym_assert] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_arch] = ACTIONS(176),
    [anon_sym_num_cpus] = ACTIONS(176),
    [anon_sym_os] = ACTIONS(176),
    [anon_sym_os_family] = ACTIONS(176),
    [anon_sym_shell] = ACTIONS(176),
    [anon_sym_env_var] = ACTIONS(176),
    [anon_sym_env_var_or_default] = ACTIONS(176),
    [anon_sym_env] = ACTIONS(176),
    [anon_sym_is_dependency] = ACTIONS(176),
    [anon_sym_invocation_dir] = ACTIONS(176),
    [anon_sym_invocation_dir_native] = ACTIONS(176),
    [anon_sym_invocation_directory] = ACTIONS(176),
    [anon_sym_invocation_directory_native] = ACTIONS(176),
    [anon_sym_justfile] = ACTIONS(176),
    [anon_sym_justfile_dir] = ACTIONS(176),
    [anon_sym_justfile_directory] = ACTIONS(176),
    [anon_sym_source_dir] = ACTIONS(176),
    [anon_sym_source_directory] = ACTIONS(176),
    [anon_sym_source_file] = ACTIONS(176),
    [anon_sym_just_executable] = ACTIONS(176),
    [anon_sym_just_pid] = ACTIONS(176),
    [anon_sym_append] = ACTIONS(176),
    [anon_sym_prepend] = ACTIONS(176),
    [anon_sym_encode_uri_component] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_replace] = ACTIONS(176),
    [anon_sym_replace_regex] = ACTIONS(176),
    [anon_sym_trim] = ACTIONS(176),
    [anon_sym_trim_end] = ACTIONS(176),
    [anon_sym_trim_end_match] = ACTIONS(176),
    [anon_sym_trim_end_matches] = ACTIONS(176),
    [anon_sym_trim_start] = ACTIONS(176),
    [anon_sym_trim_start_match] = ACTIONS(176),
    [anon_sym_trim_start_matches] = ACTIONS(176),
    [anon_sym_capitalize] = ACTIONS(176),
    [anon_sym_kebabcase] = ACTIONS(176),
    [anon_sym_lowercamelcase] = ACTIONS(176),
    [anon_sym_lowercase] = ACTIONS(176),
    [anon_sym_shoutykebabcase] = ACTIONS(176),
    [anon_sym_shoutysnakecase] = ACTIONS(176),
    [anon_sym_snakecase] = ACTIONS(176),
    [anon_sym_titlecase] = ACTIONS(176),
    [anon_sym_uppercamelcase] = ACTIONS(176),
    [anon_sym_uppercase] = ACTIONS(176),
    [anon_sym_absolute_path] = ACTIONS(176),
    [anon_sym_canonicalize] = ACTIONS(176),
    [anon_sym_extension] = ACTIONS(176),
    [anon_sym_file_name] = ACTIONS(176),
    [anon_sym_file_stem] = ACTIONS(176),
    [anon_sym_parent_dir] = ACTIONS(176),
    [anon_sym_parent_directory] = ACTIONS(176),
    [anon_sym_without_extension] = ACTIONS(176),
    [anon_sym_clean] = ACTIONS(176),
    [anon_sym_join] = ACTIONS(176),
    [anon_sym_path_exists] = ACTIONS(176),
    [anon_sym_error] = ACTIONS(176),
    [anon_sym_blake3] = ACTIONS(176),
    [anon_sym_blake3_file] = ACTIONS(176),
    [anon_sym_sha256] = ACTIONS(176),
    [anon_sym_sha256_file] = ACTIONS(176),
    [anon_sym_uuid] = ACTIONS(176),
    [anon_sym_choose] = ACTIONS(176),
    [anon_sym_datetime] = ACTIONS(176),
    [anon_sym_datetime_utc] = ACTIONS(176),
    [anon_sym_semver_matches] = ACTIONS(176),
    [anon_sym_cache_dir] = ACTIONS(176),
    [anon_sym_cache_directory] = ACTIONS(176),
    [anon_sym_config_dir] = ACTIONS(176),
    [anon_sym_config_directory] = ACTIONS(176),
    [anon_sym_config_local_dir] = ACTIONS(176),
    [anon_sym_config_local_directory] = ACTIONS(176),
    [anon_sym_data_dir] = ACTIONS(176),
    [anon_sym_data_directory] = ACTIONS(176),
    [anon_sym_data_local_dir] = ACTIONS(176),
    [anon_sym_data_local_directory] = ACTIONS(176),
    [anon_sym_executable_dir] = ACTIONS(176),
    [anon_sym_executable_directory] = ACTIONS(176),
    [anon_sym_home_dir] = ACTIONS(176),
    [anon_sym_home_directory] = ACTIONS(176),
    [anon_sym_set] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(51),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(29),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_alias] = ACTIONS(182),
    [aux_sym_import_token1] = ACTIONS(182),
    [aux_sym_mod_token1] = ACTIONS(182),
    [anon_sym_assert] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_arch] = ACTIONS(182),
    [anon_sym_num_cpus] = ACTIONS(182),
    [anon_sym_os] = ACTIONS(182),
    [anon_sym_os_family] = ACTIONS(182),
    [anon_sym_shell] = ACTIONS(182),
    [anon_sym_env_var] = ACTIONS(182),
    [anon_sym_env_var_or_default] = ACTIONS(182),
    [anon_sym_env] = ACTIONS(182),
    [anon_sym_is_dependency] = ACTIONS(182),
    [anon_sym_invocation_dir] = ACTIONS(182),
    [anon_sym_invocation_dir_native] = ACTIONS(182),
    [anon_sym_invocation_directory] = ACTIONS(182),
    [anon_sym_invocation_directory_native] = ACTIONS(182),
    [anon_sym_justfile] = ACTIONS(182),
    [anon_sym_justfile_dir] = ACTIONS(182),
    [anon_sym_justfile_directory] = ACTIONS(182),
    [anon_sym_source_dir] = ACTIONS(182),
    [anon_sym_source_directory] = ACTIONS(182),
    [anon_sym_source_file] = ACTIONS(182),
    [anon_sym_just_executable] = ACTIONS(182),
    [anon_sym_just_pid] = ACTIONS(182),
    [anon_sym_append] = ACTIONS(182),
    [anon_sym_prepend] = ACTIONS(182),
    [anon_sym_encode_uri_component] = ACTIONS(182),
    [anon_sym_quote] = ACTIONS(182),
    [anon_sym_replace] = ACTIONS(182),
    [anon_sym_replace_regex] = ACTIONS(182),
    [anon_sym_trim] = ACTIONS(182),
    [anon_sym_trim_end] = ACTIONS(182),
    [anon_sym_trim_end_match] = ACTIONS(182),
    [anon_sym_trim_end_matches] = ACTIONS(182),
    [anon_sym_trim_start] = ACTIONS(182),
    [anon_sym_trim_start_match] = ACTIONS(182),
    [anon_sym_trim_start_matches] = ACTIONS(182),
    [anon_sym_capitalize] = ACTIONS(182),
    [anon_sym_kebabcase] = ACTIONS(182),
    [anon_sym_lowercamelcase] = ACTIONS(182),
    [anon_sym_lowercase] = ACTIONS(182),
    [anon_sym_shoutykebabcase] = ACTIONS(182),
    [anon_sym_shoutysnakecase] = ACTIONS(182),
    [anon_sym_snakecase] = ACTIONS(182),
    [anon_sym_titlecase] = ACTIONS(182),
    [anon_sym_uppercamelcase] = ACTIONS(182),
    [anon_sym_uppercase] = ACTIONS(182),
    [anon_sym_absolute_path] = ACTIONS(182),
    [anon_sym_canonicalize] = ACTIONS(182),
    [anon_sym_extension] = ACTIONS(182),
    [anon_sym_file_name] = ACTIONS(182),
    [anon_sym_file_stem] = ACTIONS(182),
    [anon_sym_parent_dir] = ACTIONS(182),
    [anon_sym_parent_directory] = ACTIONS(182),
    [anon_sym_without_extension] = ACTIONS(182),
    [anon_sym_clean] = ACTIONS(182),
    [anon_sym_join] = ACTIONS(182),
    [anon_sym_path_exists] = ACTIONS(182),
    [anon_sym_error] = ACTIONS(182),
    [anon_sym_blake3] = ACTIONS(182),
    [anon_sym_blake3_file] = ACTIONS(182),
    [anon_sym_sha256] = ACTIONS(182),
    [anon_sym_sha256_file] = ACTIONS(182),
    [anon_sym_uuid] = ACTIONS(182),
    [anon_sym_choose] = ACTIONS(182),
    [anon_sym_datetime] = ACTIONS(182),
    [anon_sym_datetime_utc] = ACTIONS(182),
    [anon_sym_semver_matches] = ACTIONS(182),
    [anon_sym_cache_dir] = ACTIONS(182),
    [anon_sym_cache_directory] = ACTIONS(182),
    [anon_sym_config_dir] = ACTIONS(182),
    [anon_sym_config_directory] = ACTIONS(182),
    [anon_sym_config_local_dir] = ACTIONS(182),
    [anon_sym_config_local_directory] = ACTIONS(182),
    [anon_sym_data_dir] = ACTIONS(182),
    [anon_sym_data_directory] = ACTIONS(182),
    [anon_sym_data_local_dir] = ACTIONS(182),
    [anon_sym_data_local_directory] = ACTIONS(182),
    [anon_sym_executable_dir] = ACTIONS(182),
    [anon_sym_executable_directory] = ACTIONS(182),
    [anon_sym_home_dir] = ACTIONS(182),
    [anon_sym_home_directory] = ACTIONS(182),
    [anon_sym_set] = ACTIONS(182),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [anon_sym_alias] = ACTIONS(186),
    [aux_sym_import_token1] = ACTIONS(186),
    [aux_sym_mod_token1] = ACTIONS(186),
    [anon_sym_assert] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(184),
    [anon_sym_BANG_EQ] = ACTIONS(184),
    [anon_sym_arch] = ACTIONS(186),
    [anon_sym_num_cpus] = ACTIONS(186),
    [anon_sym_os] = ACTIONS(186),
    [anon_sym_os_family] = ACTIONS(186),
    [anon_sym_shell] = ACTIONS(186),
    [anon_sym_env_var] = ACTIONS(186),
    [anon_sym_env_var_or_default] = ACTIONS(186),
    [anon_sym_env] = ACTIONS(186),
    [anon_sym_is_dependency] = ACTIONS(186),
    [anon_sym_invocation_dir] = ACTIONS(186),
    [anon_sym_invocation_dir_native] = ACTIONS(186),
    [anon_sym_invocation_directory] = ACTIONS(186),
    [anon_sym_invocation_directory_native] = ACTIONS(186),
    [anon_sym_justfile] = ACTIONS(186),
    [anon_sym_justfile_dir] = ACTIONS(186),
    [anon_sym_justfile_directory] = ACTIONS(186),
    [anon_sym_source_dir] = ACTIONS(186),
    [anon_sym_source_directory] = ACTIONS(186),
    [anon_sym_source_file] = ACTIONS(186),
    [anon_sym_just_executable] = ACTIONS(186),
    [anon_sym_just_pid] = ACTIONS(186),
    [anon_sym_append] = ACTIONS(186),
    [anon_sym_prepend] = ACTIONS(186),
    [anon_sym_encode_uri_component] = ACTIONS(186),
    [anon_sym_quote] = ACTIONS(186),
    [anon_sym_replace] = ACTIONS(186),
    [anon_sym_replace_regex] = ACTIONS(186),
    [anon_sym_trim] = ACTIONS(186),
    [anon_sym_trim_end] = ACTIONS(186),
    [anon_sym_trim_end_match] = ACTIONS(186),
    [anon_sym_trim_end_matches] = ACTIONS(186),
    [anon_sym_trim_start] = ACTIONS(186),
    [anon_sym_trim_start_match] = ACTIONS(186),
    [anon_sym_trim_start_matches] = ACTIONS(186),
    [anon_sym_capitalize] = ACTIONS(186),
    [anon_sym_kebabcase] = ACTIONS(186),
    [anon_sym_lowercamelcase] = ACTIONS(186),
    [anon_sym_lowercase] = ACTIONS(186),
    [anon_sym_shoutykebabcase] = ACTIONS(186),
    [anon_sym_shoutysnakecase] = ACTIONS(186),
    [anon_sym_snakecase] = ACTIONS(186),
    [anon_sym_titlecase] = ACTIONS(186),
    [anon_sym_uppercamelcase] = ACTIONS(186),
    [anon_sym_uppercase] = ACTIONS(186),
    [anon_sym_absolute_path] = ACTIONS(186),
    [anon_sym_canonicalize] = ACTIONS(186),
    [anon_sym_extension] = ACTIONS(186),
    [anon_sym_file_name] = ACTIONS(186),
    [anon_sym_file_stem] = ACTIONS(186),
    [anon_sym_parent_dir] = ACTIONS(186),
    [anon_sym_parent_directory] = ACTIONS(186),
    [anon_sym_without_extension] = ACTIONS(186),
    [anon_sym_clean] = ACTIONS(186),
    [anon_sym_join] = ACTIONS(186),
    [anon_sym_path_exists] = ACTIONS(186),
    [anon_sym_error] = ACTIONS(186),
    [anon_sym_blake3] = ACTIONS(186),
    [anon_sym_blake3_file] = ACTIONS(186),
    [anon_sym_sha256] = ACTIONS(186),
    [anon_sym_sha256_file] = ACTIONS(186),
    [anon_sym_uuid] = ACTIONS(186),
    [anon_sym_choose] = ACTIONS(186),
    [anon_sym_datetime] = ACTIONS(186),
    [anon_sym_datetime_utc] = ACTIONS(186),
    [anon_sym_semver_matches] = ACTIONS(186),
    [anon_sym_cache_dir] = ACTIONS(186),
    [anon_sym_cache_directory] = ACTIONS(186),
    [anon_sym_config_dir] = ACTIONS(186),
    [anon_sym_config_directory] = ACTIONS(186),
    [anon_sym_config_local_dir] = ACTIONS(186),
    [anon_sym_config_local_directory] = ACTIONS(186),
    [anon_sym_data_dir] = ACTIONS(186),
    [anon_sym_data_directory] = ACTIONS(186),
    [anon_sym_data_local_dir] = ACTIONS(186),
    [anon_sym_data_local_directory] = ACTIONS(186),
    [anon_sym_executable_dir] = ACTIONS(186),
    [anon_sym_executable_directory] = ACTIONS(186),
    [anon_sym_home_dir] = ACTIONS(186),
    [anon_sym_home_directory] = ACTIONS(186),
    [anon_sym_set] = ACTIONS(186),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_comment] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_identifier] = ACTIONS(176),
    [anon_sym_alias] = ACTIONS(176),
    [aux_sym_import_token1] = ACTIONS(176),
    [aux_sym_mod_token1] = ACTIONS(176),
    [anon_sym_assert] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_arch] = ACTIONS(176),
    [anon_sym_num_cpus] = ACTIONS(176),
    [anon_sym_os] = ACTIONS(176),
    [anon_sym_os_family] = ACTIONS(176),
    [anon_sym_shell] = ACTIONS(176),
    [anon_sym_env_var] = ACTIONS(176),
    [anon_sym_env_var_or_default] = ACTIONS(176),
    [anon_sym_env] = ACTIONS(176),
    [anon_sym_is_dependency] = ACTIONS(176),
    [anon_sym_invocation_dir] = ACTIONS(176),
    [anon_sym_invocation_dir_native] = ACTIONS(176),
    [anon_sym_invocation_directory] = ACTIONS(176),
    [anon_sym_invocation_directory_native] = ACTIONS(176),
    [anon_sym_justfile] = ACTIONS(176),
    [anon_sym_justfile_dir] = ACTIONS(176),
    [anon_sym_justfile_directory] = ACTIONS(176),
    [anon_sym_source_dir] = ACTIONS(176),
    [anon_sym_source_directory] = ACTIONS(176),
    [anon_sym_source_file] = ACTIONS(176),
    [anon_sym_just_executable] = ACTIONS(176),
    [anon_sym_just_pid] = ACTIONS(176),
    [anon_sym_append] = ACTIONS(176),
    [anon_sym_prepend] = ACTIONS(176),
    [anon_sym_encode_uri_component] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_replace] = ACTIONS(176),
    [anon_sym_replace_regex] = ACTIONS(176),
    [anon_sym_trim] = ACTIONS(176),
    [anon_sym_trim_end] = ACTIONS(176),
    [anon_sym_trim_end_match] = ACTIONS(176),
    [anon_sym_trim_end_matches] = ACTIONS(176),
    [anon_sym_trim_start] = ACTIONS(176),
    [anon_sym_trim_start_match] = ACTIONS(176),
    [anon_sym_trim_start_matches] = ACTIONS(176),
    [anon_sym_capitalize] = ACTIONS(176),
    [anon_sym_kebabcase] = ACTIONS(176),
    [anon_sym_lowercamelcase] = ACTIONS(176),
    [anon_sym_lowercase] = ACTIONS(176),
    [anon_sym_shoutykebabcase] = ACTIONS(176),
    [anon_sym_shoutysnakecase] = ACTIONS(176),
    [anon_sym_snakecase] = ACTIONS(176),
    [anon_sym_titlecase] = ACTIONS(176),
    [anon_sym_uppercamelcase] = ACTIONS(176),
    [anon_sym_uppercase] = ACTIONS(176),
    [anon_sym_absolute_path] = ACTIONS(176),
    [anon_sym_canonicalize] = ACTIONS(176),
    [anon_sym_extension] = ACTIONS(176),
    [anon_sym_file_name] = ACTIONS(176),
    [anon_sym_file_stem] = ACTIONS(176),
    [anon_sym_parent_dir] = ACTIONS(176),
    [anon_sym_parent_directory] = ACTIONS(176),
    [anon_sym_without_extension] = ACTIONS(176),
    [anon_sym_clean] = ACTIONS(176),
    [anon_sym_join] = ACTIONS(176),
    [anon_sym_path_exists] = ACTIONS(176),
    [anon_sym_error] = ACTIONS(176),
    [anon_sym_blake3] = ACTIONS(176),
    [anon_sym_blake3_file] = ACTIONS(176),
    [anon_sym_sha256] = ACTIONS(176),
    [anon_sym_sha256_file] = ACTIONS(176),
    [anon_sym_uuid] = ACTIONS(176),
    [anon_sym_choose] = ACTIONS(176),
    [anon_sym_datetime] = ACTIONS(176),
    [anon_sym_datetime_utc] = ACTIONS(176),
    [anon_sym_semver_matches] = ACTIONS(176),
    [anon_sym_cache_dir] = ACTIONS(176),
    [anon_sym_cache_directory] = ACTIONS(176),
    [anon_sym_config_dir] = ACTIONS(176),
    [anon_sym_config_directory] = ACTIONS(176),
    [anon_sym_config_local_dir] = ACTIONS(176),
    [anon_sym_config_local_directory] = ACTIONS(176),
    [anon_sym_data_dir] = ACTIONS(176),
    [anon_sym_data_directory] = ACTIONS(176),
    [anon_sym_data_local_dir] = ACTIONS(176),
    [anon_sym_data_local_directory] = ACTIONS(176),
    [anon_sym_executable_dir] = ACTIONS(176),
    [anon_sym_executable_directory] = ACTIONS(176),
    [anon_sym_home_dir] = ACTIONS(176),
    [anon_sym_home_directory] = ACTIONS(176),
    [anon_sym_set] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_expression] = STATE(101),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(33),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_expression] = STATE(112),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(34),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_comment] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_identifier] = ACTIONS(192),
    [anon_sym_alias] = ACTIONS(192),
    [aux_sym_import_token1] = ACTIONS(192),
    [aux_sym_mod_token1] = ACTIONS(192),
    [anon_sym_assert] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_arch] = ACTIONS(192),
    [anon_sym_num_cpus] = ACTIONS(192),
    [anon_sym_os] = ACTIONS(192),
    [anon_sym_os_family] = ACTIONS(192),
    [anon_sym_shell] = ACTIONS(192),
    [anon_sym_env_var] = ACTIONS(192),
    [anon_sym_env_var_or_default] = ACTIONS(192),
    [anon_sym_env] = ACTIONS(192),
    [anon_sym_is_dependency] = ACTIONS(192),
    [anon_sym_invocation_dir] = ACTIONS(192),
    [anon_sym_invocation_dir_native] = ACTIONS(192),
    [anon_sym_invocation_directory] = ACTIONS(192),
    [anon_sym_invocation_directory_native] = ACTIONS(192),
    [anon_sym_justfile] = ACTIONS(192),
    [anon_sym_justfile_dir] = ACTIONS(192),
    [anon_sym_justfile_directory] = ACTIONS(192),
    [anon_sym_source_dir] = ACTIONS(192),
    [anon_sym_source_directory] = ACTIONS(192),
    [anon_sym_source_file] = ACTIONS(192),
    [anon_sym_just_executable] = ACTIONS(192),
    [anon_sym_just_pid] = ACTIONS(192),
    [anon_sym_append] = ACTIONS(192),
    [anon_sym_prepend] = ACTIONS(192),
    [anon_sym_encode_uri_component] = ACTIONS(192),
    [anon_sym_quote] = ACTIONS(192),
    [anon_sym_replace] = ACTIONS(192),
    [anon_sym_replace_regex] = ACTIONS(192),
    [anon_sym_trim] = ACTIONS(192),
    [anon_sym_trim_end] = ACTIONS(192),
    [anon_sym_trim_end_match] = ACTIONS(192),
    [anon_sym_trim_end_matches] = ACTIONS(192),
    [anon_sym_trim_start] = ACTIONS(192),
    [anon_sym_trim_start_match] = ACTIONS(192),
    [anon_sym_trim_start_matches] = ACTIONS(192),
    [anon_sym_capitalize] = ACTIONS(192),
    [anon_sym_kebabcase] = ACTIONS(192),
    [anon_sym_lowercamelcase] = ACTIONS(192),
    [anon_sym_lowercase] = ACTIONS(192),
    [anon_sym_shoutykebabcase] = ACTIONS(192),
    [anon_sym_shoutysnakecase] = ACTIONS(192),
    [anon_sym_snakecase] = ACTIONS(192),
    [anon_sym_titlecase] = ACTIONS(192),
    [anon_sym_uppercamelcase] = ACTIONS(192),
    [anon_sym_uppercase] = ACTIONS(192),
    [anon_sym_absolute_path] = ACTIONS(192),
    [anon_sym_canonicalize] = ACTIONS(192),
    [anon_sym_extension] = ACTIONS(192),
    [anon_sym_file_name] = ACTIONS(192),
    [anon_sym_file_stem] = ACTIONS(192),
    [anon_sym_parent_dir] = ACTIONS(192),
    [anon_sym_parent_directory] = ACTIONS(192),
    [anon_sym_without_extension] = ACTIONS(192),
    [anon_sym_clean] = ACTIONS(192),
    [anon_sym_join] = ACTIONS(192),
    [anon_sym_path_exists] = ACTIONS(192),
    [anon_sym_error] = ACTIONS(192),
    [anon_sym_blake3] = ACTIONS(192),
    [anon_sym_blake3_file] = ACTIONS(192),
    [anon_sym_sha256] = ACTIONS(192),
    [anon_sym_sha256_file] = ACTIONS(192),
    [anon_sym_uuid] = ACTIONS(192),
    [anon_sym_choose] = ACTIONS(192),
    [anon_sym_datetime] = ACTIONS(192),
    [anon_sym_datetime_utc] = ACTIONS(192),
    [anon_sym_semver_matches] = ACTIONS(192),
    [anon_sym_cache_dir] = ACTIONS(192),
    [anon_sym_cache_directory] = ACTIONS(192),
    [anon_sym_config_dir] = ACTIONS(192),
    [anon_sym_config_directory] = ACTIONS(192),
    [anon_sym_config_local_dir] = ACTIONS(192),
    [anon_sym_config_local_directory] = ACTIONS(192),
    [anon_sym_data_dir] = ACTIONS(192),
    [anon_sym_data_directory] = ACTIONS(192),
    [anon_sym_data_local_dir] = ACTIONS(192),
    [anon_sym_data_local_directory] = ACTIONS(192),
    [anon_sym_executable_dir] = ACTIONS(192),
    [anon_sym_executable_directory] = ACTIONS(192),
    [anon_sym_home_dir] = ACTIONS(192),
    [anon_sym_home_directory] = ACTIONS(192),
    [anon_sym_set] = ACTIONS(192),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym_comment] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [anon_sym_alias] = ACTIONS(196),
    [aux_sym_import_token1] = ACTIONS(196),
    [aux_sym_mod_token1] = ACTIONS(196),
    [anon_sym_assert] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [anon_sym_BANG_EQ] = ACTIONS(194),
    [anon_sym_arch] = ACTIONS(196),
    [anon_sym_num_cpus] = ACTIONS(196),
    [anon_sym_os] = ACTIONS(196),
    [anon_sym_os_family] = ACTIONS(196),
    [anon_sym_shell] = ACTIONS(196),
    [anon_sym_env_var] = ACTIONS(196),
    [anon_sym_env_var_or_default] = ACTIONS(196),
    [anon_sym_env] = ACTIONS(196),
    [anon_sym_is_dependency] = ACTIONS(196),
    [anon_sym_invocation_dir] = ACTIONS(196),
    [anon_sym_invocation_dir_native] = ACTIONS(196),
    [anon_sym_invocation_directory] = ACTIONS(196),
    [anon_sym_invocation_directory_native] = ACTIONS(196),
    [anon_sym_justfile] = ACTIONS(196),
    [anon_sym_justfile_dir] = ACTIONS(196),
    [anon_sym_justfile_directory] = ACTIONS(196),
    [anon_sym_source_dir] = ACTIONS(196),
    [anon_sym_source_directory] = ACTIONS(196),
    [anon_sym_source_file] = ACTIONS(196),
    [anon_sym_just_executable] = ACTIONS(196),
    [anon_sym_just_pid] = ACTIONS(196),
    [anon_sym_append] = ACTIONS(196),
    [anon_sym_prepend] = ACTIONS(196),
    [anon_sym_encode_uri_component] = ACTIONS(196),
    [anon_sym_quote] = ACTIONS(196),
    [anon_sym_replace] = ACTIONS(196),
    [anon_sym_replace_regex] = ACTIONS(196),
    [anon_sym_trim] = ACTIONS(196),
    [anon_sym_trim_end] = ACTIONS(196),
    [anon_sym_trim_end_match] = ACTIONS(196),
    [anon_sym_trim_end_matches] = ACTIONS(196),
    [anon_sym_trim_start] = ACTIONS(196),
    [anon_sym_trim_start_match] = ACTIONS(196),
    [anon_sym_trim_start_matches] = ACTIONS(196),
    [anon_sym_capitalize] = ACTIONS(196),
    [anon_sym_kebabcase] = ACTIONS(196),
    [anon_sym_lowercamelcase] = ACTIONS(196),
    [anon_sym_lowercase] = ACTIONS(196),
    [anon_sym_shoutykebabcase] = ACTIONS(196),
    [anon_sym_shoutysnakecase] = ACTIONS(196),
    [anon_sym_snakecase] = ACTIONS(196),
    [anon_sym_titlecase] = ACTIONS(196),
    [anon_sym_uppercamelcase] = ACTIONS(196),
    [anon_sym_uppercase] = ACTIONS(196),
    [anon_sym_absolute_path] = ACTIONS(196),
    [anon_sym_canonicalize] = ACTIONS(196),
    [anon_sym_extension] = ACTIONS(196),
    [anon_sym_file_name] = ACTIONS(196),
    [anon_sym_file_stem] = ACTIONS(196),
    [anon_sym_parent_dir] = ACTIONS(196),
    [anon_sym_parent_directory] = ACTIONS(196),
    [anon_sym_without_extension] = ACTIONS(196),
    [anon_sym_clean] = ACTIONS(196),
    [anon_sym_join] = ACTIONS(196),
    [anon_sym_path_exists] = ACTIONS(196),
    [anon_sym_error] = ACTIONS(196),
    [anon_sym_blake3] = ACTIONS(196),
    [anon_sym_blake3_file] = ACTIONS(196),
    [anon_sym_sha256] = ACTIONS(196),
    [anon_sym_sha256_file] = ACTIONS(196),
    [anon_sym_uuid] = ACTIONS(196),
    [anon_sym_choose] = ACTIONS(196),
    [anon_sym_datetime] = ACTIONS(196),
    [anon_sym_datetime_utc] = ACTIONS(196),
    [anon_sym_semver_matches] = ACTIONS(196),
    [anon_sym_cache_dir] = ACTIONS(196),
    [anon_sym_cache_directory] = ACTIONS(196),
    [anon_sym_config_dir] = ACTIONS(196),
    [anon_sym_config_directory] = ACTIONS(196),
    [anon_sym_config_local_dir] = ACTIONS(196),
    [anon_sym_config_local_directory] = ACTIONS(196),
    [anon_sym_data_dir] = ACTIONS(196),
    [anon_sym_data_directory] = ACTIONS(196),
    [anon_sym_data_local_dir] = ACTIONS(196),
    [anon_sym_data_local_directory] = ACTIONS(196),
    [anon_sym_executable_dir] = ACTIONS(196),
    [anon_sym_executable_directory] = ACTIONS(196),
    [anon_sym_home_dir] = ACTIONS(196),
    [anon_sym_home_directory] = ACTIONS(196),
    [anon_sym_set] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym_expression] = STATE(110),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(37),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym_comment] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
    [anon_sym_alias] = ACTIONS(200),
    [aux_sym_import_token1] = ACTIONS(200),
    [aux_sym_mod_token1] = ACTIONS(200),
    [anon_sym_assert] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_EQ_EQ] = ACTIONS(198),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_arch] = ACTIONS(200),
    [anon_sym_num_cpus] = ACTIONS(200),
    [anon_sym_os] = ACTIONS(200),
    [anon_sym_os_family] = ACTIONS(200),
    [anon_sym_shell] = ACTIONS(200),
    [anon_sym_env_var] = ACTIONS(200),
    [anon_sym_env_var_or_default] = ACTIONS(200),
    [anon_sym_env] = ACTIONS(200),
    [anon_sym_is_dependency] = ACTIONS(200),
    [anon_sym_invocation_dir] = ACTIONS(200),
    [anon_sym_invocation_dir_native] = ACTIONS(200),
    [anon_sym_invocation_directory] = ACTIONS(200),
    [anon_sym_invocation_directory_native] = ACTIONS(200),
    [anon_sym_justfile] = ACTIONS(200),
    [anon_sym_justfile_dir] = ACTIONS(200),
    [anon_sym_justfile_directory] = ACTIONS(200),
    [anon_sym_source_dir] = ACTIONS(200),
    [anon_sym_source_directory] = ACTIONS(200),
    [anon_sym_source_file] = ACTIONS(200),
    [anon_sym_just_executable] = ACTIONS(200),
    [anon_sym_just_pid] = ACTIONS(200),
    [anon_sym_append] = ACTIONS(200),
    [anon_sym_prepend] = ACTIONS(200),
    [anon_sym_encode_uri_component] = ACTIONS(200),
    [anon_sym_quote] = ACTIONS(200),
    [anon_sym_replace] = ACTIONS(200),
    [anon_sym_replace_regex] = ACTIONS(200),
    [anon_sym_trim] = ACTIONS(200),
    [anon_sym_trim_end] = ACTIONS(200),
    [anon_sym_trim_end_match] = ACTIONS(200),
    [anon_sym_trim_end_matches] = ACTIONS(200),
    [anon_sym_trim_start] = ACTIONS(200),
    [anon_sym_trim_start_match] = ACTIONS(200),
    [anon_sym_trim_start_matches] = ACTIONS(200),
    [anon_sym_capitalize] = ACTIONS(200),
    [anon_sym_kebabcase] = ACTIONS(200),
    [anon_sym_lowercamelcase] = ACTIONS(200),
    [anon_sym_lowercase] = ACTIONS(200),
    [anon_sym_shoutykebabcase] = ACTIONS(200),
    [anon_sym_shoutysnakecase] = ACTIONS(200),
    [anon_sym_snakecase] = ACTIONS(200),
    [anon_sym_titlecase] = ACTIONS(200),
    [anon_sym_uppercamelcase] = ACTIONS(200),
    [anon_sym_uppercase] = ACTIONS(200),
    [anon_sym_absolute_path] = ACTIONS(200),
    [anon_sym_canonicalize] = ACTIONS(200),
    [anon_sym_extension] = ACTIONS(200),
    [anon_sym_file_name] = ACTIONS(200),
    [anon_sym_file_stem] = ACTIONS(200),
    [anon_sym_parent_dir] = ACTIONS(200),
    [anon_sym_parent_directory] = ACTIONS(200),
    [anon_sym_without_extension] = ACTIONS(200),
    [anon_sym_clean] = ACTIONS(200),
    [anon_sym_join] = ACTIONS(200),
    [anon_sym_path_exists] = ACTIONS(200),
    [anon_sym_error] = ACTIONS(200),
    [anon_sym_blake3] = ACTIONS(200),
    [anon_sym_blake3_file] = ACTIONS(200),
    [anon_sym_sha256] = ACTIONS(200),
    [anon_sym_sha256_file] = ACTIONS(200),
    [anon_sym_uuid] = ACTIONS(200),
    [anon_sym_choose] = ACTIONS(200),
    [anon_sym_datetime] = ACTIONS(200),
    [anon_sym_datetime_utc] = ACTIONS(200),
    [anon_sym_semver_matches] = ACTIONS(200),
    [anon_sym_cache_dir] = ACTIONS(200),
    [anon_sym_cache_directory] = ACTIONS(200),
    [anon_sym_config_dir] = ACTIONS(200),
    [anon_sym_config_directory] = ACTIONS(200),
    [anon_sym_config_local_dir] = ACTIONS(200),
    [anon_sym_config_local_directory] = ACTIONS(200),
    [anon_sym_data_dir] = ACTIONS(200),
    [anon_sym_data_directory] = ACTIONS(200),
    [anon_sym_data_local_dir] = ACTIONS(200),
    [anon_sym_data_local_directory] = ACTIONS(200),
    [anon_sym_executable_dir] = ACTIONS(200),
    [anon_sym_executable_directory] = ACTIONS(200),
    [anon_sym_home_dir] = ACTIONS(200),
    [anon_sym_home_directory] = ACTIONS(200),
    [anon_sym_set] = ACTIONS(200),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(198),
    [anon_sym_SQUOTE] = ACTIONS(200),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [39] = {
    [sym_expression] = STATE(109),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(39),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [40] = {
    [sym_expression] = STATE(134),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(40),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [41] = {
    [sym_expression] = STATE(97),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [42] = {
    [sym_expression] = STATE(129),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(42),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [43] = {
    [sym_comment] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_identifier] = ACTIONS(204),
    [anon_sym_alias] = ACTIONS(204),
    [aux_sym_import_token1] = ACTIONS(204),
    [aux_sym_mod_token1] = ACTIONS(204),
    [anon_sym_assert] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(202),
    [anon_sym_arch] = ACTIONS(204),
    [anon_sym_num_cpus] = ACTIONS(204),
    [anon_sym_os] = ACTIONS(204),
    [anon_sym_os_family] = ACTIONS(204),
    [anon_sym_shell] = ACTIONS(204),
    [anon_sym_env_var] = ACTIONS(204),
    [anon_sym_env_var_or_default] = ACTIONS(204),
    [anon_sym_env] = ACTIONS(204),
    [anon_sym_is_dependency] = ACTIONS(204),
    [anon_sym_invocation_dir] = ACTIONS(204),
    [anon_sym_invocation_dir_native] = ACTIONS(204),
    [anon_sym_invocation_directory] = ACTIONS(204),
    [anon_sym_invocation_directory_native] = ACTIONS(204),
    [anon_sym_justfile] = ACTIONS(204),
    [anon_sym_justfile_dir] = ACTIONS(204),
    [anon_sym_justfile_directory] = ACTIONS(204),
    [anon_sym_source_dir] = ACTIONS(204),
    [anon_sym_source_directory] = ACTIONS(204),
    [anon_sym_source_file] = ACTIONS(204),
    [anon_sym_just_executable] = ACTIONS(204),
    [anon_sym_just_pid] = ACTIONS(204),
    [anon_sym_append] = ACTIONS(204),
    [anon_sym_prepend] = ACTIONS(204),
    [anon_sym_encode_uri_component] = ACTIONS(204),
    [anon_sym_quote] = ACTIONS(204),
    [anon_sym_replace] = ACTIONS(204),
    [anon_sym_replace_regex] = ACTIONS(204),
    [anon_sym_trim] = ACTIONS(204),
    [anon_sym_trim_end] = ACTIONS(204),
    [anon_sym_trim_end_match] = ACTIONS(204),
    [anon_sym_trim_end_matches] = ACTIONS(204),
    [anon_sym_trim_start] = ACTIONS(204),
    [anon_sym_trim_start_match] = ACTIONS(204),
    [anon_sym_trim_start_matches] = ACTIONS(204),
    [anon_sym_capitalize] = ACTIONS(204),
    [anon_sym_kebabcase] = ACTIONS(204),
    [anon_sym_lowercamelcase] = ACTIONS(204),
    [anon_sym_lowercase] = ACTIONS(204),
    [anon_sym_shoutykebabcase] = ACTIONS(204),
    [anon_sym_shoutysnakecase] = ACTIONS(204),
    [anon_sym_snakecase] = ACTIONS(204),
    [anon_sym_titlecase] = ACTIONS(204),
    [anon_sym_uppercamelcase] = ACTIONS(204),
    [anon_sym_uppercase] = ACTIONS(204),
    [anon_sym_absolute_path] = ACTIONS(204),
    [anon_sym_canonicalize] = ACTIONS(204),
    [anon_sym_extension] = ACTIONS(204),
    [anon_sym_file_name] = ACTIONS(204),
    [anon_sym_file_stem] = ACTIONS(204),
    [anon_sym_parent_dir] = ACTIONS(204),
    [anon_sym_parent_directory] = ACTIONS(204),
    [anon_sym_without_extension] = ACTIONS(204),
    [anon_sym_clean] = ACTIONS(204),
    [anon_sym_join] = ACTIONS(204),
    [anon_sym_path_exists] = ACTIONS(204),
    [anon_sym_error] = ACTIONS(204),
    [anon_sym_blake3] = ACTIONS(204),
    [anon_sym_blake3_file] = ACTIONS(204),
    [anon_sym_sha256] = ACTIONS(204),
    [anon_sym_sha256_file] = ACTIONS(204),
    [anon_sym_uuid] = ACTIONS(204),
    [anon_sym_choose] = ACTIONS(204),
    [anon_sym_datetime] = ACTIONS(204),
    [anon_sym_datetime_utc] = ACTIONS(204),
    [anon_sym_semver_matches] = ACTIONS(204),
    [anon_sym_cache_dir] = ACTIONS(204),
    [anon_sym_cache_directory] = ACTIONS(204),
    [anon_sym_config_dir] = ACTIONS(204),
    [anon_sym_config_directory] = ACTIONS(204),
    [anon_sym_config_local_dir] = ACTIONS(204),
    [anon_sym_config_local_directory] = ACTIONS(204),
    [anon_sym_data_dir] = ACTIONS(204),
    [anon_sym_data_directory] = ACTIONS(204),
    [anon_sym_data_local_dir] = ACTIONS(204),
    [anon_sym_data_local_directory] = ACTIONS(204),
    [anon_sym_executable_dir] = ACTIONS(204),
    [anon_sym_executable_directory] = ACTIONS(204),
    [anon_sym_home_dir] = ACTIONS(204),
    [anon_sym_home_directory] = ACTIONS(204),
    [anon_sym_set] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(204),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(202),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [44] = {
    [sym_expression] = STATE(104),
    [sym_value] = STATE(31),
    [sym_builtin_function_call] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_backtick] = STATE(32),
    [sym_indented_backtick] = STATE(32),
    [sym_string] = STATE(32),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(44),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_arch] = ACTIONS(19),
    [anon_sym_num_cpus] = ACTIONS(19),
    [anon_sym_os] = ACTIONS(19),
    [anon_sym_os_family] = ACTIONS(19),
    [anon_sym_shell] = ACTIONS(21),
    [anon_sym_env_var] = ACTIONS(23),
    [anon_sym_env_var_or_default] = ACTIONS(25),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_is_dependency] = ACTIONS(19),
    [anon_sym_invocation_dir] = ACTIONS(19),
    [anon_sym_invocation_dir_native] = ACTIONS(19),
    [anon_sym_invocation_directory] = ACTIONS(19),
    [anon_sym_invocation_directory_native] = ACTIONS(19),
    [anon_sym_justfile] = ACTIONS(19),
    [anon_sym_justfile_dir] = ACTIONS(19),
    [anon_sym_justfile_directory] = ACTIONS(19),
    [anon_sym_source_dir] = ACTIONS(19),
    [anon_sym_source_directory] = ACTIONS(19),
    [anon_sym_source_file] = ACTIONS(19),
    [anon_sym_just_executable] = ACTIONS(19),
    [anon_sym_just_pid] = ACTIONS(19),
    [anon_sym_append] = ACTIONS(25),
    [anon_sym_prepend] = ACTIONS(25),
    [anon_sym_encode_uri_component] = ACTIONS(23),
    [anon_sym_quote] = ACTIONS(23),
    [anon_sym_replace] = ACTIONS(29),
    [anon_sym_replace_regex] = ACTIONS(29),
    [anon_sym_trim] = ACTIONS(23),
    [anon_sym_trim_end] = ACTIONS(23),
    [anon_sym_trim_end_match] = ACTIONS(25),
    [anon_sym_trim_end_matches] = ACTIONS(25),
    [anon_sym_trim_start] = ACTIONS(23),
    [anon_sym_trim_start_match] = ACTIONS(25),
    [anon_sym_trim_start_matches] = ACTIONS(25),
    [anon_sym_capitalize] = ACTIONS(23),
    [anon_sym_kebabcase] = ACTIONS(23),
    [anon_sym_lowercamelcase] = ACTIONS(23),
    [anon_sym_lowercase] = ACTIONS(23),
    [anon_sym_shoutykebabcase] = ACTIONS(23),
    [anon_sym_shoutysnakecase] = ACTIONS(23),
    [anon_sym_snakecase] = ACTIONS(23),
    [anon_sym_titlecase] = ACTIONS(23),
    [anon_sym_uppercamelcase] = ACTIONS(23),
    [anon_sym_uppercase] = ACTIONS(23),
    [anon_sym_absolute_path] = ACTIONS(23),
    [anon_sym_canonicalize] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(23),
    [anon_sym_file_name] = ACTIONS(23),
    [anon_sym_file_stem] = ACTIONS(23),
    [anon_sym_parent_dir] = ACTIONS(23),
    [anon_sym_parent_directory] = ACTIONS(23),
    [anon_sym_without_extension] = ACTIONS(23),
    [anon_sym_clean] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(21),
    [anon_sym_path_exists] = ACTIONS(23),
    [anon_sym_error] = ACTIONS(23),
    [anon_sym_blake3] = ACTIONS(23),
    [anon_sym_blake3_file] = ACTIONS(23),
    [anon_sym_sha256] = ACTIONS(23),
    [anon_sym_sha256_file] = ACTIONS(23),
    [anon_sym_uuid] = ACTIONS(19),
    [anon_sym_choose] = ACTIONS(25),
    [anon_sym_datetime] = ACTIONS(23),
    [anon_sym_datetime_utc] = ACTIONS(23),
    [anon_sym_semver_matches] = ACTIONS(25),
    [anon_sym_cache_dir] = ACTIONS(19),
    [anon_sym_cache_directory] = ACTIONS(19),
    [anon_sym_config_dir] = ACTIONS(19),
    [anon_sym_config_directory] = ACTIONS(19),
    [anon_sym_config_local_dir] = ACTIONS(19),
    [anon_sym_config_local_directory] = ACTIONS(19),
    [anon_sym_data_dir] = ACTIONS(19),
    [anon_sym_data_directory] = ACTIONS(19),
    [anon_sym_data_local_dir] = ACTIONS(19),
    [anon_sym_data_local_directory] = ACTIONS(19),
    [anon_sym_executable_dir] = ACTIONS(19),
    [anon_sym_executable_directory] = ACTIONS(19),
    [anon_sym_home_dir] = ACTIONS(19),
    [anon_sym_home_directory] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [45] = {
    [sym_comment] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_identifier] = ACTIONS(208),
    [anon_sym_alias] = ACTIONS(208),
    [aux_sym_import_token1] = ACTIONS(208),
    [aux_sym_mod_token1] = ACTIONS(208),
    [anon_sym_assert] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_EQ_EQ] = ACTIONS(206),
    [anon_sym_BANG_EQ] = ACTIONS(206),
    [anon_sym_arch] = ACTIONS(208),
    [anon_sym_num_cpus] = ACTIONS(208),
    [anon_sym_os] = ACTIONS(208),
    [anon_sym_os_family] = ACTIONS(208),
    [anon_sym_shell] = ACTIONS(208),
    [anon_sym_env_var] = ACTIONS(208),
    [anon_sym_env_var_or_default] = ACTIONS(208),
    [anon_sym_env] = ACTIONS(208),
    [anon_sym_is_dependency] = ACTIONS(208),
    [anon_sym_invocation_dir] = ACTIONS(208),
    [anon_sym_invocation_dir_native] = ACTIONS(208),
    [anon_sym_invocation_directory] = ACTIONS(208),
    [anon_sym_invocation_directory_native] = ACTIONS(208),
    [anon_sym_justfile] = ACTIONS(208),
    [anon_sym_justfile_dir] = ACTIONS(208),
    [anon_sym_justfile_directory] = ACTIONS(208),
    [anon_sym_source_dir] = ACTIONS(208),
    [anon_sym_source_directory] = ACTIONS(208),
    [anon_sym_source_file] = ACTIONS(208),
    [anon_sym_just_executable] = ACTIONS(208),
    [anon_sym_just_pid] = ACTIONS(208),
    [anon_sym_append] = ACTIONS(208),
    [anon_sym_prepend] = ACTIONS(208),
    [anon_sym_encode_uri_component] = ACTIONS(208),
    [anon_sym_quote] = ACTIONS(208),
    [anon_sym_replace] = ACTIONS(208),
    [anon_sym_replace_regex] = ACTIONS(208),
    [anon_sym_trim] = ACTIONS(208),
    [anon_sym_trim_end] = ACTIONS(208),
    [anon_sym_trim_end_match] = ACTIONS(208),
    [anon_sym_trim_end_matches] = ACTIONS(208),
    [anon_sym_trim_start] = ACTIONS(208),
    [anon_sym_trim_start_match] = ACTIONS(208),
    [anon_sym_trim_start_matches] = ACTIONS(208),
    [anon_sym_capitalize] = ACTIONS(208),
    [anon_sym_kebabcase] = ACTIONS(208),
    [anon_sym_lowercamelcase] = ACTIONS(208),
    [anon_sym_lowercase] = ACTIONS(208),
    [anon_sym_shoutykebabcase] = ACTIONS(208),
    [anon_sym_shoutysnakecase] = ACTIONS(208),
    [anon_sym_snakecase] = ACTIONS(208),
    [anon_sym_titlecase] = ACTIONS(208),
    [anon_sym_uppercamelcase] = ACTIONS(208),
    [anon_sym_uppercase] = ACTIONS(208),
    [anon_sym_absolute_path] = ACTIONS(208),
    [anon_sym_canonicalize] = ACTIONS(208),
    [anon_sym_extension] = ACTIONS(208),
    [anon_sym_file_name] = ACTIONS(208),
    [anon_sym_file_stem] = ACTIONS(208),
    [anon_sym_parent_dir] = ACTIONS(208),
    [anon_sym_parent_directory] = ACTIONS(208),
    [anon_sym_without_extension] = ACTIONS(208),
    [anon_sym_clean] = ACTIONS(208),
    [anon_sym_join] = ACTIONS(208),
    [anon_sym_path_exists] = ACTIONS(208),
    [anon_sym_error] = ACTIONS(208),
    [anon_sym_blake3] = ACTIONS(208),
    [anon_sym_blake3_file] = ACTIONS(208),
    [anon_sym_sha256] = ACTIONS(208),
    [anon_sym_sha256_file] = ACTIONS(208),
    [anon_sym_uuid] = ACTIONS(208),
    [anon_sym_choose] = ACTIONS(208),
    [anon_sym_datetime] = ACTIONS(208),
    [anon_sym_datetime_utc] = ACTIONS(208),
    [anon_sym_semver_matches] = ACTIONS(208),
    [anon_sym_cache_dir] = ACTIONS(208),
    [anon_sym_cache_directory] = ACTIONS(208),
    [anon_sym_config_dir] = ACTIONS(208),
    [anon_sym_config_directory] = ACTIONS(208),
    [anon_sym_config_local_dir] = ACTIONS(208),
    [anon_sym_config_local_directory] = ACTIONS(208),
    [anon_sym_data_dir] = ACTIONS(208),
    [anon_sym_data_directory] = ACTIONS(208),
    [anon_sym_data_local_dir] = ACTIONS(208),
    [anon_sym_data_local_directory] = ACTIONS(208),
    [anon_sym_executable_dir] = ACTIONS(208),
    [anon_sym_executable_directory] = ACTIONS(208),
    [anon_sym_home_dir] = ACTIONS(208),
    [anon_sym_home_directory] = ACTIONS(208),
    [anon_sym_set] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [46] = {
    [sym_comment] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_alias] = ACTIONS(212),
    [aux_sym_import_token1] = ACTIONS(212),
    [aux_sym_mod_token1] = ACTIONS(212),
    [anon_sym_assert] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [anon_sym_BANG_EQ] = ACTIONS(210),
    [anon_sym_arch] = ACTIONS(212),
    [anon_sym_num_cpus] = ACTIONS(212),
    [anon_sym_os] = ACTIONS(212),
    [anon_sym_os_family] = ACTIONS(212),
    [anon_sym_shell] = ACTIONS(212),
    [anon_sym_env_var] = ACTIONS(212),
    [anon_sym_env_var_or_default] = ACTIONS(212),
    [anon_sym_env] = ACTIONS(212),
    [anon_sym_is_dependency] = ACTIONS(212),
    [anon_sym_invocation_dir] = ACTIONS(212),
    [anon_sym_invocation_dir_native] = ACTIONS(212),
    [anon_sym_invocation_directory] = ACTIONS(212),
    [anon_sym_invocation_directory_native] = ACTIONS(212),
    [anon_sym_justfile] = ACTIONS(212),
    [anon_sym_justfile_dir] = ACTIONS(212),
    [anon_sym_justfile_directory] = ACTIONS(212),
    [anon_sym_source_dir] = ACTIONS(212),
    [anon_sym_source_directory] = ACTIONS(212),
    [anon_sym_source_file] = ACTIONS(212),
    [anon_sym_just_executable] = ACTIONS(212),
    [anon_sym_just_pid] = ACTIONS(212),
    [anon_sym_append] = ACTIONS(212),
    [anon_sym_prepend] = ACTIONS(212),
    [anon_sym_encode_uri_component] = ACTIONS(212),
    [anon_sym_quote] = ACTIONS(212),
    [anon_sym_replace] = ACTIONS(212),
    [anon_sym_replace_regex] = ACTIONS(212),
    [anon_sym_trim] = ACTIONS(212),
    [anon_sym_trim_end] = ACTIONS(212),
    [anon_sym_trim_end_match] = ACTIONS(212),
    [anon_sym_trim_end_matches] = ACTIONS(212),
    [anon_sym_trim_start] = ACTIONS(212),
    [anon_sym_trim_start_match] = ACTIONS(212),
    [anon_sym_trim_start_matches] = ACTIONS(212),
    [anon_sym_capitalize] = ACTIONS(212),
    [anon_sym_kebabcase] = ACTIONS(212),
    [anon_sym_lowercamelcase] = ACTIONS(212),
    [anon_sym_lowercase] = ACTIONS(212),
    [anon_sym_shoutykebabcase] = ACTIONS(212),
    [anon_sym_shoutysnakecase] = ACTIONS(212),
    [anon_sym_snakecase] = ACTIONS(212),
    [anon_sym_titlecase] = ACTIONS(212),
    [anon_sym_uppercamelcase] = ACTIONS(212),
    [anon_sym_uppercase] = ACTIONS(212),
    [anon_sym_absolute_path] = ACTIONS(212),
    [anon_sym_canonicalize] = ACTIONS(212),
    [anon_sym_extension] = ACTIONS(212),
    [anon_sym_file_name] = ACTIONS(212),
    [anon_sym_file_stem] = ACTIONS(212),
    [anon_sym_parent_dir] = ACTIONS(212),
    [anon_sym_parent_directory] = ACTIONS(212),
    [anon_sym_without_extension] = ACTIONS(212),
    [anon_sym_clean] = ACTIONS(212),
    [anon_sym_join] = ACTIONS(212),
    [anon_sym_path_exists] = ACTIONS(212),
    [anon_sym_error] = ACTIONS(212),
    [anon_sym_blake3] = ACTIONS(212),
    [anon_sym_blake3_file] = ACTIONS(212),
    [anon_sym_sha256] = ACTIONS(212),
    [anon_sym_sha256_file] = ACTIONS(212),
    [anon_sym_uuid] = ACTIONS(212),
    [anon_sym_choose] = ACTIONS(212),
    [anon_sym_datetime] = ACTIONS(212),
    [anon_sym_datetime_utc] = ACTIONS(212),
    [anon_sym_semver_matches] = ACTIONS(212),
    [anon_sym_cache_dir] = ACTIONS(212),
    [anon_sym_cache_directory] = ACTIONS(212),
    [anon_sym_config_dir] = ACTIONS(212),
    [anon_sym_config_directory] = ACTIONS(212),
    [anon_sym_config_local_dir] = ACTIONS(212),
    [anon_sym_config_local_directory] = ACTIONS(212),
    [anon_sym_data_dir] = ACTIONS(212),
    [anon_sym_data_directory] = ACTIONS(212),
    [anon_sym_data_local_dir] = ACTIONS(212),
    [anon_sym_data_local_directory] = ACTIONS(212),
    [anon_sym_executable_dir] = ACTIONS(212),
    [anon_sym_executable_directory] = ACTIONS(212),
    [anon_sym_home_dir] = ACTIONS(212),
    [anon_sym_home_directory] = ACTIONS(212),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [47] = {
    [sym_comment] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_identifier] = ACTIONS(216),
    [anon_sym_alias] = ACTIONS(216),
    [aux_sym_import_token1] = ACTIONS(216),
    [aux_sym_mod_token1] = ACTIONS(216),
    [anon_sym_assert] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [anon_sym_BANG_EQ] = ACTIONS(214),
    [anon_sym_arch] = ACTIONS(216),
    [anon_sym_num_cpus] = ACTIONS(216),
    [anon_sym_os] = ACTIONS(216),
    [anon_sym_os_family] = ACTIONS(216),
    [anon_sym_shell] = ACTIONS(216),
    [anon_sym_env_var] = ACTIONS(216),
    [anon_sym_env_var_or_default] = ACTIONS(216),
    [anon_sym_env] = ACTIONS(216),
    [anon_sym_is_dependency] = ACTIONS(216),
    [anon_sym_invocation_dir] = ACTIONS(216),
    [anon_sym_invocation_dir_native] = ACTIONS(216),
    [anon_sym_invocation_directory] = ACTIONS(216),
    [anon_sym_invocation_directory_native] = ACTIONS(216),
    [anon_sym_justfile] = ACTIONS(216),
    [anon_sym_justfile_dir] = ACTIONS(216),
    [anon_sym_justfile_directory] = ACTIONS(216),
    [anon_sym_source_dir] = ACTIONS(216),
    [anon_sym_source_directory] = ACTIONS(216),
    [anon_sym_source_file] = ACTIONS(216),
    [anon_sym_just_executable] = ACTIONS(216),
    [anon_sym_just_pid] = ACTIONS(216),
    [anon_sym_append] = ACTIONS(216),
    [anon_sym_prepend] = ACTIONS(216),
    [anon_sym_encode_uri_component] = ACTIONS(216),
    [anon_sym_quote] = ACTIONS(216),
    [anon_sym_replace] = ACTIONS(216),
    [anon_sym_replace_regex] = ACTIONS(216),
    [anon_sym_trim] = ACTIONS(216),
    [anon_sym_trim_end] = ACTIONS(216),
    [anon_sym_trim_end_match] = ACTIONS(216),
    [anon_sym_trim_end_matches] = ACTIONS(216),
    [anon_sym_trim_start] = ACTIONS(216),
    [anon_sym_trim_start_match] = ACTIONS(216),
    [anon_sym_trim_start_matches] = ACTIONS(216),
    [anon_sym_capitalize] = ACTIONS(216),
    [anon_sym_kebabcase] = ACTIONS(216),
    [anon_sym_lowercamelcase] = ACTIONS(216),
    [anon_sym_lowercase] = ACTIONS(216),
    [anon_sym_shoutykebabcase] = ACTIONS(216),
    [anon_sym_shoutysnakecase] = ACTIONS(216),
    [anon_sym_snakecase] = ACTIONS(216),
    [anon_sym_titlecase] = ACTIONS(216),
    [anon_sym_uppercamelcase] = ACTIONS(216),
    [anon_sym_uppercase] = ACTIONS(216),
    [anon_sym_absolute_path] = ACTIONS(216),
    [anon_sym_canonicalize] = ACTIONS(216),
    [anon_sym_extension] = ACTIONS(216),
    [anon_sym_file_name] = ACTIONS(216),
    [anon_sym_file_stem] = ACTIONS(216),
    [anon_sym_parent_dir] = ACTIONS(216),
    [anon_sym_parent_directory] = ACTIONS(216),
    [anon_sym_without_extension] = ACTIONS(216),
    [anon_sym_clean] = ACTIONS(216),
    [anon_sym_join] = ACTIONS(216),
    [anon_sym_path_exists] = ACTIONS(216),
    [anon_sym_error] = ACTIONS(216),
    [anon_sym_blake3] = ACTIONS(216),
    [anon_sym_blake3_file] = ACTIONS(216),
    [anon_sym_sha256] = ACTIONS(216),
    [anon_sym_sha256_file] = ACTIONS(216),
    [anon_sym_uuid] = ACTIONS(216),
    [anon_sym_choose] = ACTIONS(216),
    [anon_sym_datetime] = ACTIONS(216),
    [anon_sym_datetime_utc] = ACTIONS(216),
    [anon_sym_semver_matches] = ACTIONS(216),
    [anon_sym_cache_dir] = ACTIONS(216),
    [anon_sym_cache_directory] = ACTIONS(216),
    [anon_sym_config_dir] = ACTIONS(216),
    [anon_sym_config_directory] = ACTIONS(216),
    [anon_sym_config_local_dir] = ACTIONS(216),
    [anon_sym_config_local_directory] = ACTIONS(216),
    [anon_sym_data_dir] = ACTIONS(216),
    [anon_sym_data_directory] = ACTIONS(216),
    [anon_sym_data_local_dir] = ACTIONS(216),
    [anon_sym_data_local_directory] = ACTIONS(216),
    [anon_sym_executable_dir] = ACTIONS(216),
    [anon_sym_executable_directory] = ACTIONS(216),
    [anon_sym_home_dir] = ACTIONS(216),
    [anon_sym_home_directory] = ACTIONS(216),
    [anon_sym_set] = ACTIONS(216),
    [anon_sym_BQUOTE] = ACTIONS(216),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(214),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [48] = {
    [sym_string] = STATE(62),
    [sym_indented_normal_string] = STATE(13),
    [sym_normal_string] = STATE(13),
    [sym_indented_raw_string] = STATE(13),
    [sym_raw_string] = STATE(13),
    [sym_comment] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_identifier] = ACTIONS(220),
    [anon_sym_alias] = ACTIONS(220),
    [aux_sym_import_token1] = ACTIONS(220),
    [aux_sym_mod_token1] = ACTIONS(220),
    [anon_sym_assert] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_arch] = ACTIONS(220),
    [anon_sym_num_cpus] = ACTIONS(220),
    [anon_sym_os] = ACTIONS(220),
    [anon_sym_os_family] = ACTIONS(220),
    [anon_sym_shell] = ACTIONS(220),
    [anon_sym_env_var] = ACTIONS(220),
    [anon_sym_env_var_or_default] = ACTIONS(220),
    [anon_sym_env] = ACTIONS(220),
    [anon_sym_is_dependency] = ACTIONS(220),
    [anon_sym_invocation_dir] = ACTIONS(220),
    [anon_sym_invocation_dir_native] = ACTIONS(220),
    [anon_sym_invocation_directory] = ACTIONS(220),
    [anon_sym_invocation_directory_native] = ACTIONS(220),
    [anon_sym_justfile] = ACTIONS(220),
    [anon_sym_justfile_dir] = ACTIONS(220),
    [anon_sym_justfile_directory] = ACTIONS(220),
    [anon_sym_source_dir] = ACTIONS(220),
    [anon_sym_source_directory] = ACTIONS(220),
    [anon_sym_source_file] = ACTIONS(220),
    [anon_sym_just_executable] = ACTIONS(220),
    [anon_sym_just_pid] = ACTIONS(220),
    [anon_sym_append] = ACTIONS(220),
    [anon_sym_prepend] = ACTIONS(220),
    [anon_sym_encode_uri_component] = ACTIONS(220),
    [anon_sym_quote] = ACTIONS(220),
    [anon_sym_replace] = ACTIONS(220),
    [anon_sym_replace_regex] = ACTIONS(220),
    [anon_sym_trim] = ACTIONS(220),
    [anon_sym_trim_end] = ACTIONS(220),
    [anon_sym_trim_end_match] = ACTIONS(220),
    [anon_sym_trim_end_matches] = ACTIONS(220),
    [anon_sym_trim_start] = ACTIONS(220),
    [anon_sym_trim_start_match] = ACTIONS(220),
    [anon_sym_trim_start_matches] = ACTIONS(220),
    [anon_sym_capitalize] = ACTIONS(220),
    [anon_sym_kebabcase] = ACTIONS(220),
    [anon_sym_lowercamelcase] = ACTIONS(220),
    [anon_sym_lowercase] = ACTIONS(220),
    [anon_sym_shoutykebabcase] = ACTIONS(220),
    [anon_sym_shoutysnakecase] = ACTIONS(220),
    [anon_sym_snakecase] = ACTIONS(220),
    [anon_sym_titlecase] = ACTIONS(220),
    [anon_sym_uppercamelcase] = ACTIONS(220),
    [anon_sym_uppercase] = ACTIONS(220),
    [anon_sym_absolute_path] = ACTIONS(220),
    [anon_sym_canonicalize] = ACTIONS(220),
    [anon_sym_extension] = ACTIONS(220),
    [anon_sym_file_name] = ACTIONS(220),
    [anon_sym_file_stem] = ACTIONS(220),
    [anon_sym_parent_dir] = ACTIONS(220),
    [anon_sym_parent_directory] = ACTIONS(220),
    [anon_sym_without_extension] = ACTIONS(220),
    [anon_sym_clean] = ACTIONS(220),
    [anon_sym_join] = ACTIONS(220),
    [anon_sym_path_exists] = ACTIONS(220),
    [anon_sym_error] = ACTIONS(220),
    [anon_sym_blake3] = ACTIONS(220),
    [anon_sym_blake3_file] = ACTIONS(220),
    [anon_sym_sha256] = ACTIONS(220),
    [anon_sym_sha256_file] = ACTIONS(220),
    [anon_sym_uuid] = ACTIONS(220),
    [anon_sym_choose] = ACTIONS(220),
    [anon_sym_datetime] = ACTIONS(220),
    [anon_sym_datetime_utc] = ACTIONS(220),
    [anon_sym_semver_matches] = ACTIONS(220),
    [anon_sym_cache_dir] = ACTIONS(220),
    [anon_sym_cache_directory] = ACTIONS(220),
    [anon_sym_config_dir] = ACTIONS(220),
    [anon_sym_config_directory] = ACTIONS(220),
    [anon_sym_config_local_dir] = ACTIONS(220),
    [anon_sym_config_local_directory] = ACTIONS(220),
    [anon_sym_data_dir] = ACTIONS(220),
    [anon_sym_data_directory] = ACTIONS(220),
    [anon_sym_data_local_dir] = ACTIONS(220),
    [anon_sym_data_local_directory] = ACTIONS(220),
    [anon_sym_executable_dir] = ACTIONS(220),
    [anon_sym_executable_directory] = ACTIONS(220),
    [anon_sym_home_dir] = ACTIONS(220),
    [anon_sym_home_directory] = ACTIONS(220),
    [anon_sym_set] = ACTIONS(220),
    [anon_sym_BQUOTE] = ACTIONS(220),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [49] = {
    [sym__setting_boolean] = STATE(56),
    [sym__setting_string] = STATE(56),
    [sym__setting_list] = STATE(56),
    [sym_comment] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_alias] = ACTIONS(224),
    [anon_sym_COLON_EQ] = ACTIONS(226),
    [aux_sym_import_token1] = ACTIONS(224),
    [aux_sym_mod_token1] = ACTIONS(224),
    [anon_sym_assert] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_arch] = ACTIONS(224),
    [anon_sym_num_cpus] = ACTIONS(224),
    [anon_sym_os] = ACTIONS(224),
    [anon_sym_os_family] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(224),
    [anon_sym_env_var] = ACTIONS(224),
    [anon_sym_env_var_or_default] = ACTIONS(224),
    [anon_sym_env] = ACTIONS(224),
    [anon_sym_is_dependency] = ACTIONS(224),
    [anon_sym_invocation_dir] = ACTIONS(224),
    [anon_sym_invocation_dir_native] = ACTIONS(224),
    [anon_sym_invocation_directory] = ACTIONS(224),
    [anon_sym_invocation_directory_native] = ACTIONS(224),
    [anon_sym_justfile] = ACTIONS(224),
    [anon_sym_justfile_dir] = ACTIONS(224),
    [anon_sym_justfile_directory] = ACTIONS(224),
    [anon_sym_source_dir] = ACTIONS(224),
    [anon_sym_source_directory] = ACTIONS(224),
    [anon_sym_source_file] = ACTIONS(224),
    [anon_sym_just_executable] = ACTIONS(224),
    [anon_sym_just_pid] = ACTIONS(224),
    [anon_sym_append] = ACTIONS(224),
    [anon_sym_prepend] = ACTIONS(224),
    [anon_sym_encode_uri_component] = ACTIONS(224),
    [anon_sym_quote] = ACTIONS(224),
    [anon_sym_replace] = ACTIONS(224),
    [anon_sym_replace_regex] = ACTIONS(224),
    [anon_sym_trim] = ACTIONS(224),
    [anon_sym_trim_end] = ACTIONS(224),
    [anon_sym_trim_end_match] = ACTIONS(224),
    [anon_sym_trim_end_matches] = ACTIONS(224),
    [anon_sym_trim_start] = ACTIONS(224),
    [anon_sym_trim_start_match] = ACTIONS(224),
    [anon_sym_trim_start_matches] = ACTIONS(224),
    [anon_sym_capitalize] = ACTIONS(224),
    [anon_sym_kebabcase] = ACTIONS(224),
    [anon_sym_lowercamelcase] = ACTIONS(224),
    [anon_sym_lowercase] = ACTIONS(224),
    [anon_sym_shoutykebabcase] = ACTIONS(224),
    [anon_sym_shoutysnakecase] = ACTIONS(224),
    [anon_sym_snakecase] = ACTIONS(224),
    [anon_sym_titlecase] = ACTIONS(224),
    [anon_sym_uppercamelcase] = ACTIONS(224),
    [anon_sym_uppercase] = ACTIONS(224),
    [anon_sym_absolute_path] = ACTIONS(224),
    [anon_sym_canonicalize] = ACTIONS(224),
    [anon_sym_extension] = ACTIONS(224),
    [anon_sym_file_name] = ACTIONS(224),
    [anon_sym_file_stem] = ACTIONS(224),
    [anon_sym_parent_dir] = ACTIONS(224),
    [anon_sym_parent_directory] = ACTIONS(224),
    [anon_sym_without_extension] = ACTIONS(224),
    [anon_sym_clean] = ACTIONS(224),
    [anon_sym_join] = ACTIONS(224),
    [anon_sym_path_exists] = ACTIONS(224),
    [anon_sym_error] = ACTIONS(224),
    [anon_sym_blake3] = ACTIONS(224),
    [anon_sym_blake3_file] = ACTIONS(224),
    [anon_sym_sha256] = ACTIONS(224),
    [anon_sym_sha256_file] = ACTIONS(224),
    [anon_sym_uuid] = ACTIONS(224),
    [anon_sym_choose] = ACTIONS(224),
    [anon_sym_datetime] = ACTIONS(224),
    [anon_sym_datetime_utc] = ACTIONS(224),
    [anon_sym_semver_matches] = ACTIONS(224),
    [anon_sym_cache_dir] = ACTIONS(224),
    [anon_sym_cache_directory] = ACTIONS(224),
    [anon_sym_config_dir] = ACTIONS(224),
    [anon_sym_config_directory] = ACTIONS(224),
    [anon_sym_config_local_dir] = ACTIONS(224),
    [anon_sym_config_local_directory] = ACTIONS(224),
    [anon_sym_data_dir] = ACTIONS(224),
    [anon_sym_data_directory] = ACTIONS(224),
    [anon_sym_data_local_dir] = ACTIONS(224),
    [anon_sym_data_local_directory] = ACTIONS(224),
    [anon_sym_executable_dir] = ACTIONS(224),
    [anon_sym_executable_directory] = ACTIONS(224),
    [anon_sym_home_dir] = ACTIONS(224),
    [anon_sym_home_directory] = ACTIONS(224),
    [anon_sym_set] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [50] = {
    [sym_comment] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_identifier] = ACTIONS(230),
    [anon_sym_alias] = ACTIONS(230),
    [aux_sym_import_token1] = ACTIONS(230),
    [aux_sym_mod_token1] = ACTIONS(230),
    [anon_sym_assert] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(228),
    [anon_sym_arch] = ACTIONS(230),
    [anon_sym_num_cpus] = ACTIONS(230),
    [anon_sym_os] = ACTIONS(230),
    [anon_sym_os_family] = ACTIONS(230),
    [anon_sym_shell] = ACTIONS(230),
    [anon_sym_env_var] = ACTIONS(230),
    [anon_sym_env_var_or_default] = ACTIONS(230),
    [anon_sym_env] = ACTIONS(230),
    [anon_sym_is_dependency] = ACTIONS(230),
    [anon_sym_invocation_dir] = ACTIONS(230),
    [anon_sym_invocation_dir_native] = ACTIONS(230),
    [anon_sym_invocation_directory] = ACTIONS(230),
    [anon_sym_invocation_directory_native] = ACTIONS(230),
    [anon_sym_justfile] = ACTIONS(230),
    [anon_sym_justfile_dir] = ACTIONS(230),
    [anon_sym_justfile_directory] = ACTIONS(230),
    [anon_sym_source_dir] = ACTIONS(230),
    [anon_sym_source_directory] = ACTIONS(230),
    [anon_sym_source_file] = ACTIONS(230),
    [anon_sym_just_executable] = ACTIONS(230),
    [anon_sym_just_pid] = ACTIONS(230),
    [anon_sym_append] = ACTIONS(230),
    [anon_sym_prepend] = ACTIONS(230),
    [anon_sym_encode_uri_component] = ACTIONS(230),
    [anon_sym_quote] = ACTIONS(230),
    [anon_sym_replace] = ACTIONS(230),
    [anon_sym_replace_regex] = ACTIONS(230),
    [anon_sym_trim] = ACTIONS(230),
    [anon_sym_trim_end] = ACTIONS(230),
    [anon_sym_trim_end_match] = ACTIONS(230),
    [anon_sym_trim_end_matches] = ACTIONS(230),
    [anon_sym_trim_start] = ACTIONS(230),
    [anon_sym_trim_start_match] = ACTIONS(230),
    [anon_sym_trim_start_matches] = ACTIONS(230),
    [anon_sym_capitalize] = ACTIONS(230),
    [anon_sym_kebabcase] = ACTIONS(230),
    [anon_sym_lowercamelcase] = ACTIONS(230),
    [anon_sym_lowercase] = ACTIONS(230),
    [anon_sym_shoutykebabcase] = ACTIONS(230),
    [anon_sym_shoutysnakecase] = ACTIONS(230),
    [anon_sym_snakecase] = ACTIONS(230),
    [anon_sym_titlecase] = ACTIONS(230),
    [anon_sym_uppercamelcase] = ACTIONS(230),
    [anon_sym_uppercase] = ACTIONS(230),
    [anon_sym_absolute_path] = ACTIONS(230),
    [anon_sym_canonicalize] = ACTIONS(230),
    [anon_sym_extension] = ACTIONS(230),
    [anon_sym_file_name] = ACTIONS(230),
    [anon_sym_file_stem] = ACTIONS(230),
    [anon_sym_parent_dir] = ACTIONS(230),
    [anon_sym_parent_directory] = ACTIONS(230),
    [anon_sym_without_extension] = ACTIONS(230),
    [anon_sym_clean] = ACTIONS(230),
    [anon_sym_join] = ACTIONS(230),
    [anon_sym_path_exists] = ACTIONS(230),
    [anon_sym_error] = ACTIONS(230),
    [anon_sym_blake3] = ACTIONS(230),
    [anon_sym_blake3_file] = ACTIONS(230),
    [anon_sym_sha256] = ACTIONS(230),
    [anon_sym_sha256_file] = ACTIONS(230),
    [anon_sym_uuid] = ACTIONS(230),
    [anon_sym_choose] = ACTIONS(230),
    [anon_sym_datetime] = ACTIONS(230),
    [anon_sym_datetime_utc] = ACTIONS(230),
    [anon_sym_semver_matches] = ACTIONS(230),
    [anon_sym_cache_dir] = ACTIONS(230),
    [anon_sym_cache_directory] = ACTIONS(230),
    [anon_sym_config_dir] = ACTIONS(230),
    [anon_sym_config_directory] = ACTIONS(230),
    [anon_sym_config_local_dir] = ACTIONS(230),
    [anon_sym_config_local_directory] = ACTIONS(230),
    [anon_sym_data_dir] = ACTIONS(230),
    [anon_sym_data_directory] = ACTIONS(230),
    [anon_sym_data_local_dir] = ACTIONS(230),
    [anon_sym_data_local_directory] = ACTIONS(230),
    [anon_sym_executable_dir] = ACTIONS(230),
    [anon_sym_executable_directory] = ACTIONS(230),
    [anon_sym_home_dir] = ACTIONS(230),
    [anon_sym_home_directory] = ACTIONS(230),
    [anon_sym_set] = ACTIONS(230),
    [anon_sym_BQUOTE] = ACTIONS(230),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [51] = {
    [sym_comment] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_identifier] = ACTIONS(234),
    [anon_sym_alias] = ACTIONS(234),
    [aux_sym_import_token1] = ACTIONS(234),
    [aux_sym_mod_token1] = ACTIONS(234),
    [anon_sym_assert] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [anon_sym_BANG_EQ] = ACTIONS(232),
    [anon_sym_arch] = ACTIONS(234),
    [anon_sym_num_cpus] = ACTIONS(234),
    [anon_sym_os] = ACTIONS(234),
    [anon_sym_os_family] = ACTIONS(234),
    [anon_sym_shell] = ACTIONS(234),
    [anon_sym_env_var] = ACTIONS(234),
    [anon_sym_env_var_or_default] = ACTIONS(234),
    [anon_sym_env] = ACTIONS(234),
    [anon_sym_is_dependency] = ACTIONS(234),
    [anon_sym_invocation_dir] = ACTIONS(234),
    [anon_sym_invocation_dir_native] = ACTIONS(234),
    [anon_sym_invocation_directory] = ACTIONS(234),
    [anon_sym_invocation_directory_native] = ACTIONS(234),
    [anon_sym_justfile] = ACTIONS(234),
    [anon_sym_justfile_dir] = ACTIONS(234),
    [anon_sym_justfile_directory] = ACTIONS(234),
    [anon_sym_source_dir] = ACTIONS(234),
    [anon_sym_source_directory] = ACTIONS(234),
    [anon_sym_source_file] = ACTIONS(234),
    [anon_sym_just_executable] = ACTIONS(234),
    [anon_sym_just_pid] = ACTIONS(234),
    [anon_sym_append] = ACTIONS(234),
    [anon_sym_prepend] = ACTIONS(234),
    [anon_sym_encode_uri_component] = ACTIONS(234),
    [anon_sym_quote] = ACTIONS(234),
    [anon_sym_replace] = ACTIONS(234),
    [anon_sym_replace_regex] = ACTIONS(234),
    [anon_sym_trim] = ACTIONS(234),
    [anon_sym_trim_end] = ACTIONS(234),
    [anon_sym_trim_end_match] = ACTIONS(234),
    [anon_sym_trim_end_matches] = ACTIONS(234),
    [anon_sym_trim_start] = ACTIONS(234),
    [anon_sym_trim_start_match] = ACTIONS(234),
    [anon_sym_trim_start_matches] = ACTIONS(234),
    [anon_sym_capitalize] = ACTIONS(234),
    [anon_sym_kebabcase] = ACTIONS(234),
    [anon_sym_lowercamelcase] = ACTIONS(234),
    [anon_sym_lowercase] = ACTIONS(234),
    [anon_sym_shoutykebabcase] = ACTIONS(234),
    [anon_sym_shoutysnakecase] = ACTIONS(234),
    [anon_sym_snakecase] = ACTIONS(234),
    [anon_sym_titlecase] = ACTIONS(234),
    [anon_sym_uppercamelcase] = ACTIONS(234),
    [anon_sym_uppercase] = ACTIONS(234),
    [anon_sym_absolute_path] = ACTIONS(234),
    [anon_sym_canonicalize] = ACTIONS(234),
    [anon_sym_extension] = ACTIONS(234),
    [anon_sym_file_name] = ACTIONS(234),
    [anon_sym_file_stem] = ACTIONS(234),
    [anon_sym_parent_dir] = ACTIONS(234),
    [anon_sym_parent_directory] = ACTIONS(234),
    [anon_sym_without_extension] = ACTIONS(234),
    [anon_sym_clean] = ACTIONS(234),
    [anon_sym_join] = ACTIONS(234),
    [anon_sym_path_exists] = ACTIONS(234),
    [anon_sym_error] = ACTIONS(234),
    [anon_sym_blake3] = ACTIONS(234),
    [anon_sym_blake3_file] = ACTIONS(234),
    [anon_sym_sha256] = ACTIONS(234),
    [anon_sym_sha256_file] = ACTIONS(234),
    [anon_sym_uuid] = ACTIONS(234),
    [anon_sym_choose] = ACTIONS(234),
    [anon_sym_datetime] = ACTIONS(234),
    [anon_sym_datetime_utc] = ACTIONS(234),
    [anon_sym_semver_matches] = ACTIONS(234),
    [anon_sym_cache_dir] = ACTIONS(234),
    [anon_sym_cache_directory] = ACTIONS(234),
    [anon_sym_config_dir] = ACTIONS(234),
    [anon_sym_config_directory] = ACTIONS(234),
    [anon_sym_config_local_dir] = ACTIONS(234),
    [anon_sym_config_local_directory] = ACTIONS(234),
    [anon_sym_data_dir] = ACTIONS(234),
    [anon_sym_data_directory] = ACTIONS(234),
    [anon_sym_data_local_dir] = ACTIONS(234),
    [anon_sym_data_local_directory] = ACTIONS(234),
    [anon_sym_executable_dir] = ACTIONS(234),
    [anon_sym_executable_directory] = ACTIONS(234),
    [anon_sym_home_dir] = ACTIONS(234),
    [anon_sym_home_directory] = ACTIONS(234),
    [anon_sym_set] = ACTIONS(234),
    [anon_sym_BQUOTE] = ACTIONS(234),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [52] = {
    [sym__setting_boolean] = STATE(56),
    [sym_comment] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_alias] = ACTIONS(224),
    [anon_sym_COLON_EQ] = ACTIONS(236),
    [aux_sym_import_token1] = ACTIONS(224),
    [aux_sym_mod_token1] = ACTIONS(224),
    [anon_sym_assert] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_arch] = ACTIONS(224),
    [anon_sym_num_cpus] = ACTIONS(224),
    [anon_sym_os] = ACTIONS(224),
    [anon_sym_os_family] = ACTIONS(224),
    [anon_sym_shell] = ACTIONS(224),
    [anon_sym_env_var] = ACTIONS(224),
    [anon_sym_env_var_or_default] = ACTIONS(224),
    [anon_sym_env] = ACTIONS(224),
    [anon_sym_is_dependency] = ACTIONS(224),
    [anon_sym_invocation_dir] = ACTIONS(224),
    [anon_sym_invocation_dir_native] = ACTIONS(224),
    [anon_sym_invocation_directory] = ACTIONS(224),
    [anon_sym_invocation_directory_native] = ACTIONS(224),
    [anon_sym_justfile] = ACTIONS(224),
    [anon_sym_justfile_dir] = ACTIONS(224),
    [anon_sym_justfile_directory] = ACTIONS(224),
    [anon_sym_source_dir] = ACTIONS(224),
    [anon_sym_source_directory] = ACTIONS(224),
    [anon_sym_source_file] = ACTIONS(224),
    [anon_sym_just_executable] = ACTIONS(224),
    [anon_sym_just_pid] = ACTIONS(224),
    [anon_sym_append] = ACTIONS(224),
    [anon_sym_prepend] = ACTIONS(224),
    [anon_sym_encode_uri_component] = ACTIONS(224),
    [anon_sym_quote] = ACTIONS(224),
    [anon_sym_replace] = ACTIONS(224),
    [anon_sym_replace_regex] = ACTIONS(224),
    [anon_sym_trim] = ACTIONS(224),
    [anon_sym_trim_end] = ACTIONS(224),
    [anon_sym_trim_end_match] = ACTIONS(224),
    [anon_sym_trim_end_matches] = ACTIONS(224),
    [anon_sym_trim_start] = ACTIONS(224),
    [anon_sym_trim_start_match] = ACTIONS(224),
    [anon_sym_trim_start_matches] = ACTIONS(224),
    [anon_sym_capitalize] = ACTIONS(224),
    [anon_sym_kebabcase] = ACTIONS(224),
    [anon_sym_lowercamelcase] = ACTIONS(224),
    [anon_sym_lowercase] = ACTIONS(224),
    [anon_sym_shoutykebabcase] = ACTIONS(224),
    [anon_sym_shoutysnakecase] = ACTIONS(224),
    [anon_sym_snakecase] = ACTIONS(224),
    [anon_sym_titlecase] = ACTIONS(224),
    [anon_sym_uppercamelcase] = ACTIONS(224),
    [anon_sym_uppercase] = ACTIONS(224),
    [anon_sym_absolute_path] = ACTIONS(224),
    [anon_sym_canonicalize] = ACTIONS(224),
    [anon_sym_extension] = ACTIONS(224),
    [anon_sym_file_name] = ACTIONS(224),
    [anon_sym_file_stem] = ACTIONS(224),
    [anon_sym_parent_dir] = ACTIONS(224),
    [anon_sym_parent_directory] = ACTIONS(224),
    [anon_sym_without_extension] = ACTIONS(224),
    [anon_sym_clean] = ACTIONS(224),
    [anon_sym_join] = ACTIONS(224),
    [anon_sym_path_exists] = ACTIONS(224),
    [anon_sym_error] = ACTIONS(224),
    [anon_sym_blake3] = ACTIONS(224),
    [anon_sym_blake3_file] = ACTIONS(224),
    [anon_sym_sha256] = ACTIONS(224),
    [anon_sym_sha256_file] = ACTIONS(224),
    [anon_sym_uuid] = ACTIONS(224),
    [anon_sym_choose] = ACTIONS(224),
    [anon_sym_datetime] = ACTIONS(224),
    [anon_sym_datetime_utc] = ACTIONS(224),
    [anon_sym_semver_matches] = ACTIONS(224),
    [anon_sym_cache_dir] = ACTIONS(224),
    [anon_sym_cache_directory] = ACTIONS(224),
    [anon_sym_config_dir] = ACTIONS(224),
    [anon_sym_config_directory] = ACTIONS(224),
    [anon_sym_config_local_dir] = ACTIONS(224),
    [anon_sym_config_local_directory] = ACTIONS(224),
    [anon_sym_data_dir] = ACTIONS(224),
    [anon_sym_data_directory] = ACTIONS(224),
    [anon_sym_data_local_dir] = ACTIONS(224),
    [anon_sym_data_local_directory] = ACTIONS(224),
    [anon_sym_executable_dir] = ACTIONS(224),
    [anon_sym_executable_directory] = ACTIONS(224),
    [anon_sym_home_dir] = ACTIONS(224),
    [anon_sym_home_directory] = ACTIONS(224),
    [anon_sym_set] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [53] = {
    [sym_comment] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_identifier] = ACTIONS(240),
    [anon_sym_alias] = ACTIONS(240),
    [aux_sym_import_token1] = ACTIONS(240),
    [aux_sym_mod_token1] = ACTIONS(240),
    [anon_sym_assert] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_arch] = ACTIONS(240),
    [anon_sym_num_cpus] = ACTIONS(240),
    [anon_sym_os] = ACTIONS(240),
    [anon_sym_os_family] = ACTIONS(240),
    [anon_sym_shell] = ACTIONS(240),
    [anon_sym_env_var] = ACTIONS(240),
    [anon_sym_env_var_or_default] = ACTIONS(240),
    [anon_sym_env] = ACTIONS(240),
    [anon_sym_is_dependency] = ACTIONS(240),
    [anon_sym_invocation_dir] = ACTIONS(240),
    [anon_sym_invocation_dir_native] = ACTIONS(240),
    [anon_sym_invocation_directory] = ACTIONS(240),
    [anon_sym_invocation_directory_native] = ACTIONS(240),
    [anon_sym_justfile] = ACTIONS(240),
    [anon_sym_justfile_dir] = ACTIONS(240),
    [anon_sym_justfile_directory] = ACTIONS(240),
    [anon_sym_source_dir] = ACTIONS(240),
    [anon_sym_source_directory] = ACTIONS(240),
    [anon_sym_source_file] = ACTIONS(240),
    [anon_sym_just_executable] = ACTIONS(240),
    [anon_sym_just_pid] = ACTIONS(240),
    [anon_sym_append] = ACTIONS(240),
    [anon_sym_prepend] = ACTIONS(240),
    [anon_sym_encode_uri_component] = ACTIONS(240),
    [anon_sym_quote] = ACTIONS(240),
    [anon_sym_replace] = ACTIONS(240),
    [anon_sym_replace_regex] = ACTIONS(240),
    [anon_sym_trim] = ACTIONS(240),
    [anon_sym_trim_end] = ACTIONS(240),
    [anon_sym_trim_end_match] = ACTIONS(240),
    [anon_sym_trim_end_matches] = ACTIONS(240),
    [anon_sym_trim_start] = ACTIONS(240),
    [anon_sym_trim_start_match] = ACTIONS(240),
    [anon_sym_trim_start_matches] = ACTIONS(240),
    [anon_sym_capitalize] = ACTIONS(240),
    [anon_sym_kebabcase] = ACTIONS(240),
    [anon_sym_lowercamelcase] = ACTIONS(240),
    [anon_sym_lowercase] = ACTIONS(240),
    [anon_sym_shoutykebabcase] = ACTIONS(240),
    [anon_sym_shoutysnakecase] = ACTIONS(240),
    [anon_sym_snakecase] = ACTIONS(240),
    [anon_sym_titlecase] = ACTIONS(240),
    [anon_sym_uppercamelcase] = ACTIONS(240),
    [anon_sym_uppercase] = ACTIONS(240),
    [anon_sym_absolute_path] = ACTIONS(240),
    [anon_sym_canonicalize] = ACTIONS(240),
    [anon_sym_extension] = ACTIONS(240),
    [anon_sym_file_name] = ACTIONS(240),
    [anon_sym_file_stem] = ACTIONS(240),
    [anon_sym_parent_dir] = ACTIONS(240),
    [anon_sym_parent_directory] = ACTIONS(240),
    [anon_sym_without_extension] = ACTIONS(240),
    [anon_sym_clean] = ACTIONS(240),
    [anon_sym_join] = ACTIONS(240),
    [anon_sym_path_exists] = ACTIONS(240),
    [anon_sym_error] = ACTIONS(240),
    [anon_sym_blake3] = ACTIONS(240),
    [anon_sym_blake3_file] = ACTIONS(240),
    [anon_sym_sha256] = ACTIONS(240),
    [anon_sym_sha256_file] = ACTIONS(240),
    [anon_sym_uuid] = ACTIONS(240),
    [anon_sym_choose] = ACTIONS(240),
    [anon_sym_datetime] = ACTIONS(240),
    [anon_sym_datetime_utc] = ACTIONS(240),
    [anon_sym_semver_matches] = ACTIONS(240),
    [anon_sym_cache_dir] = ACTIONS(240),
    [anon_sym_cache_directory] = ACTIONS(240),
    [anon_sym_config_dir] = ACTIONS(240),
    [anon_sym_config_directory] = ACTIONS(240),
    [anon_sym_config_local_dir] = ACTIONS(240),
    [anon_sym_config_local_directory] = ACTIONS(240),
    [anon_sym_data_dir] = ACTIONS(240),
    [anon_sym_data_directory] = ACTIONS(240),
    [anon_sym_data_local_dir] = ACTIONS(240),
    [anon_sym_data_local_directory] = ACTIONS(240),
    [anon_sym_executable_dir] = ACTIONS(240),
    [anon_sym_executable_directory] = ACTIONS(240),
    [anon_sym_home_dir] = ACTIONS(240),
    [anon_sym_home_directory] = ACTIONS(240),
    [anon_sym_set] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(240),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(238),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [54] = {
    [sym_comment] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_identifier] = ACTIONS(244),
    [anon_sym_alias] = ACTIONS(244),
    [aux_sym_import_token1] = ACTIONS(244),
    [aux_sym_mod_token1] = ACTIONS(244),
    [anon_sym_assert] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_arch] = ACTIONS(244),
    [anon_sym_num_cpus] = ACTIONS(244),
    [anon_sym_os] = ACTIONS(244),
    [anon_sym_os_family] = ACTIONS(244),
    [anon_sym_shell] = ACTIONS(244),
    [anon_sym_env_var] = ACTIONS(244),
    [anon_sym_env_var_or_default] = ACTIONS(244),
    [anon_sym_env] = ACTIONS(244),
    [anon_sym_is_dependency] = ACTIONS(244),
    [anon_sym_invocation_dir] = ACTIONS(244),
    [anon_sym_invocation_dir_native] = ACTIONS(244),
    [anon_sym_invocation_directory] = ACTIONS(244),
    [anon_sym_invocation_directory_native] = ACTIONS(244),
    [anon_sym_justfile] = ACTIONS(244),
    [anon_sym_justfile_dir] = ACTIONS(244),
    [anon_sym_justfile_directory] = ACTIONS(244),
    [anon_sym_source_dir] = ACTIONS(244),
    [anon_sym_source_directory] = ACTIONS(244),
    [anon_sym_source_file] = ACTIONS(244),
    [anon_sym_just_executable] = ACTIONS(244),
    [anon_sym_just_pid] = ACTIONS(244),
    [anon_sym_append] = ACTIONS(244),
    [anon_sym_prepend] = ACTIONS(244),
    [anon_sym_encode_uri_component] = ACTIONS(244),
    [anon_sym_quote] = ACTIONS(244),
    [anon_sym_replace] = ACTIONS(244),
    [anon_sym_replace_regex] = ACTIONS(244),
    [anon_sym_trim] = ACTIONS(244),
    [anon_sym_trim_end] = ACTIONS(244),
    [anon_sym_trim_end_match] = ACTIONS(244),
    [anon_sym_trim_end_matches] = ACTIONS(244),
    [anon_sym_trim_start] = ACTIONS(244),
    [anon_sym_trim_start_match] = ACTIONS(244),
    [anon_sym_trim_start_matches] = ACTIONS(244),
    [anon_sym_capitalize] = ACTIONS(244),
    [anon_sym_kebabcase] = ACTIONS(244),
    [anon_sym_lowercamelcase] = ACTIONS(244),
    [anon_sym_lowercase] = ACTIONS(244),
    [anon_sym_shoutykebabcase] = ACTIONS(244),
    [anon_sym_shoutysnakecase] = ACTIONS(244),
    [anon_sym_snakecase] = ACTIONS(244),
    [anon_sym_titlecase] = ACTIONS(244),
    [anon_sym_uppercamelcase] = ACTIONS(244),
    [anon_sym_uppercase] = ACTIONS(244),
    [anon_sym_absolute_path] = ACTIONS(244),
    [anon_sym_canonicalize] = ACTIONS(244),
    [anon_sym_extension] = ACTIONS(244),
    [anon_sym_file_name] = ACTIONS(244),
    [anon_sym_file_stem] = ACTIONS(244),
    [anon_sym_parent_dir] = ACTIONS(244),
    [anon_sym_parent_directory] = ACTIONS(244),
    [anon_sym_without_extension] = ACTIONS(244),
    [anon_sym_clean] = ACTIONS(244),
    [anon_sym_join] = ACTIONS(244),
    [anon_sym_path_exists] = ACTIONS(244),
    [anon_sym_error] = ACTIONS(244),
    [anon_sym_blake3] = ACTIONS(244),
    [anon_sym_blake3_file] = ACTIONS(244),
    [anon_sym_sha256] = ACTIONS(244),
    [anon_sym_sha256_file] = ACTIONS(244),
    [anon_sym_uuid] = ACTIONS(244),
    [anon_sym_choose] = ACTIONS(244),
    [anon_sym_datetime] = ACTIONS(244),
    [anon_sym_datetime_utc] = ACTIONS(244),
    [anon_sym_semver_matches] = ACTIONS(244),
    [anon_sym_cache_dir] = ACTIONS(244),
    [anon_sym_cache_directory] = ACTIONS(244),
    [anon_sym_config_dir] = ACTIONS(244),
    [anon_sym_config_directory] = ACTIONS(244),
    [anon_sym_config_local_dir] = ACTIONS(244),
    [anon_sym_config_local_directory] = ACTIONS(244),
    [anon_sym_data_dir] = ACTIONS(244),
    [anon_sym_data_directory] = ACTIONS(244),
    [anon_sym_data_local_dir] = ACTIONS(244),
    [anon_sym_data_local_directory] = ACTIONS(244),
    [anon_sym_executable_dir] = ACTIONS(244),
    [anon_sym_executable_directory] = ACTIONS(244),
    [anon_sym_home_dir] = ACTIONS(244),
    [anon_sym_home_directory] = ACTIONS(244),
    [anon_sym_set] = ACTIONS(244),
    [anon_sym_BQUOTE] = ACTIONS(244),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [55] = {
    [sym_comment] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_identifier] = ACTIONS(248),
    [anon_sym_alias] = ACTIONS(248),
    [aux_sym_import_token1] = ACTIONS(248),
    [aux_sym_mod_token1] = ACTIONS(248),
    [anon_sym_assert] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_arch] = ACTIONS(248),
    [anon_sym_num_cpus] = ACTIONS(248),
    [anon_sym_os] = ACTIONS(248),
    [anon_sym_os_family] = ACTIONS(248),
    [anon_sym_shell] = ACTIONS(248),
    [anon_sym_env_var] = ACTIONS(248),
    [anon_sym_env_var_or_default] = ACTIONS(248),
    [anon_sym_env] = ACTIONS(248),
    [anon_sym_is_dependency] = ACTIONS(248),
    [anon_sym_invocation_dir] = ACTIONS(248),
    [anon_sym_invocation_dir_native] = ACTIONS(248),
    [anon_sym_invocation_directory] = ACTIONS(248),
    [anon_sym_invocation_directory_native] = ACTIONS(248),
    [anon_sym_justfile] = ACTIONS(248),
    [anon_sym_justfile_dir] = ACTIONS(248),
    [anon_sym_justfile_directory] = ACTIONS(248),
    [anon_sym_source_dir] = ACTIONS(248),
    [anon_sym_source_directory] = ACTIONS(248),
    [anon_sym_source_file] = ACTIONS(248),
    [anon_sym_just_executable] = ACTIONS(248),
    [anon_sym_just_pid] = ACTIONS(248),
    [anon_sym_append] = ACTIONS(248),
    [anon_sym_prepend] = ACTIONS(248),
    [anon_sym_encode_uri_component] = ACTIONS(248),
    [anon_sym_quote] = ACTIONS(248),
    [anon_sym_replace] = ACTIONS(248),
    [anon_sym_replace_regex] = ACTIONS(248),
    [anon_sym_trim] = ACTIONS(248),
    [anon_sym_trim_end] = ACTIONS(248),
    [anon_sym_trim_end_match] = ACTIONS(248),
    [anon_sym_trim_end_matches] = ACTIONS(248),
    [anon_sym_trim_start] = ACTIONS(248),
    [anon_sym_trim_start_match] = ACTIONS(248),
    [anon_sym_trim_start_matches] = ACTIONS(248),
    [anon_sym_capitalize] = ACTIONS(248),
    [anon_sym_kebabcase] = ACTIONS(248),
    [anon_sym_lowercamelcase] = ACTIONS(248),
    [anon_sym_lowercase] = ACTIONS(248),
    [anon_sym_shoutykebabcase] = ACTIONS(248),
    [anon_sym_shoutysnakecase] = ACTIONS(248),
    [anon_sym_snakecase] = ACTIONS(248),
    [anon_sym_titlecase] = ACTIONS(248),
    [anon_sym_uppercamelcase] = ACTIONS(248),
    [anon_sym_uppercase] = ACTIONS(248),
    [anon_sym_absolute_path] = ACTIONS(248),
    [anon_sym_canonicalize] = ACTIONS(248),
    [anon_sym_extension] = ACTIONS(248),
    [anon_sym_file_name] = ACTIONS(248),
    [anon_sym_file_stem] = ACTIONS(248),
    [anon_sym_parent_dir] = ACTIONS(248),
    [anon_sym_parent_directory] = ACTIONS(248),
    [anon_sym_without_extension] = ACTIONS(248),
    [anon_sym_clean] = ACTIONS(248),
    [anon_sym_join] = ACTIONS(248),
    [anon_sym_path_exists] = ACTIONS(248),
    [anon_sym_error] = ACTIONS(248),
    [anon_sym_blake3] = ACTIONS(248),
    [anon_sym_blake3_file] = ACTIONS(248),
    [anon_sym_sha256] = ACTIONS(248),
    [anon_sym_sha256_file] = ACTIONS(248),
    [anon_sym_uuid] = ACTIONS(248),
    [anon_sym_choose] = ACTIONS(248),
    [anon_sym_datetime] = ACTIONS(248),
    [anon_sym_datetime_utc] = ACTIONS(248),
    [anon_sym_semver_matches] = ACTIONS(248),
    [anon_sym_cache_dir] = ACTIONS(248),
    [anon_sym_cache_directory] = ACTIONS(248),
    [anon_sym_config_dir] = ACTIONS(248),
    [anon_sym_config_directory] = ACTIONS(248),
    [anon_sym_config_local_dir] = ACTIONS(248),
    [anon_sym_config_local_directory] = ACTIONS(248),
    [anon_sym_data_dir] = ACTIONS(248),
    [anon_sym_data_directory] = ACTIONS(248),
    [anon_sym_data_local_dir] = ACTIONS(248),
    [anon_sym_data_local_directory] = ACTIONS(248),
    [anon_sym_executable_dir] = ACTIONS(248),
    [anon_sym_executable_directory] = ACTIONS(248),
    [anon_sym_home_dir] = ACTIONS(248),
    [anon_sym_home_directory] = ACTIONS(248),
    [anon_sym_set] = ACTIONS(248),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [56] = {
    [sym_comment] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(250),
    [sym_identifier] = ACTIONS(252),
    [anon_sym_alias] = ACTIONS(252),
    [aux_sym_import_token1] = ACTIONS(252),
    [aux_sym_mod_token1] = ACTIONS(252),
    [anon_sym_assert] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_arch] = ACTIONS(252),
    [anon_sym_num_cpus] = ACTIONS(252),
    [anon_sym_os] = ACTIONS(252),
    [anon_sym_os_family] = ACTIONS(252),
    [anon_sym_shell] = ACTIONS(252),
    [anon_sym_env_var] = ACTIONS(252),
    [anon_sym_env_var_or_default] = ACTIONS(252),
    [anon_sym_env] = ACTIONS(252),
    [anon_sym_is_dependency] = ACTIONS(252),
    [anon_sym_invocation_dir] = ACTIONS(252),
    [anon_sym_invocation_dir_native] = ACTIONS(252),
    [anon_sym_invocation_directory] = ACTIONS(252),
    [anon_sym_invocation_directory_native] = ACTIONS(252),
    [anon_sym_justfile] = ACTIONS(252),
    [anon_sym_justfile_dir] = ACTIONS(252),
    [anon_sym_justfile_directory] = ACTIONS(252),
    [anon_sym_source_dir] = ACTIONS(252),
    [anon_sym_source_directory] = ACTIONS(252),
    [anon_sym_source_file] = ACTIONS(252),
    [anon_sym_just_executable] = ACTIONS(252),
    [anon_sym_just_pid] = ACTIONS(252),
    [anon_sym_append] = ACTIONS(252),
    [anon_sym_prepend] = ACTIONS(252),
    [anon_sym_encode_uri_component] = ACTIONS(252),
    [anon_sym_quote] = ACTIONS(252),
    [anon_sym_replace] = ACTIONS(252),
    [anon_sym_replace_regex] = ACTIONS(252),
    [anon_sym_trim] = ACTIONS(252),
    [anon_sym_trim_end] = ACTIONS(252),
    [anon_sym_trim_end_match] = ACTIONS(252),
    [anon_sym_trim_end_matches] = ACTIONS(252),
    [anon_sym_trim_start] = ACTIONS(252),
    [anon_sym_trim_start_match] = ACTIONS(252),
    [anon_sym_trim_start_matches] = ACTIONS(252),
    [anon_sym_capitalize] = ACTIONS(252),
    [anon_sym_kebabcase] = ACTIONS(252),
    [anon_sym_lowercamelcase] = ACTIONS(252),
    [anon_sym_lowercase] = ACTIONS(252),
    [anon_sym_shoutykebabcase] = ACTIONS(252),
    [anon_sym_shoutysnakecase] = ACTIONS(252),
    [anon_sym_snakecase] = ACTIONS(252),
    [anon_sym_titlecase] = ACTIONS(252),
    [anon_sym_uppercamelcase] = ACTIONS(252),
    [anon_sym_uppercase] = ACTIONS(252),
    [anon_sym_absolute_path] = ACTIONS(252),
    [anon_sym_canonicalize] = ACTIONS(252),
    [anon_sym_extension] = ACTIONS(252),
    [anon_sym_file_name] = ACTIONS(252),
    [anon_sym_file_stem] = ACTIONS(252),
    [anon_sym_parent_dir] = ACTIONS(252),
    [anon_sym_parent_directory] = ACTIONS(252),
    [anon_sym_without_extension] = ACTIONS(252),
    [anon_sym_clean] = ACTIONS(252),
    [anon_sym_join] = ACTIONS(252),
    [anon_sym_path_exists] = ACTIONS(252),
    [anon_sym_error] = ACTIONS(252),
    [anon_sym_blake3] = ACTIONS(252),
    [anon_sym_blake3_file] = ACTIONS(252),
    [anon_sym_sha256] = ACTIONS(252),
    [anon_sym_sha256_file] = ACTIONS(252),
    [anon_sym_uuid] = ACTIONS(252),
    [anon_sym_choose] = ACTIONS(252),
    [anon_sym_datetime] = ACTIONS(252),
    [anon_sym_datetime_utc] = ACTIONS(252),
    [anon_sym_semver_matches] = ACTIONS(252),
    [anon_sym_cache_dir] = ACTIONS(252),
    [anon_sym_cache_directory] = ACTIONS(252),
    [anon_sym_config_dir] = ACTIONS(252),
    [anon_sym_config_directory] = ACTIONS(252),
    [anon_sym_config_local_dir] = ACTIONS(252),
    [anon_sym_config_local_directory] = ACTIONS(252),
    [anon_sym_data_dir] = ACTIONS(252),
    [anon_sym_data_directory] = ACTIONS(252),
    [anon_sym_data_local_dir] = ACTIONS(252),
    [anon_sym_data_local_directory] = ACTIONS(252),
    [anon_sym_executable_dir] = ACTIONS(252),
    [anon_sym_executable_directory] = ACTIONS(252),
    [anon_sym_home_dir] = ACTIONS(252),
    [anon_sym_home_directory] = ACTIONS(252),
    [anon_sym_set] = ACTIONS(252),
    [anon_sym_BQUOTE] = ACTIONS(252),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(250),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(254),
    [sym_identifier] = ACTIONS(256),
    [anon_sym_alias] = ACTIONS(256),
    [aux_sym_import_token1] = ACTIONS(256),
    [aux_sym_mod_token1] = ACTIONS(256),
    [anon_sym_assert] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_arch] = ACTIONS(256),
    [anon_sym_num_cpus] = ACTIONS(256),
    [anon_sym_os] = ACTIONS(256),
    [anon_sym_os_family] = ACTIONS(256),
    [anon_sym_shell] = ACTIONS(256),
    [anon_sym_env_var] = ACTIONS(256),
    [anon_sym_env_var_or_default] = ACTIONS(256),
    [anon_sym_env] = ACTIONS(256),
    [anon_sym_is_dependency] = ACTIONS(256),
    [anon_sym_invocation_dir] = ACTIONS(256),
    [anon_sym_invocation_dir_native] = ACTIONS(256),
    [anon_sym_invocation_directory] = ACTIONS(256),
    [anon_sym_invocation_directory_native] = ACTIONS(256),
    [anon_sym_justfile] = ACTIONS(256),
    [anon_sym_justfile_dir] = ACTIONS(256),
    [anon_sym_justfile_directory] = ACTIONS(256),
    [anon_sym_source_dir] = ACTIONS(256),
    [anon_sym_source_directory] = ACTIONS(256),
    [anon_sym_source_file] = ACTIONS(256),
    [anon_sym_just_executable] = ACTIONS(256),
    [anon_sym_just_pid] = ACTIONS(256),
    [anon_sym_append] = ACTIONS(256),
    [anon_sym_prepend] = ACTIONS(256),
    [anon_sym_encode_uri_component] = ACTIONS(256),
    [anon_sym_quote] = ACTIONS(256),
    [anon_sym_replace] = ACTIONS(256),
    [anon_sym_replace_regex] = ACTIONS(256),
    [anon_sym_trim] = ACTIONS(256),
    [anon_sym_trim_end] = ACTIONS(256),
    [anon_sym_trim_end_match] = ACTIONS(256),
    [anon_sym_trim_end_matches] = ACTIONS(256),
    [anon_sym_trim_start] = ACTIONS(256),
    [anon_sym_trim_start_match] = ACTIONS(256),
    [anon_sym_trim_start_matches] = ACTIONS(256),
    [anon_sym_capitalize] = ACTIONS(256),
    [anon_sym_kebabcase] = ACTIONS(256),
    [anon_sym_lowercamelcase] = ACTIONS(256),
    [anon_sym_lowercase] = ACTIONS(256),
    [anon_sym_shoutykebabcase] = ACTIONS(256),
    [anon_sym_shoutysnakecase] = ACTIONS(256),
    [anon_sym_snakecase] = ACTIONS(256),
    [anon_sym_titlecase] = ACTIONS(256),
    [anon_sym_uppercamelcase] = ACTIONS(256),
    [anon_sym_uppercase] = ACTIONS(256),
    [anon_sym_absolute_path] = ACTIONS(256),
    [anon_sym_canonicalize] = ACTIONS(256),
    [anon_sym_extension] = ACTIONS(256),
    [anon_sym_file_name] = ACTIONS(256),
    [anon_sym_file_stem] = ACTIONS(256),
    [anon_sym_parent_dir] = ACTIONS(256),
    [anon_sym_parent_directory] = ACTIONS(256),
    [anon_sym_without_extension] = ACTIONS(256),
    [anon_sym_clean] = ACTIONS(256),
    [anon_sym_join] = ACTIONS(256),
    [anon_sym_path_exists] = ACTIONS(256),
    [anon_sym_error] = ACTIONS(256),
    [anon_sym_blake3] = ACTIONS(256),
    [anon_sym_blake3_file] = ACTIONS(256),
    [anon_sym_sha256] = ACTIONS(256),
    [anon_sym_sha256_file] = ACTIONS(256),
    [anon_sym_uuid] = ACTIONS(256),
    [anon_sym_choose] = ACTIONS(256),
    [anon_sym_datetime] = ACTIONS(256),
    [anon_sym_datetime_utc] = ACTIONS(256),
    [anon_sym_semver_matches] = ACTIONS(256),
    [anon_sym_cache_dir] = ACTIONS(256),
    [anon_sym_cache_directory] = ACTIONS(256),
    [anon_sym_config_dir] = ACTIONS(256),
    [anon_sym_config_directory] = ACTIONS(256),
    [anon_sym_config_local_dir] = ACTIONS(256),
    [anon_sym_config_local_directory] = ACTIONS(256),
    [anon_sym_data_dir] = ACTIONS(256),
    [anon_sym_data_directory] = ACTIONS(256),
    [anon_sym_data_local_dir] = ACTIONS(256),
    [anon_sym_data_local_directory] = ACTIONS(256),
    [anon_sym_executable_dir] = ACTIONS(256),
    [anon_sym_executable_directory] = ACTIONS(256),
    [anon_sym_home_dir] = ACTIONS(256),
    [anon_sym_home_directory] = ACTIONS(256),
    [anon_sym_set] = ACTIONS(256),
    [anon_sym_BQUOTE] = ACTIONS(256),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(254),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(254),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [58] = {
    [sym_comment] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_identifier] = ACTIONS(260),
    [anon_sym_alias] = ACTIONS(260),
    [aux_sym_import_token1] = ACTIONS(260),
    [aux_sym_mod_token1] = ACTIONS(260),
    [anon_sym_assert] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_arch] = ACTIONS(260),
    [anon_sym_num_cpus] = ACTIONS(260),
    [anon_sym_os] = ACTIONS(260),
    [anon_sym_os_family] = ACTIONS(260),
    [anon_sym_shell] = ACTIONS(260),
    [anon_sym_env_var] = ACTIONS(260),
    [anon_sym_env_var_or_default] = ACTIONS(260),
    [anon_sym_env] = ACTIONS(260),
    [anon_sym_is_dependency] = ACTIONS(260),
    [anon_sym_invocation_dir] = ACTIONS(260),
    [anon_sym_invocation_dir_native] = ACTIONS(260),
    [anon_sym_invocation_directory] = ACTIONS(260),
    [anon_sym_invocation_directory_native] = ACTIONS(260),
    [anon_sym_justfile] = ACTIONS(260),
    [anon_sym_justfile_dir] = ACTIONS(260),
    [anon_sym_justfile_directory] = ACTIONS(260),
    [anon_sym_source_dir] = ACTIONS(260),
    [anon_sym_source_directory] = ACTIONS(260),
    [anon_sym_source_file] = ACTIONS(260),
    [anon_sym_just_executable] = ACTIONS(260),
    [anon_sym_just_pid] = ACTIONS(260),
    [anon_sym_append] = ACTIONS(260),
    [anon_sym_prepend] = ACTIONS(260),
    [anon_sym_encode_uri_component] = ACTIONS(260),
    [anon_sym_quote] = ACTIONS(260),
    [anon_sym_replace] = ACTIONS(260),
    [anon_sym_replace_regex] = ACTIONS(260),
    [anon_sym_trim] = ACTIONS(260),
    [anon_sym_trim_end] = ACTIONS(260),
    [anon_sym_trim_end_match] = ACTIONS(260),
    [anon_sym_trim_end_matches] = ACTIONS(260),
    [anon_sym_trim_start] = ACTIONS(260),
    [anon_sym_trim_start_match] = ACTIONS(260),
    [anon_sym_trim_start_matches] = ACTIONS(260),
    [anon_sym_capitalize] = ACTIONS(260),
    [anon_sym_kebabcase] = ACTIONS(260),
    [anon_sym_lowercamelcase] = ACTIONS(260),
    [anon_sym_lowercase] = ACTIONS(260),
    [anon_sym_shoutykebabcase] = ACTIONS(260),
    [anon_sym_shoutysnakecase] = ACTIONS(260),
    [anon_sym_snakecase] = ACTIONS(260),
    [anon_sym_titlecase] = ACTIONS(260),
    [anon_sym_uppercamelcase] = ACTIONS(260),
    [anon_sym_uppercase] = ACTIONS(260),
    [anon_sym_absolute_path] = ACTIONS(260),
    [anon_sym_canonicalize] = ACTIONS(260),
    [anon_sym_extension] = ACTIONS(260),
    [anon_sym_file_name] = ACTIONS(260),
    [anon_sym_file_stem] = ACTIONS(260),
    [anon_sym_parent_dir] = ACTIONS(260),
    [anon_sym_parent_directory] = ACTIONS(260),
    [anon_sym_without_extension] = ACTIONS(260),
    [anon_sym_clean] = ACTIONS(260),
    [anon_sym_join] = ACTIONS(260),
    [anon_sym_path_exists] = ACTIONS(260),
    [anon_sym_error] = ACTIONS(260),
    [anon_sym_blake3] = ACTIONS(260),
    [anon_sym_blake3_file] = ACTIONS(260),
    [anon_sym_sha256] = ACTIONS(260),
    [anon_sym_sha256_file] = ACTIONS(260),
    [anon_sym_uuid] = ACTIONS(260),
    [anon_sym_choose] = ACTIONS(260),
    [anon_sym_datetime] = ACTIONS(260),
    [anon_sym_datetime_utc] = ACTIONS(260),
    [anon_sym_semver_matches] = ACTIONS(260),
    [anon_sym_cache_dir] = ACTIONS(260),
    [anon_sym_cache_directory] = ACTIONS(260),
    [anon_sym_config_dir] = ACTIONS(260),
    [anon_sym_config_directory] = ACTIONS(260),
    [anon_sym_config_local_dir] = ACTIONS(260),
    [anon_sym_config_local_directory] = ACTIONS(260),
    [anon_sym_data_dir] = ACTIONS(260),
    [anon_sym_data_directory] = ACTIONS(260),
    [anon_sym_data_local_dir] = ACTIONS(260),
    [anon_sym_data_local_directory] = ACTIONS(260),
    [anon_sym_executable_dir] = ACTIONS(260),
    [anon_sym_executable_directory] = ACTIONS(260),
    [anon_sym_home_dir] = ACTIONS(260),
    [anon_sym_home_directory] = ACTIONS(260),
    [anon_sym_set] = ACTIONS(260),
    [anon_sym_BQUOTE] = ACTIONS(260),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(258),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [59] = {
    [sym_comment] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym_identifier] = ACTIONS(264),
    [anon_sym_alias] = ACTIONS(264),
    [aux_sym_import_token1] = ACTIONS(264),
    [aux_sym_mod_token1] = ACTIONS(264),
    [anon_sym_assert] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_arch] = ACTIONS(264),
    [anon_sym_num_cpus] = ACTIONS(264),
    [anon_sym_os] = ACTIONS(264),
    [anon_sym_os_family] = ACTIONS(264),
    [anon_sym_shell] = ACTIONS(264),
    [anon_sym_env_var] = ACTIONS(264),
    [anon_sym_env_var_or_default] = ACTIONS(264),
    [anon_sym_env] = ACTIONS(264),
    [anon_sym_is_dependency] = ACTIONS(264),
    [anon_sym_invocation_dir] = ACTIONS(264),
    [anon_sym_invocation_dir_native] = ACTIONS(264),
    [anon_sym_invocation_directory] = ACTIONS(264),
    [anon_sym_invocation_directory_native] = ACTIONS(264),
    [anon_sym_justfile] = ACTIONS(264),
    [anon_sym_justfile_dir] = ACTIONS(264),
    [anon_sym_justfile_directory] = ACTIONS(264),
    [anon_sym_source_dir] = ACTIONS(264),
    [anon_sym_source_directory] = ACTIONS(264),
    [anon_sym_source_file] = ACTIONS(264),
    [anon_sym_just_executable] = ACTIONS(264),
    [anon_sym_just_pid] = ACTIONS(264),
    [anon_sym_append] = ACTIONS(264),
    [anon_sym_prepend] = ACTIONS(264),
    [anon_sym_encode_uri_component] = ACTIONS(264),
    [anon_sym_quote] = ACTIONS(264),
    [anon_sym_replace] = ACTIONS(264),
    [anon_sym_replace_regex] = ACTIONS(264),
    [anon_sym_trim] = ACTIONS(264),
    [anon_sym_trim_end] = ACTIONS(264),
    [anon_sym_trim_end_match] = ACTIONS(264),
    [anon_sym_trim_end_matches] = ACTIONS(264),
    [anon_sym_trim_start] = ACTIONS(264),
    [anon_sym_trim_start_match] = ACTIONS(264),
    [anon_sym_trim_start_matches] = ACTIONS(264),
    [anon_sym_capitalize] = ACTIONS(264),
    [anon_sym_kebabcase] = ACTIONS(264),
    [anon_sym_lowercamelcase] = ACTIONS(264),
    [anon_sym_lowercase] = ACTIONS(264),
    [anon_sym_shoutykebabcase] = ACTIONS(264),
    [anon_sym_shoutysnakecase] = ACTIONS(264),
    [anon_sym_snakecase] = ACTIONS(264),
    [anon_sym_titlecase] = ACTIONS(264),
    [anon_sym_uppercamelcase] = ACTIONS(264),
    [anon_sym_uppercase] = ACTIONS(264),
    [anon_sym_absolute_path] = ACTIONS(264),
    [anon_sym_canonicalize] = ACTIONS(264),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_file_name] = ACTIONS(264),
    [anon_sym_file_stem] = ACTIONS(264),
    [anon_sym_parent_dir] = ACTIONS(264),
    [anon_sym_parent_directory] = ACTIONS(264),
    [anon_sym_without_extension] = ACTIONS(264),
    [anon_sym_clean] = ACTIONS(264),
    [anon_sym_join] = ACTIONS(264),
    [anon_sym_path_exists] = ACTIONS(264),
    [anon_sym_error] = ACTIONS(264),
    [anon_sym_blake3] = ACTIONS(264),
    [anon_sym_blake3_file] = ACTIONS(264),
    [anon_sym_sha256] = ACTIONS(264),
    [anon_sym_sha256_file] = ACTIONS(264),
    [anon_sym_uuid] = ACTIONS(264),
    [anon_sym_choose] = ACTIONS(264),
    [anon_sym_datetime] = ACTIONS(264),
    [anon_sym_datetime_utc] = ACTIONS(264),
    [anon_sym_semver_matches] = ACTIONS(264),
    [anon_sym_cache_dir] = ACTIONS(264),
    [anon_sym_cache_directory] = ACTIONS(264),
    [anon_sym_config_dir] = ACTIONS(264),
    [anon_sym_config_directory] = ACTIONS(264),
    [anon_sym_config_local_dir] = ACTIONS(264),
    [anon_sym_config_local_directory] = ACTIONS(264),
    [anon_sym_data_dir] = ACTIONS(264),
    [anon_sym_data_directory] = ACTIONS(264),
    [anon_sym_data_local_dir] = ACTIONS(264),
    [anon_sym_data_local_directory] = ACTIONS(264),
    [anon_sym_executable_dir] = ACTIONS(264),
    [anon_sym_executable_directory] = ACTIONS(264),
    [anon_sym_home_dir] = ACTIONS(264),
    [anon_sym_home_directory] = ACTIONS(264),
    [anon_sym_set] = ACTIONS(264),
    [anon_sym_BQUOTE] = ACTIONS(264),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(262),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(262),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [60] = {
    [sym_comment] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(266),
    [sym_identifier] = ACTIONS(268),
    [anon_sym_alias] = ACTIONS(268),
    [aux_sym_import_token1] = ACTIONS(268),
    [aux_sym_mod_token1] = ACTIONS(268),
    [anon_sym_assert] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_arch] = ACTIONS(268),
    [anon_sym_num_cpus] = ACTIONS(268),
    [anon_sym_os] = ACTIONS(268),
    [anon_sym_os_family] = ACTIONS(268),
    [anon_sym_shell] = ACTIONS(268),
    [anon_sym_env_var] = ACTIONS(268),
    [anon_sym_env_var_or_default] = ACTIONS(268),
    [anon_sym_env] = ACTIONS(268),
    [anon_sym_is_dependency] = ACTIONS(268),
    [anon_sym_invocation_dir] = ACTIONS(268),
    [anon_sym_invocation_dir_native] = ACTIONS(268),
    [anon_sym_invocation_directory] = ACTIONS(268),
    [anon_sym_invocation_directory_native] = ACTIONS(268),
    [anon_sym_justfile] = ACTIONS(268),
    [anon_sym_justfile_dir] = ACTIONS(268),
    [anon_sym_justfile_directory] = ACTIONS(268),
    [anon_sym_source_dir] = ACTIONS(268),
    [anon_sym_source_directory] = ACTIONS(268),
    [anon_sym_source_file] = ACTIONS(268),
    [anon_sym_just_executable] = ACTIONS(268),
    [anon_sym_just_pid] = ACTIONS(268),
    [anon_sym_append] = ACTIONS(268),
    [anon_sym_prepend] = ACTIONS(268),
    [anon_sym_encode_uri_component] = ACTIONS(268),
    [anon_sym_quote] = ACTIONS(268),
    [anon_sym_replace] = ACTIONS(268),
    [anon_sym_replace_regex] = ACTIONS(268),
    [anon_sym_trim] = ACTIONS(268),
    [anon_sym_trim_end] = ACTIONS(268),
    [anon_sym_trim_end_match] = ACTIONS(268),
    [anon_sym_trim_end_matches] = ACTIONS(268),
    [anon_sym_trim_start] = ACTIONS(268),
    [anon_sym_trim_start_match] = ACTIONS(268),
    [anon_sym_trim_start_matches] = ACTIONS(268),
    [anon_sym_capitalize] = ACTIONS(268),
    [anon_sym_kebabcase] = ACTIONS(268),
    [anon_sym_lowercamelcase] = ACTIONS(268),
    [anon_sym_lowercase] = ACTIONS(268),
    [anon_sym_shoutykebabcase] = ACTIONS(268),
    [anon_sym_shoutysnakecase] = ACTIONS(268),
    [anon_sym_snakecase] = ACTIONS(268),
    [anon_sym_titlecase] = ACTIONS(268),
    [anon_sym_uppercamelcase] = ACTIONS(268),
    [anon_sym_uppercase] = ACTIONS(268),
    [anon_sym_absolute_path] = ACTIONS(268),
    [anon_sym_canonicalize] = ACTIONS(268),
    [anon_sym_extension] = ACTIONS(268),
    [anon_sym_file_name] = ACTIONS(268),
    [anon_sym_file_stem] = ACTIONS(268),
    [anon_sym_parent_dir] = ACTIONS(268),
    [anon_sym_parent_directory] = ACTIONS(268),
    [anon_sym_without_extension] = ACTIONS(268),
    [anon_sym_clean] = ACTIONS(268),
    [anon_sym_join] = ACTIONS(268),
    [anon_sym_path_exists] = ACTIONS(268),
    [anon_sym_error] = ACTIONS(268),
    [anon_sym_blake3] = ACTIONS(268),
    [anon_sym_blake3_file] = ACTIONS(268),
    [anon_sym_sha256] = ACTIONS(268),
    [anon_sym_sha256_file] = ACTIONS(268),
    [anon_sym_uuid] = ACTIONS(268),
    [anon_sym_choose] = ACTIONS(268),
    [anon_sym_datetime] = ACTIONS(268),
    [anon_sym_datetime_utc] = ACTIONS(268),
    [anon_sym_semver_matches] = ACTIONS(268),
    [anon_sym_cache_dir] = ACTIONS(268),
    [anon_sym_cache_directory] = ACTIONS(268),
    [anon_sym_config_dir] = ACTIONS(268),
    [anon_sym_config_directory] = ACTIONS(268),
    [anon_sym_config_local_dir] = ACTIONS(268),
    [anon_sym_config_local_directory] = ACTIONS(268),
    [anon_sym_data_dir] = ACTIONS(268),
    [anon_sym_data_directory] = ACTIONS(268),
    [anon_sym_data_local_dir] = ACTIONS(268),
    [anon_sym_data_local_directory] = ACTIONS(268),
    [anon_sym_executable_dir] = ACTIONS(268),
    [anon_sym_executable_directory] = ACTIONS(268),
    [anon_sym_home_dir] = ACTIONS(268),
    [anon_sym_home_directory] = ACTIONS(268),
    [anon_sym_set] = ACTIONS(268),
    [anon_sym_BQUOTE] = ACTIONS(268),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [61] = {
    [sym_comment] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_identifier] = ACTIONS(272),
    [anon_sym_alias] = ACTIONS(272),
    [aux_sym_import_token1] = ACTIONS(272),
    [aux_sym_mod_token1] = ACTIONS(272),
    [anon_sym_assert] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_arch] = ACTIONS(272),
    [anon_sym_num_cpus] = ACTIONS(272),
    [anon_sym_os] = ACTIONS(272),
    [anon_sym_os_family] = ACTIONS(272),
    [anon_sym_shell] = ACTIONS(272),
    [anon_sym_env_var] = ACTIONS(272),
    [anon_sym_env_var_or_default] = ACTIONS(272),
    [anon_sym_env] = ACTIONS(272),
    [anon_sym_is_dependency] = ACTIONS(272),
    [anon_sym_invocation_dir] = ACTIONS(272),
    [anon_sym_invocation_dir_native] = ACTIONS(272),
    [anon_sym_invocation_directory] = ACTIONS(272),
    [anon_sym_invocation_directory_native] = ACTIONS(272),
    [anon_sym_justfile] = ACTIONS(272),
    [anon_sym_justfile_dir] = ACTIONS(272),
    [anon_sym_justfile_directory] = ACTIONS(272),
    [anon_sym_source_dir] = ACTIONS(272),
    [anon_sym_source_directory] = ACTIONS(272),
    [anon_sym_source_file] = ACTIONS(272),
    [anon_sym_just_executable] = ACTIONS(272),
    [anon_sym_just_pid] = ACTIONS(272),
    [anon_sym_append] = ACTIONS(272),
    [anon_sym_prepend] = ACTIONS(272),
    [anon_sym_encode_uri_component] = ACTIONS(272),
    [anon_sym_quote] = ACTIONS(272),
    [anon_sym_replace] = ACTIONS(272),
    [anon_sym_replace_regex] = ACTIONS(272),
    [anon_sym_trim] = ACTIONS(272),
    [anon_sym_trim_end] = ACTIONS(272),
    [anon_sym_trim_end_match] = ACTIONS(272),
    [anon_sym_trim_end_matches] = ACTIONS(272),
    [anon_sym_trim_start] = ACTIONS(272),
    [anon_sym_trim_start_match] = ACTIONS(272),
    [anon_sym_trim_start_matches] = ACTIONS(272),
    [anon_sym_capitalize] = ACTIONS(272),
    [anon_sym_kebabcase] = ACTIONS(272),
    [anon_sym_lowercamelcase] = ACTIONS(272),
    [anon_sym_lowercase] = ACTIONS(272),
    [anon_sym_shoutykebabcase] = ACTIONS(272),
    [anon_sym_shoutysnakecase] = ACTIONS(272),
    [anon_sym_snakecase] = ACTIONS(272),
    [anon_sym_titlecase] = ACTIONS(272),
    [anon_sym_uppercamelcase] = ACTIONS(272),
    [anon_sym_uppercase] = ACTIONS(272),
    [anon_sym_absolute_path] = ACTIONS(272),
    [anon_sym_canonicalize] = ACTIONS(272),
    [anon_sym_extension] = ACTIONS(272),
    [anon_sym_file_name] = ACTIONS(272),
    [anon_sym_file_stem] = ACTIONS(272),
    [anon_sym_parent_dir] = ACTIONS(272),
    [anon_sym_parent_directory] = ACTIONS(272),
    [anon_sym_without_extension] = ACTIONS(272),
    [anon_sym_clean] = ACTIONS(272),
    [anon_sym_join] = ACTIONS(272),
    [anon_sym_path_exists] = ACTIONS(272),
    [anon_sym_error] = ACTIONS(272),
    [anon_sym_blake3] = ACTIONS(272),
    [anon_sym_blake3_file] = ACTIONS(272),
    [anon_sym_sha256] = ACTIONS(272),
    [anon_sym_sha256_file] = ACTIONS(272),
    [anon_sym_uuid] = ACTIONS(272),
    [anon_sym_choose] = ACTIONS(272),
    [anon_sym_datetime] = ACTIONS(272),
    [anon_sym_datetime_utc] = ACTIONS(272),
    [anon_sym_semver_matches] = ACTIONS(272),
    [anon_sym_cache_dir] = ACTIONS(272),
    [anon_sym_cache_directory] = ACTIONS(272),
    [anon_sym_config_dir] = ACTIONS(272),
    [anon_sym_config_directory] = ACTIONS(272),
    [anon_sym_config_local_dir] = ACTIONS(272),
    [anon_sym_config_local_directory] = ACTIONS(272),
    [anon_sym_data_dir] = ACTIONS(272),
    [anon_sym_data_directory] = ACTIONS(272),
    [anon_sym_data_local_dir] = ACTIONS(272),
    [anon_sym_data_local_directory] = ACTIONS(272),
    [anon_sym_executable_dir] = ACTIONS(272),
    [anon_sym_executable_directory] = ACTIONS(272),
    [anon_sym_home_dir] = ACTIONS(272),
    [anon_sym_home_directory] = ACTIONS(272),
    [anon_sym_set] = ACTIONS(272),
    [anon_sym_BQUOTE] = ACTIONS(272),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(270),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [62] = {
    [sym_comment] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [anon_sym_alias] = ACTIONS(276),
    [aux_sym_import_token1] = ACTIONS(276),
    [aux_sym_mod_token1] = ACTIONS(276),
    [anon_sym_assert] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_arch] = ACTIONS(276),
    [anon_sym_num_cpus] = ACTIONS(276),
    [anon_sym_os] = ACTIONS(276),
    [anon_sym_os_family] = ACTIONS(276),
    [anon_sym_shell] = ACTIONS(276),
    [anon_sym_env_var] = ACTIONS(276),
    [anon_sym_env_var_or_default] = ACTIONS(276),
    [anon_sym_env] = ACTIONS(276),
    [anon_sym_is_dependency] = ACTIONS(276),
    [anon_sym_invocation_dir] = ACTIONS(276),
    [anon_sym_invocation_dir_native] = ACTIONS(276),
    [anon_sym_invocation_directory] = ACTIONS(276),
    [anon_sym_invocation_directory_native] = ACTIONS(276),
    [anon_sym_justfile] = ACTIONS(276),
    [anon_sym_justfile_dir] = ACTIONS(276),
    [anon_sym_justfile_directory] = ACTIONS(276),
    [anon_sym_source_dir] = ACTIONS(276),
    [anon_sym_source_directory] = ACTIONS(276),
    [anon_sym_source_file] = ACTIONS(276),
    [anon_sym_just_executable] = ACTIONS(276),
    [anon_sym_just_pid] = ACTIONS(276),
    [anon_sym_append] = ACTIONS(276),
    [anon_sym_prepend] = ACTIONS(276),
    [anon_sym_encode_uri_component] = ACTIONS(276),
    [anon_sym_quote] = ACTIONS(276),
    [anon_sym_replace] = ACTIONS(276),
    [anon_sym_replace_regex] = ACTIONS(276),
    [anon_sym_trim] = ACTIONS(276),
    [anon_sym_trim_end] = ACTIONS(276),
    [anon_sym_trim_end_match] = ACTIONS(276),
    [anon_sym_trim_end_matches] = ACTIONS(276),
    [anon_sym_trim_start] = ACTIONS(276),
    [anon_sym_trim_start_match] = ACTIONS(276),
    [anon_sym_trim_start_matches] = ACTIONS(276),
    [anon_sym_capitalize] = ACTIONS(276),
    [anon_sym_kebabcase] = ACTIONS(276),
    [anon_sym_lowercamelcase] = ACTIONS(276),
    [anon_sym_lowercase] = ACTIONS(276),
    [anon_sym_shoutykebabcase] = ACTIONS(276),
    [anon_sym_shoutysnakecase] = ACTIONS(276),
    [anon_sym_snakecase] = ACTIONS(276),
    [anon_sym_titlecase] = ACTIONS(276),
    [anon_sym_uppercamelcase] = ACTIONS(276),
    [anon_sym_uppercase] = ACTIONS(276),
    [anon_sym_absolute_path] = ACTIONS(276),
    [anon_sym_canonicalize] = ACTIONS(276),
    [anon_sym_extension] = ACTIONS(276),
    [anon_sym_file_name] = ACTIONS(276),
    [anon_sym_file_stem] = ACTIONS(276),
    [anon_sym_parent_dir] = ACTIONS(276),
    [anon_sym_parent_directory] = ACTIONS(276),
    [anon_sym_without_extension] = ACTIONS(276),
    [anon_sym_clean] = ACTIONS(276),
    [anon_sym_join] = ACTIONS(276),
    [anon_sym_path_exists] = ACTIONS(276),
    [anon_sym_error] = ACTIONS(276),
    [anon_sym_blake3] = ACTIONS(276),
    [anon_sym_blake3_file] = ACTIONS(276),
    [anon_sym_sha256] = ACTIONS(276),
    [anon_sym_sha256_file] = ACTIONS(276),
    [anon_sym_uuid] = ACTIONS(276),
    [anon_sym_choose] = ACTIONS(276),
    [anon_sym_datetime] = ACTIONS(276),
    [anon_sym_datetime_utc] = ACTIONS(276),
    [anon_sym_semver_matches] = ACTIONS(276),
    [anon_sym_cache_dir] = ACTIONS(276),
    [anon_sym_cache_directory] = ACTIONS(276),
    [anon_sym_config_dir] = ACTIONS(276),
    [anon_sym_config_directory] = ACTIONS(276),
    [anon_sym_config_local_dir] = ACTIONS(276),
    [anon_sym_config_local_directory] = ACTIONS(276),
    [anon_sym_data_dir] = ACTIONS(276),
    [anon_sym_data_directory] = ACTIONS(276),
    [anon_sym_data_local_dir] = ACTIONS(276),
    [anon_sym_data_local_directory] = ACTIONS(276),
    [anon_sym_executable_dir] = ACTIONS(276),
    [anon_sym_executable_directory] = ACTIONS(276),
    [anon_sym_home_dir] = ACTIONS(276),
    [anon_sym_home_directory] = ACTIONS(276),
    [anon_sym_set] = ACTIONS(276),
    [anon_sym_BQUOTE] = ACTIONS(276),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [63] = {
    [sym_comment] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_alias] = ACTIONS(280),
    [aux_sym_import_token1] = ACTIONS(280),
    [aux_sym_mod_token1] = ACTIONS(280),
    [anon_sym_assert] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_arch] = ACTIONS(280),
    [anon_sym_num_cpus] = ACTIONS(280),
    [anon_sym_os] = ACTIONS(280),
    [anon_sym_os_family] = ACTIONS(280),
    [anon_sym_shell] = ACTIONS(280),
    [anon_sym_env_var] = ACTIONS(280),
    [anon_sym_env_var_or_default] = ACTIONS(280),
    [anon_sym_env] = ACTIONS(280),
    [anon_sym_is_dependency] = ACTIONS(280),
    [anon_sym_invocation_dir] = ACTIONS(280),
    [anon_sym_invocation_dir_native] = ACTIONS(280),
    [anon_sym_invocation_directory] = ACTIONS(280),
    [anon_sym_invocation_directory_native] = ACTIONS(280),
    [anon_sym_justfile] = ACTIONS(280),
    [anon_sym_justfile_dir] = ACTIONS(280),
    [anon_sym_justfile_directory] = ACTIONS(280),
    [anon_sym_source_dir] = ACTIONS(280),
    [anon_sym_source_directory] = ACTIONS(280),
    [anon_sym_source_file] = ACTIONS(280),
    [anon_sym_just_executable] = ACTIONS(280),
    [anon_sym_just_pid] = ACTIONS(280),
    [anon_sym_append] = ACTIONS(280),
    [anon_sym_prepend] = ACTIONS(280),
    [anon_sym_encode_uri_component] = ACTIONS(280),
    [anon_sym_quote] = ACTIONS(280),
    [anon_sym_replace] = ACTIONS(280),
    [anon_sym_replace_regex] = ACTIONS(280),
    [anon_sym_trim] = ACTIONS(280),
    [anon_sym_trim_end] = ACTIONS(280),
    [anon_sym_trim_end_match] = ACTIONS(280),
    [anon_sym_trim_end_matches] = ACTIONS(280),
    [anon_sym_trim_start] = ACTIONS(280),
    [anon_sym_trim_start_match] = ACTIONS(280),
    [anon_sym_trim_start_matches] = ACTIONS(280),
    [anon_sym_capitalize] = ACTIONS(280),
    [anon_sym_kebabcase] = ACTIONS(280),
    [anon_sym_lowercamelcase] = ACTIONS(280),
    [anon_sym_lowercase] = ACTIONS(280),
    [anon_sym_shoutykebabcase] = ACTIONS(280),
    [anon_sym_shoutysnakecase] = ACTIONS(280),
    [anon_sym_snakecase] = ACTIONS(280),
    [anon_sym_titlecase] = ACTIONS(280),
    [anon_sym_uppercamelcase] = ACTIONS(280),
    [anon_sym_uppercase] = ACTIONS(280),
    [anon_sym_absolute_path] = ACTIONS(280),
    [anon_sym_canonicalize] = ACTIONS(280),
    [anon_sym_extension] = ACTIONS(280),
    [anon_sym_file_name] = ACTIONS(280),
    [anon_sym_file_stem] = ACTIONS(280),
    [anon_sym_parent_dir] = ACTIONS(280),
    [anon_sym_parent_directory] = ACTIONS(280),
    [anon_sym_without_extension] = ACTIONS(280),
    [anon_sym_clean] = ACTIONS(280),
    [anon_sym_join] = ACTIONS(280),
    [anon_sym_path_exists] = ACTIONS(280),
    [anon_sym_error] = ACTIONS(280),
    [anon_sym_blake3] = ACTIONS(280),
    [anon_sym_blake3_file] = ACTIONS(280),
    [anon_sym_sha256] = ACTIONS(280),
    [anon_sym_sha256_file] = ACTIONS(280),
    [anon_sym_uuid] = ACTIONS(280),
    [anon_sym_choose] = ACTIONS(280),
    [anon_sym_datetime] = ACTIONS(280),
    [anon_sym_datetime_utc] = ACTIONS(280),
    [anon_sym_semver_matches] = ACTIONS(280),
    [anon_sym_cache_dir] = ACTIONS(280),
    [anon_sym_cache_directory] = ACTIONS(280),
    [anon_sym_config_dir] = ACTIONS(280),
    [anon_sym_config_directory] = ACTIONS(280),
    [anon_sym_config_local_dir] = ACTIONS(280),
    [anon_sym_config_local_directory] = ACTIONS(280),
    [anon_sym_data_dir] = ACTIONS(280),
    [anon_sym_data_directory] = ACTIONS(280),
    [anon_sym_data_local_dir] = ACTIONS(280),
    [anon_sym_data_local_directory] = ACTIONS(280),
    [anon_sym_executable_dir] = ACTIONS(280),
    [anon_sym_executable_directory] = ACTIONS(280),
    [anon_sym_home_dir] = ACTIONS(280),
    [anon_sym_home_directory] = ACTIONS(280),
    [anon_sym_set] = ACTIONS(280),
    [anon_sym_BQUOTE] = ACTIONS(280),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(278),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(288), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(286), 10,
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
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_string,
    STATE(54), 1,
      sym_boolean,
    STATE(65), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [69] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_comment,
    STATE(96), 1,
      sym_string,
    STATE(13), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [100] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_comment,
    STATE(96), 1,
      sym_string,
    STATE(13), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [131] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_string,
    STATE(68), 1,
      sym_comment,
    STATE(13), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [159] = 7,
    ACTIONS(298), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(300), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(79), 1,
      sym_escape_sequence,
    ACTIONS(302), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [185] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym_comment,
    STATE(96), 1,
      sym_string,
    STATE(13), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [213] = 7,
    ACTIONS(300), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(306), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(69), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(79), 1,
      sym_escape_sequence,
    ACTIONS(302), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [239] = 7,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      aux_sym_normal_string_token1,
    STATE(72), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_normal_string_repeat1,
    STATE(81), 1,
      sym_escape_sequence,
    ACTIONS(312), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [265] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym_comment,
    STATE(85), 1,
      sym_string,
    STATE(13), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [293] = 6,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(314), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(316), 1,
      aux_sym_indented_normal_string_token1,
    STATE(79), 1,
      sym_escape_sequence,
    STATE(74), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(319), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [317] = 7,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(310), 1,
      aux_sym_normal_string_token1,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_normal_string_repeat1,
    STATE(81), 1,
      sym_escape_sequence,
    ACTIONS(312), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [343] = 6,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_normal_string_token1,
    STATE(81), 1,
      sym_escape_sequence,
    STATE(76), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(329), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [367] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_string,
    STATE(77), 1,
      sym_comment,
    STATE(13), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [395] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(332), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [411] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(334), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [427] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(332), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [443] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(336), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [459] = 4,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(338), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(340), 1,
      aux_sym_indented_raw_string_token1,
    STATE(82), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [473] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_boolean,
    STATE(83), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_true,
      anon_sym_false,
  [487] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [501] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym__setting_list_repeat1,
  [517] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_comment,
    STATE(38), 2,
      sym__p1,
      sym__p2,
  [531] = 4,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(356), 1,
      aux_sym_indented_backtick_token1,
    STATE(87), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [545] = 5,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(361), 1,
      aux_sym_indented_backtick_token1,
    STATE(87), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(88), 1,
      sym_comment,
  [561] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym__setting_list_repeat1,
  [577] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_function_parameters_repeat1,
    STATE(90), 1,
      sym_comment,
  [593] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_function_parameters_repeat1,
    STATE(91), 1,
      sym_comment,
  [609] = 5,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(371), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(88), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(92), 1,
      sym_comment,
  [625] = 5,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(373), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_indented_raw_string_token1,
    STATE(93), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_indented_raw_string_repeat1,
  [641] = 5,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(375), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(377), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(82), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(94), 1,
      sym_comment,
  [657] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(95), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [671] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [682] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_comment,
  [695] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [706] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__p2,
    STATE(99), 1,
      sym_comment,
  [719] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__p0,
    STATE(100), 1,
      sym_comment,
  [732] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [745] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__pN,
    STATE(102), 1,
      sym_comment,
  [758] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(400), 1,
      anon_sym_COLON_EQ,
    STATE(56), 1,
      sym__setting_list,
    STATE(103), 1,
      sym_comment,
  [771] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_comment,
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(406), 1,
      anon_sym_COLON_EQ,
    STATE(56), 1,
      sym__setting_string,
    STATE(105), 1,
      sym_comment,
  [797] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__p1,
    STATE(106), 1,
      sym_comment,
  [810] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [821] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(108), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [832] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      sym_comment,
  [845] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [856] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__p3,
    STATE(111), 1,
      sym_comment,
  [869] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_comment,
  [879] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      aux_sym_raw_string_token1,
    STATE(113), 1,
      sym_comment,
  [889] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(114), 1,
      sym_comment,
  [899] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      sym_comment,
  [909] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      sym_comment,
  [919] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
  [929] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(118), 1,
      sym_comment,
  [939] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [949] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [959] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [969] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      anon_sym_COLON_EQ,
    STATE(122), 1,
      sym_comment,
  [979] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_comment,
  [989] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [999] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(442), 1,
      anon_sym_BQUOTE,
    STATE(125), 1,
      sym_comment,
  [1009] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(126), 1,
      sym_comment,
  [1019] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_comment,
  [1029] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_comment,
  [1039] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_comment,
  [1049] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      anon_sym_SQUOTE,
    STATE(130), 1,
      sym_comment,
  [1059] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_comment,
  [1069] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
  [1079] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_comment,
  [1089] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_comment,
  [1099] = 3,
    ACTIONS(304), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      aux_sym_backtick_token1,
    STATE(135), 1,
      sym_comment,
  [1109] = 1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 31,
  [SMALL_STATE(66)] = 69,
  [SMALL_STATE(67)] = 100,
  [SMALL_STATE(68)] = 131,
  [SMALL_STATE(69)] = 159,
  [SMALL_STATE(70)] = 185,
  [SMALL_STATE(71)] = 213,
  [SMALL_STATE(72)] = 239,
  [SMALL_STATE(73)] = 265,
  [SMALL_STATE(74)] = 293,
  [SMALL_STATE(75)] = 317,
  [SMALL_STATE(76)] = 343,
  [SMALL_STATE(77)] = 367,
  [SMALL_STATE(78)] = 395,
  [SMALL_STATE(79)] = 411,
  [SMALL_STATE(80)] = 427,
  [SMALL_STATE(81)] = 443,
  [SMALL_STATE(82)] = 459,
  [SMALL_STATE(83)] = 473,
  [SMALL_STATE(84)] = 487,
  [SMALL_STATE(85)] = 501,
  [SMALL_STATE(86)] = 517,
  [SMALL_STATE(87)] = 531,
  [SMALL_STATE(88)] = 545,
  [SMALL_STATE(89)] = 561,
  [SMALL_STATE(90)] = 577,
  [SMALL_STATE(91)] = 593,
  [SMALL_STATE(92)] = 609,
  [SMALL_STATE(93)] = 625,
  [SMALL_STATE(94)] = 641,
  [SMALL_STATE(95)] = 657,
  [SMALL_STATE(96)] = 671,
  [SMALL_STATE(97)] = 682,
  [SMALL_STATE(98)] = 695,
  [SMALL_STATE(99)] = 706,
  [SMALL_STATE(100)] = 719,
  [SMALL_STATE(101)] = 732,
  [SMALL_STATE(102)] = 745,
  [SMALL_STATE(103)] = 758,
  [SMALL_STATE(104)] = 771,
  [SMALL_STATE(105)] = 784,
  [SMALL_STATE(106)] = 797,
  [SMALL_STATE(107)] = 810,
  [SMALL_STATE(108)] = 821,
  [SMALL_STATE(109)] = 832,
  [SMALL_STATE(110)] = 845,
  [SMALL_STATE(111)] = 856,
  [SMALL_STATE(112)] = 869,
  [SMALL_STATE(113)] = 879,
  [SMALL_STATE(114)] = 889,
  [SMALL_STATE(115)] = 899,
  [SMALL_STATE(116)] = 909,
  [SMALL_STATE(117)] = 919,
  [SMALL_STATE(118)] = 929,
  [SMALL_STATE(119)] = 939,
  [SMALL_STATE(120)] = 949,
  [SMALL_STATE(121)] = 959,
  [SMALL_STATE(122)] = 969,
  [SMALL_STATE(123)] = 979,
  [SMALL_STATE(124)] = 989,
  [SMALL_STATE(125)] = 999,
  [SMALL_STATE(126)] = 1009,
  [SMALL_STATE(127)] = 1019,
  [SMALL_STATE(128)] = 1029,
  [SMALL_STATE(129)] = 1039,
  [SMALL_STATE(130)] = 1049,
  [SMALL_STATE(131)] = 1059,
  [SMALL_STATE(132)] = 1069,
  [SMALL_STATE(133)] = 1079,
  [SMALL_STATE(134)] = 1089,
  [SMALL_STATE(135)] = 1099,
  [SMALL_STATE(136)] = 1109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [438] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
