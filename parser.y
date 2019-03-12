%{
  #include<stdio.h>
  #include "y.tab.h"
  int yydebug = 1;
  void updateType(int, const char*, const char* );

    typedef struct token_structure{
  		char* name;
  		char* type;
  		int scope;
  	}token_structure;

%}

%start file_input
%token T_name T_number T_string T_newline T_eof T_semi_colon T_eq T_comma T_plus_eq T_minus_eq T_star_eq T_div_eq T_mod_eq T_or_eq T_xor_eq T_del T_pass T_break T_continue T_return T_import T_from T_star T_Lparan T_Rparan T_as T_dot T_if T_colon T_elif T_else T_for T_in T_indent T_dedent T_or T_and T_not T_lt T_gt T_deq T_ge T_le T_noteq T_is T_isnot T_notin T_bitwiseor T_bitwiseand T_bitwisexor T_leftshift T_rightshift T_plus T_minus T_divide T_mod T_double_divide T_tilde T_double_star   T_squarebleft T_squarebright T_ellipsis T_none T_true T_false T_def
%union {struct token_structure* data;};
%left T_and T_or T_in T_notin T_bitwiseor T_bitwiseand
%left T_ge T_le T_eq T_deq T_noteq T_gt T_lt
%left T_plus T_minus
%left T_star T_divide
%%

file_input
	: %empty
	| T_newline file_input
	| stmt file_input
	| T_eof

stmt
	: simple_stmt
	| compound_stmt

simple_stmt
	: small_stmt next_simple_stmt

next_simple_stmt
	: end_simple_stmt
	| T_semi_colon small_stmt next_simple_stmt

end_simple_stmt
	: T_newline
	| T_semi_colon T_newline
	| %empty

small_stmt
	: expr_stmt
	| del_stmt
	| pass_stmt
	| flow_stmt
	| import_stmt

expr_stmt
	: testlist_star_expr next_expr_stmt

next_expr_stmt
	: augassign testlist
	| last_expr_stmt

last_expr_stmt
	: %empty
	| T_eq testlist_star_expr last_expr_stmt

testlist_star_expr
	: first_testlist_star_expr last_testlist_star_expr

first_testlist_star_expr
	: test
	| star_expr

last_testlist_star_expr
	: %empty
	| T_comma end_testlist_star_expr

end_testlist_star_expr
	: %empty
	| test last_testlist_star_expr
	| star_expr last_testlist_star_expr

augassign
	: T_plus_eq
	| T_minus_eq
	| T_star_eq
	| T_div_eq
	| T_mod_eq
	| T_or_eq
	| T_xor_eq

del_stmt
	: T_del	exprlist

pass_stmt
	: T_pass

flow_stmt
	: break_stmt
	| continue_stmt
	| return_stmt

break_stmt
	: T_break

continue_stmt
	: T_continue

return_stmt
	: T_return optional_return

optional_return
	: %empty
	| testlist

import_stmt
	: import_name
	| import_from

import_name
	: T_import dotted_as_names

import_from
	: T_from dotted_name T_import end_import_from

end_import_from
	: T_star
	| T_Lparan import_as_names T_Rparan
	| import_as_names

import_as_name
	: T_name optional_t_name {updateType($<data->scope>1, $<data->name>1, "package_name"); }

optional_t_name
	: %empty
	| T_as T_name {updateType($<data->scope>2, $<data->name>2, "package_alias"); }

dotted_as_name
	: dotted_name optional_t_name

import_as_names
	: import_as_name end_import_as_names

end_import_as_names
	: %empty
	| T_comma import_as_name end_import_as_names

dotted_as_names
	: dotted_as_name end_dotted_as_names

end_dotted_as_names
	: %empty
	| T_comma dotted_as_name end_dotted_as_names

dotted_name
	: T_name optional_dotted_name {updateType($<data->scope>1, $<data->name>1, "package_name"); }

optional_dotted_name
	: %empty
	| T_dot dotted_name

compound_stmt
	: if_stmt
	| for_stmt
	| funcdef

funcdef
	: T_def T_name parameters T_colon suite {updateType($<data->scope>2, $<data->name>2, "function_name"); }

parameters
	: T_Lparan optional_typedargslist T_Rparan

optional_typedargslist
	: %empty
	| typedargslist

typedargslist
	: T_name optional_eq_test repeat_optional_eq_test

optional_eq_test
	: %empty
	| T_eq test

repeat_optional_eq_test
	: %empty
	| T_comma T_name optional_eq_test repeat_optional_eq_test

if_stmt
	: T_if test T_colon suite elif_stmt optional_else

elif_stmt
	: %empty
	| T_elif test T_colon suite elif_stmt

for_stmt
	: T_for exprlist T_in testlist T_colon suite optional_else

optional_else
	: %empty
	| T_else	T_colon suite

suite
	: simple_stmt
	| T_newline T_indent stmt repeat_stmt T_dedent

repeat_stmt
	: %empty
	| stmt repeat_stmt

test
	: or_test optional_if_else

optional_if_else
	: %empty
	| T_if or_test T_else test

or_test
	: and_test repeat_or_test

repeat_or_test
	: %empty
	| T_or and_test repeat_or_test

and_test
	: not_test repeat_and_test

repeat_and_test
	: %empty
	| T_and not_test repeat_and_test

not_test
	: T_not not_test
	| comparison

comparison
	: expr repeat_comp_expr

repeat_comp_expr
	: %empty
	| comp_op expr repeat_comp_expr

comp_op
	: T_lt
	| T_gt
	| T_deq
	| T_ge
	| T_le
	| T_noteq
	| T_in
	| T_notin
	| T_is
	| T_isnot

star_expr
	: T_star expr

expr
	: xor_expr repeat_expr

repeat_expr
	: %empty
	| T_bitwiseor xor_expr repeat_expr

xor_expr
	: and_expr repeat_xor_expr

repeat_xor_expr
	: %empty
	| T_bitwisexor and_expr repeat_xor_expr

and_expr
	: shift_expr repeat_and_expr

repeat_and_expr
	: %empty
	| T_bitwiseand shift_expr repeat_and_expr

shift_expr
	: arith_expr repeat_shift_expr

repeat_shift_expr
	: %empty
	| T_leftshift arith_expr repeat_shift_expr
	| T_rightshift arith_expr repeat_shift_expr

arith_expr
	: term last_arith_expr

last_arith_expr
	: %empty
	| T_plus term last_arith_expr
	| T_minus term last_arith_expr

term
	: factor last_term

last_term
	: %empty
	| T_star factor last_term
	| T_divide factor last_term
	| T_mod factor last_term
	| T_double_divide factor last_term

factor
	: power
	| T_plus factor
	| T_minus factor
	| T_tilde factor


power
	: atom_expr optional_factor
	
optional_factor
	: %empty
	| T_double_star factor

atom_expr
	: atom repeat_trailer

repeat_trailer
	: %empty
	| trailer repeat_trailer

atom
	: T_Lparan optional_testlist_comp T_Rparan
	| T_squarebleft optional_testlist_comp T_squarebright
	| T_name
	| T_number
	| T_string repeat_string
	| T_ellipsis
	| T_none
	| T_true
	| T_false

optional_testlist_comp
	: %empty
	| testlist_comp

repeat_string
	: %empty
	| T_string repeat_string

testlist_comp
	: first_testlist_comp last_testlist_comp

first_testlist_comp
	: test
	| star_expr

last_testlist_comp
	: repeat_testlist_comp optional_comma

repeat_testlist_comp
	: %empty
	| T_comma end_testlist_comp

end_testlist_comp
	: test repeat_testlist_comp
	| star_expr repeat_testlist_comp

trailer
	: T_Lparan optional_arglist T_Rparan
	| T_squarebleft subscriptlist T_squarebright
	| T_dot T_name

optional_arglist
	: %empty
	| arglist

subscriptlist
	: subscript repeat_subscript optional_comma

repeat_subscript
	: %empty
	| T_comma subscript repeat_subscript

subscript
	: test
	| optional_test T_colon optional_test optional_sliceop

optional_test
	: %empty
	| test

optional_sliceop
	: %empty
	| sliceop

sliceop
	: T_colon optional_test

exprlist
	: first_exprlist last_exprlist optional_comma

first_exprlist
	: expr
	| star_expr

last_exprlist
	: %empty
	| T_comma first_exprlist last_exprlist

optional_comma
	: %empty
	| T_comma

testlist
	: test repeat_test optional_comma

repeat_test
	: %empty
	| T_comma test repeat_test

arglist
	: argument repeat_argument optional_comma

repeat_argument
	: %empty
	| T_comma argument repeat_argument

argument
	: test T_eq test
	| T_double_star test
	| T_star test
