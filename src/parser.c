#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 152
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  anon_sym_export = 4,
  aux_sym_import_token1 = 5,
  aux_sym_mod_token1 = 6,
  anon_sym_AT = 7,
  anon_sym_COLON = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  aux_sym__attribute_list_token1 = 12,
  anon_sym_confirm = 13,
  anon_sym_doc = 14,
  anon_sym_extension = 15,
  anon_sym_group = 16,
  anon_sym_linux = 17,
  anon_sym_macos = 18,
  anon_sym_no_DASHcd = 19,
  anon_sym_no_DASHexit_DASHmessage = 20,
  anon_sym_no_DASHquiet = 21,
  anon_sym_positional_DASHarguments = 22,
  anon_sym_private = 23,
  anon_sym_script = 24,
  anon_sym_unix = 25,
  anon_sym_windows = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_DOLLAR = 29,
  anon_sym_EQ = 30,
  anon_sym_set = 31,
  anon_sym_allow_DASHduplicate_DASHrecipes = 32,
  anon_sym_allow_DASHduplicate_DASHvariables = 33,
  anon_sym_dotenv_DASHfilename = 34,
  anon_sym_dotenv_DASHload = 35,
  anon_sym_dotenv_DASHpath = 36,
  anon_sym_dotenv_DASHrequired = 37,
  anon_sym_fallback = 38,
  anon_sym_ignore_DASHcomments = 39,
  anon_sym_shell = 40,
  anon_sym_tempdir = 41,
  anon_sym_unstable = 42,
  anon_sym_windows_DASHpowershell = 43,
  anon_sym_windows_DASHshell = 44,
  anon_sym_if = 45,
  anon_sym_LBRACE = 46,
  anon_sym_RBRACE = 47,
  anon_sym_else = 48,
  anon_sym_assert = 49,
  anon_sym_SLASH = 50,
  anon_sym_PLUS = 51,
  anon_sym_EQ_EQ = 52,
  anon_sym_BANG_EQ = 53,
  anon_sym_EQ_TILDE = 54,
  anon_sym_arch = 55,
  anon_sym_num_cpus = 56,
  anon_sym_os = 57,
  anon_sym_os_family = 58,
  anon_sym_env_var = 59,
  anon_sym_env_var_or_default = 60,
  anon_sym_env = 61,
  anon_sym_is_dependency = 62,
  anon_sym_invocation_dir = 63,
  anon_sym_invocation_dir_native = 64,
  anon_sym_invocation_directory = 65,
  anon_sym_invocation_directory_native = 66,
  anon_sym_justfile = 67,
  anon_sym_justfile_dir = 68,
  anon_sym_justfile_directory = 69,
  anon_sym_source_dir = 70,
  anon_sym_source_directory = 71,
  anon_sym_source_file = 72,
  anon_sym_just_executable = 73,
  anon_sym_just_pid = 74,
  anon_sym_append = 75,
  anon_sym_prepend = 76,
  anon_sym_encode_uri_component = 77,
  anon_sym_quote = 78,
  anon_sym_replace = 79,
  anon_sym_replace_regex = 80,
  anon_sym_trim = 81,
  anon_sym_trim_end = 82,
  anon_sym_trim_end_match = 83,
  anon_sym_trim_end_matches = 84,
  anon_sym_trim_start = 85,
  anon_sym_trim_start_match = 86,
  anon_sym_trim_start_matches = 87,
  anon_sym_capitalize = 88,
  anon_sym_kebabcase = 89,
  anon_sym_lowercamelcase = 90,
  anon_sym_lowercase = 91,
  anon_sym_shoutykebabcase = 92,
  anon_sym_shoutysnakecase = 93,
  anon_sym_snakecase = 94,
  anon_sym_titlecase = 95,
  anon_sym_uppercamelcase = 96,
  anon_sym_uppercase = 97,
  anon_sym_absolute_path = 98,
  anon_sym_canonicalize = 99,
  anon_sym_file_name = 100,
  anon_sym_file_stem = 101,
  anon_sym_parent_dir = 102,
  anon_sym_parent_directory = 103,
  anon_sym_without_extension = 104,
  anon_sym_clean = 105,
  anon_sym_join = 106,
  anon_sym_path_exists = 107,
  anon_sym_error = 108,
  anon_sym_blake3 = 109,
  anon_sym_blake3_file = 110,
  anon_sym_sha256 = 111,
  anon_sym_sha256_file = 112,
  anon_sym_uuid = 113,
  anon_sym_choose = 114,
  anon_sym_datetime = 115,
  anon_sym_datetime_utc = 116,
  anon_sym_semver_matches = 117,
  anon_sym_cache_dir = 118,
  anon_sym_cache_directory = 119,
  anon_sym_config_dir = 120,
  anon_sym_config_directory = 121,
  anon_sym_config_local_dir = 122,
  anon_sym_config_local_directory = 123,
  anon_sym_data_dir = 124,
  anon_sym_data_directory = 125,
  anon_sym_data_local_dir = 126,
  anon_sym_data_local_directory = 127,
  anon_sym_executable_dir = 128,
  anon_sym_executable_directory = 129,
  anon_sym_home_dir = 130,
  anon_sym_home_directory = 131,
  anon_sym_BQUOTE = 132,
  aux_sym_backtick_token1 = 133,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 134,
  aux_sym_indented_backtick_token1 = 135,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 136,
  aux_sym_indented_normal_string_token1 = 137,
  anon_sym_DQUOTE = 138,
  aux_sym_normal_string_token1 = 139,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 140,
  aux_sym_indented_raw_string_token1 = 141,
  anon_sym_SQUOTE = 142,
  aux_sym_raw_string_token1 = 143,
  anon_sym_BSLASHn = 144,
  anon_sym_BSLASHr = 145,
  anon_sym_BSLASHt = 146,
  anon_sym_BSLASH_DQUOTE = 147,
  anon_sym_BSLASH_BSLASH = 148,
  anon_sym_true = 149,
  anon_sym_false = 150,
  aux_sym_comment_token1 = 151,
  sym_file = 152,
  sym_alias = 153,
  sym_assignment = 154,
  sym_import = 155,
  sym_mod = 156,
  sym_recipe = 157,
  sym__attribute_list = 158,
  sym__attribute = 159,
  sym_builtin_attribute = 160,
  sym_attribute = 161,
  sym__a1 = 162,
  sym_recipe_parameter = 163,
  sym_setting = 164,
  sym__setting_boolean = 165,
  sym__setting_string = 166,
  sym__setting_list = 167,
  sym_expression = 168,
  sym_condition = 169,
  sym_value = 170,
  sym_builtin_function_call = 171,
  sym__p0 = 172,
  sym__p1 = 173,
  sym__p2 = 174,
  sym__p3 = 175,
  sym__pN = 176,
  sym_function_call = 177,
  sym_function_parameters = 178,
  sym_backtick = 179,
  sym_indented_backtick = 180,
  sym_string = 181,
  sym_indented_normal_string = 182,
  sym_normal_string = 183,
  sym_indented_raw_string = 184,
  sym_raw_string = 185,
  sym_escape_sequence = 186,
  sym_boolean = 187,
  sym_comment = 188,
  aux_sym_file_repeat1 = 189,
  aux_sym_recipe_repeat1 = 190,
  aux_sym_recipe_repeat2 = 191,
  aux_sym__attribute_list_repeat1 = 192,
  aux_sym__setting_list_repeat1 = 193,
  aux_sym_function_parameters_repeat1 = 194,
  aux_sym_indented_backtick_repeat1 = 195,
  aux_sym_indented_normal_string_repeat1 = 196,
  aux_sym_normal_string_repeat1 = 197,
  aux_sym_indented_raw_string_repeat1 = 198,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym__attribute_list_token1] = "_attribute_list_token1",
  [anon_sym_confirm] = "confirm",
  [anon_sym_doc] = "doc",
  [anon_sym_extension] = "extension",
  [anon_sym_group] = "group",
  [anon_sym_linux] = "linux",
  [anon_sym_macos] = "macos",
  [anon_sym_no_DASHcd] = "no-cd",
  [anon_sym_no_DASHexit_DASHmessage] = "no-exit-message",
  [anon_sym_no_DASHquiet] = "no-quiet",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
  [anon_sym_private] = "private",
  [anon_sym_script] = "script",
  [anon_sym_unix] = "unix",
  [anon_sym_windows] = "windows",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_set] = "set",
  [anon_sym_allow_DASHduplicate_DASHrecipes] = "allow-duplicate-recipes",
  [anon_sym_allow_DASHduplicate_DASHvariables] = "allow-duplicate-variables",
  [anon_sym_dotenv_DASHfilename] = "dotenv-filename",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_dotenv_DASHpath] = "dotenv-path",
  [anon_sym_dotenv_DASHrequired] = "dotenv-required",
  [anon_sym_fallback] = "fallback",
  [anon_sym_ignore_DASHcomments] = "ignore-comments",
  [anon_sym_shell] = "shell",
  [anon_sym_tempdir] = "tempdir",
  [anon_sym_unstable] = "unstable",
  [anon_sym_windows_DASHpowershell] = "windows-powershell",
  [anon_sym_windows_DASHshell] = "windows-shell",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_else] = "else",
  [anon_sym_assert] = "assert",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_arch] = "arch",
  [anon_sym_num_cpus] = "num_cpus",
  [anon_sym_os] = "os",
  [anon_sym_os_family] = "os_family",
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
  [sym_assignment] = "assignment",
  [sym_import] = "import",
  [sym_mod] = "mod",
  [sym_recipe] = "recipe",
  [sym__attribute_list] = "_attribute_list",
  [sym__attribute] = "_attribute",
  [sym_builtin_attribute] = "builtin_attribute",
  [sym_attribute] = "attribute",
  [sym__a1] = "_a1",
  [sym_recipe_parameter] = "recipe_parameter",
  [sym_setting] = "setting",
  [sym__setting_boolean] = "_setting_boolean",
  [sym__setting_string] = "_setting_string",
  [sym__setting_list] = "_setting_list",
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
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_repeat2] = "recipe_repeat2",
  [aux_sym__attribute_list_repeat1] = "_attribute_list_repeat1",
  [aux_sym__setting_list_repeat1] = "_setting_list_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
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
  [anon_sym_export] = anon_sym_export,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_mod_token1] = aux_sym_mod_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__attribute_list_token1] = aux_sym__attribute_list_token1,
  [anon_sym_confirm] = anon_sym_confirm,
  [anon_sym_doc] = anon_sym_doc,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_linux] = anon_sym_linux,
  [anon_sym_macos] = anon_sym_macos,
  [anon_sym_no_DASHcd] = anon_sym_no_DASHcd,
  [anon_sym_no_DASHexit_DASHmessage] = anon_sym_no_DASHexit_DASHmessage,
  [anon_sym_no_DASHquiet] = anon_sym_no_DASHquiet,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_unix] = anon_sym_unix,
  [anon_sym_windows] = anon_sym_windows,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_allow_DASHduplicate_DASHrecipes] = anon_sym_allow_DASHduplicate_DASHrecipes,
  [anon_sym_allow_DASHduplicate_DASHvariables] = anon_sym_allow_DASHduplicate_DASHvariables,
  [anon_sym_dotenv_DASHfilename] = anon_sym_dotenv_DASHfilename,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_dotenv_DASHpath] = anon_sym_dotenv_DASHpath,
  [anon_sym_dotenv_DASHrequired] = anon_sym_dotenv_DASHrequired,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_ignore_DASHcomments] = anon_sym_ignore_DASHcomments,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_tempdir] = anon_sym_tempdir,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_windows_DASHpowershell] = anon_sym_windows_DASHpowershell,
  [anon_sym_windows_DASHshell] = anon_sym_windows_DASHshell,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_arch] = anon_sym_arch,
  [anon_sym_num_cpus] = anon_sym_num_cpus,
  [anon_sym_os] = anon_sym_os,
  [anon_sym_os_family] = anon_sym_os_family,
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
  [sym_assignment] = sym_assignment,
  [sym_import] = sym_import,
  [sym_mod] = sym_mod,
  [sym_recipe] = sym_recipe,
  [sym__attribute_list] = sym__attribute_list,
  [sym__attribute] = sym__attribute,
  [sym_builtin_attribute] = sym_builtin_attribute,
  [sym_attribute] = sym_attribute,
  [sym__a1] = sym__a1,
  [sym_recipe_parameter] = sym_recipe_parameter,
  [sym_setting] = sym_setting,
  [sym__setting_boolean] = sym__setting_boolean,
  [sym__setting_string] = sym__setting_string,
  [sym__setting_list] = sym__setting_list,
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
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_repeat2] = aux_sym_recipe_repeat2,
  [aux_sym__attribute_list_repeat1] = aux_sym__attribute_list_repeat1,
  [aux_sym__setting_list_repeat1] = aux_sym__setting_list_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
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
  [anon_sym_export] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [aux_sym__attribute_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_confirm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHexit_DASHmessage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHquiet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positional_DASHarguments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcomments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
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
  [anon_sym_if] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
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
  [anon_sym_EQ_TILDE] = {
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
  [sym_assignment] = {
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
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_list] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__a1] = {
    .visible = false,
    .named = true,
  },
  [sym_recipe_parameter] = {
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
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__setting_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
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
  field_alias_name = 1,
  field_attribute_name = 2,
  field_function_name = 3,
  field_mod_name = 4,
  field_parameter_name = 5,
  field_recipe_name = 6,
  field_setting_name = 7,
  field_variable_name = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_attribute_name] = "attribute_name",
  [field_function_name] = "function_name",
  [field_mod_name] = "mod_name",
  [field_parameter_name] = "parameter_name",
  [field_recipe_name] = "recipe_name",
  [field_setting_name] = "setting_name",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mod_name, 1},
  [1] =
    {field_attribute_name, 0},
  [2] =
    {field_setting_name, 1},
  [3] =
    {field_recipe_name, 0},
  [4] =
    {field_parameter_name, 0},
  [5] =
    {field_recipe_name, 1},
  [6] =
    {field_variable_name, 0},
  [7] =
    {field_parameter_name, 1},
  [8] =
    {field_alias_name, 1},
  [9] =
    {field_variable_name, 1},
  [10] =
    {field_function_name, 0},
  [11] =
    {field_recipe_name, 2},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 8,
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
  [24] = 17,
  [25] = 19,
  [26] = 12,
  [27] = 27,
  [28] = 28,
  [29] = 21,
  [30] = 16,
  [31] = 27,
  [32] = 13,
  [33] = 18,
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 78,
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
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 100,
  [104] = 104,
  [105] = 90,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
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
  [126] = 39,
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
  [137] = 137,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 131,
  [142] = 142,
  [143] = 135,
  [144] = 48,
  [145] = 51,
  [146] = 49,
  [147] = 147,
  [148] = 148,
  [149] = 57,
  [150] = 67,
  [151] = 151,
  [152] = 152,
  [153] = 63,
  [154] = 154,
  [155] = 56,
  [156] = 156,
  [157] = 50,
  [158] = 55,
  [159] = 159,
  [160] = 160,
  [161] = 139,
  [162] = 65,
  [163] = 66,
  [164] = 68,
  [165] = 47,
  [166] = 140,
  [167] = 62,
  [168] = 59,
  [169] = 45,
  [170] = 43,
  [171] = 42,
  [172] = 172,
  [173] = 38,
  [174] = 60,
  [175] = 41,
  [176] = 176,
  [177] = 46,
  [178] = 44,
  [179] = 40,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 187,
  [192] = 192,
  [193] = 185,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 189,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 201,
  [206] = 183,
  [207] = 207,
  [208] = 192,
  [209] = 199,
  [210] = 197,
  [211] = 195,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 215,
  [237] = 220,
  [238] = 228,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 219,
  [246] = 239,
  [247] = 247,
  [248] = 229,
  [249] = 241,
  [250] = 250,
  [251] = 242,
  [252] = 247,
  [253] = 243,
  [254] = 223,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 226,
  [261] = 233,
  [262] = 262,
  [263] = 263,
  [264] = 222,
  [265] = 265,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 10,
        '"', 60,
        '#', 90,
        '$', 28,
        '\'', 73,
        '(', 26,
        ')', 27,
        '+', 34,
        ',', 23,
        '/', 33,
        ':', 21,
        '=', 30,
        '@', 20,
        '[', 22,
        '\\', 6,
        ']', 24,
        '`', 38,
        'i', 83,
        'm', 84,
        '{', 31,
        '}', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '`') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 60,
        '#', 90,
        '$', 28,
        '\'', 73,
        '(', 26,
        ')', 27,
        ':', 21,
        '=', 29,
        '@', 20,
        '[', 22,
        '`', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '~') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(42);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 10,
        '#', 90,
        '(', 26,
        ')', 27,
        '+', 34,
        ',', 23,
        '/', 33,
        '=', 11,
        '@', 20,
        '[', 22,
        ']', 24,
        'i', 83,
        'm', 84,
        '{', 31,
        '}', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__attribute_list_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '~') ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(12);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '`') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(43);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(66);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
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
        'g', 7,
        'h', 8,
        'i', 9,
        'j', 10,
        'k', 11,
        'l', 12,
        'm', 13,
        'n', 14,
        'o', 15,
        'p', 16,
        'q', 17,
        'r', 18,
        's', 19,
        't', 20,
        'u', 21,
        'w', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 51:
      if (lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_doc);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'q') ADVANCE(176);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 122:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 131:
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 139:
      if (lookahead == 'w') ADVANCE(205);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(215);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 155:
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(228);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(234);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 180:
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(252);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(259);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_unix);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 208:
      if (lookahead == '3') ADVANCE(268);
      END_STATE();
    case 209:
      if (lookahead == '_') ADVANCE(269);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 217:
      if (lookahead == 'v') ADVANCE(278);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_linux);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_macos);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_no_DASHcd);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 252:
      if (lookahead == '6') ADVANCE(308);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 260:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 262:
      if (lookahead == 'w') ADVANCE(318);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_blake3);
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_choose);
      END_STATE();
    case 273:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 274:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 278:
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 279:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 288:
      if (lookahead == '-') ADVANCE(340);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 291:
      if (lookahead == 'x') ADVANCE(343);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 300:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(353);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 303:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 307:
      if (lookahead == '_') ADVANCE(358);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_sha256);
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 309:
      if (lookahead == 'k') ADVANCE(360);
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 311:
      if (lookahead == '_') ADVANCE(363);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 321:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 322:
      if (lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 331:
      if (lookahead == 'f') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 332:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(388);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 336:
      if (lookahead == 'k') ADVANCE(391);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(392);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 348:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 358:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(413);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(418);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 369:
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_windows);
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 371:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 372:
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 373:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 377:
      if (lookahead == 'z') ADVANCE(432);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_data_dir);
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_home_dir);
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 398:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(453);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(457);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_no_DASHquiet);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 407:
      if (lookahead == 'y') ADVANCE(458);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 414:
      if (lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(471);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(475);
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_cache_dir);
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 434:
      if (lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 435:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 441:
      if (lookahead == 'q') ADVANCE(492);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 448:
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 449:
      if (lookahead == 'm') ADVANCE(497);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 453:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 466:
      if (lookahead == 'k') ADVANCE(511);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 471:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 476:
      if (lookahead == 'h') ADVANCE(518);
      END_STATE();
    case 477:
      if (lookahead == 'x') ADVANCE(519);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 481:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 482:
      if (lookahead == 'z') ADVANCE(524);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_config_dir);
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 485:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 487:
      if (lookahead == '_') ADVANCE(528);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 490:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 491:
      if (lookahead == 'h') ADVANCE(532);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 493:
      if (lookahead == '_') ADVANCE(534);
      END_STATE();
    case 494:
      if (lookahead == '_') ADVANCE(535);
      END_STATE();
    case 495:
      if (lookahead == '_') ADVANCE(536);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 498:
      if (lookahead == '_') ADVANCE(539);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 502:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_parent_dir);
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 506:
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 507:
      if (lookahead == 'g') ADVANCE(548);
      END_STATE();
    case 508:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 510:
      if (lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 514:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(556);
      END_STATE();
    case 516:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 517:
      if (lookahead == 'w') ADVANCE(558);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 521:
      if (lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_blake3_file);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 525:
      if (lookahead == 'c') ADVANCE(565);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 528:
      if (lookahead == 'd') ADVANCE(568);
      END_STATE();
    case 529:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 534:
      if (lookahead == 'c') ADVANCE(572);
      END_STATE();
    case 535:
      if (lookahead == 'd') ADVANCE(573);
      END_STATE();
    case 536:
      if (lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 539:
      if (lookahead == 'd') ADVANCE(577);
      END_STATE();
    case 540:
      if (lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 541:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 543:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 545:
      if (lookahead == 'c') ADVANCE(583);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_path_exists);
      END_STATE();
    case 547:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 549:
      if (lookahead == 'h') ADVANCE(586);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_sha256_file);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 552:
      if (lookahead == 'c') ADVANCE(588);
      END_STATE();
    case 553:
      if (lookahead == 'c') ADVANCE(589);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(591);
      END_STATE();
    case 557:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 561:
      if (lookahead == 'h') ADVANCE(596);
      END_STATE();
    case 562:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 566:
      if (lookahead == '_') ADVANCE(600);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_datetime_utc);
      END_STATE();
    case 570:
      if (lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 578:
      if (lookahead == 'y') ADVANCE(611);
      END_STATE();
    case 579:
      if (lookahead == 'b') ADVANCE(612);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 582:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 585:
      if (lookahead == 'x') ADVANCE(618);
      END_STATE();
    case 586:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 587:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 588:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 590:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 591:
      if (lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 600:
      if (lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 601:
      if (lookahead == 'y') ADVANCE(633);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 603:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 604:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 605:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 606:
      if (lookahead == 'f') ADVANCE(638);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(639);
      END_STATE();
    case 608:
      if (lookahead == 'y') ADVANCE(640);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 612:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(644);
      END_STATE();
    case 614:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 615:
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 617:
      if (lookahead == 'g') ADVANCE(648);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 623:
      if (lookahead == 'h') ADVANCE(653);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 625:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 629:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 630:
      if (lookahead == 'y') ADVANCE(659);
      END_STATE();
    case 631:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_data_directory);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_data_local_dir);
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 635:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 636:
      if (lookahead == 'd') ADVANCE(664);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(665);
      END_STATE();
    case 638:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_executable_dir);
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_home_directory);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 643:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 646:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 648:
      if (lookahead == 'u') ADVANCE(675);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_semver_matches);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 651:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 654:
      if (lookahead == 'c') ADVANCE(680);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 656:
      if (lookahead == 'h') ADVANCE(681);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 658:
      if (lookahead == '-') ADVANCE(683);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_cache_directory);
      END_STATE();
    case 660:
      if (lookahead == 'y') ADVANCE(684);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 662:
      if (lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(688);
      END_STATE();
    case 667:
      if (lookahead == 'c') ADVANCE(689);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 670:
      if (lookahead == 'c') ADVANCE(691);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_no_DASHexit_DASHmessage);
      END_STATE();
    case 674:
      if (lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 675:
      if (lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 678:
      if (lookahead == 'y') ADVANCE(695);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 680:
      if (lookahead == 'h') ADVANCE(697);
      END_STATE();
    case 681:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead == 'v') ADVANCE(701);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_config_directory);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_config_local_dir);
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 687:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 688:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 690:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 694:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 698:
      if (lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 699:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 700:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 701:
      if (lookahead == 'a') ADVANCE(715);
      END_STATE();
    case 702:
      if (lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(723);
      END_STATE();
    case 710:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 712:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 714:
      if (lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(730);
      END_STATE();
    case 718:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 721:
      if (lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 727:
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 728:
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 730:
      if (lookahead == 'y') ADVANCE(739);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 732:
      if (lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 733:
      if (lookahead == 'v') ADVANCE(742);
      END_STATE();
    case 734:
      if (lookahead == 'y') ADVANCE(743);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 736:
      if (lookahead == 'p') ADVANCE(745);
      END_STATE();
    case 737:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_data_local_directory);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_executable_directory);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(749);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 746:
      if (lookahead == 'b') ADVANCE(751);
      END_STATE();
    case 747:
      if (lookahead == 'y') ADVANCE(752);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 749:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 751:
      if (lookahead == 'l') ADVANCE(755);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_config_local_directory);
      END_STATE();
    case 753:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 758:
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 760:
      if (lookahead == 'v') ADVANCE(761);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_invocation_directory_native);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 40},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 75},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 75},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 40},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 0},
  [265] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
    [aux_sym_mod_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_confirm] = ACTIONS(1),
    [anon_sym_doc] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_linux] = ACTIONS(1),
    [anon_sym_macos] = ACTIONS(1),
    [anon_sym_no_DASHcd] = ACTIONS(1),
    [anon_sym_no_DASHexit_DASHmessage] = ACTIONS(1),
    [anon_sym_no_DASHquiet] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_unix] = ACTIONS(1),
    [anon_sym_windows] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHrecipes] = ACTIONS(1),
    [anon_sym_allow_DASHduplicate_DASHvariables] = ACTIONS(1),
    [anon_sym_dotenv_DASHfilename] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_dotenv_DASHpath] = ACTIONS(1),
    [anon_sym_dotenv_DASHrequired] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_ignore_DASHcomments] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_tempdir] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_windows_DASHpowershell] = ACTIONS(1),
    [anon_sym_windows_DASHshell] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_num_cpus] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_os_family] = ACTIONS(1),
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
    [sym_file] = STATE(258),
    [sym_alias] = STATE(87),
    [sym_assignment] = STATE(87),
    [sym_import] = STATE(87),
    [sym_mod] = STATE(87),
    [sym_recipe] = STATE(87),
    [sym__attribute_list] = STATE(132),
    [sym_setting] = STATE(87),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(52),
    [aux_sym_recipe_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_alias] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [aux_sym_import_token1] = ACTIONS(13),
    [aux_sym_mod_token1] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(137),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_function_parameters] = STATE(219),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(2),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(137),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_function_parameters] = STATE(245),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(3),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(137),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_function_parameters] = STATE(253),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(204),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(204),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(6),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(147),
    [sym_condition] = STATE(234),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(7),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(189),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(8),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(147),
    [sym_condition] = STATE(221),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(9),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(137),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_function_parameters] = STATE(243),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(10),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(198),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(11),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(192),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(12),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(187),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(13),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(70),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(14),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(93),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(15),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(193),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(16),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(237),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(17),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(233),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(18),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(264),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(19),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(231),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(20),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(189),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(214),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(22),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(244),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(23),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(220),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(24),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(222),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(25),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(208),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(26),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(226),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(27),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(217),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(28),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(198),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(29),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_expression] = STATE(185),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(30),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(260),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(31),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [32] = {
    [sym_expression] = STATE(191),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(32),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [33] = {
    [sym_expression] = STATE(261),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(33),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_expression] = STATE(204),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(34),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [35] = {
    [sym_expression] = STATE(84),
    [sym_value] = STATE(61),
    [sym_builtin_function_call] = STATE(60),
    [sym_function_call] = STATE(60),
    [sym_backtick] = STATE(60),
    [sym_indented_backtick] = STATE(60),
    [sym_string] = STATE(60),
    [sym_indented_normal_string] = STATE(40),
    [sym_normal_string] = STATE(40),
    [sym_indented_raw_string] = STATE(40),
    [sym_raw_string] = STATE(40),
    [sym_comment] = STATE(35),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_shell] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_arch] = ACTIONS(37),
    [anon_sym_num_cpus] = ACTIONS(37),
    [anon_sym_os] = ACTIONS(37),
    [anon_sym_os_family] = ACTIONS(37),
    [anon_sym_env_var] = ACTIONS(25),
    [anon_sym_env_var_or_default] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_is_dependency] = ACTIONS(37),
    [anon_sym_invocation_dir] = ACTIONS(37),
    [anon_sym_invocation_dir_native] = ACTIONS(37),
    [anon_sym_invocation_directory] = ACTIONS(37),
    [anon_sym_invocation_directory_native] = ACTIONS(37),
    [anon_sym_justfile] = ACTIONS(37),
    [anon_sym_justfile_dir] = ACTIONS(37),
    [anon_sym_justfile_directory] = ACTIONS(37),
    [anon_sym_source_dir] = ACTIONS(37),
    [anon_sym_source_directory] = ACTIONS(37),
    [anon_sym_source_file] = ACTIONS(37),
    [anon_sym_just_executable] = ACTIONS(37),
    [anon_sym_just_pid] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(39),
    [anon_sym_prepend] = ACTIONS(39),
    [anon_sym_encode_uri_component] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_replace] = ACTIONS(43),
    [anon_sym_replace_regex] = ACTIONS(43),
    [anon_sym_trim] = ACTIONS(25),
    [anon_sym_trim_end] = ACTIONS(25),
    [anon_sym_trim_end_match] = ACTIONS(39),
    [anon_sym_trim_end_matches] = ACTIONS(39),
    [anon_sym_trim_start] = ACTIONS(25),
    [anon_sym_trim_start_match] = ACTIONS(39),
    [anon_sym_trim_start_matches] = ACTIONS(39),
    [anon_sym_capitalize] = ACTIONS(25),
    [anon_sym_kebabcase] = ACTIONS(25),
    [anon_sym_lowercamelcase] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(25),
    [anon_sym_shoutykebabcase] = ACTIONS(25),
    [anon_sym_shoutysnakecase] = ACTIONS(25),
    [anon_sym_snakecase] = ACTIONS(25),
    [anon_sym_titlecase] = ACTIONS(25),
    [anon_sym_uppercamelcase] = ACTIONS(25),
    [anon_sym_uppercase] = ACTIONS(25),
    [anon_sym_absolute_path] = ACTIONS(25),
    [anon_sym_canonicalize] = ACTIONS(25),
    [anon_sym_file_name] = ACTIONS(25),
    [anon_sym_file_stem] = ACTIONS(25),
    [anon_sym_parent_dir] = ACTIONS(25),
    [anon_sym_parent_directory] = ACTIONS(25),
    [anon_sym_without_extension] = ACTIONS(25),
    [anon_sym_clean] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(31),
    [anon_sym_path_exists] = ACTIONS(25),
    [anon_sym_error] = ACTIONS(25),
    [anon_sym_blake3] = ACTIONS(25),
    [anon_sym_blake3_file] = ACTIONS(25),
    [anon_sym_sha256] = ACTIONS(25),
    [anon_sym_sha256_file] = ACTIONS(25),
    [anon_sym_uuid] = ACTIONS(37),
    [anon_sym_choose] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(25),
    [anon_sym_datetime_utc] = ACTIONS(25),
    [anon_sym_semver_matches] = ACTIONS(39),
    [anon_sym_cache_dir] = ACTIONS(37),
    [anon_sym_cache_directory] = ACTIONS(37),
    [anon_sym_config_dir] = ACTIONS(37),
    [anon_sym_config_directory] = ACTIONS(37),
    [anon_sym_config_local_dir] = ACTIONS(37),
    [anon_sym_config_local_directory] = ACTIONS(37),
    [anon_sym_data_dir] = ACTIONS(37),
    [anon_sym_data_directory] = ACTIONS(37),
    [anon_sym_data_local_dir] = ACTIONS(37),
    [anon_sym_data_local_directory] = ACTIONS(37),
    [anon_sym_executable_dir] = ACTIONS(37),
    [anon_sym_executable_directory] = ACTIONS(37),
    [anon_sym_home_dir] = ACTIONS(37),
    [anon_sym_home_directory] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [36] = {
    [sym_value] = STATE(133),
    [sym_builtin_function_call] = STATE(174),
    [sym_function_call] = STATE(174),
    [sym_backtick] = STATE(174),
    [sym_indented_backtick] = STATE(174),
    [sym_string] = STATE(174),
    [sym_indented_normal_string] = STATE(179),
    [sym_normal_string] = STATE(179),
    [sym_indented_raw_string] = STATE(179),
    [sym_raw_string] = STATE(179),
    [sym_comment] = STATE(36),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_extension] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_shell] = ACTIONS(73),
    [anon_sym_arch] = ACTIONS(75),
    [anon_sym_num_cpus] = ACTIONS(75),
    [anon_sym_os] = ACTIONS(75),
    [anon_sym_os_family] = ACTIONS(75),
    [anon_sym_env_var] = ACTIONS(69),
    [anon_sym_env_var_or_default] = ACTIONS(77),
    [anon_sym_env] = ACTIONS(79),
    [anon_sym_is_dependency] = ACTIONS(75),
    [anon_sym_invocation_dir] = ACTIONS(75),
    [anon_sym_invocation_dir_native] = ACTIONS(75),
    [anon_sym_invocation_directory] = ACTIONS(75),
    [anon_sym_invocation_directory_native] = ACTIONS(75),
    [anon_sym_justfile] = ACTIONS(75),
    [anon_sym_justfile_dir] = ACTIONS(75),
    [anon_sym_justfile_directory] = ACTIONS(75),
    [anon_sym_source_dir] = ACTIONS(75),
    [anon_sym_source_directory] = ACTIONS(75),
    [anon_sym_source_file] = ACTIONS(75),
    [anon_sym_just_executable] = ACTIONS(75),
    [anon_sym_just_pid] = ACTIONS(75),
    [anon_sym_append] = ACTIONS(77),
    [anon_sym_prepend] = ACTIONS(77),
    [anon_sym_encode_uri_component] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_replace] = ACTIONS(81),
    [anon_sym_replace_regex] = ACTIONS(81),
    [anon_sym_trim] = ACTIONS(69),
    [anon_sym_trim_end] = ACTIONS(69),
    [anon_sym_trim_end_match] = ACTIONS(77),
    [anon_sym_trim_end_matches] = ACTIONS(77),
    [anon_sym_trim_start] = ACTIONS(69),
    [anon_sym_trim_start_match] = ACTIONS(77),
    [anon_sym_trim_start_matches] = ACTIONS(77),
    [anon_sym_capitalize] = ACTIONS(69),
    [anon_sym_kebabcase] = ACTIONS(69),
    [anon_sym_lowercamelcase] = ACTIONS(69),
    [anon_sym_lowercase] = ACTIONS(69),
    [anon_sym_shoutykebabcase] = ACTIONS(69),
    [anon_sym_shoutysnakecase] = ACTIONS(69),
    [anon_sym_snakecase] = ACTIONS(69),
    [anon_sym_titlecase] = ACTIONS(69),
    [anon_sym_uppercamelcase] = ACTIONS(69),
    [anon_sym_uppercase] = ACTIONS(69),
    [anon_sym_absolute_path] = ACTIONS(69),
    [anon_sym_canonicalize] = ACTIONS(69),
    [anon_sym_file_name] = ACTIONS(69),
    [anon_sym_file_stem] = ACTIONS(69),
    [anon_sym_parent_dir] = ACTIONS(69),
    [anon_sym_parent_directory] = ACTIONS(69),
    [anon_sym_without_extension] = ACTIONS(69),
    [anon_sym_clean] = ACTIONS(69),
    [anon_sym_join] = ACTIONS(73),
    [anon_sym_path_exists] = ACTIONS(69),
    [anon_sym_error] = ACTIONS(69),
    [anon_sym_blake3] = ACTIONS(69),
    [anon_sym_blake3_file] = ACTIONS(69),
    [anon_sym_sha256] = ACTIONS(69),
    [anon_sym_sha256_file] = ACTIONS(69),
    [anon_sym_uuid] = ACTIONS(75),
    [anon_sym_choose] = ACTIONS(77),
    [anon_sym_datetime] = ACTIONS(69),
    [anon_sym_datetime_utc] = ACTIONS(69),
    [anon_sym_semver_matches] = ACTIONS(77),
    [anon_sym_cache_dir] = ACTIONS(75),
    [anon_sym_cache_directory] = ACTIONS(75),
    [anon_sym_config_dir] = ACTIONS(75),
    [anon_sym_config_directory] = ACTIONS(75),
    [anon_sym_config_local_dir] = ACTIONS(75),
    [anon_sym_config_local_directory] = ACTIONS(75),
    [anon_sym_data_dir] = ACTIONS(75),
    [anon_sym_data_directory] = ACTIONS(75),
    [anon_sym_data_local_dir] = ACTIONS(75),
    [anon_sym_data_local_directory] = ACTIONS(75),
    [anon_sym_executable_dir] = ACTIONS(75),
    [anon_sym_executable_directory] = ACTIONS(75),
    [anon_sym_home_dir] = ACTIONS(75),
    [anon_sym_home_directory] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [37] = {
    [sym_value] = STATE(152),
    [sym_builtin_function_call] = STATE(174),
    [sym_function_call] = STATE(174),
    [sym_backtick] = STATE(174),
    [sym_indented_backtick] = STATE(174),
    [sym_string] = STATE(174),
    [sym_indented_normal_string] = STATE(179),
    [sym_normal_string] = STATE(179),
    [sym_indented_raw_string] = STATE(179),
    [sym_raw_string] = STATE(179),
    [sym_comment] = STATE(37),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_extension] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_shell] = ACTIONS(73),
    [anon_sym_arch] = ACTIONS(75),
    [anon_sym_num_cpus] = ACTIONS(75),
    [anon_sym_os] = ACTIONS(75),
    [anon_sym_os_family] = ACTIONS(75),
    [anon_sym_env_var] = ACTIONS(69),
    [anon_sym_env_var_or_default] = ACTIONS(77),
    [anon_sym_env] = ACTIONS(79),
    [anon_sym_is_dependency] = ACTIONS(75),
    [anon_sym_invocation_dir] = ACTIONS(75),
    [anon_sym_invocation_dir_native] = ACTIONS(75),
    [anon_sym_invocation_directory] = ACTIONS(75),
    [anon_sym_invocation_directory_native] = ACTIONS(75),
    [anon_sym_justfile] = ACTIONS(75),
    [anon_sym_justfile_dir] = ACTIONS(75),
    [anon_sym_justfile_directory] = ACTIONS(75),
    [anon_sym_source_dir] = ACTIONS(75),
    [anon_sym_source_directory] = ACTIONS(75),
    [anon_sym_source_file] = ACTIONS(75),
    [anon_sym_just_executable] = ACTIONS(75),
    [anon_sym_just_pid] = ACTIONS(75),
    [anon_sym_append] = ACTIONS(77),
    [anon_sym_prepend] = ACTIONS(77),
    [anon_sym_encode_uri_component] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_replace] = ACTIONS(81),
    [anon_sym_replace_regex] = ACTIONS(81),
    [anon_sym_trim] = ACTIONS(69),
    [anon_sym_trim_end] = ACTIONS(69),
    [anon_sym_trim_end_match] = ACTIONS(77),
    [anon_sym_trim_end_matches] = ACTIONS(77),
    [anon_sym_trim_start] = ACTIONS(69),
    [anon_sym_trim_start_match] = ACTIONS(77),
    [anon_sym_trim_start_matches] = ACTIONS(77),
    [anon_sym_capitalize] = ACTIONS(69),
    [anon_sym_kebabcase] = ACTIONS(69),
    [anon_sym_lowercamelcase] = ACTIONS(69),
    [anon_sym_lowercase] = ACTIONS(69),
    [anon_sym_shoutykebabcase] = ACTIONS(69),
    [anon_sym_shoutysnakecase] = ACTIONS(69),
    [anon_sym_snakecase] = ACTIONS(69),
    [anon_sym_titlecase] = ACTIONS(69),
    [anon_sym_uppercamelcase] = ACTIONS(69),
    [anon_sym_uppercase] = ACTIONS(69),
    [anon_sym_absolute_path] = ACTIONS(69),
    [anon_sym_canonicalize] = ACTIONS(69),
    [anon_sym_file_name] = ACTIONS(69),
    [anon_sym_file_stem] = ACTIONS(69),
    [anon_sym_parent_dir] = ACTIONS(69),
    [anon_sym_parent_directory] = ACTIONS(69),
    [anon_sym_without_extension] = ACTIONS(69),
    [anon_sym_clean] = ACTIONS(69),
    [anon_sym_join] = ACTIONS(73),
    [anon_sym_path_exists] = ACTIONS(69),
    [anon_sym_error] = ACTIONS(69),
    [anon_sym_blake3] = ACTIONS(69),
    [anon_sym_blake3_file] = ACTIONS(69),
    [anon_sym_sha256] = ACTIONS(69),
    [anon_sym_sha256_file] = ACTIONS(69),
    [anon_sym_uuid] = ACTIONS(75),
    [anon_sym_choose] = ACTIONS(77),
    [anon_sym_datetime] = ACTIONS(69),
    [anon_sym_datetime_utc] = ACTIONS(69),
    [anon_sym_semver_matches] = ACTIONS(77),
    [anon_sym_cache_dir] = ACTIONS(75),
    [anon_sym_cache_directory] = ACTIONS(75),
    [anon_sym_config_dir] = ACTIONS(75),
    [anon_sym_config_directory] = ACTIONS(75),
    [anon_sym_config_local_dir] = ACTIONS(75),
    [anon_sym_config_local_directory] = ACTIONS(75),
    [anon_sym_data_dir] = ACTIONS(75),
    [anon_sym_data_directory] = ACTIONS(75),
    [anon_sym_data_local_dir] = ACTIONS(75),
    [anon_sym_data_local_directory] = ACTIONS(75),
    [anon_sym_executable_dir] = ACTIONS(75),
    [anon_sym_executable_directory] = ACTIONS(75),
    [anon_sym_home_dir] = ACTIONS(75),
    [anon_sym_home_directory] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(97), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(95), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [30] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_comment,
    ACTIONS(101), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(99), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [62] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(107), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(105), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [92] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(111), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(109), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [122] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [152] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(119), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(117), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [182] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(123), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(121), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [212] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(127), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(125), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [242] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(131), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [272] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(133), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [301] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(137), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [330] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(143), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(141), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [359] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(147), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(145), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [388] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(149), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [417] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_alias,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      aux_sym_import_token1,
    ACTIONS(15), 1,
      aux_sym_mod_token1,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_set,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_file_repeat1,
    STATE(122), 1,
      aux_sym_recipe_repeat1,
    STATE(132), 1,
      sym__attribute_list,
    STATE(87), 6,
      sym_alias,
      sym_assignment,
      sym_import,
      sym_mod,
      sym_recipe,
      sym_setting,
  [468] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(53), 1,
      sym_comment,
    STATE(142), 1,
      sym__attribute,
    ACTIONS(159), 2,
      anon_sym_extension,
      anon_sym_group,
    STATE(184), 2,
      sym_builtin_attribute,
      sym_attribute,
    ACTIONS(157), 3,
      anon_sym_confirm,
      anon_sym_doc,
      anon_sym_script,
    ACTIONS(161), 9,
      anon_sym_linux,
      anon_sym_macos,
      anon_sym_no_DASHcd,
      anon_sym_no_DASHexit_DASHmessage,
      anon_sym_no_DASHquiet,
      anon_sym_positional_DASHarguments,
      anon_sym_private,
      anon_sym_unix,
      anon_sym_windows,
  [505] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_alias,
    ACTIONS(171), 1,
      anon_sym_export,
    ACTIONS(174), 1,
      aux_sym_import_token1,
    ACTIONS(177), 1,
      aux_sym_mod_token1,
    ACTIONS(180), 1,
      anon_sym_AT,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_set,
    STATE(122), 1,
      aux_sym_recipe_repeat1,
    STATE(132), 1,
      sym__attribute_list,
    STATE(54), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(87), 6,
      sym_alias,
      sym_assignment,
      sym_import,
      sym_mod,
      sym_recipe,
      sym_setting,
  [554] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(191), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(189), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [583] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(195), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(193), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [612] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(199), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(197), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [641] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(96), 1,
      sym_string,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
    ACTIONS(203), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [682] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(205), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [711] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(101), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(99), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [740] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(211), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(209), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [771] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(215), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [800] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(219), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [829] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
    STATE(213), 1,
      sym__attribute,
    ACTIONS(159), 2,
      anon_sym_extension,
      anon_sym_group,
    STATE(184), 2,
      sym_builtin_attribute,
      sym_attribute,
    ACTIONS(157), 3,
      anon_sym_confirm,
      anon_sym_doc,
      anon_sym_script,
    ACTIONS(161), 9,
      anon_sym_linux,
      anon_sym_macos,
      anon_sym_no_DASHcd,
      anon_sym_no_DASHexit_DASHmessage,
      anon_sym_no_DASHquiet,
      anon_sym_positional_DASHarguments,
      anon_sym_private,
      anon_sym_unix,
      anon_sym_windows,
  [866] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(225), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(223), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [895] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(229), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(227), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [924] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(233), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(231), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [953] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(237), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(235), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [982] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(241), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(239), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [1009] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(245), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [1036] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(71), 1,
      sym_comment,
    ACTIONS(249), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
    ACTIONS(247), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [1063] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(255), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(253), 10,
      anon_sym_export,
      anon_sym_positional_DASHarguments,
      anon_sym_allow_DASHduplicate_DASHrecipes,
      anon_sym_allow_DASHduplicate_DASHvariables,
      anon_sym_dotenv_DASHload,
      anon_sym_dotenv_DASHrequired,
      anon_sym_fallback,
      anon_sym_ignore_DASHcomments,
      anon_sym_unstable,
      anon_sym_windows_DASHpowershell,
  [1094] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_comment,
    STATE(108), 1,
      sym_boolean,
    STATE(109), 1,
      sym_string,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1132] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      anon_sym_COLON_EQ,
    STATE(74), 1,
      sym_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    STATE(81), 3,
      sym__setting_boolean,
      sym__setting_string,
      sym__setting_list,
    ACTIONS(265), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1160] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(269), 1,
      anon_sym_COLON_EQ,
    STATE(75), 1,
      sym_comment,
    STATE(81), 1,
      sym__setting_boolean,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(265), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1186] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_comment,
    STATE(207), 1,
      sym_string,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1217] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_comment,
    STATE(207), 1,
      sym_string,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1248] = 7,
    ACTIONS(275), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(277), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(113), 1,
      sym_escape_sequence,
    ACTIONS(279), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1274] = 6,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(283), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_indented_normal_string_token1,
    STATE(113), 1,
      sym_escape_sequence,
    STATE(79), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(288), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1298] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(293), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1318] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(297), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1338] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym_comment,
    STATE(91), 1,
      sym_string,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1366] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(301), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1386] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(305), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1406] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym_comment,
    STATE(207), 1,
      sym_string,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1434] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_comment,
    STATE(240), 1,
      sym_string,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1462] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(307), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(309), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1482] = 7,
    ACTIONS(277), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(88), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(113), 1,
      sym_escape_sequence,
    ACTIONS(279), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1508] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(315), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1528] = 7,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_normal_string_token1,
    STATE(90), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_normal_string_repeat1,
    STATE(115), 1,
      sym_escape_sequence,
    ACTIONS(321), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1554] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(325), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1574] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(329), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1594] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(333), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1614] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(337), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1634] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym_comment,
    STATE(109), 1,
      sym_string,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [1662] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(339), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(341), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1682] = 6,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_normal_string_token1,
    STATE(115), 1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(348), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1706] = 7,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      aux_sym_normal_string_token1,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      aux_sym_normal_string_repeat1,
    STATE(98), 1,
      sym_comment,
    STATE(115), 1,
      sym_escape_sequence,
    ACTIONS(321), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1732] = 7,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      aux_sym_normal_string_token1,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      aux_sym_normal_string_repeat1,
    STATE(99), 1,
      sym_comment,
    STATE(115), 1,
      sym_escape_sequence,
    ACTIONS(321), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1758] = 7,
    ACTIONS(277), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(79), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(100), 1,
      sym_comment,
    STATE(113), 1,
      sym_escape_sequence,
    ACTIONS(279), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(357), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(359), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1804] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(102), 1,
      sym_comment,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(363), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1824] = 7,
    ACTIONS(277), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(365), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(79), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(103), 1,
      sym_comment,
    STATE(113), 1,
      sym_escape_sequence,
    ACTIONS(279), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1850] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(369), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1870] = 7,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      aux_sym_normal_string_token1,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      aux_sym_normal_string_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(115), 1,
      sym_escape_sequence,
    ACTIONS(321), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1896] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(373), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(375), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1916] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(379), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1936] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(108), 1,
      sym_comment,
    ACTIONS(381), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(383), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1956] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(109), 1,
      sym_comment,
    ACTIONS(385), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(387), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [1976] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym_comment,
    STATE(134), 1,
      sym_string,
    STATE(40), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [2004] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(111), 1,
      sym_comment,
    ACTIONS(389), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_LBRACK,
    ACTIONS(391), 6,
      anon_sym_alias,
      anon_sym_export,
      aux_sym_import_token1,
      aux_sym_mod_token1,
      anon_sym_set,
      sym_identifier,
  [2024] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    STATE(112), 1,
      sym_comment,
    ACTIONS(393), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2040] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(395), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2056] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(393), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2072] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(397), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [2088] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_COLON_EQ,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    STATE(116), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_recipe_repeat2,
    STATE(180), 1,
      sym_recipe_parameter,
  [2113] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(117), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_recipe_repeat2,
    STATE(180), 1,
      sym_recipe_parameter,
  [2135] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(132), 1,
      sym__attribute_list,
    ACTIONS(409), 2,
      anon_sym_AT,
      sym_identifier,
    STATE(118), 2,
      sym_comment,
      aux_sym_recipe_repeat1,
  [2153] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(119), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_recipe_repeat2,
    STATE(180), 1,
      sym_recipe_parameter,
  [2175] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      anon_sym_COLON,
    STATE(120), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_recipe_repeat2,
    STATE(180), 1,
      sym_recipe_parameter,
  [2197] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    STATE(180), 1,
      sym_recipe_parameter,
    STATE(121), 2,
      sym_comment,
      aux_sym_recipe_repeat2,
  [2217] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_AT,
    STATE(118), 1,
      aux_sym_recipe_repeat1,
    STATE(122), 1,
      sym_comment,
    STATE(132), 1,
      sym__attribute_list,
  [2239] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      anon_sym_COLON,
    STATE(121), 1,
      aux_sym_recipe_repeat2,
    STATE(123), 1,
      sym_comment,
    STATE(180), 1,
      sym_recipe_parameter,
  [2261] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    ACTIONS(432), 1,
      anon_sym_COLON,
    STATE(121), 1,
      aux_sym_recipe_repeat2,
    STATE(124), 1,
      sym_comment,
    STATE(180), 1,
      sym_recipe_parameter,
  [2283] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2298] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2313] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(442), 1,
      anon_sym_EQ,
    STATE(127), 1,
      sym_comment,
    ACTIONS(440), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2328] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_comment,
    STATE(186), 1,
      sym__a1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2345] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_comment,
    STATE(188), 1,
      sym__a1,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2362] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_AT,
      anon_sym_LBRACK,
      sym_identifier,
  [2374] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(452), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(454), 1,
      aux_sym_indented_raw_string_token1,
    STATE(131), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_indented_raw_string_repeat1,
  [2390] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_AT,
      anon_sym_LBRACK,
      sym_identifier,
  [2402] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2414] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym__setting_list_repeat1,
  [2430] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(464), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(131), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(135), 1,
      sym_comment,
  [2446] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(468), 1,
      aux_sym_indented_backtick_token1,
    STATE(136), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_indented_backtick_repeat1,
  [2462] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym_function_parameters_repeat1,
  [2478] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(474), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(138), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_indented_backtick_repeat1,
  [2494] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(476), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(138), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(139), 1,
      sym_comment,
  [2510] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_comment,
    STATE(168), 2,
      sym__p1,
      sym__p2,
  [2524] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(480), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(141), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_indented_raw_string_repeat1,
  [2540] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym__attribute_list_repeat1,
  [2556] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(486), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(141), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(143), 1,
      sym_comment,
  [2572] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2584] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2596] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(146), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2608] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [2620] = 4,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(492), 1,
      aux_sym_indented_backtick_token1,
    STATE(148), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [2634] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(149), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2646] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2658] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    STATE(151), 2,
      sym_comment,
      aux_sym__attribute_list_repeat1,
  [2672] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2684] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(153), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2696] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(154), 1,
      sym_comment,
    ACTIONS(502), 3,
      anon_sym_AT,
      anon_sym_LBRACK,
      sym_identifier,
  [2708] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(155), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2720] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_comment,
    STATE(172), 1,
      aux_sym__setting_list_repeat1,
  [2736] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(157), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2748] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(158), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2760] = 4,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(506), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(508), 1,
      aux_sym_indented_raw_string_token1,
    STATE(159), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [2774] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_function_parameters_repeat1,
  [2790] = 5,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(513), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(136), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(161), 1,
      sym_comment,
  [2806] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(162), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2818] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2830] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(164), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2842] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2854] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_comment,
    STATE(59), 2,
      sym__p1,
      sym__p2,
  [2868] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2880] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(168), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2892] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(169), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2904] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(170), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2916] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(171), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2928] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(172), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [2942] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(173), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2954] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(174), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2966] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(175), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [2978] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(176), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [2992] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [3004] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(178), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [3016] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(179), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [3028] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(180), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      sym_identifier,
  [3040] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(108), 1,
      sym_boolean,
    STATE(181), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
  [3054] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym__attribute_list_repeat1,
    STATE(182), 1,
      sym_comment,
  [3070] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__pN,
    STATE(183), 1,
      sym_comment,
  [3083] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(184), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3094] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_comment,
  [3107] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(186), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3118] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_comment,
  [3131] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(188), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3142] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [3155] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    STATE(190), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [3166] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_comment,
  [3179] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [3192] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      sym_comment,
  [3205] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym__a1,
    STATE(194), 1,
      sym_comment,
  [3218] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__p3,
    STATE(195), 1,
      sym_comment,
  [3231] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(196), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3242] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__p2,
    STATE(197), 1,
      sym_comment,
  [3255] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [3268] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__p0,
    STATE(199), 1,
      sym_comment,
  [3281] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    STATE(200), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [3292] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__p1,
    STATE(201), 1,
      sym_comment,
  [3305] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(579), 1,
      anon_sym_COLON_EQ,
    STATE(81), 1,
      sym__setting_list,
    STATE(202), 1,
      sym_comment,
  [3318] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(203), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3329] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(204), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3340] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__p1,
    STATE(205), 1,
      sym_comment,
  [3353] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__pN,
    STATE(206), 1,
      sym_comment,
  [3366] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(207), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3377] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      sym_comment,
  [3390] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__p0,
    STATE(209), 1,
      sym_comment,
  [3403] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__p2,
    STATE(210), 1,
      sym_comment,
  [3416] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__p3,
    STATE(211), 1,
      sym_comment,
  [3429] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(593), 1,
      anon_sym_COLON_EQ,
    STATE(81), 1,
      sym__setting_string,
    STATE(212), 1,
      sym_comment,
  [3442] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(213), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3453] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(214), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [3464] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    STATE(215), 1,
      sym_comment,
  [3474] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(216), 1,
      sym_comment,
  [3484] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_comment,
  [3494] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(601), 1,
      aux_sym__attribute_list_token1,
    STATE(218), 1,
      sym_comment,
  [3504] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym_comment,
  [3514] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_comment,
  [3524] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_comment,
  [3534] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      sym_comment,
  [3544] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(611), 1,
      aux_sym_backtick_token1,
    STATE(223), 1,
      sym_comment,
  [3554] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(613), 1,
      aux_sym__attribute_list_token1,
    STATE(224), 1,
      sym_comment,
  [3564] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_comment,
  [3574] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      sym_comment,
  [3584] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    STATE(227), 1,
      sym_comment,
  [3594] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_comment,
  [3604] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(621), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym_comment,
  [3614] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(623), 1,
      anon_sym_else,
    STATE(230), 1,
      sym_comment,
  [3624] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym_comment,
  [3634] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(232), 1,
      sym_comment,
  [3644] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      sym_comment,
  [3654] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      sym_comment,
  [3664] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(235), 1,
      sym_comment,
  [3674] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(635), 1,
      anon_sym_BQUOTE,
    STATE(236), 1,
      sym_comment,
  [3684] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_comment,
  [3694] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      sym_comment,
  [3704] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      sym_comment,
  [3714] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_comment,
  [3724] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym_comment,
  [3734] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      sym_comment,
  [3744] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_comment,
  [3754] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_comment,
  [3764] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_comment,
  [3774] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym_comment,
  [3784] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(653), 1,
      aux_sym_raw_string_token1,
    STATE(247), 1,
      sym_comment,
  [3794] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(655), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      sym_comment,
  [3804] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_comment,
  [3814] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(250), 1,
      sym_comment,
  [3824] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_comment,
  [3834] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(663), 1,
      aux_sym_raw_string_token1,
    STATE(252), 1,
      sym_comment,
  [3844] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_comment,
  [3854] = 3,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(667), 1,
      aux_sym_backtick_token1,
    STATE(254), 1,
      sym_comment,
  [3864] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(669), 1,
      anon_sym_COLON_EQ,
    STATE(255), 1,
      sym_comment,
  [3874] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(671), 1,
      anon_sym_COLON_EQ,
    STATE(256), 1,
      sym_comment,
  [3884] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym_comment,
  [3894] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    STATE(258), 1,
      sym_comment,
  [3904] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(677), 1,
      sym_identifier,
    STATE(259), 1,
      sym_comment,
  [3914] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      sym_comment,
  [3924] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      sym_comment,
  [3934] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(683), 1,
      sym_identifier,
    STATE(262), 1,
      sym_comment,
  [3944] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(685), 1,
      sym_identifier,
    STATE(263), 1,
      sym_comment,
  [3954] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      sym_comment,
  [3964] = 1,
    ACTIONS(689), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 30,
  [SMALL_STATE(40)] = 62,
  [SMALL_STATE(41)] = 92,
  [SMALL_STATE(42)] = 122,
  [SMALL_STATE(43)] = 152,
  [SMALL_STATE(44)] = 182,
  [SMALL_STATE(45)] = 212,
  [SMALL_STATE(46)] = 242,
  [SMALL_STATE(47)] = 272,
  [SMALL_STATE(48)] = 301,
  [SMALL_STATE(49)] = 330,
  [SMALL_STATE(50)] = 359,
  [SMALL_STATE(51)] = 388,
  [SMALL_STATE(52)] = 417,
  [SMALL_STATE(53)] = 468,
  [SMALL_STATE(54)] = 505,
  [SMALL_STATE(55)] = 554,
  [SMALL_STATE(56)] = 583,
  [SMALL_STATE(57)] = 612,
  [SMALL_STATE(58)] = 641,
  [SMALL_STATE(59)] = 682,
  [SMALL_STATE(60)] = 711,
  [SMALL_STATE(61)] = 740,
  [SMALL_STATE(62)] = 771,
  [SMALL_STATE(63)] = 800,
  [SMALL_STATE(64)] = 829,
  [SMALL_STATE(65)] = 866,
  [SMALL_STATE(66)] = 895,
  [SMALL_STATE(67)] = 924,
  [SMALL_STATE(68)] = 953,
  [SMALL_STATE(69)] = 982,
  [SMALL_STATE(70)] = 1009,
  [SMALL_STATE(71)] = 1036,
  [SMALL_STATE(72)] = 1063,
  [SMALL_STATE(73)] = 1094,
  [SMALL_STATE(74)] = 1132,
  [SMALL_STATE(75)] = 1160,
  [SMALL_STATE(76)] = 1186,
  [SMALL_STATE(77)] = 1217,
  [SMALL_STATE(78)] = 1248,
  [SMALL_STATE(79)] = 1274,
  [SMALL_STATE(80)] = 1298,
  [SMALL_STATE(81)] = 1318,
  [SMALL_STATE(82)] = 1338,
  [SMALL_STATE(83)] = 1366,
  [SMALL_STATE(84)] = 1386,
  [SMALL_STATE(85)] = 1406,
  [SMALL_STATE(86)] = 1434,
  [SMALL_STATE(87)] = 1462,
  [SMALL_STATE(88)] = 1482,
  [SMALL_STATE(89)] = 1508,
  [SMALL_STATE(90)] = 1528,
  [SMALL_STATE(91)] = 1554,
  [SMALL_STATE(92)] = 1574,
  [SMALL_STATE(93)] = 1594,
  [SMALL_STATE(94)] = 1614,
  [SMALL_STATE(95)] = 1634,
  [SMALL_STATE(96)] = 1662,
  [SMALL_STATE(97)] = 1682,
  [SMALL_STATE(98)] = 1706,
  [SMALL_STATE(99)] = 1732,
  [SMALL_STATE(100)] = 1758,
  [SMALL_STATE(101)] = 1784,
  [SMALL_STATE(102)] = 1804,
  [SMALL_STATE(103)] = 1824,
  [SMALL_STATE(104)] = 1850,
  [SMALL_STATE(105)] = 1870,
  [SMALL_STATE(106)] = 1896,
  [SMALL_STATE(107)] = 1916,
  [SMALL_STATE(108)] = 1936,
  [SMALL_STATE(109)] = 1956,
  [SMALL_STATE(110)] = 1976,
  [SMALL_STATE(111)] = 2004,
  [SMALL_STATE(112)] = 2024,
  [SMALL_STATE(113)] = 2040,
  [SMALL_STATE(114)] = 2056,
  [SMALL_STATE(115)] = 2072,
  [SMALL_STATE(116)] = 2088,
  [SMALL_STATE(117)] = 2113,
  [SMALL_STATE(118)] = 2135,
  [SMALL_STATE(119)] = 2153,
  [SMALL_STATE(120)] = 2175,
  [SMALL_STATE(121)] = 2197,
  [SMALL_STATE(122)] = 2217,
  [SMALL_STATE(123)] = 2239,
  [SMALL_STATE(124)] = 2261,
  [SMALL_STATE(125)] = 2283,
  [SMALL_STATE(126)] = 2298,
  [SMALL_STATE(127)] = 2313,
  [SMALL_STATE(128)] = 2328,
  [SMALL_STATE(129)] = 2345,
  [SMALL_STATE(130)] = 2362,
  [SMALL_STATE(131)] = 2374,
  [SMALL_STATE(132)] = 2390,
  [SMALL_STATE(133)] = 2402,
  [SMALL_STATE(134)] = 2414,
  [SMALL_STATE(135)] = 2430,
  [SMALL_STATE(136)] = 2446,
  [SMALL_STATE(137)] = 2462,
  [SMALL_STATE(138)] = 2478,
  [SMALL_STATE(139)] = 2494,
  [SMALL_STATE(140)] = 2510,
  [SMALL_STATE(141)] = 2524,
  [SMALL_STATE(142)] = 2540,
  [SMALL_STATE(143)] = 2556,
  [SMALL_STATE(144)] = 2572,
  [SMALL_STATE(145)] = 2584,
  [SMALL_STATE(146)] = 2596,
  [SMALL_STATE(147)] = 2608,
  [SMALL_STATE(148)] = 2620,
  [SMALL_STATE(149)] = 2634,
  [SMALL_STATE(150)] = 2646,
  [SMALL_STATE(151)] = 2658,
  [SMALL_STATE(152)] = 2672,
  [SMALL_STATE(153)] = 2684,
  [SMALL_STATE(154)] = 2696,
  [SMALL_STATE(155)] = 2708,
  [SMALL_STATE(156)] = 2720,
  [SMALL_STATE(157)] = 2736,
  [SMALL_STATE(158)] = 2748,
  [SMALL_STATE(159)] = 2760,
  [SMALL_STATE(160)] = 2774,
  [SMALL_STATE(161)] = 2790,
  [SMALL_STATE(162)] = 2806,
  [SMALL_STATE(163)] = 2818,
  [SMALL_STATE(164)] = 2830,
  [SMALL_STATE(165)] = 2842,
  [SMALL_STATE(166)] = 2854,
  [SMALL_STATE(167)] = 2868,
  [SMALL_STATE(168)] = 2880,
  [SMALL_STATE(169)] = 2892,
  [SMALL_STATE(170)] = 2904,
  [SMALL_STATE(171)] = 2916,
  [SMALL_STATE(172)] = 2928,
  [SMALL_STATE(173)] = 2942,
  [SMALL_STATE(174)] = 2954,
  [SMALL_STATE(175)] = 2966,
  [SMALL_STATE(176)] = 2978,
  [SMALL_STATE(177)] = 2992,
  [SMALL_STATE(178)] = 3004,
  [SMALL_STATE(179)] = 3016,
  [SMALL_STATE(180)] = 3028,
  [SMALL_STATE(181)] = 3040,
  [SMALL_STATE(182)] = 3054,
  [SMALL_STATE(183)] = 3070,
  [SMALL_STATE(184)] = 3083,
  [SMALL_STATE(185)] = 3094,
  [SMALL_STATE(186)] = 3107,
  [SMALL_STATE(187)] = 3118,
  [SMALL_STATE(188)] = 3131,
  [SMALL_STATE(189)] = 3142,
  [SMALL_STATE(190)] = 3155,
  [SMALL_STATE(191)] = 3166,
  [SMALL_STATE(192)] = 3179,
  [SMALL_STATE(193)] = 3192,
  [SMALL_STATE(194)] = 3205,
  [SMALL_STATE(195)] = 3218,
  [SMALL_STATE(196)] = 3231,
  [SMALL_STATE(197)] = 3242,
  [SMALL_STATE(198)] = 3255,
  [SMALL_STATE(199)] = 3268,
  [SMALL_STATE(200)] = 3281,
  [SMALL_STATE(201)] = 3292,
  [SMALL_STATE(202)] = 3305,
  [SMALL_STATE(203)] = 3318,
  [SMALL_STATE(204)] = 3329,
  [SMALL_STATE(205)] = 3340,
  [SMALL_STATE(206)] = 3353,
  [SMALL_STATE(207)] = 3366,
  [SMALL_STATE(208)] = 3377,
  [SMALL_STATE(209)] = 3390,
  [SMALL_STATE(210)] = 3403,
  [SMALL_STATE(211)] = 3416,
  [SMALL_STATE(212)] = 3429,
  [SMALL_STATE(213)] = 3442,
  [SMALL_STATE(214)] = 3453,
  [SMALL_STATE(215)] = 3464,
  [SMALL_STATE(216)] = 3474,
  [SMALL_STATE(217)] = 3484,
  [SMALL_STATE(218)] = 3494,
  [SMALL_STATE(219)] = 3504,
  [SMALL_STATE(220)] = 3514,
  [SMALL_STATE(221)] = 3524,
  [SMALL_STATE(222)] = 3534,
  [SMALL_STATE(223)] = 3544,
  [SMALL_STATE(224)] = 3554,
  [SMALL_STATE(225)] = 3564,
  [SMALL_STATE(226)] = 3574,
  [SMALL_STATE(227)] = 3584,
  [SMALL_STATE(228)] = 3594,
  [SMALL_STATE(229)] = 3604,
  [SMALL_STATE(230)] = 3614,
  [SMALL_STATE(231)] = 3624,
  [SMALL_STATE(232)] = 3634,
  [SMALL_STATE(233)] = 3644,
  [SMALL_STATE(234)] = 3654,
  [SMALL_STATE(235)] = 3664,
  [SMALL_STATE(236)] = 3674,
  [SMALL_STATE(237)] = 3684,
  [SMALL_STATE(238)] = 3694,
  [SMALL_STATE(239)] = 3704,
  [SMALL_STATE(240)] = 3714,
  [SMALL_STATE(241)] = 3724,
  [SMALL_STATE(242)] = 3734,
  [SMALL_STATE(243)] = 3744,
  [SMALL_STATE(244)] = 3754,
  [SMALL_STATE(245)] = 3764,
  [SMALL_STATE(246)] = 3774,
  [SMALL_STATE(247)] = 3784,
  [SMALL_STATE(248)] = 3794,
  [SMALL_STATE(249)] = 3804,
  [SMALL_STATE(250)] = 3814,
  [SMALL_STATE(251)] = 3824,
  [SMALL_STATE(252)] = 3834,
  [SMALL_STATE(253)] = 3844,
  [SMALL_STATE(254)] = 3854,
  [SMALL_STATE(255)] = 3864,
  [SMALL_STATE(256)] = 3874,
  [SMALL_STATE(257)] = 3884,
  [SMALL_STATE(258)] = 3894,
  [SMALL_STATE(259)] = 3904,
  [SMALL_STATE(260)] = 3914,
  [SMALL_STATE(261)] = 3924,
  [SMALL_STATE(262)] = 3934,
  [SMALL_STATE(263)] = 3944,
  [SMALL_STATE(264)] = 3954,
  [SMALL_STATE(265)] = 3964,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 11),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 11),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 11),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 11),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 7),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 7),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3, 0, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3, 0, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 9),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 9),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 10),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 10),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3, 0, 6),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3, 0, 6),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4, 0, 6),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4, 0, 6),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5, 0, 12),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5, 0, 12),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4, 0, 12),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4, 0, 12),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2, 0, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2, 0, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2, 0, 0), SHIFT_REPEAT(125),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2, 0, 0), SHIFT_REPEAT(232),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 1, 0, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 2, 0, 8),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attribute, 1, 0, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_list, 5, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 3, 0, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_list_repeat1, 2, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_parameter, 4, 0, 8),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_list, 4, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attribute, 2, 0, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__a1, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [675] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
