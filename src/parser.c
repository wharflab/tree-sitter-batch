#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_program_token1 = 1,
  anon_sym_AT = 2,
  aux_sym_echo_off_token1 = 3,
  aux_sym_echo_off_token2 = 4,
  aux_sym_echo_off_token3 = 5,
  sym_comment = 6,
  aux_sym_label_token1 = 7,
  aux_sym_variable_assignment_token1 = 8,
  aux_sym_variable_assignment_token2 = 9,
  aux_sym_variable_assignment_token3 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_variable_assignment_token4 = 12,
  anon_sym_EQ = 13,
  aux_sym_variable_assignment_token5 = 14,
  aux_sym_variable_assignment_token6 = 15,
  aux_sym_if_stmt_token1 = 16,
  aux_sym_if_stmt_token2 = 17,
  aux_sym_if_stmt_token3 = 18,
  aux_sym_if_stmt_token4 = 19,
  aux_sym_if_stmt_token5 = 20,
  aux_sym_else_clause_token1 = 21,
  sym_comparison_op = 22,
  aux_sym_goto_stmt_token1 = 23,
  aux_sym_goto_stmt_token2 = 24,
  aux_sym_goto_stmt_token3 = 25,
  aux_sym_call_stmt_token1 = 26,
  aux_sym_exit_stmt_token1 = 27,
  aux_sym_exit_stmt_token2 = 28,
  aux_sym_setlocal_stmt_token1 = 29,
  aux_sym_setlocal_stmt_token2 = 30,
  aux_sym_setlocal_stmt_token3 = 31,
  aux_sym_setlocal_stmt_token4 = 32,
  aux_sym_setlocal_stmt_token5 = 33,
  aux_sym_endlocal_stmt_token1 = 34,
  aux_sym_for_stmt_token1 = 35,
  aux_sym_for_stmt_token2 = 36,
  anon_sym_LPAREN = 37,
  anon_sym_RPAREN = 38,
  aux_sym_for_stmt_token3 = 39,
  sym_for_options = 40,
  sym_for_variable = 41,
  sym_for_set = 42,
  aux_sym_redirection_token1 = 43,
  sym_redirect_op = 44,
  sym_redirect_target = 45,
  anon_sym_PIPE = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_PIPE_PIPE = 48,
  sym_variable_reference = 49,
  sym_string = 50,
  sym_command_name = 51,
  sym_command_option = 52,
  sym_argument_value = 53,
  sym_integer = 54,
  sym_program = 55,
  sym__stmt = 56,
  sym_echo_off = 57,
  sym_label = 58,
  sym_variable_assignment = 59,
  sym_if_stmt = 60,
  sym_else_clause = 61,
  sym_goto_stmt = 62,
  sym_call_stmt = 63,
  sym_exit_stmt = 64,
  sym_setlocal_stmt = 65,
  sym_endlocal_stmt = 66,
  sym_for_stmt = 67,
  sym_parenthesized = 68,
  sym_redirect_stmt = 69,
  sym_redirection = 70,
  sym_pipe_stmt = 71,
  sym_cond_exec = 72,
  sym_cmd = 73,
  sym_argument_list = 74,
  sym__arg = 75,
  aux_sym_program_repeat1 = 76,
  aux_sym_argument_list_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_program_token1] = "program_token1",
  [anon_sym_AT] = "@",
  [aux_sym_echo_off_token1] = "echo_off_token1",
  [aux_sym_echo_off_token2] = "echo_off_token2",
  [aux_sym_echo_off_token3] = "echo_off_token3",
  [sym_comment] = "comment",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_variable_assignment_token1] = "variable_assignment_token1",
  [aux_sym_variable_assignment_token2] = "variable_assignment_token2",
  [aux_sym_variable_assignment_token3] = "variable_assignment_token3",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_variable_assignment_token4] = "variable_assignment_token4",
  [anon_sym_EQ] = "=",
  [aux_sym_variable_assignment_token5] = "variable_assignment_token5",
  [aux_sym_variable_assignment_token6] = "variable_assignment_token6",
  [aux_sym_if_stmt_token1] = "if_stmt_token1",
  [aux_sym_if_stmt_token2] = "if_stmt_token2",
  [aux_sym_if_stmt_token3] = "if_stmt_token3",
  [aux_sym_if_stmt_token4] = "if_stmt_token4",
  [aux_sym_if_stmt_token5] = "if_stmt_token5",
  [aux_sym_else_clause_token1] = "else_clause_token1",
  [sym_comparison_op] = "comparison_op",
  [aux_sym_goto_stmt_token1] = "goto_stmt_token1",
  [aux_sym_goto_stmt_token2] = "goto_stmt_token2",
  [aux_sym_goto_stmt_token3] = "goto_stmt_token3",
  [aux_sym_call_stmt_token1] = "call_stmt_token1",
  [aux_sym_exit_stmt_token1] = "exit_stmt_token1",
  [aux_sym_exit_stmt_token2] = "exit_stmt_token2",
  [aux_sym_setlocal_stmt_token1] = "setlocal_stmt_token1",
  [aux_sym_setlocal_stmt_token2] = "setlocal_stmt_token2",
  [aux_sym_setlocal_stmt_token3] = "setlocal_stmt_token3",
  [aux_sym_setlocal_stmt_token4] = "setlocal_stmt_token4",
  [aux_sym_setlocal_stmt_token5] = "setlocal_stmt_token5",
  [aux_sym_endlocal_stmt_token1] = "endlocal_stmt_token1",
  [aux_sym_for_stmt_token1] = "for_stmt_token1",
  [aux_sym_for_stmt_token2] = "for_stmt_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_for_stmt_token3] = "for_stmt_token3",
  [sym_for_options] = "for_options",
  [sym_for_variable] = "for_variable",
  [sym_for_set] = "for_set",
  [aux_sym_redirection_token1] = "redirection_token1",
  [sym_redirect_op] = "redirect_op",
  [sym_redirect_target] = "redirect_target",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_variable_reference] = "variable_reference",
  [sym_string] = "string",
  [sym_command_name] = "command_name",
  [sym_command_option] = "command_option",
  [sym_argument_value] = "argument_value",
  [sym_integer] = "integer",
  [sym_program] = "program",
  [sym__stmt] = "_stmt",
  [sym_echo_off] = "echo_off",
  [sym_label] = "label",
  [sym_variable_assignment] = "variable_assignment",
  [sym_if_stmt] = "if_stmt",
  [sym_else_clause] = "else_clause",
  [sym_goto_stmt] = "goto_stmt",
  [sym_call_stmt] = "call_stmt",
  [sym_exit_stmt] = "exit_stmt",
  [sym_setlocal_stmt] = "setlocal_stmt",
  [sym_endlocal_stmt] = "endlocal_stmt",
  [sym_for_stmt] = "for_stmt",
  [sym_parenthesized] = "parenthesized",
  [sym_redirect_stmt] = "redirect_stmt",
  [sym_redirection] = "redirection",
  [sym_pipe_stmt] = "pipe_stmt",
  [sym_cond_exec] = "cond_exec",
  [sym_cmd] = "cmd",
  [sym_argument_list] = "argument_list",
  [sym__arg] = "_arg",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_program_token1] = aux_sym_program_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_echo_off_token1] = aux_sym_echo_off_token1,
  [aux_sym_echo_off_token2] = aux_sym_echo_off_token2,
  [aux_sym_echo_off_token3] = aux_sym_echo_off_token3,
  [sym_comment] = sym_comment,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [aux_sym_variable_assignment_token1] = aux_sym_variable_assignment_token1,
  [aux_sym_variable_assignment_token2] = aux_sym_variable_assignment_token2,
  [aux_sym_variable_assignment_token3] = aux_sym_variable_assignment_token3,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_variable_assignment_token4] = aux_sym_variable_assignment_token4,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_variable_assignment_token5] = aux_sym_variable_assignment_token5,
  [aux_sym_variable_assignment_token6] = aux_sym_variable_assignment_token6,
  [aux_sym_if_stmt_token1] = aux_sym_if_stmt_token1,
  [aux_sym_if_stmt_token2] = aux_sym_if_stmt_token2,
  [aux_sym_if_stmt_token3] = aux_sym_if_stmt_token3,
  [aux_sym_if_stmt_token4] = aux_sym_if_stmt_token4,
  [aux_sym_if_stmt_token5] = aux_sym_if_stmt_token5,
  [aux_sym_else_clause_token1] = aux_sym_else_clause_token1,
  [sym_comparison_op] = sym_comparison_op,
  [aux_sym_goto_stmt_token1] = aux_sym_goto_stmt_token1,
  [aux_sym_goto_stmt_token2] = aux_sym_goto_stmt_token2,
  [aux_sym_goto_stmt_token3] = aux_sym_goto_stmt_token3,
  [aux_sym_call_stmt_token1] = aux_sym_call_stmt_token1,
  [aux_sym_exit_stmt_token1] = aux_sym_exit_stmt_token1,
  [aux_sym_exit_stmt_token2] = aux_sym_exit_stmt_token2,
  [aux_sym_setlocal_stmt_token1] = aux_sym_setlocal_stmt_token1,
  [aux_sym_setlocal_stmt_token2] = aux_sym_setlocal_stmt_token2,
  [aux_sym_setlocal_stmt_token3] = aux_sym_setlocal_stmt_token3,
  [aux_sym_setlocal_stmt_token4] = aux_sym_setlocal_stmt_token4,
  [aux_sym_setlocal_stmt_token5] = aux_sym_setlocal_stmt_token5,
  [aux_sym_endlocal_stmt_token1] = aux_sym_endlocal_stmt_token1,
  [aux_sym_for_stmt_token1] = aux_sym_for_stmt_token1,
  [aux_sym_for_stmt_token2] = aux_sym_for_stmt_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_for_stmt_token3] = aux_sym_for_stmt_token3,
  [sym_for_options] = sym_for_options,
  [sym_for_variable] = sym_for_variable,
  [sym_for_set] = sym_for_set,
  [aux_sym_redirection_token1] = aux_sym_redirection_token1,
  [sym_redirect_op] = sym_redirect_op,
  [sym_redirect_target] = sym_redirect_target,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_variable_reference] = sym_variable_reference,
  [sym_string] = sym_string,
  [sym_command_name] = sym_command_name,
  [sym_command_option] = sym_command_option,
  [sym_argument_value] = sym_argument_value,
  [sym_integer] = sym_integer,
  [sym_program] = sym_program,
  [sym__stmt] = sym__stmt,
  [sym_echo_off] = sym_echo_off,
  [sym_label] = sym_label,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_if_stmt] = sym_if_stmt,
  [sym_else_clause] = sym_else_clause,
  [sym_goto_stmt] = sym_goto_stmt,
  [sym_call_stmt] = sym_call_stmt,
  [sym_exit_stmt] = sym_exit_stmt,
  [sym_setlocal_stmt] = sym_setlocal_stmt,
  [sym_endlocal_stmt] = sym_endlocal_stmt,
  [sym_for_stmt] = sym_for_stmt,
  [sym_parenthesized] = sym_parenthesized,
  [sym_redirect_stmt] = sym_redirect_stmt,
  [sym_redirection] = sym_redirection,
  [sym_pipe_stmt] = sym_pipe_stmt,
  [sym_cond_exec] = sym_cond_exec,
  [sym_cmd] = sym_cmd,
  [sym_argument_list] = sym_argument_list,
  [sym__arg] = sym__arg,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_echo_off_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_echo_off_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_echo_off_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_assignment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_assignment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_assignment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_assignment_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_assignment_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_assignment_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comparison_op] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_goto_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_goto_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_goto_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setlocal_stmt_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_endlocal_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_stmt_token2] = {
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
  [aux_sym_for_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_for_options] = {
    .visible = true,
    .named = true,
  },
  [sym_for_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_for_set] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_redirection_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_redirect_op] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_command_option] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_echo_off] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_goto_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_call_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_setlocal_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_endlocal_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_redirection] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_exec] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
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
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 9,
  [21] = 21,
  [22] = 10,
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
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
};

static TSCharacterRange sym_comparison_op_character_set_1[] = {
  {'=', '='}, {'E', 'E'}, {'G', 'G'}, {'L', 'L'}, {'N', 'N'}, {'e', 'e'}, {'g', 'g'}, {'l', 'l'},
  {'n', 'n'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(135);
      ADVANCE_MAP(
        '\n', 136,
        '\r', 1,
        '!', 131,
        '"', 152,
        '%', 12,
        '&', 17,
        '(', 291,
        ')', 292,
        '/', 37,
        '2', 302,
        ':', 21,
        '<', 305,
        '=', 262,
        '>', 306,
        '@', 138,
        '|', 312,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(225);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(136);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 136,
        '\r', 1,
        '!', 131,
        '"', 10,
        '%', 16,
        '&', 17,
        '/', 349,
        '2', 303,
        '<', 305,
        '>', 306,
        '|', 312,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(350);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(350);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead == '2') ADVANCE(302);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '|') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(301);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(294);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '~') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(315);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(338);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(339);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '~') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '&') ADVANCE(313);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(300);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(305);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 25:
      if (lookahead == '~') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 26:
      if (lookahead == '~') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(297);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(311);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        'B', 282,
        'b', 282,
        'F', 295,
        'f', 295,
        'R', 296,
        'r', 296,
        'A', 151,
        'P', 151,
        'a', 151,
        'p', 151,
        'D', 294,
        'L', 294,
        'd', 294,
        'l', 294,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 65:
      ADVANCE_MAP(
        'F', 295,
        'f', 295,
        'R', 296,
        'r', 296,
        'D', 294,
        'L', 294,
        'd', 294,
        'l', 294,
      );
      END_STATE();
    case 66:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 67:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        'L', 108,
        'l', 108,
        'N', 31,
        'n', 31,
        'Q', 119,
        'q', 119,
        'R', 103,
        'r', 103,
        'X', 71,
        'x', 71,
      );
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(273);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 106:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 120:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 121:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(100);
      END_STATE();
    case 124:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 126:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          lookahead == 'a' ||
          lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 130:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 131:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 132:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(14);
      END_STATE();
    case 134:
      if (eof) ADVANCE(135);
      ADVANCE_MAP(
        '\n', 136,
        '\r', 1,
        '!', 131,
        '"', 10,
        '%', 16,
        '(', 291,
        ')', 292,
        '/', 36,
        ':', 22,
        '@', 138,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(338);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(339);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_program_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_echo_off_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_echo_off_token2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_echo_off_token3);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      ADVANCE_MAP(
        '-', 276,
        '.', 346,
        'C', 193,
        'c', 193,
        'L', 241,
        'l', 241,
        'N', 154,
        'n', 154,
        'R', 236,
        'r', 236,
        'X', 194,
        'x', 194,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      ADVANCE_MAP(
        '-', 276,
        '.', 346,
        'E', 192,
        'e', 192,
        'I', 240,
        'i', 240,
        'O', 293,
        'o', 293,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(190);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_if_stmt_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_if_stmt_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_if_stmt_token3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_if_stmt_token4);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_if_stmt_token5);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_else_clause_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_call_stmt_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token3);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token4);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token5);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_endlocal_stmt_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_for_stmt_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_for_stmt_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_for_stmt_token3);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(350);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(350);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '>') ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      if (set_contains(sym_comparison_op_character_set_1, 9, lookahead) ||
          lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '|') ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      if (set_contains(sym_comparison_op_character_set_1, 9, lookahead) ||
          lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '|') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 134},
  [2] = {.lex_state = 134},
  [3] = {.lex_state = 134},
  [4] = {.lex_state = 134},
  [5] = {.lex_state = 134},
  [6] = {.lex_state = 134},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 134},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 134},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 134},
  [47] = {.lex_state = 134},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 134},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 134},
  [55] = {.lex_state = 134},
  [56] = {.lex_state = 263},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 263},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 263},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 134},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 265},
  [66] = {.lex_state = 134},
  [67] = {.lex_state = 265},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 265},
  [71] = {.lex_state = 263},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 134},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 265},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 134},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 134},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 134},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 28},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_program_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_echo_off_token1] = ACTIONS(1),
    [aux_sym_echo_off_token2] = ACTIONS(1),
    [aux_sym_echo_off_token3] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [aux_sym_variable_assignment_token1] = ACTIONS(1),
    [aux_sym_variable_assignment_token3] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_variable_assignment_token4] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_if_stmt_token1] = ACTIONS(1),
    [aux_sym_if_stmt_token2] = ACTIONS(1),
    [aux_sym_if_stmt_token3] = ACTIONS(1),
    [aux_sym_if_stmt_token4] = ACTIONS(1),
    [aux_sym_if_stmt_token5] = ACTIONS(1),
    [aux_sym_else_clause_token1] = ACTIONS(1),
    [aux_sym_goto_stmt_token1] = ACTIONS(1),
    [aux_sym_goto_stmt_token2] = ACTIONS(1),
    [aux_sym_goto_stmt_token3] = ACTIONS(1),
    [aux_sym_call_stmt_token1] = ACTIONS(1),
    [aux_sym_exit_stmt_token1] = ACTIONS(1),
    [aux_sym_exit_stmt_token2] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token1] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token2] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token3] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token4] = ACTIONS(1),
    [aux_sym_setlocal_stmt_token5] = ACTIONS(1),
    [aux_sym_endlocal_stmt_token1] = ACTIONS(1),
    [aux_sym_for_stmt_token1] = ACTIONS(1),
    [aux_sym_for_stmt_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_for_stmt_token3] = ACTIONS(1),
    [sym_for_options] = ACTIONS(1),
    [sym_for_variable] = ACTIONS(1),
    [aux_sym_redirection_token1] = ACTIONS(1),
    [sym_redirect_op] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [sym_variable_reference] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_command_option] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(152),
    [sym__stmt] = STATE(162),
    [sym_echo_off] = STATE(162),
    [sym_label] = STATE(162),
    [sym_variable_assignment] = STATE(162),
    [sym_if_stmt] = STATE(162),
    [sym_goto_stmt] = STATE(162),
    [sym_call_stmt] = STATE(162),
    [sym_exit_stmt] = STATE(162),
    [sym_setlocal_stmt] = STATE(162),
    [sym_endlocal_stmt] = STATE(162),
    [sym_for_stmt] = STATE(162),
    [sym_parenthesized] = STATE(17),
    [sym_redirect_stmt] = STATE(162),
    [sym_pipe_stmt] = STATE(162),
    [sym_cond_exec] = STATE(162),
    [sym_cmd] = STATE(17),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_program_token1] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_label_token1] = ACTIONS(11),
    [aux_sym_variable_assignment_token1] = ACTIONS(13),
    [aux_sym_if_stmt_token1] = ACTIONS(15),
    [aux_sym_goto_stmt_token1] = ACTIONS(17),
    [aux_sym_call_stmt_token1] = ACTIONS(19),
    [aux_sym_exit_stmt_token1] = ACTIONS(21),
    [aux_sym_setlocal_stmt_token1] = ACTIONS(23),
    [aux_sym_endlocal_stmt_token1] = ACTIONS(25),
    [aux_sym_for_stmt_token1] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_command_name] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(35), 1,
      aux_sym_program_token1,
    ACTIONS(38), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_label_token1,
    ACTIONS(47), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(50), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(53), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(56), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(59), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(62), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(65), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(68), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym_command_name,
    STATE(2), 1,
      aux_sym_program_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(162), 14,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
      sym_redirect_stmt,
      sym_pipe_stmt,
      sym_cond_exec,
  [70] = 18,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_label_token1,
    ACTIONS(13), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(15), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_command_name,
    ACTIONS(77), 1,
      aux_sym_program_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(17), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(162), 14,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
      sym_redirect_stmt,
      sym_pipe_stmt,
      sym_cond_exec,
  [139] = 18,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_label_token1,
    ACTIONS(13), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(15), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_command_name,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_program_token1,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(17), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(162), 14,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
      sym_redirect_stmt,
      sym_pipe_stmt,
      sym_cond_exec,
  [208] = 18,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_label_token1,
    ACTIONS(13), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(15), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_command_name,
    ACTIONS(83), 1,
      aux_sym_program_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(17), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(162), 14,
      sym__stmt,
      sym_echo_off,
      sym_label,
      sym_variable_assignment,
      sym_if_stmt,
      sym_goto_stmt,
      sym_call_stmt,
      sym_exit_stmt,
      sym_setlocal_stmt,
      sym_endlocal_stmt,
      sym_for_stmt,
      sym_redirect_stmt,
      sym_pipe_stmt,
      sym_cond_exec,
  [277] = 2,
    ACTIONS(87), 3,
      anon_sym_AT,
      aux_sym_variable_assignment_token1,
      sym_command_name,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      aux_sym_program_token1,
      sym_comment,
      aux_sym_label_token1,
      aux_sym_if_stmt_token1,
      aux_sym_goto_stmt_token1,
      aux_sym_call_stmt_token1,
      aux_sym_exit_stmt_token1,
      aux_sym_setlocal_stmt_token1,
      aux_sym_endlocal_stmt_token1,
      aux_sym_for_stmt_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [298] = 6,
    STATE(26), 1,
      sym_argument_list,
    ACTIONS(91), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(93), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(95), 2,
      sym_command_option,
      sym_argument_value,
    STATE(9), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(89), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [324] = 6,
    STATE(25), 1,
      sym_argument_list,
    ACTIONS(93), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(95), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(99), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    STATE(9), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(97), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [350] = 5,
    ACTIONS(103), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(105), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(107), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(101), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [373] = 5,
    ACTIONS(111), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(113), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(116), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(109), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [396] = 10,
    ACTIONS(119), 1,
      aux_sym_echo_off_token1,
    ACTIONS(121), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(123), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(125), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(127), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(129), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(131), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(133), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(135), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(137), 1,
      sym_command_name,
  [427] = 5,
    ACTIONS(89), 1,
      aux_sym_program_token1,
    STATE(26), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(20), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [446] = 5,
    ACTIONS(143), 1,
      aux_sym_program_token1,
    STATE(154), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(20), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [465] = 5,
    ACTIONS(145), 1,
      aux_sym_program_token1,
    STATE(91), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(20), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [484] = 5,
    ACTIONS(97), 1,
      aux_sym_program_token1,
    STATE(25), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(20), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [503] = 5,
    ACTIONS(147), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(149), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(151), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(153), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(155), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [521] = 7,
    ACTIONS(157), 1,
      aux_sym_program_token1,
    ACTIONS(159), 1,
      aux_sym_redirection_token1,
    ACTIONS(161), 1,
      sym_redirect_op,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    STATE(98), 1,
      sym_redirection,
  [543] = 5,
    ACTIONS(169), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(171), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(173), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(175), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(177), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [561] = 2,
    ACTIONS(181), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(179), 5,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [573] = 4,
    ACTIONS(101), 1,
      aux_sym_program_token1,
    ACTIONS(183), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(185), 2,
      sym_command_option,
      sym_argument_value,
    STATE(22), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [589] = 2,
    ACTIONS(189), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(187), 5,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [601] = 4,
    ACTIONS(109), 1,
      aux_sym_program_token1,
    ACTIONS(191), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(194), 2,
      sym_command_option,
      sym_argument_value,
    STATE(22), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [617] = 4,
    ACTIONS(197), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(199), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(201), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(203), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [632] = 4,
    ACTIONS(171), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(173), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(175), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(177), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [647] = 2,
    ACTIONS(91), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(89), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [658] = 2,
    ACTIONS(207), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(205), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [669] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(150), 2,
      sym_parenthesized,
      sym_cmd,
  [683] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(80), 2,
      sym_parenthesized,
      sym_cmd,
  [697] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(127), 2,
      sym_parenthesized,
      sym_cmd,
  [711] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(44), 1,
      sym_parenthesized,
    STATE(99), 1,
      sym_cmd,
  [727] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(48), 1,
      sym_parenthesized,
    STATE(110), 1,
      sym_cmd,
  [743] = 2,
    ACTIONS(213), 1,
      aux_sym_program_token1,
    ACTIONS(215), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [753] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(49), 1,
      sym_parenthesized,
    STATE(128), 1,
      sym_cmd,
  [769] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(136), 2,
      sym_parenthesized,
      sym_cmd,
  [783] = 2,
    ACTIONS(217), 1,
      aux_sym_program_token1,
    ACTIONS(219), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [793] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(50), 1,
      sym_parenthesized,
    STATE(144), 1,
      sym_cmd,
  [809] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(81), 2,
      sym_parenthesized,
      sym_cmd,
  [823] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(164), 2,
      sym_parenthesized,
      sym_cmd,
  [837] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(157), 2,
      sym_parenthesized,
      sym_cmd,
  [851] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_command_name,
    STATE(161), 2,
      sym_parenthesized,
      sym_cmd,
  [865] = 2,
    ACTIONS(221), 1,
      aux_sym_program_token1,
    ACTIONS(223), 2,
      sym_variable_reference,
      sym_integer,
  [873] = 3,
    ACTIONS(225), 1,
      aux_sym_program_token1,
    ACTIONS(227), 1,
      aux_sym_redirection_token1,
    ACTIONS(229), 1,
      sym_redirect_op,
  [883] = 1,
    ACTIONS(231), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [889] = 3,
    ACTIONS(233), 1,
      aux_sym_program_token1,
    ACTIONS(235), 1,
      aux_sym_else_clause_token1,
    STATE(110), 1,
      sym_else_clause,
  [899] = 3,
    ACTIONS(237), 1,
      aux_sym_program_token1,
    ACTIONS(239), 1,
      aux_sym_redirection_token1,
    ACTIONS(241), 1,
      sym_redirect_op,
  [909] = 1,
    ACTIONS(243), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [915] = 1,
    ACTIONS(245), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [921] = 3,
    ACTIONS(235), 1,
      aux_sym_else_clause_token1,
    ACTIONS(247), 1,
      aux_sym_program_token1,
    STATE(128), 1,
      sym_else_clause,
  [931] = 3,
    ACTIONS(235), 1,
      aux_sym_else_clause_token1,
    ACTIONS(249), 1,
      aux_sym_program_token1,
    STATE(144), 1,
      sym_else_clause,
  [941] = 3,
    ACTIONS(235), 1,
      aux_sym_else_clause_token1,
    ACTIONS(251), 1,
      aux_sym_program_token1,
    STATE(79), 1,
      sym_else_clause,
  [951] = 3,
    ACTIONS(253), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_variable_assignment_token4,
  [961] = 3,
    ACTIONS(259), 1,
      aux_sym_program_token1,
    ACTIONS(261), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(263), 1,
      sym_integer,
  [971] = 3,
    ACTIONS(265), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_variable_assignment_token4,
  [981] = 3,
    ACTIONS(271), 1,
      aux_sym_program_token1,
    ACTIONS(273), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(275), 1,
      sym_integer,
  [991] = 2,
    ACTIONS(259), 1,
      aux_sym_program_token1,
    ACTIONS(263), 2,
      sym_variable_reference,
      sym_integer,
  [999] = 2,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_variable_assignment_token5,
  [1006] = 2,
    ACTIONS(281), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(283), 1,
      aux_sym_goto_stmt_token3,
  [1013] = 2,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      sym_for_set,
  [1020] = 2,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_variable_assignment_token5,
  [1027] = 2,
    ACTIONS(293), 1,
      sym_for_options,
    ACTIONS(295), 1,
      sym_for_variable,
  [1034] = 2,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_variable_assignment_token5,
  [1041] = 1,
    ACTIONS(301), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [1046] = 1,
    ACTIONS(243), 2,
      sym_variable_reference,
      sym_string,
  [1051] = 2,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 1,
      sym_for_set,
  [1058] = 2,
    ACTIONS(307), 1,
      aux_sym_program_token1,
    ACTIONS(309), 1,
      aux_sym_variable_assignment_token6,
  [1065] = 1,
    ACTIONS(231), 2,
      sym_variable_reference,
      sym_string,
  [1070] = 2,
    ACTIONS(311), 1,
      aux_sym_program_token1,
    ACTIONS(313), 1,
      aux_sym_variable_assignment_token6,
  [1077] = 1,
    ACTIONS(315), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1082] = 2,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_variable_assignment_token4,
  [1089] = 2,
    ACTIONS(321), 1,
      aux_sym_program_token1,
    ACTIONS(323), 1,
      aux_sym_variable_assignment_token6,
  [1096] = 2,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym_variable_assignment_token5,
  [1103] = 2,
    ACTIONS(329), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(331), 1,
      aux_sym_goto_stmt_token3,
  [1110] = 2,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      sym_for_set,
  [1117] = 1,
    ACTIONS(337), 2,
      sym_variable_reference,
      sym_string,
  [1122] = 2,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_variable_assignment_token4,
  [1129] = 2,
    ACTIONS(343), 1,
      aux_sym_program_token1,
    ACTIONS(345), 1,
      aux_sym_variable_assignment_token6,
  [1136] = 1,
    ACTIONS(347), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1141] = 2,
    ACTIONS(349), 1,
      sym_for_options,
    ACTIONS(351), 1,
      sym_for_variable,
  [1148] = 1,
    ACTIONS(353), 1,
      aux_sym_program_token1,
  [1152] = 1,
    ACTIONS(355), 1,
      aux_sym_program_token1,
  [1156] = 1,
    ACTIONS(355), 1,
      aux_sym_program_token1,
  [1160] = 1,
    ACTIONS(357), 1,
      aux_sym_variable_assignment_token2,
  [1164] = 1,
    ACTIONS(359), 1,
      aux_sym_variable_assignment_token4,
  [1168] = 1,
    ACTIONS(361), 1,
      anon_sym_EQ,
  [1172] = 1,
    ACTIONS(363), 1,
      sym_redirect_op,
  [1176] = 1,
    ACTIONS(243), 1,
      aux_sym_variable_assignment_token4,
  [1180] = 1,
    ACTIONS(243), 1,
      sym_integer,
  [1184] = 1,
    ACTIONS(365), 1,
      sym_comparison_op,
  [1188] = 1,
    ACTIONS(367), 1,
      sym_redirect_target,
  [1192] = 1,
    ACTIONS(337), 1,
      aux_sym_variable_assignment_token4,
  [1196] = 1,
    ACTIONS(369), 1,
      aux_sym_program_token1,
  [1200] = 1,
    ACTIONS(371), 1,
      aux_sym_program_token1,
  [1204] = 1,
    ACTIONS(373), 1,
      aux_sym_for_stmt_token2,
  [1208] = 1,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
  [1212] = 1,
    ACTIONS(337), 1,
      sym_integer,
  [1216] = 1,
    ACTIONS(377), 1,
      anon_sym_EQ,
  [1220] = 1,
    ACTIONS(379), 1,
      sym_comparison_op,
  [1224] = 1,
    ACTIONS(381), 1,
      aux_sym_program_token1,
  [1228] = 1,
    ACTIONS(233), 1,
      aux_sym_program_token1,
  [1232] = 1,
    ACTIONS(383), 1,
      aux_sym_program_token1,
  [1236] = 1,
    ACTIONS(385), 1,
      aux_sym_program_token1,
  [1240] = 1,
    ACTIONS(241), 1,
      sym_redirect_op,
  [1244] = 1,
    ACTIONS(387), 1,
      sym_redirect_target,
  [1248] = 1,
    ACTIONS(389), 1,
      aux_sym_program_token1,
  [1252] = 1,
    ACTIONS(391), 1,
      anon_sym_EQ,
  [1256] = 1,
    ACTIONS(393), 1,
      aux_sym_program_token1,
  [1260] = 1,
    ACTIONS(259), 1,
      aux_sym_program_token1,
  [1264] = 1,
    ACTIONS(231), 1,
      aux_sym_variable_assignment_token4,
  [1268] = 1,
    ACTIONS(231), 1,
      sym_integer,
  [1272] = 1,
    ACTIONS(247), 1,
      aux_sym_program_token1,
  [1276] = 1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [1280] = 1,
    ACTIONS(397), 1,
      sym_comparison_op,
  [1284] = 1,
    ACTIONS(399), 1,
      aux_sym_variable_assignment_token4,
  [1288] = 1,
    ACTIONS(401), 1,
      anon_sym_EQ,
  [1292] = 1,
    ACTIONS(403), 1,
      aux_sym_program_token1,
  [1296] = 1,
    ACTIONS(405), 1,
      aux_sym_program_token1,
  [1300] = 1,
    ACTIONS(213), 1,
      aux_sym_program_token1,
  [1304] = 1,
    ACTIONS(407), 1,
      aux_sym_for_stmt_token3,
  [1308] = 1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [1312] = 1,
    ACTIONS(411), 1,
      sym_redirect_op,
  [1316] = 1,
    ACTIONS(413), 1,
      sym_redirect_target,
  [1320] = 1,
    ACTIONS(415), 1,
      aux_sym_program_token1,
  [1324] = 1,
    ACTIONS(417), 1,
      aux_sym_variable_assignment_token4,
  [1328] = 1,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [1332] = 1,
    ACTIONS(295), 1,
      sym_for_variable,
  [1336] = 1,
    ACTIONS(421), 1,
      aux_sym_program_token1,
  [1340] = 1,
    ACTIONS(423), 1,
      aux_sym_program_token1,
  [1344] = 1,
    ACTIONS(249), 1,
      aux_sym_program_token1,
  [1348] = 1,
    ACTIONS(425), 1,
      aux_sym_program_token1,
  [1352] = 1,
    ACTIONS(427), 1,
      sym_for_variable,
  [1356] = 1,
    ACTIONS(429), 1,
      aux_sym_for_stmt_token3,
  [1360] = 1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [1364] = 1,
    ACTIONS(433), 1,
      anon_sym_EQ,
  [1368] = 1,
    ACTIONS(435), 1,
      aux_sym_for_stmt_token2,
  [1372] = 1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
  [1376] = 1,
    ACTIONS(437), 1,
      aux_sym_program_token1,
  [1380] = 1,
    ACTIONS(439), 1,
      aux_sym_for_stmt_token2,
  [1384] = 1,
    ACTIONS(441), 1,
      sym_redirect_target,
  [1388] = 1,
    ACTIONS(443), 1,
      aux_sym_program_token1,
  [1392] = 1,
    ACTIONS(445), 1,
      anon_sym_EQ,
  [1396] = 1,
    ACTIONS(447), 1,
      aux_sym_variable_assignment_token2,
  [1400] = 1,
    ACTIONS(449), 1,
      aux_sym_program_token1,
  [1404] = 1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
  [1408] = 1,
    ACTIONS(251), 1,
      aux_sym_program_token1,
  [1412] = 1,
    ACTIONS(451), 1,
      aux_sym_variable_assignment_token4,
  [1416] = 1,
    ACTIONS(453), 1,
      aux_sym_for_stmt_token3,
  [1420] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [1424] = 1,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [1428] = 1,
    ACTIONS(459), 1,
      aux_sym_variable_assignment_token2,
  [1432] = 1,
    ACTIONS(461), 1,
      aux_sym_program_token1,
  [1436] = 1,
    ACTIONS(463), 1,
      aux_sym_program_token1,
  [1440] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [1444] = 1,
    ACTIONS(467), 1,
      aux_sym_program_token1,
  [1448] = 1,
    ACTIONS(145), 1,
      aux_sym_program_token1,
  [1452] = 1,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
  [1456] = 1,
    ACTIONS(471), 1,
      aux_sym_for_stmt_token3,
  [1460] = 1,
    ACTIONS(473), 1,
      aux_sym_program_token1,
  [1464] = 1,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
  [1468] = 1,
    ACTIONS(477), 1,
      aux_sym_program_token1,
  [1472] = 1,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
  [1476] = 1,
    ACTIONS(481), 1,
      aux_sym_program_token1,
  [1480] = 1,
    ACTIONS(483), 1,
      aux_sym_program_token1,
  [1484] = 1,
    ACTIONS(485), 1,
      aux_sym_program_token1,
  [1488] = 1,
    ACTIONS(487), 1,
      aux_sym_program_token1,
  [1492] = 1,
    ACTIONS(489), 1,
      aux_sym_variable_assignment_token2,
  [1496] = 1,
    ACTIONS(491), 1,
      sym_redirect_target,
  [1500] = 1,
    ACTIONS(493), 1,
      aux_sym_program_token1,
  [1504] = 1,
    ACTIONS(495), 1,
      sym_command_name,
  [1508] = 1,
    ACTIONS(221), 1,
      aux_sym_program_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 139,
  [SMALL_STATE(5)] = 208,
  [SMALL_STATE(6)] = 277,
  [SMALL_STATE(7)] = 298,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 350,
  [SMALL_STATE(10)] = 373,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 427,
  [SMALL_STATE(13)] = 446,
  [SMALL_STATE(14)] = 465,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 503,
  [SMALL_STATE(17)] = 521,
  [SMALL_STATE(18)] = 543,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 573,
  [SMALL_STATE(21)] = 589,
  [SMALL_STATE(22)] = 601,
  [SMALL_STATE(23)] = 617,
  [SMALL_STATE(24)] = 632,
  [SMALL_STATE(25)] = 647,
  [SMALL_STATE(26)] = 658,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 683,
  [SMALL_STATE(29)] = 697,
  [SMALL_STATE(30)] = 711,
  [SMALL_STATE(31)] = 727,
  [SMALL_STATE(32)] = 743,
  [SMALL_STATE(33)] = 753,
  [SMALL_STATE(34)] = 769,
  [SMALL_STATE(35)] = 783,
  [SMALL_STATE(36)] = 793,
  [SMALL_STATE(37)] = 809,
  [SMALL_STATE(38)] = 823,
  [SMALL_STATE(39)] = 837,
  [SMALL_STATE(40)] = 851,
  [SMALL_STATE(41)] = 865,
  [SMALL_STATE(42)] = 873,
  [SMALL_STATE(43)] = 883,
  [SMALL_STATE(44)] = 889,
  [SMALL_STATE(45)] = 899,
  [SMALL_STATE(46)] = 909,
  [SMALL_STATE(47)] = 915,
  [SMALL_STATE(48)] = 921,
  [SMALL_STATE(49)] = 931,
  [SMALL_STATE(50)] = 941,
  [SMALL_STATE(51)] = 951,
  [SMALL_STATE(52)] = 961,
  [SMALL_STATE(53)] = 971,
  [SMALL_STATE(54)] = 981,
  [SMALL_STATE(55)] = 991,
  [SMALL_STATE(56)] = 999,
  [SMALL_STATE(57)] = 1006,
  [SMALL_STATE(58)] = 1013,
  [SMALL_STATE(59)] = 1020,
  [SMALL_STATE(60)] = 1027,
  [SMALL_STATE(61)] = 1034,
  [SMALL_STATE(62)] = 1041,
  [SMALL_STATE(63)] = 1046,
  [SMALL_STATE(64)] = 1051,
  [SMALL_STATE(65)] = 1058,
  [SMALL_STATE(66)] = 1065,
  [SMALL_STATE(67)] = 1070,
  [SMALL_STATE(68)] = 1077,
  [SMALL_STATE(69)] = 1082,
  [SMALL_STATE(70)] = 1089,
  [SMALL_STATE(71)] = 1096,
  [SMALL_STATE(72)] = 1103,
  [SMALL_STATE(73)] = 1110,
  [SMALL_STATE(74)] = 1117,
  [SMALL_STATE(75)] = 1122,
  [SMALL_STATE(76)] = 1129,
  [SMALL_STATE(77)] = 1136,
  [SMALL_STATE(78)] = 1141,
  [SMALL_STATE(79)] = 1148,
  [SMALL_STATE(80)] = 1152,
  [SMALL_STATE(81)] = 1156,
  [SMALL_STATE(82)] = 1160,
  [SMALL_STATE(83)] = 1164,
  [SMALL_STATE(84)] = 1168,
  [SMALL_STATE(85)] = 1172,
  [SMALL_STATE(86)] = 1176,
  [SMALL_STATE(87)] = 1180,
  [SMALL_STATE(88)] = 1184,
  [SMALL_STATE(89)] = 1188,
  [SMALL_STATE(90)] = 1192,
  [SMALL_STATE(91)] = 1196,
  [SMALL_STATE(92)] = 1200,
  [SMALL_STATE(93)] = 1204,
  [SMALL_STATE(94)] = 1208,
  [SMALL_STATE(95)] = 1212,
  [SMALL_STATE(96)] = 1216,
  [SMALL_STATE(97)] = 1220,
  [SMALL_STATE(98)] = 1224,
  [SMALL_STATE(99)] = 1228,
  [SMALL_STATE(100)] = 1232,
  [SMALL_STATE(101)] = 1236,
  [SMALL_STATE(102)] = 1240,
  [SMALL_STATE(103)] = 1244,
  [SMALL_STATE(104)] = 1248,
  [SMALL_STATE(105)] = 1252,
  [SMALL_STATE(106)] = 1256,
  [SMALL_STATE(107)] = 1260,
  [SMALL_STATE(108)] = 1264,
  [SMALL_STATE(109)] = 1268,
  [SMALL_STATE(110)] = 1272,
  [SMALL_STATE(111)] = 1276,
  [SMALL_STATE(112)] = 1280,
  [SMALL_STATE(113)] = 1284,
  [SMALL_STATE(114)] = 1288,
  [SMALL_STATE(115)] = 1292,
  [SMALL_STATE(116)] = 1296,
  [SMALL_STATE(117)] = 1300,
  [SMALL_STATE(118)] = 1304,
  [SMALL_STATE(119)] = 1308,
  [SMALL_STATE(120)] = 1312,
  [SMALL_STATE(121)] = 1316,
  [SMALL_STATE(122)] = 1320,
  [SMALL_STATE(123)] = 1324,
  [SMALL_STATE(124)] = 1328,
  [SMALL_STATE(125)] = 1332,
  [SMALL_STATE(126)] = 1336,
  [SMALL_STATE(127)] = 1340,
  [SMALL_STATE(128)] = 1344,
  [SMALL_STATE(129)] = 1348,
  [SMALL_STATE(130)] = 1352,
  [SMALL_STATE(131)] = 1356,
  [SMALL_STATE(132)] = 1360,
  [SMALL_STATE(133)] = 1364,
  [SMALL_STATE(134)] = 1368,
  [SMALL_STATE(135)] = 1372,
  [SMALL_STATE(136)] = 1376,
  [SMALL_STATE(137)] = 1380,
  [SMALL_STATE(138)] = 1384,
  [SMALL_STATE(139)] = 1388,
  [SMALL_STATE(140)] = 1392,
  [SMALL_STATE(141)] = 1396,
  [SMALL_STATE(142)] = 1400,
  [SMALL_STATE(143)] = 1404,
  [SMALL_STATE(144)] = 1408,
  [SMALL_STATE(145)] = 1412,
  [SMALL_STATE(146)] = 1416,
  [SMALL_STATE(147)] = 1420,
  [SMALL_STATE(148)] = 1424,
  [SMALL_STATE(149)] = 1428,
  [SMALL_STATE(150)] = 1432,
  [SMALL_STATE(151)] = 1436,
  [SMALL_STATE(152)] = 1440,
  [SMALL_STATE(153)] = 1444,
  [SMALL_STATE(154)] = 1448,
  [SMALL_STATE(155)] = 1452,
  [SMALL_STATE(156)] = 1456,
  [SMALL_STATE(157)] = 1460,
  [SMALL_STATE(158)] = 1464,
  [SMALL_STATE(159)] = 1468,
  [SMALL_STATE(160)] = 1472,
  [SMALL_STATE(161)] = 1476,
  [SMALL_STATE(162)] = 1480,
  [SMALL_STATE(163)] = 1484,
  [SMALL_STATE(164)] = 1488,
  [SMALL_STATE(165)] = 1492,
  [SMALL_STATE(166)] = 1496,
  [SMALL_STATE(167)] = 1500,
  [SMALL_STATE(168)] = 1504,
  [SMALL_STATE(169)] = 1508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 4, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 5, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 6, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 10, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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

TS_PUBLIC const TSLanguage *tree_sitter_batch(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
