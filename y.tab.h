/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_name = 258,
    T_number = 259,
    T_string = 260,
    T_newline = 261,
    T_eof = 262,
    T_semi_colon = 263,
    T_eq = 264,
    T_comma = 265,
    T_plus_eq = 266,
    T_minus_eq = 267,
    T_star_eq = 268,
    T_div_eq = 269,
    T_mod_eq = 270,
    T_or_eq = 271,
    T_xor_eq = 272,
    T_del = 273,
    T_pass = 274,
    T_break = 275,
    T_continue = 276,
    T_return = 277,
    T_import = 278,
    T_from = 279,
    T_star = 280,
    T_Lparan = 281,
    T_Rparan = 282,
    T_as = 283,
    T_dot = 284,
    T_if = 285,
    T_colon = 286,
    T_elif = 287,
    T_else = 288,
    T_for = 289,
    T_in = 290,
    T_indent = 291,
    T_dedent = 292,
    T_or = 293,
    T_and = 294,
    T_not = 295,
    T_lt = 296,
    T_gt = 297,
    T_deq = 298,
    T_ge = 299,
    T_le = 300,
    T_noteq = 301,
    T_is = 302,
    T_isnot = 303,
    T_notin = 304,
    T_bitwiseor = 305,
    T_bitwiseand = 306,
    T_bitwisexor = 307,
    T_leftshift = 308,
    T_rightshift = 309,
    T_plus = 310,
    T_minus = 311,
    T_divide = 312,
    T_mod = 313,
    T_double_divide = 314,
    T_tilde = 315,
    T_double_star = 316,
    T_squarebleft = 317,
    T_squarebright = 318,
    T_ellipsis = 319,
    T_none = 320,
    T_true = 321,
    T_false = 322,
    T_def = 323
  };
#endif
/* Tokens.  */
#define T_name 258
#define T_number 259
#define T_string 260
#define T_newline 261
#define T_eof 262
#define T_semi_colon 263
#define T_eq 264
#define T_comma 265
#define T_plus_eq 266
#define T_minus_eq 267
#define T_star_eq 268
#define T_div_eq 269
#define T_mod_eq 270
#define T_or_eq 271
#define T_xor_eq 272
#define T_del 273
#define T_pass 274
#define T_break 275
#define T_continue 276
#define T_return 277
#define T_import 278
#define T_from 279
#define T_star 280
#define T_Lparan 281
#define T_Rparan 282
#define T_as 283
#define T_dot 284
#define T_if 285
#define T_colon 286
#define T_elif 287
#define T_else 288
#define T_for 289
#define T_in 290
#define T_indent 291
#define T_dedent 292
#define T_or 293
#define T_and 294
#define T_not 295
#define T_lt 296
#define T_gt 297
#define T_deq 298
#define T_ge 299
#define T_le 300
#define T_noteq 301
#define T_is 302
#define T_isnot 303
#define T_notin 304
#define T_bitwiseor 305
#define T_bitwiseand 306
#define T_bitwisexor 307
#define T_leftshift 308
#define T_rightshift 309
#define T_plus 310
#define T_minus 311
#define T_divide 312
#define T_mod 313
#define T_double_divide 314
#define T_tilde 315
#define T_double_star 316
#define T_squarebleft 317
#define T_squarebright 318
#define T_ellipsis 319
#define T_none 320
#define T_true 321
#define T_false 322
#define T_def 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
