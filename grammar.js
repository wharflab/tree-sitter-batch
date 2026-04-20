const ci = (word) => new RegExp(word.split('').map((c) => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c).join(''));
const kw = (word) => token(prec(10, ci(word)));
const operand = ($) => [
  $.cond_exec, $.pipe_stmt, $.redirect_stmt, $.call_stmt, $.cmd, $.parenthesized,
  $.variable_assignment, $.goto_stmt, $.exit_stmt, $.setlocal_stmt, $.endlocal_stmt,
  $.if_stmt, $.for_stmt, $.macro_invocation,
];

export default grammar({
  name: 'batch',
  extras: () => [/[ \t]/],
  word: ($) => $.command_name,
  conflicts: ($) => [
    [$.parenthesized, $.paren_expression],
  ],
  rules: {
    program: ($) => repeat(choice(seq($._stmt, /\r?\n/), /\r?\n/)),
    _stmt: ($) => choice(
      $.echo_off, $.comment, $.label, $.variable_assignment,
      $.if_stmt, $.goto_stmt, $.call_stmt, $.exit_stmt,
      $.setlocal_stmt, $.endlocal_stmt, $.for_stmt,
      $.redirect_stmt, $.pipe_stmt, $.cond_exec, $.command_sep,
      $.parenthesized, $.macro_invocation, $.cmd,
    ),
    echo_off: () => prec(10, seq('@', kw('echo'), choice(kw('off'), kw('on')))),
    comment: () => token(prec(10, choice(
      seq(optional('@'), /[rR][eE][mM]/, optional(seq(/[ \t]/, /[^\r\n]*/))),
      seq(':', /[^$a-zA-Z_\r\n]/, /[^\r\n]*/),
      seq('%#', /[^\r\n]*/, '#%'),
    ))),
    label: () => token(seq(':', /[$a-zA-Z_][$a-zA-Z0-9_.#-]*/, optional(seq(/[ \t]/, /[^\r\n]*/)))),
    variable_assignment: ($) => prec(8, seq(
      optional('@'), alias(kw('set'), $.set_keyword),
      choice(
        $.arithmetic_assignment,
        $.prompt_assignment,
        seq(
          /[ \t]+/,
          choice(
            seq('"', repeat1(choice($.variable_reference, alias($._quoted_var_name_pattern, $.variable_name))), '=', optional($.quoted_assignment_value), '"', optional($.argument_list)),
            seq('^"', repeat1(choice($.variable_reference, alias($._quoted_var_name_pattern, $.variable_name))), '=', optional($.caret_quoted_assignment_value), optional('^"')),
            seq(choice($.variable_reference, alias($._var_name_pattern, $.variable_name)), '=', optional($.assignment_value)),
          ),
        ),
      ),
    )),
    caret_quoted_assignment_value: ($) => prec.right(repeat1(choice(
      $.variable_reference,
      alias(/[^%!\r\n^]+/, $.assignment_literal),
      alias('%', $.assignment_literal),
      alias('!', $.assignment_literal),
      alias(token(prec(1, '^^')), $.assignment_literal),
      alias('^', $.assignment_literal),
    ))),
    _var_name_pattern: () => token(choice(
      /[$@a-zA-Z_][$@a-zA-Z0-9_.#()\[\]]*/,
      /\/[@a-zA-Z_][@a-zA-Z0-9_.#()\[\]]+/,
    )),
    _quoted_var_name_pattern: () => token(prec(1, choice(/[^\s="%][^="%]*/, /%%[a-zA-Z]?/, /"[^="\r\n]+"/))),
    arithmetic_assignment: ($) => seq(
      optional(/[ \t]+/), alias(ci('/a'), $.set_option),
      optional(/[ \t]+/), $.arithmetic_expression,
    ),
    prompt_assignment: ($) => seq(
      optional(/[ \t]+/), alias(ci('/p'), $.set_option),
      optional(/[ \t]+/),
      alias(/[@a-zA-Z_][@a-zA-Z0-9_()\[\]]*/, $.variable_name), '=', optional($.assignment_value),
    ),
    arithmetic_expression: () => token(choice(
      seq('"', /[^"\r\n]*/, '"'),
      /[^\r\n"]+/,
    )),
    assignment_value: ($) => prec.right(repeat1(choice(
      $.variable_reference,
      $.assignment_paren_group,
      alias(/[^%!()\r\n]+/, $.assignment_literal),
      alias('%', $.assignment_literal),
      alias('!', $.assignment_literal),
    ))),
    assignment_paren_group: ($) => seq('(', repeat(choice(
      $.variable_reference,
      $.assignment_paren_group,
      alias(/[^%!()\r\n]+/, $.assignment_literal),
      /\r?\n/,
      alias('%', $.assignment_literal),
      alias('!', $.assignment_literal),
    )), ')'),
    quoted_assignment_value: ($) => prec.right(repeat1(choice(
      $.variable_reference,
      alias(/[^%!"\r\n]+/, $.assignment_literal),
      alias('%', $.assignment_literal),
      alias('!', $.assignment_literal),
    ))),
    if_stmt: ($) => prec.right(8, seq(
      optional('@'), kw('if'),
      optional(alias(token(prec(2, ci('/i'))), $.if_option)),
      optional(kw('not')),
      choice(
        seq(kw('exist'), $._if_operand),
        seq(kw('defined'), choice(/[$a-zA-Z_][$a-zA-Z0-9_.]*/, $._if_operand)),
        seq(kw('errorlevel'), $.integer),
        seq(
          $._if_operand,
          $.comparison_op,
          $._if_operand,
        ),
      ),
      choice(
        // Parenthesized form: supports else clause
        seq($.parenthesized, optional($.else_clause)),
        // Inline command form: no else (ambiguous)
        $._body_stmt,
      ),
    )),
    else_clause: ($) => prec.right(8, seq(
      kw('else'),
      choice($.parenthesized, $._body_stmt),
    )),
    _body_stmt: ($) => choice(
      $.cmd, $.variable_assignment, $.call_stmt, $.goto_stmt, $.exit_stmt,
      $.setlocal_stmt, $.endlocal_stmt, $.if_stmt, $.for_stmt,
      $.redirect_stmt, $.pipe_stmt, $.comment,
    ),
    _if_operand: ($) => choice(
      $.string, $.bracketed_value,
      prec.right(seq(
        choice($.variable_reference, alias($._if_word, $.argument_value), $.integer),
        repeat(choice($.variable_reference, alias($._if_word_rest, $.argument_value))),
      )),
    ),
    _if_word: () => token(prec(1, /[^=<>\s\[\]"|&()%][^=<>\s"|&()%]*/)),
    _if_word_rest: () => token.immediate(/[^=<>\s\[\]"|&()%][^=<>\s"|&()%]*/),
    comparison_op: () => token(prec(10, choice('==', ci('equ'), ci('neq'), ci('lss'), ci('leq'), ci('gtr'), ci('geq')))),
    goto_stmt: ($) => prec(8, seq(
      optional('@'), kw('goto'),
      optional(choice(
        token(prec(10, ci(':eof'))),
        seq(token(seq(optional(':'), /[$a-zA-Z_][$a-zA-Z0-9_.#-]*/)), optional($.variable_reference)),
      )),
      optional($.comment),
    )),
    call_stmt: ($) => prec(8, seq(
      optional('@'), kw('call'),
      choice(token(seq(':', /[$a-zA-Z_][$a-zA-Z0-9_.#-]*/)), $.command_name, $.variable_reference),
      optional($.argument_list),
    )),
    exit_stmt: ($) => prec(8, seq(
      optional('@'), kw('exit'),
      optional(choice(
        seq(kw('/b'), choice($.integer, $.variable_reference)),
        kw('/b'),
        $.integer,
      )),
    )),
    setlocal_stmt: () => prec(8, seq(
      optional('@'), kw('setlocal'),
      repeat(choice(kw('enabledelayedexpansion'), kw('disabledelayedexpansion'), kw('enableextensions'), kw('disableextensions'))),
    )),
    endlocal_stmt: () => prec(8, seq(optional('@'), kw('endlocal'))),
    for_stmt: ($) => prec(8, seq(
      choice(
        seq(optional('@'), kw('for'), optional($.for_options)),
        $.variable_reference,
      ),
      $.for_variable,
      kw('in'), '(', optional($.for_set), ')', kw('do'),
      choice($.parenthesized, $._body_stmt),
    )),
    for_options: () => token(prec(10, choice(ci('/d'), seq(ci('/r'), optional(seq(/[ \t]+/, /(%[^\s%]|[^\s%])+%?/))), ci('/l'), seq(ci('/f'), optional(seq(/[ \t]+/, '"', /[^"]*/, '"')))))),
    for_variable: () => token(seq('%%', optional('~'), /[a-zA-Z]/)),
    for_set: ($) => prec.right(repeat1(choice(
      $.variable_reference,
      $.for_set_group,
      alias(/[^%!()\r\n]+/, $.for_set_literal),
      /\r?\n/,
      alias('%', $.for_set_literal),
      alias('!', $.for_set_literal),
    ))),
    for_set_group: ($) => seq('(', repeat(choice(
      $.variable_reference,
      $.for_set_group,
      alias(/[^%!()\r\n]+/, $.for_set_literal),
      alias('%', $.for_set_literal),
      alias('!', $.for_set_literal),
    )), ')'),
    parenthesized: ($) => seq('(', repeat(choice(seq($._stmt, /\r?\n/), /\r?\n/)), optional($._stmt), ')'),
    redirect_stmt: ($) => prec.right(4, choice(
      seq(choice($.call_stmt, $.cmd, $.parenthesized), $.redirection),
      seq($.redirection, choice($.call_stmt, $.cmd, $.parenthesized)),
    )),
    redirection: ($) => {
      const file_redir = seq(optional(/[0-2]/), $.redirect_op, $.redirect_target);
      const one_redir = choice(file_redir, $.fd_redirect);
      return prec.right(repeat1(one_redir));
    },
    fd_redirect: () => token(seq(optional(/[0-2]/), '>&', /[0-9]/)),
    redirect_op: () => token(choice('2>>', '2>', '>>', '>', '<')),
    redirect_target: () => token(choice(ci('nul'), ci('con'), /[^\s|&><\r\n]+/)),
    pipe_stmt: ($) => prec.left(3, seq(choice($.pipe_stmt, $.redirect_stmt, $.call_stmt, $.cmd, $.parenthesized), '|', choice($.redirect_stmt, $.call_stmt, $.cmd, $.parenthesized))),
    cond_exec: ($) => choice(
      prec.left(1, seq(choice(...operand($)), '&&', choice($.pipe_stmt, $.redirect_stmt, $.call_stmt, $.cmd, $.parenthesized))),
      prec.left(1, seq(choice(...operand($)), '||', choice($.pipe_stmt, $.redirect_stmt, $.call_stmt, $.cmd, $.parenthesized))),
    ),
    command_sep: ($) => prec.left(0, seq(
      choice($.command_sep, ...operand($)),
      '&',
      choice(...operand($), $.comment),
    )),
    variable_reference: () => token(choice(
      seq('%%', /[$@a-zA-Z_][$@a-zA-Z0-9_.#()\[\]]*/, '%%'),
      seq('%', /[$@a-zA-Z_][$@a-zA-Z0-9_.#()\[\]]*/, '%'),
      seq('%~', /[a-zA-Z]*/, /[0-9]/),
      seq('%', /[0-9]/),
      '%*',
      seq('%%%%%%', optional('~'), /[a-zA-Z0-9]/),
      seq('%%%%', optional('~'), /[a-zA-Z0-9]/),
      seq('%%', optional('~'), /[a-zA-Z]/),
      seq('%%', /[0-9]/),
      seq('!', /[$%a-zA-Z_][$a-zA-Z0-9_.#]*/, '!'),
      seq('%', /[$@a-zA-Z_][$@a-zA-Z0-9_.#()\[\]]*/, ':', /[^%\r\n]+/, '%'),
      seq('%', /[^%=\s\r\n]/, '%'),
      seq('!', /[%$a-zA-Z_][%$a-zA-Z0-9_.#()\[\]]*/, /:[^!\r\n]+/, '!'),
      seq('%', /[<>\/]+[@a-zA-Z_0-9.]*/, '%'),
      seq('%', /\\[@a-zA-Z_0-9.]+/, '%'),
      seq('%', /"[^"%\r\n]+"/, '%'),
    )),
    string: () => token(seq('"', /[^"\r\n]*/, '"')),
    bracketed_value: ($) => seq('[', repeat(choice($.variable_reference, alias(token(/[^%!\[\]\r\n]+/), $.bracketed_literal))), ']'),
    cmd: ($) => prec.right(5, choice(
      seq(optional('@'), alias(kw('echo'), $.command_name), optional(alias($._echo_text, $.argument_list))),
      seq(optional('@'), choice($.command_name, $.variable_reference), optional($.argument_list)),
    )),
    _echo_text: ($) => prec.right(repeat1(choice(
      $.variable_reference,
      $.string,
      alias($._echo_literal, $.argument_value),
    ))),
    _echo_literal: () => token(prec(-1, /(?:\^[&|<>^()]|[^\s|&><"\r\n%!()])+|[()!]/)),
    macro_invocation: ($) => prec.right(6, seq($.variable_reference, $.parenthesized, optional($.else_clause))),
    command_name: () => /[$a-zA-Z_][$a-zA-Z0-9_.#-]*/,
    argument_list: ($) => prec.right(repeat1($._arg)),
    _arg: ($) => choice($.string, $.variable_reference, $.command_option, $.paren_expression, $.argument_value),
    command_option: () => token(seq('/', /[a-zA-Z_?][a-zA-Z0-9_:]*/)),
    paren_expression: ($) => seq('(', repeat($._arg), ')'),
    argument_value: () => /(?:\^[&|<>^()]|[^\s|&><"\r\n%!()])(?:\^[&|<>^()]|[^\s|&><"\r\n()])*/,
    integer: () => /[0-9]+/,
  },
});
