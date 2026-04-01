#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 169
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
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
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
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 51},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 51},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 70},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 51},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 72},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 70},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 51},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 5},
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
    [sym_program] = STATE(103),
    [sym__stmt] = STATE(160),
    [sym_echo_off] = STATE(160),
    [sym_label] = STATE(160),
    [sym_variable_assignment] = STATE(160),
    [sym_if_stmt] = STATE(160),
    [sym_goto_stmt] = STATE(160),
    [sym_call_stmt] = STATE(160),
    [sym_exit_stmt] = STATE(160),
    [sym_setlocal_stmt] = STATE(160),
    [sym_endlocal_stmt] = STATE(160),
    [sym_for_stmt] = STATE(160),
    [sym_parenthesized] = STATE(21),
    [sym_redirect_stmt] = STATE(160),
    [sym_pipe_stmt] = STATE(160),
    [sym_cond_exec] = STATE(56),
    [sym_cmd] = STATE(21),
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
    STATE(56), 1,
      sym_cond_exec,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(21), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(160), 13,
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
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      sym_cond_exec,
    STATE(21), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(160), 13,
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
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      sym_cond_exec,
    STATE(21), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(160), 13,
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
    ACTIONS(77), 1,
      aux_sym_program_token1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      sym_cond_exec,
    STATE(21), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(160), 13,
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
    STATE(24), 1,
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
    STATE(9), 2,
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
  [381] = 5,
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
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 2,
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
    STATE(14), 2,
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
    ACTIONS(145), 2,
      sym_command_option,
      sym_argument_value,
    STATE(15), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(101), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [495] = 4,
    ACTIONS(147), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(150), 2,
      sym_command_option,
      sym_argument_value,
    STATE(15), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
    ACTIONS(109), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [513] = 5,
    ACTIONS(153), 1,
      aux_sym_program_token1,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 2,
      sym__arg,
      aux_sym_argument_list_repeat1,
  [532] = 5,
    ACTIONS(155), 1,
      aux_sym_program_token1,
    STATE(90), 1,
      sym_argument_list,
    ACTIONS(139), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(141), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 2,
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
  [569] = 2,
    ACTIONS(169), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(167), 5,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [581] = 5,
    ACTIONS(171), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(173), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(175), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(177), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(179), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [599] = 6,
    ACTIONS(181), 1,
      aux_sym_program_token1,
    ACTIONS(183), 1,
      aux_sym_redirection_token1,
    ACTIONS(185), 1,
      sym_redirect_op,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    STATE(96), 1,
      sym_redirection,
    ACTIONS(189), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [619] = 2,
    ACTIONS(193), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(191), 5,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [631] = 4,
    ACTIONS(173), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(175), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(177), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(179), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [646] = 2,
    ACTIONS(99), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(97), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [657] = 4,
    ACTIONS(195), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(197), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(199), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(201), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [672] = 2,
    ACTIONS(205), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(203), 4,
      aux_sym_program_token1,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [683] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_parenthesized,
    STATE(98), 1,
      sym_cmd,
  [699] = 2,
    ACTIONS(211), 1,
      aux_sym_program_token1,
    ACTIONS(213), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [709] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(167), 2,
      sym_parenthesized,
      sym_cmd,
  [723] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(45), 2,
      sym_parenthesized,
      sym_cmd,
  [737] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_parenthesized,
    STATE(109), 1,
      sym_cmd,
  [753] = 2,
    ACTIONS(215), 1,
      aux_sym_program_token1,
    ACTIONS(217), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [763] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(135), 2,
      sym_parenthesized,
      sym_cmd,
  [777] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(53), 1,
      sym_parenthesized,
    STATE(127), 1,
      sym_cmd,
  [793] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(156), 2,
      sym_parenthesized,
      sym_cmd,
  [807] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(149), 2,
      sym_parenthesized,
      sym_cmd,
  [821] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_parenthesized,
    STATE(143), 1,
      sym_cmd,
  [837] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(163), 2,
      sym_parenthesized,
      sym_cmd,
  [851] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_command_name,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(80), 2,
      sym_parenthesized,
      sym_cmd,
  [865] = 3,
    ACTIONS(219), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      aux_sym_variable_assignment_token4,
  [875] = 2,
    ACTIONS(225), 1,
      aux_sym_program_token1,
    ACTIONS(227), 2,
      sym_variable_reference,
      sym_integer,
  [883] = 1,
    ACTIONS(229), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [889] = 3,
    ACTIONS(231), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_variable_assignment_token4,
  [899] = 3,
    ACTIONS(237), 1,
      aux_sym_program_token1,
    ACTIONS(239), 1,
      aux_sym_redirection_token1,
    ACTIONS(241), 1,
      sym_redirect_op,
  [909] = 1,
    ACTIONS(243), 3,
      aux_sym_program_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [915] = 3,
    ACTIONS(245), 1,
      aux_sym_program_token1,
    ACTIONS(247), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(249), 1,
      sym_integer,
  [925] = 1,
    ACTIONS(251), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [931] = 3,
    ACTIONS(253), 1,
      aux_sym_program_token1,
    ACTIONS(255), 1,
      aux_sym_else_clause_token1,
    STATE(109), 1,
      sym_else_clause,
  [941] = 3,
    ACTIONS(257), 1,
      aux_sym_program_token1,
    ACTIONS(259), 1,
      aux_sym_redirection_token1,
    ACTIONS(261), 1,
      sym_redirect_op,
  [951] = 3,
    ACTIONS(255), 1,
      aux_sym_else_clause_token1,
    ACTIONS(263), 1,
      aux_sym_program_token1,
    STATE(127), 1,
      sym_else_clause,
  [961] = 1,
    ACTIONS(265), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [967] = 3,
    ACTIONS(255), 1,
      aux_sym_else_clause_token1,
    ACTIONS(267), 1,
      aux_sym_program_token1,
    STATE(153), 1,
      sym_else_clause,
  [977] = 3,
    ACTIONS(255), 1,
      aux_sym_else_clause_token1,
    ACTIONS(269), 1,
      aux_sym_program_token1,
    STATE(143), 1,
      sym_else_clause,
  [987] = 3,
    ACTIONS(271), 1,
      aux_sym_program_token1,
    ACTIONS(273), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(275), 1,
      sym_integer,
  [997] = 2,
    ACTIONS(245), 1,
      aux_sym_program_token1,
    ACTIONS(249), 2,
      sym_variable_reference,
      sym_integer,
  [1005] = 2,
    ACTIONS(181), 1,
      aux_sym_program_token1,
    ACTIONS(189), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1013] = 2,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      sym_for_set,
  [1020] = 2,
    ACTIONS(281), 1,
      sym_for_options,
    ACTIONS(283), 1,
      sym_for_variable,
  [1027] = 2,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      sym_for_set,
  [1034] = 2,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_variable_assignment_token5,
  [1041] = 2,
    ACTIONS(293), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(295), 1,
      aux_sym_goto_stmt_token3,
  [1048] = 2,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_variable_assignment_token5,
  [1055] = 1,
    ACTIONS(229), 2,
      sym_variable_reference,
      sym_string,
  [1060] = 2,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      aux_sym_variable_assignment_token4,
  [1067] = 2,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 1,
      sym_for_set,
  [1074] = 2,
    ACTIONS(309), 1,
      aux_sym_program_token1,
    ACTIONS(311), 1,
      aux_sym_variable_assignment_token6,
  [1081] = 2,
    ACTIONS(313), 1,
      aux_sym_program_token1,
    ACTIONS(315), 1,
      aux_sym_variable_assignment_token6,
  [1088] = 2,
    ACTIONS(317), 1,
      aux_sym_program_token1,
    ACTIONS(319), 1,
      aux_sym_variable_assignment_token6,
  [1095] = 2,
    ACTIONS(321), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(323), 1,
      aux_sym_goto_stmt_token3,
  [1102] = 1,
    ACTIONS(325), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [1107] = 2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_variable_assignment_token5,
  [1114] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_variable_assignment_token5,
  [1121] = 1,
    ACTIONS(335), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1126] = 1,
    ACTIONS(337), 2,
      sym_variable_reference,
      sym_string,
  [1131] = 2,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_variable_assignment_token4,
  [1138] = 2,
    ACTIONS(343), 1,
      aux_sym_program_token1,
    ACTIONS(345), 1,
      aux_sym_variable_assignment_token6,
  [1145] = 1,
    ACTIONS(347), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1150] = 2,
    ACTIONS(349), 1,
      sym_for_options,
    ACTIONS(351), 1,
      sym_for_variable,
  [1157] = 1,
    ACTIONS(251), 2,
      sym_variable_reference,
      sym_string,
  [1162] = 1,
    ACTIONS(353), 1,
      aux_sym_program_token1,
  [1166] = 1,
    ACTIONS(355), 1,
      aux_sym_variable_assignment_token2,
  [1170] = 1,
    ACTIONS(357), 1,
      aux_sym_variable_assignment_token4,
  [1174] = 1,
    ACTIONS(359), 1,
      anon_sym_EQ,
  [1178] = 1,
    ACTIONS(361), 1,
      sym_redirect_op,
  [1182] = 1,
    ACTIONS(251), 1,
      aux_sym_variable_assignment_token4,
  [1186] = 1,
    ACTIONS(251), 1,
      sym_integer,
  [1190] = 1,
    ACTIONS(363), 1,
      sym_comparison_op,
  [1194] = 1,
    ACTIONS(365), 1,
      sym_redirect_target,
  [1198] = 1,
    ACTIONS(337), 1,
      aux_sym_variable_assignment_token4,
  [1202] = 1,
    ACTIONS(367), 1,
      aux_sym_program_token1,
  [1206] = 1,
    ACTIONS(369), 1,
      aux_sym_program_token1,
  [1210] = 1,
    ACTIONS(371), 1,
      aux_sym_for_stmt_token2,
  [1214] = 1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
  [1218] = 1,
    ACTIONS(337), 1,
      sym_integer,
  [1222] = 1,
    ACTIONS(375), 1,
      anon_sym_EQ,
  [1226] = 1,
    ACTIONS(377), 1,
      aux_sym_program_token1,
  [1230] = 1,
    ACTIONS(379), 1,
      sym_comparison_op,
  [1234] = 1,
    ACTIONS(253), 1,
      aux_sym_program_token1,
  [1238] = 1,
    ACTIONS(381), 1,
      aux_sym_program_token1,
  [1242] = 1,
    ACTIONS(383), 1,
      aux_sym_program_token1,
  [1246] = 1,
    ACTIONS(261), 1,
      sym_redirect_op,
  [1250] = 1,
    ACTIONS(385), 1,
      sym_redirect_target,
  [1254] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [1258] = 1,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [1262] = 1,
    ACTIONS(391), 1,
      aux_sym_program_token1,
  [1266] = 1,
    ACTIONS(229), 1,
      aux_sym_variable_assignment_token4,
  [1270] = 1,
    ACTIONS(229), 1,
      sym_integer,
  [1274] = 1,
    ACTIONS(393), 1,
      sym_comparison_op,
  [1278] = 1,
    ACTIONS(263), 1,
      aux_sym_program_token1,
  [1282] = 1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [1286] = 1,
    ACTIONS(397), 1,
      aux_sym_program_token1,
  [1290] = 1,
    ACTIONS(399), 1,
      aux_sym_variable_assignment_token4,
  [1294] = 1,
    ACTIONS(401), 1,
      anon_sym_EQ,
  [1298] = 1,
    ACTIONS(245), 1,
      aux_sym_program_token1,
  [1302] = 1,
    ACTIONS(403), 1,
      aux_sym_program_token1,
  [1306] = 1,
    ACTIONS(215), 1,
      aux_sym_program_token1,
  [1310] = 1,
    ACTIONS(405), 1,
      aux_sym_for_stmt_token3,
  [1314] = 1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [1318] = 1,
    ACTIONS(409), 1,
      sym_redirect_op,
  [1322] = 1,
    ACTIONS(411), 1,
      sym_redirect_target,
  [1326] = 1,
    ACTIONS(413), 1,
      aux_sym_program_token1,
  [1330] = 1,
    ACTIONS(415), 1,
      aux_sym_variable_assignment_token4,
  [1334] = 1,
    ACTIONS(417), 1,
      anon_sym_EQ,
  [1338] = 1,
    ACTIONS(225), 1,
      aux_sym_program_token1,
  [1342] = 1,
    ACTIONS(419), 1,
      aux_sym_program_token1,
  [1346] = 1,
    ACTIONS(421), 1,
      aux_sym_program_token1,
  [1350] = 1,
    ACTIONS(269), 1,
      aux_sym_program_token1,
  [1354] = 1,
    ACTIONS(423), 1,
      aux_sym_program_token1,
  [1358] = 1,
    ACTIONS(425), 1,
      aux_sym_for_stmt_token2,
  [1362] = 1,
    ACTIONS(427), 1,
      aux_sym_for_stmt_token3,
  [1366] = 1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
  [1370] = 1,
    ACTIONS(431), 1,
      anon_sym_EQ,
  [1374] = 1,
    ACTIONS(351), 1,
      sym_for_variable,
  [1378] = 1,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
  [1382] = 1,
    ACTIONS(433), 1,
      aux_sym_program_token1,
  [1386] = 1,
    ACTIONS(435), 1,
      aux_sym_variable_assignment_token2,
  [1390] = 1,
    ACTIONS(437), 1,
      sym_redirect_target,
  [1394] = 1,
    ACTIONS(439), 1,
      aux_sym_program_token1,
  [1398] = 1,
    ACTIONS(441), 1,
      anon_sym_EQ,
  [1402] = 1,
    ACTIONS(443), 1,
      aux_sym_variable_assignment_token4,
  [1406] = 1,
    ACTIONS(445), 1,
      aux_sym_program_token1,
  [1410] = 1,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
  [1414] = 1,
    ACTIONS(267), 1,
      aux_sym_program_token1,
  [1418] = 1,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [1422] = 1,
    ACTIONS(449), 1,
      aux_sym_for_stmt_token3,
  [1426] = 1,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [1430] = 1,
    ACTIONS(453), 1,
      aux_sym_for_stmt_token2,
  [1434] = 1,
    ACTIONS(455), 1,
      aux_sym_variable_assignment_token2,
  [1438] = 1,
    ACTIONS(457), 1,
      aux_sym_program_token1,
  [1442] = 1,
    ACTIONS(459), 1,
      aux_sym_program_token1,
  [1446] = 1,
    ACTIONS(155), 1,
      aux_sym_program_token1,
  [1450] = 1,
    ACTIONS(461), 1,
      aux_sym_program_token1,
  [1454] = 1,
    ACTIONS(463), 1,
      aux_sym_program_token1,
  [1458] = 1,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
  [1462] = 1,
    ACTIONS(467), 1,
      aux_sym_for_stmt_token3,
  [1466] = 1,
    ACTIONS(469), 1,
      aux_sym_program_token1,
  [1470] = 1,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
  [1474] = 1,
    ACTIONS(473), 1,
      aux_sym_program_token1,
  [1478] = 1,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
  [1482] = 1,
    ACTIONS(477), 1,
      aux_sym_program_token1,
  [1486] = 1,
    ACTIONS(479), 1,
      aux_sym_variable_assignment_token2,
  [1490] = 1,
    ACTIONS(481), 1,
      aux_sym_program_token1,
  [1494] = 1,
    ACTIONS(483), 1,
      aux_sym_program_token1,
  [1498] = 1,
    ACTIONS(485), 1,
      sym_redirect_target,
  [1502] = 1,
    ACTIONS(487), 1,
      aux_sym_program_token1,
  [1506] = 1,
    ACTIONS(489), 1,
      sym_command_name,
  [1510] = 1,
    ACTIONS(491), 1,
      aux_sym_program_token1,
  [1514] = 1,
    ACTIONS(493), 1,
      sym_for_variable,
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
  [SMALL_STATE(20)] = 581,
  [SMALL_STATE(21)] = 599,
  [SMALL_STATE(22)] = 619,
  [SMALL_STATE(23)] = 631,
  [SMALL_STATE(24)] = 646,
  [SMALL_STATE(25)] = 657,
  [SMALL_STATE(26)] = 672,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 699,
  [SMALL_STATE(29)] = 709,
  [SMALL_STATE(30)] = 723,
  [SMALL_STATE(31)] = 737,
  [SMALL_STATE(32)] = 753,
  [SMALL_STATE(33)] = 763,
  [SMALL_STATE(34)] = 777,
  [SMALL_STATE(35)] = 793,
  [SMALL_STATE(36)] = 807,
  [SMALL_STATE(37)] = 821,
  [SMALL_STATE(38)] = 837,
  [SMALL_STATE(39)] = 851,
  [SMALL_STATE(40)] = 865,
  [SMALL_STATE(41)] = 875,
  [SMALL_STATE(42)] = 883,
  [SMALL_STATE(43)] = 889,
  [SMALL_STATE(44)] = 899,
  [SMALL_STATE(45)] = 909,
  [SMALL_STATE(46)] = 915,
  [SMALL_STATE(47)] = 925,
  [SMALL_STATE(48)] = 931,
  [SMALL_STATE(49)] = 941,
  [SMALL_STATE(50)] = 951,
  [SMALL_STATE(51)] = 961,
  [SMALL_STATE(52)] = 967,
  [SMALL_STATE(53)] = 977,
  [SMALL_STATE(54)] = 987,
  [SMALL_STATE(55)] = 997,
  [SMALL_STATE(56)] = 1005,
  [SMALL_STATE(57)] = 1013,
  [SMALL_STATE(58)] = 1020,
  [SMALL_STATE(59)] = 1027,
  [SMALL_STATE(60)] = 1034,
  [SMALL_STATE(61)] = 1041,
  [SMALL_STATE(62)] = 1048,
  [SMALL_STATE(63)] = 1055,
  [SMALL_STATE(64)] = 1060,
  [SMALL_STATE(65)] = 1067,
  [SMALL_STATE(66)] = 1074,
  [SMALL_STATE(67)] = 1081,
  [SMALL_STATE(68)] = 1088,
  [SMALL_STATE(69)] = 1095,
  [SMALL_STATE(70)] = 1102,
  [SMALL_STATE(71)] = 1107,
  [SMALL_STATE(72)] = 1114,
  [SMALL_STATE(73)] = 1121,
  [SMALL_STATE(74)] = 1126,
  [SMALL_STATE(75)] = 1131,
  [SMALL_STATE(76)] = 1138,
  [SMALL_STATE(77)] = 1145,
  [SMALL_STATE(78)] = 1150,
  [SMALL_STATE(79)] = 1157,
  [SMALL_STATE(80)] = 1162,
  [SMALL_STATE(81)] = 1166,
  [SMALL_STATE(82)] = 1170,
  [SMALL_STATE(83)] = 1174,
  [SMALL_STATE(84)] = 1178,
  [SMALL_STATE(85)] = 1182,
  [SMALL_STATE(86)] = 1186,
  [SMALL_STATE(87)] = 1190,
  [SMALL_STATE(88)] = 1194,
  [SMALL_STATE(89)] = 1198,
  [SMALL_STATE(90)] = 1202,
  [SMALL_STATE(91)] = 1206,
  [SMALL_STATE(92)] = 1210,
  [SMALL_STATE(93)] = 1214,
  [SMALL_STATE(94)] = 1218,
  [SMALL_STATE(95)] = 1222,
  [SMALL_STATE(96)] = 1226,
  [SMALL_STATE(97)] = 1230,
  [SMALL_STATE(98)] = 1234,
  [SMALL_STATE(99)] = 1238,
  [SMALL_STATE(100)] = 1242,
  [SMALL_STATE(101)] = 1246,
  [SMALL_STATE(102)] = 1250,
  [SMALL_STATE(103)] = 1254,
  [SMALL_STATE(104)] = 1258,
  [SMALL_STATE(105)] = 1262,
  [SMALL_STATE(106)] = 1266,
  [SMALL_STATE(107)] = 1270,
  [SMALL_STATE(108)] = 1274,
  [SMALL_STATE(109)] = 1278,
  [SMALL_STATE(110)] = 1282,
  [SMALL_STATE(111)] = 1286,
  [SMALL_STATE(112)] = 1290,
  [SMALL_STATE(113)] = 1294,
  [SMALL_STATE(114)] = 1298,
  [SMALL_STATE(115)] = 1302,
  [SMALL_STATE(116)] = 1306,
  [SMALL_STATE(117)] = 1310,
  [SMALL_STATE(118)] = 1314,
  [SMALL_STATE(119)] = 1318,
  [SMALL_STATE(120)] = 1322,
  [SMALL_STATE(121)] = 1326,
  [SMALL_STATE(122)] = 1330,
  [SMALL_STATE(123)] = 1334,
  [SMALL_STATE(124)] = 1338,
  [SMALL_STATE(125)] = 1342,
  [SMALL_STATE(126)] = 1346,
  [SMALL_STATE(127)] = 1350,
  [SMALL_STATE(128)] = 1354,
  [SMALL_STATE(129)] = 1358,
  [SMALL_STATE(130)] = 1362,
  [SMALL_STATE(131)] = 1366,
  [SMALL_STATE(132)] = 1370,
  [SMALL_STATE(133)] = 1374,
  [SMALL_STATE(134)] = 1378,
  [SMALL_STATE(135)] = 1382,
  [SMALL_STATE(136)] = 1386,
  [SMALL_STATE(137)] = 1390,
  [SMALL_STATE(138)] = 1394,
  [SMALL_STATE(139)] = 1398,
  [SMALL_STATE(140)] = 1402,
  [SMALL_STATE(141)] = 1406,
  [SMALL_STATE(142)] = 1410,
  [SMALL_STATE(143)] = 1414,
  [SMALL_STATE(144)] = 1418,
  [SMALL_STATE(145)] = 1422,
  [SMALL_STATE(146)] = 1426,
  [SMALL_STATE(147)] = 1430,
  [SMALL_STATE(148)] = 1434,
  [SMALL_STATE(149)] = 1438,
  [SMALL_STATE(150)] = 1442,
  [SMALL_STATE(151)] = 1446,
  [SMALL_STATE(152)] = 1450,
  [SMALL_STATE(153)] = 1454,
  [SMALL_STATE(154)] = 1458,
  [SMALL_STATE(155)] = 1462,
  [SMALL_STATE(156)] = 1466,
  [SMALL_STATE(157)] = 1470,
  [SMALL_STATE(158)] = 1474,
  [SMALL_STATE(159)] = 1478,
  [SMALL_STATE(160)] = 1482,
  [SMALL_STATE(161)] = 1486,
  [SMALL_STATE(162)] = 1490,
  [SMALL_STATE(163)] = 1494,
  [SMALL_STATE(164)] = 1498,
  [SMALL_STATE(165)] = 1502,
  [SMALL_STATE(166)] = 1506,
  [SMALL_STATE(167)] = 1510,
  [SMALL_STATE(168)] = 1514,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 5, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 6, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 10, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
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
