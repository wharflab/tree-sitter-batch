#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 6

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
  alias_sym_variable_name = 79,
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
  [aux_sym_variable_assignment_token1] = "set_keyword",
  [aux_sym_variable_assignment_token2] = "variable_assignment_token2",
  [aux_sym_variable_assignment_token3] = "set_option",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_variable_assignment_token4] = "variable_assignment_token4",
  [anon_sym_EQ] = "=",
  [aux_sym_variable_assignment_token5] = "assignment_value",
  [aux_sym_variable_assignment_token6] = "assignment_value",
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
  [alias_sym_variable_name] = "variable_name",
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
  [aux_sym_variable_assignment_token6] = aux_sym_variable_assignment_token5,
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
  [alias_sym_variable_name] = alias_sym_variable_name,
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
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_assignment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_assignment_token3] = {
    .visible = true,
    .named = true,
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
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_assignment_token6] = {
    .visible = true,
    .named = true,
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
  [alias_sym_variable_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_variable_name,
  },
  [2] = {
    [3] = alias_sym_variable_name,
  },
  [3] = {
    [4] = alias_sym_variable_name,
  },
  [4] = {
    [5] = alias_sym_variable_name,
  },
  [5] = {
    [6] = alias_sym_variable_name,
  },
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
  [11] = 6,
  [12] = 7,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 15,
  [24] = 22,
  [25] = 14,
  [26] = 21,
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
  [71] = 66,
  [72] = 70,
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
  [85] = 65,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 67,
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
  [105] = 68,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 69,
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
  [134] = 84,
  [135] = 89,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 164,
  [188] = 162,
  [189] = 177,
  [190] = 185,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 186,
  [196] = 183,
  [197] = 192,
  [198] = 198,
  [199] = 194,
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
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '\n', 56,
        '\r', 1,
        '!', 51,
        '"', 67,
        '%', 15,
        '&', 19,
        '(', 85,
        ')', 86,
        '/', 34,
        '2', 96,
        ':', 22,
        '<', 99,
        '=', 72,
        '>', 100,
        '@', 58,
        '|', 106,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 56,
        '\r', 1,
        '!', 51,
        '"', 13,
        '%', 18,
        '&', 19,
        '(', 85,
        ')', 86,
        '/', 116,
        '2', 97,
        '<', 99,
        '>', 100,
        '|', 106,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(117);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 56,
        '\r', 1,
        '!', 51,
        '"', 13,
        '%', 18,
        '&', 19,
        '(', 85,
        ')', 86,
        '/', 116,
        '|', 27,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(117);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 56,
        '\r', 1,
        '%', 14,
        '&', 19,
        '(', 85,
        ')', 86,
        '/', 40,
        '2', 96,
        ':', 52,
        '<', 99,
        '>', 100,
        '@', 57,
        '|', 106,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '~') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '~') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '&') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == '|') ADVANCE(108);
      END_STATE();
    case 28:
      if (lookahead == '~') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == '~') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        'B', 84,
        'b', 84,
        'F', 89,
        'f', 89,
        'R', 90,
        'r', 90,
        'A', 66,
        'P', 66,
        'a', 66,
        'p', 66,
        'D', 88,
        'L', 88,
        'd', 88,
        'l', 88,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        'F', 89,
        'f', 89,
        'R', 90,
        'r', 90,
        'D', 88,
        'L', 88,
        'd', 88,
        'l', 88,
      );
      END_STATE();
    case 41:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          lookahead == 'a' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 52:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(17);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '\n', 56,
        '\r', 1,
        '!', 51,
        '"', 13,
        '%', 18,
        '(', 85,
        ')', 86,
        '/', 33,
        ':', 23,
        '@', 58,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_program_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(100);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_argument_value);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
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
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
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
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 4},
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
  [50] = {.lex_state = 54},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 54},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 54},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 31},
  [148] = {.lex_state = 31},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 54},
  [157] = {.lex_state = 25},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 54},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 54},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 25},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 31},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 32},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 32},
  [195] = {.lex_state = 32},
  [196] = {.lex_state = 32},
  [197] = {.lex_state = 32},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 32},
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
    [sym_program] = STATE(182),
    [sym__stmt] = STATE(142),
    [sym_echo_off] = STATE(142),
    [sym_label] = STATE(142),
    [sym_variable_assignment] = STATE(142),
    [sym_if_stmt] = STATE(142),
    [sym_goto_stmt] = STATE(142),
    [sym_call_stmt] = STATE(142),
    [sym_exit_stmt] = STATE(142),
    [sym_setlocal_stmt] = STATE(142),
    [sym_endlocal_stmt] = STATE(142),
    [sym_for_stmt] = STATE(142),
    [sym_parenthesized] = STATE(28),
    [sym_redirect_stmt] = STATE(142),
    [sym_pipe_stmt] = STATE(142),
    [sym_cond_exec] = STATE(60),
    [sym_cmd] = STATE(28),
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
    STATE(60), 1,
      sym_cond_exec,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(28), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(142), 13,
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
    ACTIONS(77), 1,
      aux_sym_program_token1,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(60), 1,
      sym_cond_exec,
    STATE(28), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(76), 13,
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
      anon_sym_AT,
    ACTIONS(83), 1,
      aux_sym_variable_assignment_token1,
    ACTIONS(87), 1,
      aux_sym_program_token1,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(60), 1,
      sym_cond_exec,
    STATE(28), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(77), 13,
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
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(60), 1,
      sym_cond_exec,
    STATE(28), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(142), 13,
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
  [285] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_argument_list,
    ACTIONS(99), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(101), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(103), 2,
      sym_command_option,
      sym_argument_value,
    STATE(9), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(95), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [316] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_argument_list,
    ACTIONS(101), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(103), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(107), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    STATE(9), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(105), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [347] = 2,
    ACTIONS(109), 3,
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
  [368] = 6,
    ACTIONS(97), 1,
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
    STATE(33), 1,
      sym_argument_list,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    STATE(13), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(95), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [450] = 6,
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
    STATE(13), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(105), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [476] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(140), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(111), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [499] = 2,
    ACTIONS(144), 4,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      sym_command_option,
      sym_argument_value,
    ACTIONS(142), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [516] = 2,
    ACTIONS(148), 4,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      sym_command_option,
      sym_argument_value,
    ACTIONS(146), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [533] = 5,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(156), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(119), 4,
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
    STATE(13), 3,
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
    STATE(13), 3,
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
    ACTIONS(138), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(140), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [686] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(191), 2,
      sym_command_option,
      sym_argument_value,
    STATE(21), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [706] = 2,
    ACTIONS(148), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(146), 7,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [720] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(197), 2,
      sym_command_option,
      sym_argument_value,
    STATE(26), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [740] = 2,
    ACTIONS(144), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(142), 7,
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
    ACTIONS(138), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(140), 2,
      sym_command_option,
      sym_argument_value,
    STATE(16), 3,
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
  [787] = 6,
    ACTIONS(207), 1,
      aux_sym_redirection_token1,
    ACTIONS(209), 1,
      sym_redirect_op,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    STATE(92), 1,
      sym_redirection,
    ACTIONS(205), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [808] = 2,
    ACTIONS(217), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(215), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [821] = 2,
    ACTIONS(221), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(219), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
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
    ACTIONS(235), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(233), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [864] = 2,
    ACTIONS(107), 2,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
    ACTIONS(105), 5,
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
  [894] = 2,
    ACTIONS(247), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(249), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [905] = 4,
    ACTIONS(251), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(253), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(255), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(257), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [920] = 4,
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
  [935] = 2,
    ACTIONS(259), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(261), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [946] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(79), 2,
      sym_parenthesized,
      sym_cmd,
  [960] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(58), 1,
      sym_parenthesized,
    STATE(87), 1,
      sym_cmd,
  [976] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_parenthesized,
    STATE(93), 1,
      sym_cmd,
  [992] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(56), 2,
      sym_parenthesized,
      sym_cmd,
  [1006] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_parenthesized,
    STATE(102), 1,
      sym_cmd,
  [1022] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(121), 2,
      sym_parenthesized,
      sym_cmd,
  [1036] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(106), 2,
      sym_parenthesized,
      sym_cmd,
  [1050] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(115), 2,
      sym_parenthesized,
      sym_cmd,
  [1064] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(126), 2,
      sym_parenthesized,
      sym_cmd,
  [1078] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_parenthesized,
    STATE(111), 1,
      sym_cmd,
  [1094] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_command_name,
    ACTIONS(265), 1,
      anon_sym_AT,
    STATE(123), 2,
      sym_parenthesized,
      sym_cmd,
  [1108] = 3,
    ACTIONS(269), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(271), 1,
      sym_integer,
    ACTIONS(267), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1119] = 3,
    ACTIONS(275), 1,
      aux_sym_else_clause_token1,
    STATE(111), 1,
      sym_else_clause,
    ACTIONS(273), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1130] = 3,
    ACTIONS(275), 1,
      aux_sym_else_clause_token1,
    STATE(102), 1,
      sym_else_clause,
    ACTIONS(277), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1141] = 2,
    ACTIONS(267), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(271), 2,
      sym_variable_reference,
      sym_integer,
  [1150] = 3,
    ACTIONS(275), 1,
      aux_sym_else_clause_token1,
    STATE(120), 1,
      sym_else_clause,
    ACTIONS(279), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1161] = 3,
    ACTIONS(283), 1,
      aux_sym_redirection_token1,
    ACTIONS(285), 1,
      sym_redirect_op,
    ACTIONS(281), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1172] = 1,
    ACTIONS(287), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1179] = 2,
    ACTIONS(289), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(291), 2,
      sym_variable_reference,
      sym_integer,
  [1188] = 3,
    ACTIONS(275), 1,
      aux_sym_else_clause_token1,
    STATE(93), 1,
      sym_else_clause,
    ACTIONS(293), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1199] = 3,
    ACTIONS(297), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(299), 1,
      sym_integer,
    ACTIONS(295), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1210] = 2,
    ACTIONS(205), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1219] = 3,
    ACTIONS(303), 1,
      aux_sym_redirection_token1,
    ACTIONS(305), 1,
      sym_redirect_op,
    ACTIONS(301), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1230] = 1,
    ACTIONS(307), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1236] = 1,
    ACTIONS(309), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1242] = 1,
    ACTIONS(311), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1248] = 2,
    ACTIONS(315), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(313), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1256] = 3,
    ACTIONS(317), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_variable_assignment_token4,
  [1266] = 2,
    ACTIONS(325), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(323), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1274] = 2,
    ACTIONS(329), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(327), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1282] = 2,
    ACTIONS(333), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(331), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1290] = 3,
    ACTIONS(335), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      aux_sym_variable_assignment_token4,
  [1300] = 3,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(343), 1,
      aux_sym_variable_assignment_token4,
  [1310] = 3,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(347), 1,
      aux_sym_variable_assignment_token4,
  [1320] = 1,
    ACTIONS(349), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1325] = 1,
    ACTIONS(161), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1330] = 1,
    ACTIONS(351), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1335] = 2,
    ACTIONS(353), 1,
      aux_sym_program_token1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [1342] = 2,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      aux_sym_program_token1,
  [1349] = 2,
    ACTIONS(357), 1,
      sym_for_options,
    ACTIONS(359), 1,
      sym_for_variable,
  [1356] = 1,
    ACTIONS(361), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1361] = 1,
    ACTIONS(363), 2,
      sym_variable_reference,
      sym_string,
  [1366] = 1,
    ACTIONS(309), 2,
      sym_variable_reference,
      sym_string,
  [1371] = 1,
    ACTIONS(365), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1376] = 1,
    ACTIONS(367), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1381] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_variable_assignment_token4,
  [1388] = 2,
    ACTIONS(313), 1,
      aux_sym_program_token1,
    ACTIONS(373), 1,
      aux_sym_variable_assignment_token6,
  [1395] = 1,
    ACTIONS(375), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1400] = 1,
    ACTIONS(293), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1405] = 2,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      sym_for_set,
  [1412] = 2,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      aux_sym_variable_assignment_token4,
  [1419] = 2,
    ACTIONS(323), 1,
      aux_sym_program_token1,
    ACTIONS(385), 1,
      aux_sym_variable_assignment_token6,
  [1426] = 1,
    ACTIONS(387), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1431] = 1,
    ACTIONS(389), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1436] = 1,
    ACTIONS(277), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1441] = 2,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      sym_for_set,
  [1448] = 2,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      aux_sym_variable_assignment_token5,
  [1455] = 1,
    ACTIONS(397), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1460] = 2,
    ACTIONS(399), 1,
      sym_for_options,
    ACTIONS(401), 1,
      sym_for_variable,
  [1467] = 1,
    ACTIONS(403), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1472] = 2,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_variable_assignment_token5,
  [1479] = 1,
    ACTIONS(407), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1484] = 1,
    ACTIONS(409), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1489] = 1,
    ACTIONS(273), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1494] = 2,
    ACTIONS(411), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(413), 1,
      aux_sym_goto_stmt_token3,
  [1501] = 2,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      sym_for_set,
  [1508] = 2,
    ACTIONS(327), 1,
      aux_sym_program_token1,
    ACTIONS(419), 1,
      aux_sym_variable_assignment_token6,
  [1515] = 1,
    ACTIONS(421), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1520] = 2,
    ACTIONS(423), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(425), 1,
      aux_sym_goto_stmt_token3,
  [1527] = 1,
    ACTIONS(427), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1532] = 2,
    ACTIONS(331), 1,
      aux_sym_program_token1,
    ACTIONS(429), 1,
      aux_sym_variable_assignment_token6,
  [1539] = 1,
    ACTIONS(431), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1544] = 1,
    ACTIONS(279), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1549] = 1,
    ACTIONS(311), 2,
      sym_variable_reference,
      sym_string,
  [1554] = 2,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym_variable_assignment_token5,
  [1561] = 1,
    ACTIONS(435), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1566] = 1,
    ACTIONS(437), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1571] = 1,
    ACTIONS(439), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1576] = 2,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      aux_sym_variable_assignment_token5,
  [1583] = 1,
    ACTIONS(445), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1588] = 1,
    ACTIONS(447), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1593] = 1,
    ACTIONS(449), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1598] = 1,
    ACTIONS(451), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1603] = 1,
    ACTIONS(453), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1608] = 1,
    ACTIONS(455), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1613] = 1,
    ACTIONS(457), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1618] = 1,
    ACTIONS(459), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1623] = 1,
    ACTIONS(461), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1628] = 1,
    ACTIONS(463), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1633] = 1,
    ACTIONS(465), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1638] = 1,
    ACTIONS(267), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1643] = 1,
    ACTIONS(289), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1648] = 1,
    ACTIONS(467), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [1653] = 1,
    ACTIONS(469), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1658] = 1,
    ACTIONS(247), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1663] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      aux_sym_variable_assignment_token4,
  [1670] = 2,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      aux_sym_variable_assignment_token4,
  [1677] = 1,
    ACTIONS(475), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1682] = 1,
    ACTIONS(477), 1,
      aux_sym_for_stmt_token3,
  [1686] = 1,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
  [1690] = 1,
    ACTIONS(481), 1,
      anon_sym_EQ,
  [1694] = 1,
    ACTIONS(483), 1,
      sym_redirect_op,
  [1698] = 1,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
  [1702] = 1,
    ACTIONS(353), 1,
      aux_sym_program_token1,
  [1706] = 1,
    ACTIONS(487), 1,
      sym_redirect_target,
  [1710] = 1,
    ACTIONS(489), 1,
      sym_redirect_target,
  [1714] = 1,
    ACTIONS(305), 1,
      sym_redirect_op,
  [1718] = 1,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [1722] = 1,
    ACTIONS(493), 1,
      sym_redirect_target,
  [1726] = 1,
    ACTIONS(495), 1,
      sym_redirect_target,
  [1730] = 1,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
  [1734] = 1,
    ACTIONS(499), 1,
      anon_sym_EQ,
  [1738] = 1,
    ACTIONS(309), 1,
      aux_sym_variable_assignment_token4,
  [1742] = 1,
    ACTIONS(501), 1,
      aux_sym_for_stmt_token3,
  [1746] = 1,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
  [1750] = 1,
    ACTIONS(311), 1,
      aux_sym_variable_assignment_token4,
  [1754] = 1,
    ACTIONS(505), 1,
      sym_comparison_op,
  [1758] = 1,
    ACTIONS(309), 1,
      sym_integer,
  [1762] = 1,
    ACTIONS(507), 1,
      sym_comparison_op,
  [1766] = 1,
    ACTIONS(363), 1,
      aux_sym_variable_assignment_token4,
  [1770] = 1,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
  [1774] = 1,
    ACTIONS(363), 1,
      sym_integer,
  [1778] = 1,
    ACTIONS(511), 1,
      aux_sym_variable_assignment_token4,
  [1782] = 1,
    ACTIONS(513), 1,
      anon_sym_EQ,
  [1786] = 1,
    ACTIONS(311), 1,
      sym_integer,
  [1790] = 1,
    ACTIONS(515), 1,
      anon_sym_EQ,
  [1794] = 1,
    ACTIONS(517), 1,
      aux_sym_for_stmt_token3,
  [1798] = 1,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
  [1802] = 1,
    ACTIONS(521), 1,
      sym_command_name,
  [1806] = 1,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
  [1810] = 1,
    ACTIONS(525), 1,
      aux_sym_for_stmt_token2,
  [1814] = 1,
    ACTIONS(527), 1,
      sym_comparison_op,
  [1818] = 1,
    ACTIONS(529), 1,
      aux_sym_for_stmt_token3,
  [1822] = 1,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [1826] = 1,
    ACTIONS(533), 1,
      sym_redirect_op,
  [1830] = 1,
    ACTIONS(535), 1,
      sym_redirect_target,
  [1834] = 1,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
  [1838] = 1,
    ACTIONS(539), 1,
      aux_sym_variable_assignment_token4,
  [1842] = 1,
    ACTIONS(541), 1,
      anon_sym_EQ,
  [1846] = 1,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
  [1850] = 1,
    ACTIONS(545), 1,
      anon_sym_EQ,
  [1854] = 1,
    ACTIONS(547), 1,
      sym_for_variable,
  [1858] = 1,
    ACTIONS(549), 1,
      aux_sym_for_stmt_token2,
  [1862] = 1,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
  [1866] = 1,
    ACTIONS(553), 1,
      aux_sym_variable_assignment_token2,
  [1870] = 1,
    ACTIONS(555), 1,
      aux_sym_variable_assignment_token4,
  [1874] = 1,
    ACTIONS(557), 1,
      anon_sym_EQ,
  [1878] = 1,
    ACTIONS(559), 1,
      aux_sym_variable_assignment_token2,
  [1882] = 1,
    ACTIONS(561), 1,
      anon_sym_EQ,
  [1886] = 1,
    ACTIONS(563), 1,
      anon_sym_EQ,
  [1890] = 1,
    ACTIONS(565), 1,
      anon_sym_EQ,
  [1894] = 1,
    ACTIONS(567), 1,
      anon_sym_EQ,
  [1898] = 1,
    ACTIONS(359), 1,
      sym_for_variable,
  [1902] = 1,
    ACTIONS(569), 1,
      aux_sym_variable_assignment_token2,
  [1906] = 1,
    ACTIONS(571), 1,
      aux_sym_variable_assignment_token4,
  [1910] = 1,
    ACTIONS(573), 1,
      aux_sym_variable_assignment_token2,
  [1914] = 1,
    ACTIONS(575), 1,
      aux_sym_variable_assignment_token2,
  [1918] = 1,
    ACTIONS(577), 1,
      aux_sym_variable_assignment_token2,
  [1922] = 1,
    ACTIONS(579), 1,
      aux_sym_variable_assignment_token2,
  [1926] = 1,
    ACTIONS(581), 1,
      aux_sym_for_stmt_token2,
  [1930] = 1,
    ACTIONS(583), 1,
      aux_sym_variable_assignment_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 143,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 285,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 347,
  [SMALL_STATE(9)] = 368,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 450,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 499,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 533,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 635,
  [SMALL_STATE(21)] = 666,
  [SMALL_STATE(22)] = 686,
  [SMALL_STATE(23)] = 706,
  [SMALL_STATE(24)] = 720,
  [SMALL_STATE(25)] = 740,
  [SMALL_STATE(26)] = 754,
  [SMALL_STATE(27)] = 774,
  [SMALL_STATE(28)] = 787,
  [SMALL_STATE(29)] = 808,
  [SMALL_STATE(30)] = 821,
  [SMALL_STATE(31)] = 834,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 864,
  [SMALL_STATE(34)] = 876,
  [SMALL_STATE(35)] = 894,
  [SMALL_STATE(36)] = 905,
  [SMALL_STATE(37)] = 920,
  [SMALL_STATE(38)] = 935,
  [SMALL_STATE(39)] = 946,
  [SMALL_STATE(40)] = 960,
  [SMALL_STATE(41)] = 976,
  [SMALL_STATE(42)] = 992,
  [SMALL_STATE(43)] = 1006,
  [SMALL_STATE(44)] = 1022,
  [SMALL_STATE(45)] = 1036,
  [SMALL_STATE(46)] = 1050,
  [SMALL_STATE(47)] = 1064,
  [SMALL_STATE(48)] = 1078,
  [SMALL_STATE(49)] = 1094,
  [SMALL_STATE(50)] = 1108,
  [SMALL_STATE(51)] = 1119,
  [SMALL_STATE(52)] = 1130,
  [SMALL_STATE(53)] = 1141,
  [SMALL_STATE(54)] = 1150,
  [SMALL_STATE(55)] = 1161,
  [SMALL_STATE(56)] = 1172,
  [SMALL_STATE(57)] = 1179,
  [SMALL_STATE(58)] = 1188,
  [SMALL_STATE(59)] = 1199,
  [SMALL_STATE(60)] = 1210,
  [SMALL_STATE(61)] = 1219,
  [SMALL_STATE(62)] = 1230,
  [SMALL_STATE(63)] = 1236,
  [SMALL_STATE(64)] = 1242,
  [SMALL_STATE(65)] = 1248,
  [SMALL_STATE(66)] = 1256,
  [SMALL_STATE(67)] = 1266,
  [SMALL_STATE(68)] = 1274,
  [SMALL_STATE(69)] = 1282,
  [SMALL_STATE(70)] = 1290,
  [SMALL_STATE(71)] = 1300,
  [SMALL_STATE(72)] = 1310,
  [SMALL_STATE(73)] = 1320,
  [SMALL_STATE(74)] = 1325,
  [SMALL_STATE(75)] = 1330,
  [SMALL_STATE(76)] = 1335,
  [SMALL_STATE(77)] = 1342,
  [SMALL_STATE(78)] = 1349,
  [SMALL_STATE(79)] = 1356,
  [SMALL_STATE(80)] = 1361,
  [SMALL_STATE(81)] = 1366,
  [SMALL_STATE(82)] = 1371,
  [SMALL_STATE(83)] = 1376,
  [SMALL_STATE(84)] = 1381,
  [SMALL_STATE(85)] = 1388,
  [SMALL_STATE(86)] = 1395,
  [SMALL_STATE(87)] = 1400,
  [SMALL_STATE(88)] = 1405,
  [SMALL_STATE(89)] = 1412,
  [SMALL_STATE(90)] = 1419,
  [SMALL_STATE(91)] = 1426,
  [SMALL_STATE(92)] = 1431,
  [SMALL_STATE(93)] = 1436,
  [SMALL_STATE(94)] = 1441,
  [SMALL_STATE(95)] = 1448,
  [SMALL_STATE(96)] = 1455,
  [SMALL_STATE(97)] = 1460,
  [SMALL_STATE(98)] = 1467,
  [SMALL_STATE(99)] = 1472,
  [SMALL_STATE(100)] = 1479,
  [SMALL_STATE(101)] = 1484,
  [SMALL_STATE(102)] = 1489,
  [SMALL_STATE(103)] = 1494,
  [SMALL_STATE(104)] = 1501,
  [SMALL_STATE(105)] = 1508,
  [SMALL_STATE(106)] = 1515,
  [SMALL_STATE(107)] = 1520,
  [SMALL_STATE(108)] = 1527,
  [SMALL_STATE(109)] = 1532,
  [SMALL_STATE(110)] = 1539,
  [SMALL_STATE(111)] = 1544,
  [SMALL_STATE(112)] = 1549,
  [SMALL_STATE(113)] = 1554,
  [SMALL_STATE(114)] = 1561,
  [SMALL_STATE(115)] = 1566,
  [SMALL_STATE(116)] = 1571,
  [SMALL_STATE(117)] = 1576,
  [SMALL_STATE(118)] = 1583,
  [SMALL_STATE(119)] = 1588,
  [SMALL_STATE(120)] = 1593,
  [SMALL_STATE(121)] = 1598,
  [SMALL_STATE(122)] = 1603,
  [SMALL_STATE(123)] = 1608,
  [SMALL_STATE(124)] = 1613,
  [SMALL_STATE(125)] = 1618,
  [SMALL_STATE(126)] = 1623,
  [SMALL_STATE(127)] = 1628,
  [SMALL_STATE(128)] = 1633,
  [SMALL_STATE(129)] = 1638,
  [SMALL_STATE(130)] = 1643,
  [SMALL_STATE(131)] = 1648,
  [SMALL_STATE(132)] = 1653,
  [SMALL_STATE(133)] = 1658,
  [SMALL_STATE(134)] = 1663,
  [SMALL_STATE(135)] = 1670,
  [SMALL_STATE(136)] = 1677,
  [SMALL_STATE(137)] = 1682,
  [SMALL_STATE(138)] = 1686,
  [SMALL_STATE(139)] = 1690,
  [SMALL_STATE(140)] = 1694,
  [SMALL_STATE(141)] = 1698,
  [SMALL_STATE(142)] = 1702,
  [SMALL_STATE(143)] = 1706,
  [SMALL_STATE(144)] = 1710,
  [SMALL_STATE(145)] = 1714,
  [SMALL_STATE(146)] = 1718,
  [SMALL_STATE(147)] = 1722,
  [SMALL_STATE(148)] = 1726,
  [SMALL_STATE(149)] = 1730,
  [SMALL_STATE(150)] = 1734,
  [SMALL_STATE(151)] = 1738,
  [SMALL_STATE(152)] = 1742,
  [SMALL_STATE(153)] = 1746,
  [SMALL_STATE(154)] = 1750,
  [SMALL_STATE(155)] = 1754,
  [SMALL_STATE(156)] = 1758,
  [SMALL_STATE(157)] = 1762,
  [SMALL_STATE(158)] = 1766,
  [SMALL_STATE(159)] = 1770,
  [SMALL_STATE(160)] = 1774,
  [SMALL_STATE(161)] = 1778,
  [SMALL_STATE(162)] = 1782,
  [SMALL_STATE(163)] = 1786,
  [SMALL_STATE(164)] = 1790,
  [SMALL_STATE(165)] = 1794,
  [SMALL_STATE(166)] = 1798,
  [SMALL_STATE(167)] = 1802,
  [SMALL_STATE(168)] = 1806,
  [SMALL_STATE(169)] = 1810,
  [SMALL_STATE(170)] = 1814,
  [SMALL_STATE(171)] = 1818,
  [SMALL_STATE(172)] = 1822,
  [SMALL_STATE(173)] = 1826,
  [SMALL_STATE(174)] = 1830,
  [SMALL_STATE(175)] = 1834,
  [SMALL_STATE(176)] = 1838,
  [SMALL_STATE(177)] = 1842,
  [SMALL_STATE(178)] = 1846,
  [SMALL_STATE(179)] = 1850,
  [SMALL_STATE(180)] = 1854,
  [SMALL_STATE(181)] = 1858,
  [SMALL_STATE(182)] = 1862,
  [SMALL_STATE(183)] = 1866,
  [SMALL_STATE(184)] = 1870,
  [SMALL_STATE(185)] = 1874,
  [SMALL_STATE(186)] = 1878,
  [SMALL_STATE(187)] = 1882,
  [SMALL_STATE(188)] = 1886,
  [SMALL_STATE(189)] = 1890,
  [SMALL_STATE(190)] = 1894,
  [SMALL_STATE(191)] = 1898,
  [SMALL_STATE(192)] = 1902,
  [SMALL_STATE(193)] = 1906,
  [SMALL_STATE(194)] = 1910,
  [SMALL_STATE(195)] = 1914,
  [SMALL_STATE(196)] = 1918,
  [SMALL_STATE(197)] = 1922,
  [SMALL_STATE(198)] = 1926,
  [SMALL_STATE(199)] = 1930,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, 0, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, 0, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 4, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 5, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 6, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 10, 0, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [551] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
