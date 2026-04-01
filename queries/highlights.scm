; Echo off/on
(echo_off) @keyword

; Comments
(comment) @comment

; Labels
(label) @label

; Variable assignment
(set_keyword) @keyword
(variable_name) @variable
(set_option) @constant
(assignment_value) @string

; IF/FOR/GOTO/CALL statements
(if_stmt) @keyword
(for_stmt) @keyword
(goto_stmt) @keyword
(call_stmt) @keyword
(setlocal_stmt) @keyword
(endlocal_stmt) @keyword
(exit_stmt) @keyword

; Operators
(comparison_op) @operator
(redirect_op) @operator

; Commands
(command_name) @function

; Variables
(variable_reference) @variable

; FOR loop variables
(for_variable) @variable.parameter

; FOR options
(for_options) @constant

; Strings
(string) @string

; Numbers
(integer) @number

; Command options/flags
(command_option) @constant

; Argument values
(argument_value) @string

; Redirect targets
(redirect_target) @string.special
