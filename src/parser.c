#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 56
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
  anon_sym_AMP = 50,
  sym_variable_reference = 51,
  sym_string = 52,
  sym_command_option = 53,
  sym_argument_value = 54,
  sym_integer = 55,
  sym_program = 56,
  sym__stmt = 57,
  sym_echo_off = 58,
  sym_label = 59,
  sym_variable_assignment = 60,
  sym_if_stmt = 61,
  sym_else_clause = 62,
  sym_goto_stmt = 63,
  sym_call_stmt = 64,
  sym_exit_stmt = 65,
  sym_setlocal_stmt = 66,
  sym_endlocal_stmt = 67,
  sym_for_stmt = 68,
  sym_parenthesized = 69,
  sym_redirect_stmt = 70,
  sym_redirection = 71,
  sym_pipe_stmt = 72,
  sym_cond_exec = 73,
  sym_command_sep = 74,
  sym_cmd = 75,
  sym_argument_list = 76,
  sym__arg = 77,
  sym_paren_expression = 78,
  aux_sym_program_repeat1 = 79,
  aux_sym_argument_list_repeat1 = 80,
  alias_sym_variable_name = 81,
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
  [anon_sym_AMP] = "&",
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
  [sym_command_sep] = "command_sep",
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
  [anon_sym_AMP] = anon_sym_AMP,
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
  [sym_command_sep] = sym_command_sep,
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
  [anon_sym_AMP] = {
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
  [sym_command_sep] = {
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
  [13] = 10,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 15,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 24,
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
  [72] = 66,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 67,
  [78] = 78,
  [79] = 79,
  [80] = 73,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 74,
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
  [101] = 75,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 76,
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
  [136] = 79,
  [137] = 87,
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
  [165] = 141,
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
  [187] = 187,
  [188] = 188,
  [189] = 158,
  [190] = 190,
  [191] = 191,
  [192] = 175,
  [193] = 187,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 154,
  [199] = 199,
  [200] = 197,
  [201] = 166,
  [202] = 202,
  [203] = 191,
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
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '\n', 54,
        '\r', 1,
        '!', 49,
        '"', 65,
        '%', 15,
        '&', 107,
        '(', 83,
        ')', 84,
        '/', 32,
        '2', 94,
        ':', 21,
        '<', 97,
        '=', 70,
        '>', 98,
        '@', 56,
        '|', 104,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 54,
        '\r', 1,
        '!', 49,
        '"', 13,
        '%', 18,
        '&', 107,
        '(', 83,
        ')', 84,
        '/', 116,
        '2', 95,
        '<', 97,
        '>', 98,
        '^', 115,
        '|', 104,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(117);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 54,
        '\r', 1,
        '!', 49,
        '"', 13,
        '%', 18,
        '&', 107,
        '(', 83,
        ')', 84,
        '/', 116,
        '^', 115,
        '|', 104,
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
        '\n', 54,
        '\r', 1,
        '%', 14,
        '&', 107,
        '(', 83,
        ')', 84,
        '/', 38,
        '2', 94,
        ':', 50,
        '<', 97,
        '>', 98,
        '@', 55,
        '|', 104,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '~') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '~') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == '~') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == '~') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 31:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        'B', 82,
        'b', 82,
        'F', 87,
        'f', 87,
        'R', 88,
        'r', 88,
        'A', 64,
        'P', 64,
        'a', 64,
        'p', 64,
        'D', 86,
        'L', 86,
        'd', 86,
        'l', 86,
      );
      if (lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        'F', 87,
        'f', 87,
        'R', 88,
        'r', 88,
        'D', 86,
        'L', 86,
        'd', 86,
        'l', 86,
      );
      END_STATE();
    case 39:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          lookahead == 'a' ||
          lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 48:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 49:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(17);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '\n', 54,
        '\r', 1,
        '!', 49,
        '"', 13,
        '%', 18,
        '(', 83,
        ')', 84,
        '/', 31,
        ':', 22,
        '@', 56,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_program_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token3);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_variable_assignment_token6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comparison_op);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_goto_stmt_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_exit_stmt_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_for_options);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_for_options);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_for_variable);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_for_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '^') ADVANCE(118);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      if (lookahead == '^') ADVANCE(118);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_redirect_op);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_redirect_op);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_redirect_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_variable_reference);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_command_option);
      if (lookahead == '^') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_command_option);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(118);
      if ((!eof && set_contains(sym_argument_value_character_set_1, 9, lookahead))) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_argument_value);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
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
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 10},
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
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 52},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 52},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 52},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 30},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 30},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 30},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 29},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 52},
  [178] = {.lex_state = 24},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 30},
  [184] = {.lex_state = 52},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 24},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 29},
  [198] = {.lex_state = 29},
  [199] = {.lex_state = 30},
  [200] = {.lex_state = 29},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
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
    [anon_sym_AMP] = ACTIONS(1),
    [sym_variable_reference] = ACTIONS(1),
    [sym_command_option] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(195),
    [sym__stmt] = STATE(173),
    [sym_echo_off] = STATE(173),
    [sym_label] = STATE(173),
    [sym_variable_assignment] = STATE(173),
    [sym_if_stmt] = STATE(173),
    [sym_goto_stmt] = STATE(173),
    [sym_call_stmt] = STATE(173),
    [sym_exit_stmt] = STATE(173),
    [sym_setlocal_stmt] = STATE(173),
    [sym_endlocal_stmt] = STATE(173),
    [sym_for_stmt] = STATE(173),
    [sym_parenthesized] = STATE(23),
    [sym_redirect_stmt] = STATE(173),
    [sym_pipe_stmt] = STATE(53),
    [sym_cond_exec] = STATE(53),
    [sym_command_sep] = STATE(70),
    [sym_cmd] = STATE(23),
    [aux_sym_program_repeat1] = STATE(4),
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
  [0] = 20,
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
    STATE(70), 1,
      sym_command_sep,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(23), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(53), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(173), 12,
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
  [75] = 20,
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
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(70), 1,
      sym_command_sep,
    STATE(23), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(53), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(84), 12,
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
  [149] = 20,
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
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_program_token1,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(70), 1,
      sym_command_sep,
    STATE(23), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(53), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(173), 12,
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
  [223] = 20,
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
    ACTIONS(89), 1,
      aux_sym_program_token1,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(70), 1,
      sym_command_sep,
    STATE(23), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(53), 2,
      sym_pipe_stmt,
      sym_cond_exec,
    STATE(81), 12,
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
  [297] = 7,
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
    ACTIONS(99), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    STATE(8), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(95), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [329] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_argument_list,
    ACTIONS(101), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(103), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(107), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    STATE(8), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(105), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [361] = 6,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(115), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(111), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    STATE(10), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(109), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [390] = 2,
    ACTIONS(117), 3,
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
  [411] = 6,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(129), 2,
      sym_command_option,
      sym_argument_value,
    ACTIONS(124), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
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
  [440] = 7,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_argument_list,
    ACTIONS(99), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(95), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [470] = 7,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_argument_list,
    ACTIONS(107), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(134), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(136), 2,
      sym_command_option,
      sym_argument_value,
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(105), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [500] = 6,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(141), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(144), 2,
      sym_command_option,
      sym_argument_value,
    STATE(13), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(119), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [527] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(147), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(149), 2,
      sym_command_option,
      sym_argument_value,
    STATE(13), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
    ACTIONS(109), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [554] = 2,
    ACTIONS(153), 5,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
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
  [572] = 2,
    ACTIONS(157), 5,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(155), 8,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [590] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
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
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [614] = 2,
    ACTIONS(157), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_command_option,
      sym_argument_value,
    ACTIONS(155), 7,
      aux_sym_program_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_variable_reference,
      sym_string,
  [630] = 6,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
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
    STATE(14), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [654] = 2,
    ACTIONS(153), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
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
  [670] = 10,
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
  [701] = 10,
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
  [732] = 7,
    ACTIONS(187), 1,
      aux_sym_redirection_token1,
    ACTIONS(189), 1,
      sym_redirect_op,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_AMP,
    STATE(118), 1,
      sym_redirection,
    ACTIONS(185), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [756] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(149), 2,
      sym_command_option,
      sym_argument_value,
    STATE(13), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [776] = 2,
    ACTIONS(201), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(199), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [790] = 2,
    ACTIONS(205), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(203), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [804] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(211), 2,
      sym_command_option,
      sym_argument_value,
    STATE(24), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [824] = 2,
    ACTIONS(215), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(213), 6,
      aux_sym_program_token1,
      aux_sym_else_clause_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [838] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(221), 2,
      sym_command_option,
      sym_argument_value,
    STATE(30), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [858] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      sym_variable_reference,
      sym_string,
    ACTIONS(149), 2,
      sym_command_option,
      sym_argument_value,
    STATE(13), 3,
      sym__arg,
      sym_paren_expression,
      aux_sym_argument_list_repeat1,
  [878] = 2,
    ACTIONS(227), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(225), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [891] = 2,
    ACTIONS(107), 3,
      aux_sym_redirection_token1,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(105), 5,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      sym_redirect_op,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [904] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(37), 2,
      sym_parenthesized,
      sym_cmd,
    STATE(43), 2,
      sym_pipe_stmt,
      sym_cond_exec,
  [922] = 5,
    ACTIONS(233), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(235), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(237), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(239), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(241), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [940] = 5,
    ACTIONS(243), 1,
      aux_sym_if_stmt_token2,
    ACTIONS(245), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(247), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(249), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(251), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [958] = 2,
    ACTIONS(253), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(255), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [969] = 4,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(257), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [984] = 4,
    ACTIONS(245), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(247), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(249), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(251), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [999] = 4,
    ACTIONS(261), 1,
      aux_sym_if_stmt_token3,
    ACTIONS(263), 1,
      aux_sym_if_stmt_token4,
    ACTIONS(265), 1,
      aux_sym_if_stmt_token5,
    ACTIONS(267), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1014] = 2,
    ACTIONS(269), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(271), 4,
      aux_sym_setlocal_stmt_token2,
      aux_sym_setlocal_stmt_token3,
      aux_sym_setlocal_stmt_token4,
      aux_sym_setlocal_stmt_token5,
  [1025] = 2,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(273), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1035] = 2,
    ACTIONS(279), 1,
      anon_sym_AMP,
    ACTIONS(277), 4,
      aux_sym_program_token1,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1045] = 3,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(257), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1057] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(58), 1,
      sym_parenthesized,
    STATE(91), 1,
      sym_cmd,
  [1073] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(102), 2,
      sym_parenthesized,
      sym_cmd,
  [1087] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym_parenthesized,
    STATE(99), 1,
      sym_cmd,
  [1103] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(42), 2,
      sym_parenthesized,
      sym_cmd,
  [1117] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(61), 1,
      sym_parenthesized,
    STATE(107), 1,
      sym_cmd,
  [1133] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(121), 2,
      sym_parenthesized,
      sym_cmd,
  [1147] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(125), 2,
      sym_parenthesized,
      sym_cmd,
  [1161] = 5,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(59), 1,
      sym_parenthesized,
    STATE(82), 1,
      sym_cmd,
  [1177] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(119), 2,
      sym_parenthesized,
      sym_cmd,
  [1191] = 3,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(185), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1203] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(112), 2,
      sym_parenthesized,
      sym_cmd,
  [1217] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_command_name,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(41), 2,
      sym_parenthesized,
      sym_cmd,
  [1231] = 3,
    ACTIONS(283), 1,
      aux_sym_redirection_token1,
    ACTIONS(285), 1,
      sym_redirect_op,
    ACTIONS(281), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1242] = 2,
    ACTIONS(287), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(289), 2,
      sym_variable_reference,
      sym_integer,
  [1251] = 3,
    ACTIONS(293), 1,
      aux_sym_else_clause_token1,
    STATE(99), 1,
      sym_else_clause,
    ACTIONS(291), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1262] = 3,
    ACTIONS(293), 1,
      aux_sym_else_clause_token1,
    STATE(91), 1,
      sym_else_clause,
    ACTIONS(295), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1273] = 3,
    ACTIONS(293), 1,
      aux_sym_else_clause_token1,
    STATE(107), 1,
      sym_else_clause,
    ACTIONS(297), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1284] = 3,
    ACTIONS(293), 1,
      aux_sym_else_clause_token1,
    STATE(117), 1,
      sym_else_clause,
    ACTIONS(299), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1295] = 3,
    ACTIONS(303), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(305), 1,
      sym_integer,
    ACTIONS(301), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1306] = 3,
    ACTIONS(309), 1,
      aux_sym_exit_stmt_token2,
    ACTIONS(311), 1,
      sym_integer,
    ACTIONS(307), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1317] = 2,
    ACTIONS(307), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
    ACTIONS(311), 2,
      sym_variable_reference,
      sym_integer,
  [1326] = 3,
    ACTIONS(315), 1,
      aux_sym_redirection_token1,
    ACTIONS(317), 1,
      sym_redirect_op,
    ACTIONS(313), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1337] = 3,
    ACTIONS(319), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_variable_assignment_token4,
  [1347] = 3,
    ACTIONS(325), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_variable_assignment_token4,
  [1357] = 1,
    ACTIONS(331), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1363] = 1,
    ACTIONS(333), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1369] = 2,
    ACTIONS(335), 1,
      anon_sym_AMP,
    ACTIONS(185), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1377] = 1,
    ACTIONS(337), 3,
      sym_variable_reference,
      sym_string,
      sym_integer,
  [1383] = 3,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(341), 1,
      aux_sym_variable_assignment_token4,
  [1393] = 2,
    ACTIONS(345), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(343), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1401] = 2,
    ACTIONS(349), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(347), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1409] = 2,
    ACTIONS(353), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(351), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1417] = 2,
    ACTIONS(357), 1,
      aux_sym_variable_assignment_token6,
    ACTIONS(355), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1425] = 3,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_variable_assignment_token3,
    ACTIONS(361), 1,
      aux_sym_variable_assignment_token4,
  [1435] = 1,
    ACTIONS(363), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1440] = 2,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_variable_assignment_token4,
  [1447] = 2,
    ACTIONS(343), 1,
      aux_sym_program_token1,
    ACTIONS(369), 1,
      aux_sym_variable_assignment_token6,
  [1454] = 2,
    ACTIONS(371), 1,
      aux_sym_program_token1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [1461] = 1,
    ACTIONS(295), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1466] = 2,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      sym_for_set,
  [1473] = 2,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      aux_sym_program_token1,
  [1480] = 1,
    ACTIONS(379), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1485] = 1,
    ACTIONS(381), 2,
      aux_sym_echo_off_token2,
      aux_sym_echo_off_token3,
  [1490] = 2,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_variable_assignment_token4,
  [1497] = 2,
    ACTIONS(347), 1,
      aux_sym_program_token1,
    ACTIONS(387), 1,
      aux_sym_variable_assignment_token6,
  [1504] = 1,
    ACTIONS(389), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1509] = 2,
    ACTIONS(391), 1,
      sym_for_options,
    ACTIONS(393), 1,
      sym_for_variable,
  [1516] = 1,
    ACTIONS(291), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1521] = 2,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      sym_for_set,
  [1528] = 2,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_variable_assignment_token5,
  [1535] = 1,
    ACTIONS(401), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1540] = 2,
    ACTIONS(403), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(405), 1,
      aux_sym_goto_stmt_token3,
  [1547] = 1,
    ACTIONS(407), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1552] = 2,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      aux_sym_variable_assignment_token5,
  [1559] = 1,
    ACTIONS(411), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1564] = 1,
    ACTIONS(297), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1569] = 2,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(415), 1,
      sym_for_set,
  [1576] = 2,
    ACTIONS(351), 1,
      aux_sym_program_token1,
    ACTIONS(417), 1,
      aux_sym_variable_assignment_token6,
  [1583] = 1,
    ACTIONS(419), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1588] = 1,
    ACTIONS(421), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1593] = 1,
    ACTIONS(423), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1598] = 2,
    ACTIONS(355), 1,
      aux_sym_program_token1,
    ACTIONS(425), 1,
      aux_sym_variable_assignment_token6,
  [1605] = 1,
    ACTIONS(427), 2,
      sym_variable_reference,
      sym_string,
  [1610] = 1,
    ACTIONS(299), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1615] = 2,
    ACTIONS(429), 1,
      aux_sym_goto_stmt_token2,
    ACTIONS(431), 1,
      aux_sym_goto_stmt_token3,
  [1622] = 1,
    ACTIONS(433), 2,
      aux_sym_label_token1,
      sym_command_name,
  [1627] = 2,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      aux_sym_variable_assignment_token5,
  [1634] = 1,
    ACTIONS(437), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1639] = 1,
    ACTIONS(439), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1644] = 1,
    ACTIONS(441), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1649] = 2,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      aux_sym_variable_assignment_token5,
  [1656] = 1,
    ACTIONS(447), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1661] = 1,
    ACTIONS(449), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1666] = 1,
    ACTIONS(451), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1671] = 1,
    ACTIONS(453), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1676] = 1,
    ACTIONS(455), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1681] = 1,
    ACTIONS(457), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1686] = 1,
    ACTIONS(459), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1691] = 1,
    ACTIONS(461), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1696] = 1,
    ACTIONS(463), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1701] = 1,
    ACTIONS(465), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1706] = 1,
    ACTIONS(467), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1711] = 1,
    ACTIONS(469), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1716] = 1,
    ACTIONS(471), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1721] = 2,
    ACTIONS(473), 1,
      sym_for_options,
    ACTIONS(475), 1,
      sym_for_variable,
  [1728] = 1,
    ACTIONS(331), 2,
      sym_variable_reference,
      sym_string,
  [1733] = 1,
    ACTIONS(307), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1738] = 1,
    ACTIONS(269), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1743] = 1,
    ACTIONS(333), 2,
      sym_variable_reference,
      sym_string,
  [1748] = 1,
    ACTIONS(161), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1753] = 1,
    ACTIONS(477), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1758] = 1,
    ACTIONS(479), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1763] = 2,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      aux_sym_variable_assignment_token4,
  [1770] = 2,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(483), 1,
      aux_sym_variable_assignment_token4,
  [1777] = 1,
    ACTIONS(287), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1782] = 1,
    ACTIONS(485), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1787] = 1,
    ACTIONS(487), 2,
      aux_sym_program_token1,
      anon_sym_RPAREN,
  [1792] = 1,
    ACTIONS(489), 1,
      aux_sym_variable_assignment_token2,
  [1796] = 1,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [1800] = 1,
    ACTIONS(493), 1,
      anon_sym_EQ,
  [1804] = 1,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
  [1808] = 1,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
  [1812] = 1,
    ACTIONS(427), 1,
      sym_integer,
  [1816] = 1,
    ACTIONS(499), 1,
      anon_sym_EQ,
  [1820] = 1,
    ACTIONS(501), 1,
      sym_redirect_target,
  [1824] = 1,
    ACTIONS(503), 1,
      sym_comparison_op,
  [1828] = 1,
    ACTIONS(505), 1,
      anon_sym_EQ,
  [1832] = 1,
    ACTIONS(507), 1,
      aux_sym_variable_assignment_token4,
  [1836] = 1,
    ACTIONS(509), 1,
      sym_redirect_target,
  [1840] = 1,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
  [1844] = 1,
    ACTIONS(513), 1,
      aux_sym_variable_assignment_token2,
  [1848] = 1,
    ACTIONS(515), 1,
      sym_command_name,
  [1852] = 1,
    ACTIONS(517), 1,
      aux_sym_for_stmt_token3,
  [1856] = 1,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [1860] = 1,
    ACTIONS(521), 1,
      anon_sym_EQ,
  [1864] = 1,
    ACTIONS(523), 1,
      sym_for_variable,
  [1868] = 1,
    ACTIONS(285), 1,
      sym_redirect_op,
  [1872] = 1,
    ACTIONS(525), 1,
      sym_redirect_target,
  [1876] = 1,
    ACTIONS(527), 1,
      aux_sym_for_stmt_token2,
  [1880] = 1,
    ACTIONS(529), 1,
      anon_sym_EQ,
  [1884] = 1,
    ACTIONS(475), 1,
      sym_for_variable,
  [1888] = 1,
    ACTIONS(531), 1,
      aux_sym_variable_assignment_token2,
  [1892] = 1,
    ACTIONS(533), 1,
      aux_sym_variable_assignment_token2,
  [1896] = 1,
    ACTIONS(535), 1,
      aux_sym_variable_assignment_token4,
  [1900] = 1,
    ACTIONS(537), 1,
      aux_sym_for_stmt_token3,
  [1904] = 1,
    ACTIONS(539), 1,
      aux_sym_for_stmt_token3,
  [1908] = 1,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
  [1912] = 1,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
  [1916] = 1,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
  [1920] = 1,
    ACTIONS(371), 1,
      aux_sym_program_token1,
  [1924] = 1,
    ACTIONS(547), 1,
      aux_sym_variable_assignment_token4,
  [1928] = 1,
    ACTIONS(549), 1,
      anon_sym_EQ,
  [1932] = 1,
    ACTIONS(333), 1,
      aux_sym_variable_assignment_token4,
  [1936] = 1,
    ACTIONS(333), 1,
      sym_integer,
  [1940] = 1,
    ACTIONS(551), 1,
      sym_comparison_op,
  [1944] = 1,
    ACTIONS(553), 1,
      aux_sym_for_stmt_token3,
  [1948] = 1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [1952] = 1,
    ACTIONS(557), 1,
      sym_redirect_op,
  [1956] = 1,
    ACTIONS(331), 1,
      aux_sym_variable_assignment_token4,
  [1960] = 1,
    ACTIONS(559), 1,
      sym_redirect_target,
  [1964] = 1,
    ACTIONS(331), 1,
      sym_integer,
  [1968] = 1,
    ACTIONS(561), 1,
      aux_sym_for_stmt_token2,
  [1972] = 1,
    ACTIONS(563), 1,
      aux_sym_variable_assignment_token4,
  [1976] = 1,
    ACTIONS(565), 1,
      anon_sym_EQ,
  [1980] = 1,
    ACTIONS(567), 1,
      sym_comparison_op,
  [1984] = 1,
    ACTIONS(569), 1,
      anon_sym_EQ,
  [1988] = 1,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
  [1992] = 1,
    ACTIONS(573), 1,
      anon_sym_EQ,
  [1996] = 1,
    ACTIONS(575), 1,
      anon_sym_EQ,
  [2000] = 1,
    ACTIONS(577), 1,
      anon_sym_EQ,
  [2004] = 1,
    ACTIONS(427), 1,
      aux_sym_variable_assignment_token4,
  [2008] = 1,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
  [2012] = 1,
    ACTIONS(581), 1,
      sym_redirect_op,
  [2016] = 1,
    ACTIONS(583), 1,
      aux_sym_variable_assignment_token2,
  [2020] = 1,
    ACTIONS(585), 1,
      aux_sym_variable_assignment_token2,
  [2024] = 1,
    ACTIONS(587), 1,
      sym_redirect_target,
  [2028] = 1,
    ACTIONS(589), 1,
      aux_sym_variable_assignment_token2,
  [2032] = 1,
    ACTIONS(591), 1,
      aux_sym_variable_assignment_token2,
  [2036] = 1,
    ACTIONS(593), 1,
      aux_sym_for_stmt_token2,
  [2040] = 1,
    ACTIONS(595), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 149,
  [SMALL_STATE(5)] = 223,
  [SMALL_STATE(6)] = 297,
  [SMALL_STATE(7)] = 329,
  [SMALL_STATE(8)] = 361,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 411,
  [SMALL_STATE(11)] = 440,
  [SMALL_STATE(12)] = 470,
  [SMALL_STATE(13)] = 500,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 614,
  [SMALL_STATE(19)] = 630,
  [SMALL_STATE(20)] = 654,
  [SMALL_STATE(21)] = 670,
  [SMALL_STATE(22)] = 701,
  [SMALL_STATE(23)] = 732,
  [SMALL_STATE(24)] = 756,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 790,
  [SMALL_STATE(27)] = 804,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 838,
  [SMALL_STATE(30)] = 858,
  [SMALL_STATE(31)] = 878,
  [SMALL_STATE(32)] = 891,
  [SMALL_STATE(33)] = 904,
  [SMALL_STATE(34)] = 922,
  [SMALL_STATE(35)] = 940,
  [SMALL_STATE(36)] = 958,
  [SMALL_STATE(37)] = 969,
  [SMALL_STATE(38)] = 984,
  [SMALL_STATE(39)] = 999,
  [SMALL_STATE(40)] = 1014,
  [SMALL_STATE(41)] = 1025,
  [SMALL_STATE(42)] = 1035,
  [SMALL_STATE(43)] = 1045,
  [SMALL_STATE(44)] = 1057,
  [SMALL_STATE(45)] = 1073,
  [SMALL_STATE(46)] = 1087,
  [SMALL_STATE(47)] = 1103,
  [SMALL_STATE(48)] = 1117,
  [SMALL_STATE(49)] = 1133,
  [SMALL_STATE(50)] = 1147,
  [SMALL_STATE(51)] = 1161,
  [SMALL_STATE(52)] = 1177,
  [SMALL_STATE(53)] = 1191,
  [SMALL_STATE(54)] = 1203,
  [SMALL_STATE(55)] = 1217,
  [SMALL_STATE(56)] = 1231,
  [SMALL_STATE(57)] = 1242,
  [SMALL_STATE(58)] = 1251,
  [SMALL_STATE(59)] = 1262,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1284,
  [SMALL_STATE(62)] = 1295,
  [SMALL_STATE(63)] = 1306,
  [SMALL_STATE(64)] = 1317,
  [SMALL_STATE(65)] = 1326,
  [SMALL_STATE(66)] = 1337,
  [SMALL_STATE(67)] = 1347,
  [SMALL_STATE(68)] = 1357,
  [SMALL_STATE(69)] = 1363,
  [SMALL_STATE(70)] = 1369,
  [SMALL_STATE(71)] = 1377,
  [SMALL_STATE(72)] = 1383,
  [SMALL_STATE(73)] = 1393,
  [SMALL_STATE(74)] = 1401,
  [SMALL_STATE(75)] = 1409,
  [SMALL_STATE(76)] = 1417,
  [SMALL_STATE(77)] = 1425,
  [SMALL_STATE(78)] = 1435,
  [SMALL_STATE(79)] = 1440,
  [SMALL_STATE(80)] = 1447,
  [SMALL_STATE(81)] = 1454,
  [SMALL_STATE(82)] = 1461,
  [SMALL_STATE(83)] = 1466,
  [SMALL_STATE(84)] = 1473,
  [SMALL_STATE(85)] = 1480,
  [SMALL_STATE(86)] = 1485,
  [SMALL_STATE(87)] = 1490,
  [SMALL_STATE(88)] = 1497,
  [SMALL_STATE(89)] = 1504,
  [SMALL_STATE(90)] = 1509,
  [SMALL_STATE(91)] = 1516,
  [SMALL_STATE(92)] = 1521,
  [SMALL_STATE(93)] = 1528,
  [SMALL_STATE(94)] = 1535,
  [SMALL_STATE(95)] = 1540,
  [SMALL_STATE(96)] = 1547,
  [SMALL_STATE(97)] = 1552,
  [SMALL_STATE(98)] = 1559,
  [SMALL_STATE(99)] = 1564,
  [SMALL_STATE(100)] = 1569,
  [SMALL_STATE(101)] = 1576,
  [SMALL_STATE(102)] = 1583,
  [SMALL_STATE(103)] = 1588,
  [SMALL_STATE(104)] = 1593,
  [SMALL_STATE(105)] = 1598,
  [SMALL_STATE(106)] = 1605,
  [SMALL_STATE(107)] = 1610,
  [SMALL_STATE(108)] = 1615,
  [SMALL_STATE(109)] = 1622,
  [SMALL_STATE(110)] = 1627,
  [SMALL_STATE(111)] = 1634,
  [SMALL_STATE(112)] = 1639,
  [SMALL_STATE(113)] = 1644,
  [SMALL_STATE(114)] = 1649,
  [SMALL_STATE(115)] = 1656,
  [SMALL_STATE(116)] = 1661,
  [SMALL_STATE(117)] = 1666,
  [SMALL_STATE(118)] = 1671,
  [SMALL_STATE(119)] = 1676,
  [SMALL_STATE(120)] = 1681,
  [SMALL_STATE(121)] = 1686,
  [SMALL_STATE(122)] = 1691,
  [SMALL_STATE(123)] = 1696,
  [SMALL_STATE(124)] = 1701,
  [SMALL_STATE(125)] = 1706,
  [SMALL_STATE(126)] = 1711,
  [SMALL_STATE(127)] = 1716,
  [SMALL_STATE(128)] = 1721,
  [SMALL_STATE(129)] = 1728,
  [SMALL_STATE(130)] = 1733,
  [SMALL_STATE(131)] = 1738,
  [SMALL_STATE(132)] = 1743,
  [SMALL_STATE(133)] = 1748,
  [SMALL_STATE(134)] = 1753,
  [SMALL_STATE(135)] = 1758,
  [SMALL_STATE(136)] = 1763,
  [SMALL_STATE(137)] = 1770,
  [SMALL_STATE(138)] = 1777,
  [SMALL_STATE(139)] = 1782,
  [SMALL_STATE(140)] = 1787,
  [SMALL_STATE(141)] = 1792,
  [SMALL_STATE(142)] = 1796,
  [SMALL_STATE(143)] = 1800,
  [SMALL_STATE(144)] = 1804,
  [SMALL_STATE(145)] = 1808,
  [SMALL_STATE(146)] = 1812,
  [SMALL_STATE(147)] = 1816,
  [SMALL_STATE(148)] = 1820,
  [SMALL_STATE(149)] = 1824,
  [SMALL_STATE(150)] = 1828,
  [SMALL_STATE(151)] = 1832,
  [SMALL_STATE(152)] = 1836,
  [SMALL_STATE(153)] = 1840,
  [SMALL_STATE(154)] = 1844,
  [SMALL_STATE(155)] = 1848,
  [SMALL_STATE(156)] = 1852,
  [SMALL_STATE(157)] = 1856,
  [SMALL_STATE(158)] = 1860,
  [SMALL_STATE(159)] = 1864,
  [SMALL_STATE(160)] = 1868,
  [SMALL_STATE(161)] = 1872,
  [SMALL_STATE(162)] = 1876,
  [SMALL_STATE(163)] = 1880,
  [SMALL_STATE(164)] = 1884,
  [SMALL_STATE(165)] = 1888,
  [SMALL_STATE(166)] = 1892,
  [SMALL_STATE(167)] = 1896,
  [SMALL_STATE(168)] = 1900,
  [SMALL_STATE(169)] = 1904,
  [SMALL_STATE(170)] = 1908,
  [SMALL_STATE(171)] = 1912,
  [SMALL_STATE(172)] = 1916,
  [SMALL_STATE(173)] = 1920,
  [SMALL_STATE(174)] = 1924,
  [SMALL_STATE(175)] = 1928,
  [SMALL_STATE(176)] = 1932,
  [SMALL_STATE(177)] = 1936,
  [SMALL_STATE(178)] = 1940,
  [SMALL_STATE(179)] = 1944,
  [SMALL_STATE(180)] = 1948,
  [SMALL_STATE(181)] = 1952,
  [SMALL_STATE(182)] = 1956,
  [SMALL_STATE(183)] = 1960,
  [SMALL_STATE(184)] = 1964,
  [SMALL_STATE(185)] = 1968,
  [SMALL_STATE(186)] = 1972,
  [SMALL_STATE(187)] = 1976,
  [SMALL_STATE(188)] = 1980,
  [SMALL_STATE(189)] = 1984,
  [SMALL_STATE(190)] = 1988,
  [SMALL_STATE(191)] = 1992,
  [SMALL_STATE(192)] = 1996,
  [SMALL_STATE(193)] = 2000,
  [SMALL_STATE(194)] = 2004,
  [SMALL_STATE(195)] = 2008,
  [SMALL_STATE(196)] = 2012,
  [SMALL_STATE(197)] = 2016,
  [SMALL_STATE(198)] = 2020,
  [SMALL_STATE(199)] = 2024,
  [SMALL_STATE(200)] = 2028,
  [SMALL_STATE(201)] = 2032,
  [SMALL_STATE(202)] = 2036,
  [SMALL_STATE(203)] = 2040,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sep, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_sep, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_stmt, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_exec, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6, 0, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7, 0, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 4, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6, 0, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 5, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7, 0, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 6, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 8, 0, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect_stmt, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 8, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 9, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endlocal_stmt, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 9, 0, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 10, 0, 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 10, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_off, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_stmt, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stmt, 4, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setlocal_stmt, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [579] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
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
