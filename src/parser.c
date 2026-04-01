#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
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
  sym_paren_expression = 76,
  aux_sym_program_repeat1 = 77,
  aux_sym_argument_list_repeat1 = 78,
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
  [sym_paren_expression] = "paren_expression",
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
  [sym_paren_expression] = sym_paren_expression,
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
  [sym_paren_expression] = {
    .visible = true,
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
  [11] = 7,
  [12] = 8,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 9,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 13,
  [25] = 15,
  [26] = 23,
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
  [71] = 63,
  [72] = 67,
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
  [85] = 68,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 69,
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
  [104] = 62,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 70,
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
  [130] = 84,
  [131] = 90,
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
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 140,
  [185] = 167,
  [186] = 186,
  [187] = 182,
  [188] = 188,
  [189] = 186,
  [190] = 190,
  [191] = 163,
  [192] = 170,
  [193] = 178,
  [194] = 135,
  [195] = 195,
  [196] = 196,
};

static TSCharacterRange sym_argument_value_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '%'}, {'\'', '\''}, {'*', ';'}, {'=', '='}, {'?', '{'},
  {'}', 0x10ffff},
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
        '(', 82,
        ')', 83,
        '/', 31,
        '2', 93,
        ':', 19,
        '<', 96,
        '=', 69,
        '>', 97,
        '@', 55,
        '|', 103,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
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
        '(', 82,
        ')', 83,
        '/', 113,
        '2', 94,
        '<', 96,
        '>', 97,
        '|', 103,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(114);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '!', 48,
        '"', 10,
        '%', 15,
        '&', 16,
        '(', 82,
        ')', 83,
        '/', 113,
        '|', 24,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(114);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '%', 11,
        '&', 16,
        '(', 82,
        ')', 83,
        '/', 37,
        '2', 93,
        ':', 49,
        '<', 96,
        '>', 97,
        '@', 54,
        '|', 103,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(106);
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
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(107);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(106);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '~') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '&') ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(96);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == '~') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 26:
      if (lookahead == '~') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        'B', 81,
        'b', 81,
        'F', 86,
        'f', 86,
        'R', 87,
        'r', 87,
        'A', 63,
        'P', 63,
        'a', 63,
        'p', 63,
        'D', 85,
        'L', 85,
        'd', 85,
        'l', 85,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
        'F', 86,
        'f', 86,
        'R', 87,
        'r', 87,
        'D', 85,
        'L', 85,
        'd', 85,
        'l', 85,
      );
      END_STATE();
    case 38:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          lookahead == 'a' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 47:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
        '(', 82,
        ')', 83,
        '/', 30,
        ':', 20,
        '@', 55,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
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
          lookahead == 'f') ADVANCE(76);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(110);
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
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(97);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(114);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_argument_value);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
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
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 51},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 51},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 73},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 73},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 70},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 70},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 73},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 73},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 70},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 70},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 51},
  [129] = {.lex_state = 51},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 22},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 51},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 29},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 28},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 51},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 22},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 28},
  [192] = {.lex_state = 28},
  [193] = {.lex_state = 28},
  [194] = {.lex_state = 28},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 4},
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
    [sym_program] = STATE(162),
    [sym__stmt] = STATE(176),
    [sym_echo_off] = STATE(176),
    [sym_label] = STATE(176),
    [sym_variable_assignment] = STATE(176),
    [sym_if_stmt] = STATE(176),
    [sym_goto_stmt] = STATE(176),
    [sym_call_stmt] = STATE(176),
    [sym_exit_stmt] = STATE(176),
    [sym_setlocal_stmt] = STATE(176),
    [sym_endlocal_stmt] = STATE(176),
    [sym_for_stmt] = STATE(176),
    [sym_parenthesized] = STATE(30),
    [sym_redirect_stmt] = STATE(176),
    [sym_pipe_stmt] = STATE(176),
    [sym_cond_exec] = STATE(61),
    [sym_cmd] = STATE(30),
    [aux_sym_program_repeat1] = STATE(3),
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
    STATE(61), 1,
      sym_cond_exec,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(30), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(176), 13,
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
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym_program_token1,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(61), 1,
      sym_cond_exec,
    STATE(30), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(176), 13,
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
    ACTIONS(13), 1,
      aux_sym_label_token1,
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
    ACTIONS(79), 1,
      aux_sym_program_token1,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(61), 1,
      sym_cond_exec,
    STATE(30), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(133), 13,
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
    ACTIONS(13), 1,
      aux_sym_label_token1,
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
      anon_sym_AT,
    ACTIONS(85), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(89), 1,
      aux_sym_program_token1,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(61), 1,
      sym_cond_exec,
    STATE(30), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(92), 13,
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
    ACTIONS(95), 3,
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
  [306] = 7,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_argument_list,
    ACTIONS(101), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(103), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(105), 2,
      sym_command_option,
      sym_argument_value,
    STATE(9), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(97), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [337] = 7,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_argument_list,
    ACTIONS(103), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(105), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(109), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    STATE(9), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(107), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [368] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(115), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(117), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(111), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [396] = 6,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(126), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(129), 2,
      sym_command_option,
      sym_argument_value,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(119), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [424] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(97), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [450] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(107), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [476] = 2,
    ACTIONS(140), 4,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      sym_command_option,
      sym_argument_value,
    ACTIONS(138), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [493] = 5,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(148), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(119), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [516] = 2,
    ACTIONS(153), 4,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      sym_command_option,
      sym_argument_value,
    ACTIONS(151), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [533] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(157), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(111), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [556] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(159), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [580] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(161), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [604] = 10,
    ACTIONS(163), 1,
      sym_command_name,
    ACTIONS(165), 1,
      aux_sym_echo_off_token1,
    ACTIONS(167), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(169), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(171), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(173), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(175), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(177), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(179), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(181), 1,
      aux_sym_for_stmt_token1,
  [635] = 10,
    ACTIONS(163), 1,
      sym_command_name,
    ACTIONS(165), 1,
      aux_sym_echo_off_token1,
    ACTIONS(169), 1,
      aux_sym_if_stmt_token1,
    ACTIONS(171), 1,
      aux_sym_goto_stmt_token1,
    ACTIONS(173), 1,
      aux_sym_call_stmt_token1,
    ACTIONS(175), 1,
      aux_sym_exit_stmt_token1,
    ACTIONS(177), 1,
      aux_sym_setlocal_stmt_token1,
    ACTIONS(179), 1,
      aux_sym_endlocal_stmt_token1,
    ACTIONS(181), 1,
      aux_sym_for_stmt_token1,
    ACTIONS(183), 1,
      aux_sym_variable_assignment_token1,
  [666] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(189), 2,
      sym_command_option,
      sym_argument_value,
    STATE(23), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [686] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(195), 2,
      sym_command_option,
      sym_argument_value,
    STATE(26), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [706] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(157), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [726] = 2,
    ACTIONS(140), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(138), 7,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [740] = 2,
    ACTIONS(153), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(151), 7,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [754] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(157), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [774] = 2,
    ACTIONS(203), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(201), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [787] = 2,
    ACTIONS(207), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(205), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [800] = 2,
    ACTIONS(211), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(209), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [813] = 6,
    ACTIONS(215), 1,
      aux_sym_redirection_token1,
    ACTIONS(217), 1,
      sym_redirect_op,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    STATE(124), 1,
      sym_redirection,
    ACTIONS(213), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(221), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [834] = 5,
    ACTIONS(223), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(225), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(227), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(229), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(231), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [852] = 2,
    ACTIONS(109), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(107), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [864] = 2,
    ACTIONS(235), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(233), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [876] = 5,
    ACTIONS(237), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(239), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(241), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(243), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(245), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [894] = 4,
    ACTIONS(247), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(249), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(251), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(253), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [909] = 2,
    ACTIONS(255), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(257), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [920] = 2,
    ACTIONS(259), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(261), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [931] = 4,
    ACTIONS(225), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(227), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(229), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(231), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [946] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(118), 2,
      sym_parenthesized,
      sym_cmd,
  [960] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_parenthesized,
    STATE(73), 1,
      sym_cmd,
  [976] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(112), 2,
      sym_parenthesized,
      sym_cmd,
  [990] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(105), 2,
      sym_parenthesized,
      sym_cmd,
  [1004] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_parenthesized,
    STATE(110), 1,
      sym_cmd,
  [1020] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(120), 2,
      sym_parenthesized,
      sym_cmd,
  [1034] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(123), 2,
      sym_parenthesized,
      sym_cmd,
  [1048] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym_parenthesized,
    STATE(87), 1,
      sym_cmd,
  [1064] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(77), 2,
      sym_parenthesized,
      sym_cmd,
  [1078] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(58), 2,
      sym_parenthesized,
      sym_cmd,
  [1092] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_parenthesized,
    STATE(94), 1,
      sym_cmd,
  [1108] = 2,
    ACTIONS(267), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(269), 2,
      sym_variable_reference,
      sym_integer,
  [1117] = 3,
    ACTIONS(273), 1,
      aux_sym_else_clause_token1,
    STATE(73), 1,
      sym_else_clause,
    ACTIONS(271), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1128] = 3,
    ACTIONS(273), 1,
      aux_sym_else_clause_token1,
    STATE(110), 1,
      sym_else_clause,
    ACTIONS(275), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1139] = 3,
    ACTIONS(279), 1,
      aux_sym_redirection_token1,
    ACTIONS(281), 1,
      sym_redirect_op,
    ACTIONS(277), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1150] = 3,
    ACTIONS(273), 1,
      aux_sym_else_clause_token1,
    STATE(116), 1,
      sym_else_clause,
    ACTIONS(283), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1161] = 3,
    ACTIONS(287), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(289), 1,
      sym_integer,
    ACTIONS(285), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1172] = 2,
    ACTIONS(285), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(289), 2,
      sym_variable_reference,
      sym_integer,
  [1181] = 3,
    ACTIONS(293), 1,
      aux_sym_redirection_token1,
    ACTIONS(295), 1,
      sym_redirect_op,
    ACTIONS(291), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1192] = 1,
    ACTIONS(297), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1199] = 3,
    ACTIONS(301), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(303), 1,
      sym_integer,
    ACTIONS(299), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1210] = 3,
    ACTIONS(273), 1,
      aux_sym_else_clause_token1,
    STATE(94), 1,
      sym_else_clause,
    ACTIONS(305), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1221] = 2,
    ACTIONS(213), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(221), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1230] = 2,
    ACTIONS(309), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(307), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1238] = 3,
    ACTIONS(311), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym_variable_assignment_token4,
  [1248] = 1,
    ACTIONS(317), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1254] = 1,
    ACTIONS(319), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1260] = 1,
    ACTIONS(321), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1266] = 3,
    ACTIONS(323), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym_variable_assignment_token4,
  [1276] = 2,
    ACTIONS(331), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(329), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1284] = 2,
    ACTIONS(335), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(333), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1292] = 2,
    ACTIONS(339), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(337), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1300] = 3,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(343), 1,
      aux_sym_variable_assignment_token4,
  [1310] = 3,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(347), 1,
      aux_sym_variable_assignment_token4,
  [1320] = 1,
    ACTIONS(275), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1325] = 1,
    ACTIONS(161), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1330] = 1,
    ACTIONS(267), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1335] = 1,
    ACTIONS(349), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1340] = 1,
    ACTIONS(351), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1345] = 1,
    ACTIONS(353), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1350] = 1,
    ACTIONS(319), 2,
      sym_variable_reference,
      sym_string,
  [1355] = 1,
    ACTIONS(285), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1360] = 1,
    ACTIONS(355), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1365] = 1,
    ACTIONS(357), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1370] = 1,
    ACTIONS(359), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1375] = 2,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      aux_sym_variable_assignment_token4,
  [1382] = 2,
    ACTIONS(329), 1,
      aux_sym_program_token1,
    ACTIONS(365), 1,
      aux_sym_variable_assignment_token6,
  [1389] = 1,
    ACTIONS(259), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1394] = 1,
    ACTIONS(305), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1399] = 2,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      sym_for_set,
  [1406] = 1,
    ACTIONS(371), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1411] = 2,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      aux_sym_variable_assignment_token4,
  [1418] = 2,
    ACTIONS(333), 1,
      aux_sym_program_token1,
    ACTIONS(377), 1,
      aux_sym_variable_assignment_token6,
  [1425] = 2,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      aux_sym_program_token1,
  [1432] = 1,
    ACTIONS(381), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [1437] = 1,
    ACTIONS(271), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1442] = 2,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      sym_for_set,
  [1449] = 2,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      aux_sym_variable_assignment_token5,
  [1456] = 1,
    ACTIONS(389), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1461] = 1,
    ACTIONS(391), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1466] = 2,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      aux_sym_variable_assignment_token5,
  [1473] = 1,
    ACTIONS(395), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1478] = 2,
    ACTIONS(397), 1,
      sym_for_options,
    ACTIONS(399), 1,
      sym_for_variable,
  [1485] = 2,
    ACTIONS(401), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(403), 1,
      aux_sym_goto_stmt_token3,
  [1492] = 2,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(407), 1,
      sym_for_set,
  [1499] = 2,
    ACTIONS(307), 1,
      aux_sym_program_token1,
    ACTIONS(409), 1,
      aux_sym_variable_assignment_token6,
  [1506] = 1,
    ACTIONS(411), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1511] = 1,
    ACTIONS(413), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1516] = 1,
    ACTIONS(415), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1521] = 2,
    ACTIONS(337), 1,
      aux_sym_program_token1,
    ACTIONS(417), 1,
      aux_sym_variable_assignment_token6,
  [1528] = 1,
    ACTIONS(419), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1533] = 1,
    ACTIONS(283), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1538] = 2,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      aux_sym_variable_assignment_token5,
  [1545] = 1,
    ACTIONS(423), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1550] = 1,
    ACTIONS(425), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1555] = 2,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      aux_sym_variable_assignment_token5,
  [1562] = 1,
    ACTIONS(431), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1567] = 1,
    ACTIONS(433), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1572] = 2,
    ACTIONS(435), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(437), 1,
      aux_sym_goto_stmt_token3,
  [1579] = 1,
    ACTIONS(439), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1584] = 1,
    ACTIONS(441), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1589] = 1,
    ACTIONS(443), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1594] = 1,
    ACTIONS(445), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1599] = 1,
    ACTIONS(447), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1604] = 1,
    ACTIONS(449), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1609] = 1,
    ACTIONS(451), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1614] = 1,
    ACTIONS(453), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1619] = 1,
    ACTIONS(455), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1624] = 2,
    ACTIONS(457), 1,
      sym_for_options,
    ACTIONS(459), 1,
      sym_for_variable,
  [1631] = 1,
    ACTIONS(317), 2,
      sym_variable_reference,
      sym_string,
  [1636] = 1,
    ACTIONS(461), 2,
      sym_variable_reference,
      sym_string,
  [1641] = 2,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      aux_sym_variable_assignment_token4,
  [1648] = 2,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      aux_sym_variable_assignment_token4,
  [1655] = 1,
    ACTIONS(467), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1660] = 2,
    ACTIONS(379), 1,
      aux_sym_program_token1,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [1667] = 1,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
  [1671] = 1,
    ACTIONS(473), 1,
      aux_sym_variable_assignment_token2,
  [1675] = 1,
    ACTIONS(475), 1,
      aux_sym_variable_assignment_token4,
  [1679] = 1,
    ACTIONS(477), 1,
      aux_sym_for_stmt_token3,
  [1683] = 1,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
  [1687] = 1,
    ACTIONS(481), 1,
      anon_sym_EQ,
  [1691] = 1,
    ACTIONS(483), 1,
      anon_sym_EQ,
  [1695] = 1,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
  [1699] = 1,
    ACTIONS(459), 1,
      sym_for_variable,
  [1703] = 1,
    ACTIONS(485), 1,
      aux_sym_for_stmt_token2,
  [1707] = 1,
    ACTIONS(487), 1,
      sym_redirect_target,
  [1711] = 1,
    ACTIONS(489), 1,
      sym_comparison_op,
  [1715] = 1,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [1719] = 1,
    ACTIONS(281), 1,
      sym_redirect_op,
  [1723] = 1,
    ACTIONS(493), 1,
      sym_redirect_target,
  [1727] = 1,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
  [1731] = 1,
    ACTIONS(319), 1,
      aux_sym_variable_assignment_token4,
  [1735] = 1,
    ACTIONS(495), 1,
      sym_redirect_op,
  [1739] = 1,
    ACTIONS(497), 1,
      aux_sym_for_stmt_token3,
  [1743] = 1,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [1747] = 1,
    ACTIONS(501), 1,
      sym_redirect_target,
  [1751] = 1,
    ACTIONS(503), 1,
      anon_sym_EQ,
  [1755] = 1,
    ACTIONS(319), 1,
      sym_integer,
  [1759] = 1,
    ACTIONS(505), 1,
      sym_comparison_op,
  [1763] = 1,
    ACTIONS(507), 1,
      sym_for_variable,
  [1767] = 1,
    ACTIONS(461), 1,
      aux_sym_variable_assignment_token4,
  [1771] = 1,
    ACTIONS(509), 1,
      sym_redirect_target,
  [1775] = 1,
    ACTIONS(461), 1,
      sym_integer,
  [1779] = 1,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
  [1783] = 1,
    ACTIONS(513), 1,
      aux_sym_variable_assignment_token2,
  [1787] = 1,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
  [1791] = 1,
    ACTIONS(517), 1,
      aux_sym_variable_assignment_token4,
  [1795] = 1,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
  [1799] = 1,
    ACTIONS(521), 1,
      anon_sym_EQ,
  [1803] = 1,
    ACTIONS(523), 1,
      sym_command_name,
  [1807] = 1,
    ACTIONS(525), 1,
      aux_sym_for_stmt_token2,
  [1811] = 1,
    ACTIONS(527), 1,
      aux_sym_variable_assignment_token2,
  [1815] = 1,
    ACTIONS(529), 1,
      aux_sym_for_stmt_token3,
  [1819] = 1,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [1823] = 1,
    ACTIONS(533), 1,
      sym_redirect_op,
  [1827] = 1,
    ACTIONS(535), 1,
      aux_sym_for_stmt_token2,
  [1831] = 1,
    ACTIONS(537), 1,
      sym_redirect_target,
  [1835] = 1,
    ACTIONS(379), 1,
      aux_sym_program_token1,
  [1839] = 1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
  [1843] = 1,
    ACTIONS(541), 1,
      aux_sym_variable_assignment_token2,
  [1847] = 1,
    ACTIONS(317), 1,
      aux_sym_variable_assignment_token4,
  [1851] = 1,
    ACTIONS(543), 1,
      aux_sym_variable_assignment_token4,
  [1855] = 1,
    ACTIONS(317), 1,
      sym_integer,
  [1859] = 1,
    ACTIONS(545), 1,
      anon_sym_EQ,
  [1863] = 1,
    ACTIONS(547), 1,
      sym_comparison_op,
  [1867] = 1,
    ACTIONS(549), 1,
      anon_sym_EQ,
  [1871] = 1,
    ACTIONS(551), 1,
      anon_sym_EQ,
  [1875] = 1,
    ACTIONS(553), 1,
      anon_sym_EQ,
  [1879] = 1,
    ACTIONS(555), 1,
      anon_sym_EQ,
  [1883] = 1,
    ACTIONS(557), 1,
      aux_sym_variable_assignment_token4,
  [1887] = 1,
    ACTIONS(559), 1,
      anon_sym_EQ,
  [1891] = 1,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
  [1895] = 1,
    ACTIONS(563), 1,
      aux_sym_variable_assignment_token2,
  [1899] = 1,
    ACTIONS(565), 1,
      aux_sym_variable_assignment_token2,
  [1903] = 1,
    ACTIONS(567), 1,
      aux_sym_variable_assignment_token2,
  [1907] = 1,
    ACTIONS(569), 1,
      aux_sym_variable_assignment_token2,
  [1911] = 1,
    ACTIONS(571), 1,
      anon_sym_EQ,
  [1915] = 1,
    ACTIONS(573), 1,
      aux_sym_for_stmt_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 143,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 285,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 337,
  [SMALL_STATE(9)] = 368,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 450,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 493,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 533,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 635,
  [SMALL_STATE(21)] = 666,
  [SMALL_STATE(22)] = 686,
  [SMALL_STATE(23)] = 706,
  [SMALL_STATE(24)] = 726,
  [SMALL_STATE(25)] = 740,
  [SMALL_STATE(26)] = 754,
  [SMALL_STATE(27)] = 774,
  [SMALL_STATE(28)] = 787,
  [SMALL_STATE(29)] = 800,
  [SMALL_STATE(30)] = 813,
  [SMALL_STATE(31)] = 834,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 864,
  [SMALL_STATE(34)] = 876,
  [SMALL_STATE(35)] = 894,
  [SMALL_STATE(36)] = 909,
  [SMALL_STATE(37)] = 920,
  [SMALL_STATE(38)] = 931,
  [SMALL_STATE(39)] = 946,
  [SMALL_STATE(40)] = 960,
  [SMALL_STATE(41)] = 976,
  [SMALL_STATE(42)] = 990,
  [SMALL_STATE(43)] = 1004,
  [SMALL_STATE(44)] = 1020,
  [SMALL_STATE(45)] = 1034,
  [SMALL_STATE(46)] = 1048,
  [SMALL_STATE(47)] = 1064,
  [SMALL_STATE(48)] = 1078,
  [SMALL_STATE(49)] = 1092,
  [SMALL_STATE(50)] = 1108,
  [SMALL_STATE(51)] = 1117,
  [SMALL_STATE(52)] = 1128,
  [SMALL_STATE(53)] = 1139,
  [SMALL_STATE(54)] = 1150,
  [SMALL_STATE(55)] = 1161,
  [SMALL_STATE(56)] = 1172,
  [SMALL_STATE(57)] = 1181,
  [SMALL_STATE(58)] = 1192,
  [SMALL_STATE(59)] = 1199,
  [SMALL_STATE(60)] = 1210,
  [SMALL_STATE(61)] = 1221,
  [SMALL_STATE(62)] = 1230,
  [SMALL_STATE(63)] = 1238,
  [SMALL_STATE(64)] = 1248,
  [SMALL_STATE(65)] = 1254,
  [SMALL_STATE(66)] = 1260,
  [SMALL_STATE(67)] = 1266,
  [SMALL_STATE(68)] = 1276,
  [SMALL_STATE(69)] = 1284,
  [SMALL_STATE(70)] = 1292,
  [SMALL_STATE(71)] = 1300,
  [SMALL_STATE(72)] = 1310,
  [SMALL_STATE(73)] = 1320,
  [SMALL_STATE(74)] = 1325,
  [SMALL_STATE(75)] = 1330,
  [SMALL_STATE(76)] = 1335,
  [SMALL_STATE(77)] = 1340,
  [SMALL_STATE(78)] = 1345,
  [SMALL_STATE(79)] = 1350,
  [SMALL_STATE(80)] = 1355,
  [SMALL_STATE(81)] = 1360,
  [SMALL_STATE(82)] = 1365,
  [SMALL_STATE(83)] = 1370,
  [SMALL_STATE(84)] = 1375,
  [SMALL_STATE(85)] = 1382,
  [SMALL_STATE(86)] = 1389,
  [SMALL_STATE(87)] = 1394,
  [SMALL_STATE(88)] = 1399,
  [SMALL_STATE(89)] = 1406,
  [SMALL_STATE(90)] = 1411,
  [SMALL_STATE(91)] = 1418,
  [SMALL_STATE(92)] = 1425,
  [SMALL_STATE(93)] = 1432,
  [SMALL_STATE(94)] = 1437,
  [SMALL_STATE(95)] = 1442,
  [SMALL_STATE(96)] = 1449,
  [SMALL_STATE(97)] = 1456,
  [SMALL_STATE(98)] = 1461,
  [SMALL_STATE(99)] = 1466,
  [SMALL_STATE(100)] = 1473,
  [SMALL_STATE(101)] = 1478,
  [SMALL_STATE(102)] = 1485,
  [SMALL_STATE(103)] = 1492,
  [SMALL_STATE(104)] = 1499,
  [SMALL_STATE(105)] = 1506,
  [SMALL_STATE(106)] = 1511,
  [SMALL_STATE(107)] = 1516,
  [SMALL_STATE(108)] = 1521,
  [SMALL_STATE(109)] = 1528,
  [SMALL_STATE(110)] = 1533,
  [SMALL_STATE(111)] = 1538,
  [SMALL_STATE(112)] = 1545,
  [SMALL_STATE(113)] = 1550,
  [SMALL_STATE(114)] = 1555,
  [SMALL_STATE(115)] = 1562,
  [SMALL_STATE(116)] = 1567,
  [SMALL_STATE(117)] = 1572,
  [SMALL_STATE(118)] = 1579,
  [SMALL_STATE(119)] = 1584,
  [SMALL_STATE(120)] = 1589,
  [SMALL_STATE(121)] = 1594,
  [SMALL_STATE(122)] = 1599,
  [SMALL_STATE(123)] = 1604,
  [SMALL_STATE(124)] = 1609,
  [SMALL_STATE(125)] = 1614,
  [SMALL_STATE(126)] = 1619,
  [SMALL_STATE(127)] = 1624,
  [SMALL_STATE(128)] = 1631,
  [SMALL_STATE(129)] = 1636,
  [SMALL_STATE(130)] = 1641,
  [SMALL_STATE(131)] = 1648,
  [SMALL_STATE(132)] = 1655,
  [SMALL_STATE(133)] = 1660,
  [SMALL_STATE(134)] = 1667,
  [SMALL_STATE(135)] = 1671,
  [SMALL_STATE(136)] = 1675,
  [SMALL_STATE(137)] = 1679,
  [SMALL_STATE(138)] = 1683,
  [SMALL_STATE(139)] = 1687,
  [SMALL_STATE(140)] = 1691,
  [SMALL_STATE(141)] = 1695,
  [SMALL_STATE(142)] = 1699,
  [SMALL_STATE(143)] = 1703,
  [SMALL_STATE(144)] = 1707,
  [SMALL_STATE(145)] = 1711,
  [SMALL_STATE(146)] = 1715,
  [SMALL_STATE(147)] = 1719,
  [SMALL_STATE(148)] = 1723,
  [SMALL_STATE(149)] = 1727,
  [SMALL_STATE(150)] = 1731,
  [SMALL_STATE(151)] = 1735,
  [SMALL_STATE(152)] = 1739,
  [SMALL_STATE(153)] = 1743,
  [SMALL_STATE(154)] = 1747,
  [SMALL_STATE(155)] = 1751,
  [SMALL_STATE(156)] = 1755,
  [SMALL_STATE(157)] = 1759,
  [SMALL_STATE(158)] = 1763,
  [SMALL_STATE(159)] = 1767,
  [SMALL_STATE(160)] = 1771,
  [SMALL_STATE(161)] = 1775,
  [SMALL_STATE(162)] = 1779,
  [SMALL_STATE(163)] = 1783,
  [SMALL_STATE(164)] = 1787,
  [SMALL_STATE(165)] = 1791,
  [SMALL_STATE(166)] = 1795,
  [SMALL_STATE(167)] = 1799,
  [SMALL_STATE(168)] = 1803,
  [SMALL_STATE(169)] = 1807,
  [SMALL_STATE(170)] = 1811,
  [SMALL_STATE(171)] = 1815,
  [SMALL_STATE(172)] = 1819,
  [SMALL_STATE(173)] = 1823,
  [SMALL_STATE(174)] = 1827,
  [SMALL_STATE(175)] = 1831,
  [SMALL_STATE(176)] = 1835,
  [SMALL_STATE(177)] = 1839,
  [SMALL_STATE(178)] = 1843,
  [SMALL_STATE(179)] = 1847,
  [SMALL_STATE(180)] = 1851,
  [SMALL_STATE(181)] = 1855,
  [SMALL_STATE(182)] = 1859,
  [SMALL_STATE(183)] = 1863,
  [SMALL_STATE(184)] = 1867,
  [SMALL_STATE(185)] = 1871,
  [SMALL_STATE(186)] = 1875,
  [SMALL_STATE(187)] = 1879,
  [SMALL_STATE(188)] = 1883,
  [SMALL_STATE(189)] = 1887,
  [SMALL_STATE(190)] = 1891,
  [SMALL_STATE(191)] = 1895,
  [SMALL_STATE(192)] = 1899,
  [SMALL_STATE(193)] = 1903,
  [SMALL_STATE(194)] = 1907,
  [SMALL_STATE(195)] = 1911,
  [SMALL_STATE(196)] = 1915,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 5, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 6, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 10, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [511] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
