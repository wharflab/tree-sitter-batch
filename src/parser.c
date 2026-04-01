#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_command_name = 1,
  aux_sym_program_token1 = 2,
  anon_sym_AT = 3,
  aux_sym_echo_off_token1 = 4,
  aux_sym_echo_off_token2 = 5,
  aux_sym_echo_off_token3 = 6,
  sym_comment = 7,
  aux_sym_label_token1 = 8,
  aux_sym_variable_assignment_token1 = 9,
  aux_sym_variable_assignment_token2 = 10,
  aux_sym_variable_assignment_token3 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_variable_assignment_token4 = 13,
  anon_sym_EQ = 14,
  aux_sym_variable_assignment_token5 = 15,
  aux_sym_variable_assignment_token6 = 16,
  aux_sym_if_stmt_token1 = 17,
  aux_sym_if_stmt_token2 = 18,
  aux_sym_if_stmt_token3 = 19,
  aux_sym_if_stmt_token4 = 20,
  aux_sym_if_stmt_token5 = 21,
  aux_sym_else_clause_token1 = 22,
  sym_comparison_op = 23,
  aux_sym_goto_stmt_token1 = 24,
  aux_sym_goto_stmt_token2 = 25,
  aux_sym_goto_stmt_token3 = 26,
  aux_sym_call_stmt_token1 = 27,
  aux_sym_exit_stmt_token1 = 28,
  aux_sym_exit_stmt_token2 = 29,
  aux_sym_setlocal_stmt_token1 = 30,
  aux_sym_setlocal_stmt_token2 = 31,
  aux_sym_setlocal_stmt_token3 = 32,
  aux_sym_setlocal_stmt_token4 = 33,
  aux_sym_setlocal_stmt_token5 = 34,
  aux_sym_endlocal_stmt_token1 = 35,
  aux_sym_for_stmt_token1 = 36,
  aux_sym_for_stmt_token2 = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  aux_sym_for_stmt_token3 = 40,
  sym_for_options = 41,
  sym_for_variable = 42,
  sym_for_set = 43,
  aux_sym_redirection_token1 = 44,
  sym_redirect_op = 45,
  sym_redirect_target = 46,
  anon_sym_PIPE = 47,
  anon_sym_AMP_AMP = 48,
  anon_sym_PIPE_PIPE = 49,
  sym_variable_reference = 50,
  sym_string = 51,
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
  [sym_command_name] = "command_name",
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
  [sym_command_name] = sym_command_name,
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
  [sym_command_name] = {
    .visible = true,
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
  [13] = 8,
  [14] = 9,
  [15] = 10,
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
  [170] = 170,
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
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '!', 48,
        '"', 64,
        '%', 12,
        '&', 16,
        '(', 81,
        ')', 82,
        '/', 31,
        '2', 91,
        ':', 19,
        '<', 94,
        '=', 69,
        '>', 95,
        '@', 55,
        '|', 101,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(53);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '!', 48,
        '"', 10,
        '%', 15,
        '&', 16,
        '/', 111,
        '2', 92,
        '<', 94,
        '>', 95,
        '|', 101,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(112);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '!', 48,
        '"', 10,
        '%', 15,
        '&', 16,
        '/', 111,
        '|', 24,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(112);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '!', 48,
        '"', 10,
        '%', 15,
        '(', 81,
        ':', 49,
        '@', 54,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '%', 11,
        '&', 16,
        '/', 37,
        '2', 91,
        '<', 94,
        '>', 95,
        '|', 101,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '~') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(104);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '~') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '&') ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(103);
      END_STATE();
    case 25:
      if (lookahead == '~') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == '~') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        'B', 80,
        'b', 80,
        'F', 84,
        'f', 84,
        'R', 85,
        'r', 85,
        'A', 63,
        'P', 63,
        'a', 63,
        'p', 63,
        'D', 83,
        'L', 83,
        'd', 83,
        'l', 83,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        'F', 84,
        'f', 84,
        'R', 85,
        'r', 85,
        'D', 83,
        'L', 83,
        'd', 83,
        'l', 83,
      );
      END_STATE();
    case 38:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          lookahead == 'a' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 47:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 48:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 49:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(14);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '!', 48,
        '"', 10,
        '%', 15,
        '(', 81,
        ')', 82,
        '/', 30,
        ':', 20,
        '@', 55,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_program_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (set_contains(sym_comparison_op_character_set_1, 9, lookahead) ||
          lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (set_contains(sym_comparison_op_character_set_1, 9, lookahead) ||
          lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
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
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(5);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'C', 14,
        'c', 14,
        'L', 15,
        'l', 15,
        'N', 16,
        'n', 16,
        'R', 17,
        'r', 17,
        'X', 18,
        'x', 18,
      );
      END_STATE();
    case 4:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(21);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_for_stmt_token3);
      END_STATE();
    case 14:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_if_stmt_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_for_stmt_token2);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_echo_off_token3);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_for_stmt_token1);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_if_stmt_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_echo_off_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_call_stmt_token1);
      END_STATE();
    case 42:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_echo_off_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_else_clause_token1);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token1);
      END_STATE();
    case 52:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_if_stmt_token3);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_if_stmt_token4);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_endlocal_stmt_token1);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token1);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_if_stmt_token5);
      END_STATE();
    case 90:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token4);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token5);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_setlocal_stmt_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 51},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 51},
  [59] = {.lex_state = 70},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 51},
  [64] = {.lex_state = 70},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 51},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 51},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 72},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 51},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 51},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 28},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
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
    [sym_command_option] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(101),
    [sym__stmt] = STATE(149),
    [sym_echo_off] = STATE(149),
    [sym_label] = STATE(149),
    [sym_variable_assignment] = STATE(149),
    [sym_if_stmt] = STATE(149),
    [sym_goto_stmt] = STATE(149),
    [sym_call_stmt] = STATE(149),
    [sym_exit_stmt] = STATE(149),
    [sym_setlocal_stmt] = STATE(149),
    [sym_endlocal_stmt] = STATE(149),
    [sym_for_stmt] = STATE(149),
    [sym_parenthesized] = STATE(19),
    [sym_redirect_stmt] = STATE(149),
    [sym_pipe_stmt] = STATE(149),
    [sym_cond_exec] = STATE(55),
    [sym_cmd] = STATE(19),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_command_name] = ACTIONS(5),
    [aux_sym_program_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_label_token1] = ACTIONS(13),
    [aux_sym_variable_assignment_token1] = ACTIONS(15),
    [aux_sym_if_stmt_token1] = ACTIONS(17),
    [aux_sym_goto_stmt_token1] = ACTIONS(19),
    [aux_sym_call_stmt_token1] = ACTIONS(21),
    [aux_sym_exit_stmt_token1] = ACTIONS(23),
    [aux_sym_setlocal_stmt_token1] = ACTIONS(25),
    [aux_sym_endlocal_stmt_token1] = ACTIONS(27),
    [aux_sym_for_stmt_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(35), 1,
      sym_command_name,
    ACTIONS(38), 1,
      aux_sym_program_token1,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_label_token1,
    ACTIONS(50), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(53), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(56), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(59), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(62), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(65), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(68), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(71), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(55), 1,
      sym_cond_exec,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(149), 13,
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
  [72] = 19,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_label_token1,
    ACTIONS(15), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(17), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(29), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_program_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(55), 1,
      sym_cond_exec,
    STATE(19), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(149), 13,
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
  [143] = 19,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_label_token1,
    ACTIONS(15), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(17), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(29), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_program_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(55), 1,
      sym_cond_exec,
    STATE(19), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(149), 13,
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
  [214] = 19,
    ACTIONS(5), 1,
      sym_command_name,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_label_token1,
    ACTIONS(15), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(17), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(27), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(29), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_program_token1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(55), 1,
      sym_cond_exec,
    STATE(19), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(149), 13,
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
  [285] = 2,
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
  [306] = 6,
    STATE(23), 1,
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
    STATE(10), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(89), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [332] = 6,
    STATE(26), 1,
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
    STATE(10), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(97), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [358] = 5,
    ACTIONS(103), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(105), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(108), 2,
      sym_command_option,
      sym_argument_value,
    STATE(9), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(101), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [381] = 5,
    ACTIONS(113), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(115), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(117), 2,
      sym_command_option,
      sym_argument_value,
    STATE(9), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(111), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [404] = 10,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(121), 1,
      aux_sym_echo_off_token1,
    ACTIONS(123), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(125), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(127), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(129), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(131), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(133), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(135), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(137), 1,
      aux_sym_for_stmt_token1,
  [435] = 5,
    STATE(23), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(15), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(89), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [456] = 5,
    STATE(26), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(15), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(97), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [477] = 4,
    ACTIONS(143), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(146), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(101), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [495] = 4,
    ACTIONS(149), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(151), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(111), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [513] = 5,
    ACTIONS(153), 1,
      aux_sym_program_token1,
    STATE(92), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(15), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [532] = 5,
    ACTIONS(155), 1,
      aux_sym_program_token1,
    STATE(150), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(15), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [551] = 5,
    ACTIONS(157), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(159), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(161), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(163), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(165), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [569] = 7,
    ACTIONS(167), 1,
      aux_sym_program_token1,
    ACTIONS(169), 1,
      aux_sym_redirection_token1,
    ACTIONS(171), 1,
      sym_redirect_op,
    ACTIONS(173), 1,
      anon_sym_PIPE,
    ACTIONS(175), 1,
      anon_sym_AMP_AMP,
    ACTIONS(177), 1,
      anon_sym_PIPE_PIPE,
    STATE(96), 1,
      sym_redirection,
  [591] = 5,
    ACTIONS(179), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(181), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(183), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(185), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(187), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [609] = 2,
    ACTIONS(191), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(189), 5,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [621] = 2,
    ACTIONS(195), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(193), 5,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [633] = 2,
    ACTIONS(99), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(97), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [644] = 4,
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
  [659] = 4,
    ACTIONS(159), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(161), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(163), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(165), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [674] = 2,
    ACTIONS(207), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(205), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [685] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(162), 2,
      sym_parenthesized,
      sym_cmd,
  [699] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(44), 2,
      sym_parenthesized,
      sym_cmd,
  [713] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_parenthesized,
    STATE(111), 1,
      sym_cmd,
  [729] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(168), 2,
      sym_parenthesized,
      sym_cmd,
  [743] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_parenthesized,
    STATE(100), 1,
      sym_cmd,
  [759] = 2,
    ACTIONS(213), 1,
      aux_sym_program_token1,
    ACTIONS(215), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [769] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_parenthesized,
    STATE(129), 1,
      sym_cmd,
  [785] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_parenthesized,
    STATE(145), 1,
      sym_cmd,
  [801] = 2,
    ACTIONS(217), 1,
      aux_sym_program_token1,
    ACTIONS(219), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [811] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(137), 2,
      sym_parenthesized,
      sym_cmd,
  [825] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(158), 2,
      sym_parenthesized,
      sym_cmd,
  [839] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(45), 2,
      sym_parenthesized,
      sym_cmd,
  [853] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(151), 2,
      sym_parenthesized,
      sym_cmd,
  [867] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_command_name,
    ACTIONS(211), 1,
      anon_sym_AT,
    STATE(165), 2,
      sym_parenthesized,
      sym_cmd,
  [881] = 3,
    ACTIONS(221), 1,
      aux_sym_program_token1,
    ACTIONS(223), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(225), 1,
      sym_integer,
  [891] = 1,
    ACTIONS(227), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [897] = 3,
    ACTIONS(229), 1,
      aux_sym_program_token1,
    ACTIONS(231), 1,
      aux_sym_redirection_token1,
    ACTIONS(233), 1,
      sym_redirect_op,
  [907] = 1,
    ACTIONS(235), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [913] = 1,
    ACTIONS(235), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [919] = 2,
    ACTIONS(237), 1,
      aux_sym_program_token1,
    ACTIONS(239), 2,
      sym_variable_reference,
      sym_integer,
  [927] = 1,
    ACTIONS(241), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [933] = 3,
    ACTIONS(243), 1,
      aux_sym_program_token1,
    ACTIONS(245), 1,
      aux_sym_else_clause_token1,
    STATE(111), 1,
      sym_else_clause,
  [943] = 3,
    ACTIONS(247), 1,
      aux_sym_program_token1,
    ACTIONS(249), 1,
      aux_sym_redirection_token1,
    ACTIONS(251), 1,
      sym_redirect_op,
  [953] = 3,
    ACTIONS(245), 1,
      aux_sym_else_clause_token1,
    ACTIONS(253), 1,
      aux_sym_program_token1,
    STATE(129), 1,
      sym_else_clause,
  [963] = 1,
    ACTIONS(255), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [969] = 3,
    ACTIONS(245), 1,
      aux_sym_else_clause_token1,
    ACTIONS(257), 1,
      aux_sym_program_token1,
    STATE(145), 1,
      sym_else_clause,
  [979] = 3,
    ACTIONS(259), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_variable_assignment_token4,
  [989] = 3,
    ACTIONS(245), 1,
      aux_sym_else_clause_token1,
    ACTIONS(265), 1,
      aux_sym_program_token1,
    STATE(155), 1,
      sym_else_clause,
  [999] = 3,
    ACTIONS(167), 1,
      aux_sym_program_token1,
    ACTIONS(175), 1,
      anon_sym_AMP_AMP,
    ACTIONS(177), 1,
      anon_sym_PIPE_PIPE,
  [1009] = 3,
    ACTIONS(267), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      aux_sym_variable_assignment_token4,
  [1019] = 2,
    ACTIONS(221), 1,
      aux_sym_program_token1,
    ACTIONS(225), 2,
      sym_variable_reference,
      sym_integer,
  [1027] = 3,
    ACTIONS(273), 1,
      aux_sym_program_token1,
    ACTIONS(275), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(277), 1,
      sym_integer,
  [1037] = 2,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      aux_sym_variable_assignment_token5,
  [1044] = 1,
    ACTIONS(283), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [1049] = 2,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      sym_for_set,
  [1056] = 2,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_variable_assignment_token5,
  [1063] = 1,
    ACTIONS(227), 2,
      sym_variable_reference,
      sym_string,
  [1068] = 2,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_variable_assignment_token5,
  [1075] = 2,
    ACTIONS(297), 1,
      sym_for_options,
    ACTIONS(299), 1,
      sym_for_variable,
  [1082] = 1,
    ACTIONS(241), 2,
      sym_variable_reference,
      sym_string,
  [1087] = 2,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      sym_for_set,
  [1094] = 2,
    ACTIONS(305), 1,
      aux_sym_program_token1,
    ACTIONS(307), 1,
      aux_sym_variable_assignment_token6,
  [1101] = 2,
    ACTIONS(309), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(311), 1,
      aux_sym_goto_stmt_token3,
  [1108] = 2,
    ACTIONS(313), 1,
      aux_sym_program_token1,
    ACTIONS(315), 1,
      aux_sym_variable_assignment_token6,
  [1115] = 1,
    ACTIONS(317), 2,
      sym_variable_reference,
      sym_string,
  [1120] = 2,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_variable_assignment_token4,
  [1127] = 2,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      aux_sym_variable_assignment_token5,
  [1134] = 2,
    ACTIONS(327), 1,
      aux_sym_program_token1,
    ACTIONS(329), 1,
      aux_sym_variable_assignment_token6,
  [1141] = 1,
    ACTIONS(331), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1146] = 2,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      sym_for_set,
  [1153] = 2,
    ACTIONS(337), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(339), 1,
      aux_sym_goto_stmt_token3,
  [1160] = 2,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      aux_sym_variable_assignment_token4,
  [1167] = 2,
    ACTIONS(345), 1,
      aux_sym_program_token1,
    ACTIONS(347), 1,
      aux_sym_variable_assignment_token6,
  [1174] = 1,
    ACTIONS(349), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1179] = 2,
    ACTIONS(351), 1,
      sym_for_options,
    ACTIONS(353), 1,
      sym_for_variable,
  [1186] = 1,
    ACTIONS(355), 1,
      aux_sym_program_token1,
  [1190] = 1,
    ACTIONS(357), 1,
      aux_sym_variable_assignment_token2,
  [1194] = 1,
    ACTIONS(359), 1,
      aux_sym_variable_assignment_token4,
  [1198] = 1,
    ACTIONS(361), 1,
      anon_sym_EQ,
  [1202] = 1,
    ACTIONS(317), 1,
      aux_sym_variable_assignment_token4,
  [1206] = 1,
    ACTIONS(241), 1,
      aux_sym_variable_assignment_token4,
  [1210] = 1,
    ACTIONS(241), 1,
      sym_integer,
  [1214] = 1,
    ACTIONS(363), 1,
      sym_comparison_op,
  [1218] = 1,
    ACTIONS(317), 1,
      sym_integer,
  [1222] = 1,
    ACTIONS(365), 1,
      sym_comparison_op,
  [1226] = 1,
    ACTIONS(367), 1,
      aux_sym_program_token1,
  [1230] = 1,
    ACTIONS(369), 1,
      aux_sym_program_token1,
  [1234] = 1,
    ACTIONS(371), 1,
      aux_sym_for_stmt_token2,
  [1238] = 1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
  [1242] = 1,
    ACTIONS(375), 1,
      aux_sym_program_token1,
  [1246] = 1,
    ACTIONS(377), 1,
      anon_sym_EQ,
  [1250] = 1,
    ACTIONS(379), 1,
      aux_sym_program_token1,
  [1254] = 1,
    ACTIONS(381), 1,
      aux_sym_program_token1,
  [1258] = 1,
    ACTIONS(243), 1,
      aux_sym_program_token1,
  [1262] = 1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [1266] = 1,
    ACTIONS(385), 1,
      aux_sym_program_token1,
  [1270] = 1,
    ACTIONS(251), 1,
      sym_redirect_op,
  [1274] = 1,
    ACTIONS(387), 1,
      sym_redirect_target,
  [1278] = 1,
    ACTIONS(221), 1,
      aux_sym_program_token1,
  [1282] = 1,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [1286] = 1,
    ACTIONS(227), 1,
      aux_sym_variable_assignment_token4,
  [1290] = 1,
    ACTIONS(227), 1,
      sym_integer,
  [1294] = 1,
    ACTIONS(391), 1,
      sym_comparison_op,
  [1298] = 1,
    ACTIONS(393), 1,
      aux_sym_program_token1,
  [1302] = 1,
    ACTIONS(253), 1,
      aux_sym_program_token1,
  [1306] = 1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [1310] = 1,
    ACTIONS(213), 1,
      aux_sym_program_token1,
  [1314] = 1,
    ACTIONS(397), 1,
      aux_sym_variable_assignment_token4,
  [1318] = 1,
    ACTIONS(399), 1,
      anon_sym_EQ,
  [1322] = 1,
    ACTIONS(353), 1,
      sym_for_variable,
  [1326] = 1,
    ACTIONS(401), 1,
      aux_sym_program_token1,
  [1330] = 1,
    ACTIONS(237), 1,
      aux_sym_program_token1,
  [1334] = 1,
    ACTIONS(403), 1,
      aux_sym_for_stmt_token3,
  [1338] = 1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [1342] = 1,
    ACTIONS(407), 1,
      sym_redirect_op,
  [1346] = 1,
    ACTIONS(409), 1,
      sym_redirect_target,
  [1350] = 1,
    ACTIONS(411), 1,
      aux_sym_program_token1,
  [1354] = 1,
    ACTIONS(413), 1,
      aux_sym_variable_assignment_token4,
  [1358] = 1,
    ACTIONS(415), 1,
      anon_sym_EQ,
  [1362] = 1,
    ACTIONS(417), 1,
      aux_sym_program_token1,
  [1366] = 1,
    ACTIONS(419), 1,
      aux_sym_program_token1,
  [1370] = 1,
    ACTIONS(421), 1,
      sym_for_variable,
  [1374] = 1,
    ACTIONS(257), 1,
      aux_sym_program_token1,
  [1378] = 1,
    ACTIONS(423), 1,
      sym_redirect_target,
  [1382] = 1,
    ACTIONS(425), 1,
      aux_sym_for_stmt_token2,
  [1386] = 1,
    ACTIONS(427), 1,
      aux_sym_for_stmt_token3,
  [1390] = 1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
  [1394] = 1,
    ACTIONS(431), 1,
      anon_sym_EQ,
  [1398] = 1,
    ACTIONS(433), 1,
      aux_sym_variable_assignment_token2,
  [1402] = 1,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
  [1406] = 1,
    ACTIONS(435), 1,
      aux_sym_program_token1,
  [1410] = 1,
    ACTIONS(437), 1,
      aux_sym_variable_assignment_token4,
  [1414] = 1,
    ACTIONS(439), 1,
      sym_redirect_target,
  [1418] = 1,
    ACTIONS(441), 1,
      aux_sym_program_token1,
  [1422] = 1,
    ACTIONS(443), 1,
      anon_sym_EQ,
  [1426] = 1,
    ACTIONS(445), 1,
      anon_sym_EQ,
  [1430] = 1,
    ACTIONS(447), 1,
      aux_sym_program_token1,
  [1434] = 1,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
  [1438] = 1,
    ACTIONS(265), 1,
      aux_sym_program_token1,
  [1442] = 1,
    ACTIONS(449), 1,
      aux_sym_variable_assignment_token2,
  [1446] = 1,
    ACTIONS(451), 1,
      aux_sym_for_stmt_token3,
  [1450] = 1,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [1454] = 1,
    ACTIONS(455), 1,
      aux_sym_program_token1,
  [1458] = 1,
    ACTIONS(153), 1,
      aux_sym_program_token1,
  [1462] = 1,
    ACTIONS(457), 1,
      aux_sym_program_token1,
  [1466] = 1,
    ACTIONS(459), 1,
      aux_sym_program_token1,
  [1470] = 1,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
  [1474] = 1,
    ACTIONS(463), 1,
      aux_sym_program_token1,
  [1478] = 1,
    ACTIONS(465), 1,
      aux_sym_program_token1,
  [1482] = 1,
    ACTIONS(467), 1,
      aux_sym_variable_assignment_token2,
  [1486] = 1,
    ACTIONS(469), 1,
      aux_sym_for_stmt_token3,
  [1490] = 1,
    ACTIONS(471), 1,
      aux_sym_program_token1,
  [1494] = 1,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
  [1498] = 1,
    ACTIONS(475), 1,
      aux_sym_program_token1,
  [1502] = 1,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
  [1506] = 1,
    ACTIONS(479), 1,
      aux_sym_program_token1,
  [1510] = 1,
    ACTIONS(481), 1,
      sym_redirect_target,
  [1514] = 1,
    ACTIONS(483), 1,
      aux_sym_program_token1,
  [1518] = 1,
    ACTIONS(485), 1,
      aux_sym_program_token1,
  [1522] = 1,
    ACTIONS(487), 1,
      aux_sym_program_token1,
  [1526] = 1,
    ACTIONS(489), 1,
      sym_command_name,
  [1530] = 1,
    ACTIONS(491), 1,
      aux_sym_program_token1,
  [1534] = 1,
    ACTIONS(493), 1,
      sym_redirect_op,
  [1538] = 1,
    ACTIONS(495), 1,
      aux_sym_for_stmt_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 143,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 285,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 332,
  [SMALL_STATE(9)] = 358,
  [SMALL_STATE(10)] = 381,
  [SMALL_STATE(11)] = 404,
  [SMALL_STATE(12)] = 435,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 477,
  [SMALL_STATE(15)] = 495,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 532,
  [SMALL_STATE(18)] = 551,
  [SMALL_STATE(19)] = 569,
  [SMALL_STATE(20)] = 591,
  [SMALL_STATE(21)] = 609,
  [SMALL_STATE(22)] = 621,
  [SMALL_STATE(23)] = 633,
  [SMALL_STATE(24)] = 644,
  [SMALL_STATE(25)] = 659,
  [SMALL_STATE(26)] = 674,
  [SMALL_STATE(27)] = 685,
  [SMALL_STATE(28)] = 699,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 729,
  [SMALL_STATE(31)] = 743,
  [SMALL_STATE(32)] = 759,
  [SMALL_STATE(33)] = 769,
  [SMALL_STATE(34)] = 785,
  [SMALL_STATE(35)] = 801,
  [SMALL_STATE(36)] = 811,
  [SMALL_STATE(37)] = 825,
  [SMALL_STATE(38)] = 839,
  [SMALL_STATE(39)] = 853,
  [SMALL_STATE(40)] = 867,
  [SMALL_STATE(41)] = 881,
  [SMALL_STATE(42)] = 891,
  [SMALL_STATE(43)] = 897,
  [SMALL_STATE(44)] = 907,
  [SMALL_STATE(45)] = 913,
  [SMALL_STATE(46)] = 919,
  [SMALL_STATE(47)] = 927,
  [SMALL_STATE(48)] = 933,
  [SMALL_STATE(49)] = 943,
  [SMALL_STATE(50)] = 953,
  [SMALL_STATE(51)] = 963,
  [SMALL_STATE(52)] = 969,
  [SMALL_STATE(53)] = 979,
  [SMALL_STATE(54)] = 989,
  [SMALL_STATE(55)] = 999,
  [SMALL_STATE(56)] = 1009,
  [SMALL_STATE(57)] = 1019,
  [SMALL_STATE(58)] = 1027,
  [SMALL_STATE(59)] = 1037,
  [SMALL_STATE(60)] = 1044,
  [SMALL_STATE(61)] = 1049,
  [SMALL_STATE(62)] = 1056,
  [SMALL_STATE(63)] = 1063,
  [SMALL_STATE(64)] = 1068,
  [SMALL_STATE(65)] = 1075,
  [SMALL_STATE(66)] = 1082,
  [SMALL_STATE(67)] = 1087,
  [SMALL_STATE(68)] = 1094,
  [SMALL_STATE(69)] = 1101,
  [SMALL_STATE(70)] = 1108,
  [SMALL_STATE(71)] = 1115,
  [SMALL_STATE(72)] = 1120,
  [SMALL_STATE(73)] = 1127,
  [SMALL_STATE(74)] = 1134,
  [SMALL_STATE(75)] = 1141,
  [SMALL_STATE(76)] = 1146,
  [SMALL_STATE(77)] = 1153,
  [SMALL_STATE(78)] = 1160,
  [SMALL_STATE(79)] = 1167,
  [SMALL_STATE(80)] = 1174,
  [SMALL_STATE(81)] = 1179,
  [SMALL_STATE(82)] = 1186,
  [SMALL_STATE(83)] = 1190,
  [SMALL_STATE(84)] = 1194,
  [SMALL_STATE(85)] = 1198,
  [SMALL_STATE(86)] = 1202,
  [SMALL_STATE(87)] = 1206,
  [SMALL_STATE(88)] = 1210,
  [SMALL_STATE(89)] = 1214,
  [SMALL_STATE(90)] = 1218,
  [SMALL_STATE(91)] = 1222,
  [SMALL_STATE(92)] = 1226,
  [SMALL_STATE(93)] = 1230,
  [SMALL_STATE(94)] = 1234,
  [SMALL_STATE(95)] = 1238,
  [SMALL_STATE(96)] = 1242,
  [SMALL_STATE(97)] = 1246,
  [SMALL_STATE(98)] = 1250,
  [SMALL_STATE(99)] = 1254,
  [SMALL_STATE(100)] = 1258,
  [SMALL_STATE(101)] = 1262,
  [SMALL_STATE(102)] = 1266,
  [SMALL_STATE(103)] = 1270,
  [SMALL_STATE(104)] = 1274,
  [SMALL_STATE(105)] = 1278,
  [SMALL_STATE(106)] = 1282,
  [SMALL_STATE(107)] = 1286,
  [SMALL_STATE(108)] = 1290,
  [SMALL_STATE(109)] = 1294,
  [SMALL_STATE(110)] = 1298,
  [SMALL_STATE(111)] = 1302,
  [SMALL_STATE(112)] = 1306,
  [SMALL_STATE(113)] = 1310,
  [SMALL_STATE(114)] = 1314,
  [SMALL_STATE(115)] = 1318,
  [SMALL_STATE(116)] = 1322,
  [SMALL_STATE(117)] = 1326,
  [SMALL_STATE(118)] = 1330,
  [SMALL_STATE(119)] = 1334,
  [SMALL_STATE(120)] = 1338,
  [SMALL_STATE(121)] = 1342,
  [SMALL_STATE(122)] = 1346,
  [SMALL_STATE(123)] = 1350,
  [SMALL_STATE(124)] = 1354,
  [SMALL_STATE(125)] = 1358,
  [SMALL_STATE(126)] = 1362,
  [SMALL_STATE(127)] = 1366,
  [SMALL_STATE(128)] = 1370,
  [SMALL_STATE(129)] = 1374,
  [SMALL_STATE(130)] = 1378,
  [SMALL_STATE(131)] = 1382,
  [SMALL_STATE(132)] = 1386,
  [SMALL_STATE(133)] = 1390,
  [SMALL_STATE(134)] = 1394,
  [SMALL_STATE(135)] = 1398,
  [SMALL_STATE(136)] = 1402,
  [SMALL_STATE(137)] = 1406,
  [SMALL_STATE(138)] = 1410,
  [SMALL_STATE(139)] = 1414,
  [SMALL_STATE(140)] = 1418,
  [SMALL_STATE(141)] = 1422,
  [SMALL_STATE(142)] = 1426,
  [SMALL_STATE(143)] = 1430,
  [SMALL_STATE(144)] = 1434,
  [SMALL_STATE(145)] = 1438,
  [SMALL_STATE(146)] = 1442,
  [SMALL_STATE(147)] = 1446,
  [SMALL_STATE(148)] = 1450,
  [SMALL_STATE(149)] = 1454,
  [SMALL_STATE(150)] = 1458,
  [SMALL_STATE(151)] = 1462,
  [SMALL_STATE(152)] = 1466,
  [SMALL_STATE(153)] = 1470,
  [SMALL_STATE(154)] = 1474,
  [SMALL_STATE(155)] = 1478,
  [SMALL_STATE(156)] = 1482,
  [SMALL_STATE(157)] = 1486,
  [SMALL_STATE(158)] = 1490,
  [SMALL_STATE(159)] = 1494,
  [SMALL_STATE(160)] = 1498,
  [SMALL_STATE(161)] = 1502,
  [SMALL_STATE(162)] = 1506,
  [SMALL_STATE(163)] = 1510,
  [SMALL_STATE(164)] = 1514,
  [SMALL_STATE(165)] = 1518,
  [SMALL_STATE(166)] = 1522,
  [SMALL_STATE(167)] = 1526,
  [SMALL_STATE(168)] = 1530,
  [SMALL_STATE(169)] = 1534,
  [SMALL_STATE(170)] = 1538,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 4, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 5, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 6, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 10, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_command_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
