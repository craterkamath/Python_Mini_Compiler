/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

  #include<stdio.h>
  #include "y.tab.h"
  int yydebug = 1;
  void updateType(int, const char*, const char* );

    typedef struct token_structure{
  		char* name;
  		char* type;
  		int scope;
  	}token_structure;


#line 80 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

union YYSTYPE
{
#line 17 "parser.y" /* yacc.c:355  */
struct token_structure* data;

#line 259 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 276 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  92
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  319

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    26,    27,    28,    31,    32,    35,    38,
      39,    42,    43,    44,    47,    48,    49,    50,    51,    54,
      57,    58,    61,    62,    65,    68,    69,    72,    73,    76,
      77,    78,    81,    82,    83,    84,    85,    86,    87,    90,
      93,    96,    97,    98,   101,   104,   107,   110,   111,   114,
     115,   118,   121,   124,   125,   126,   129,   132,   133,   136,
     139,   142,   143,   146,   149,   150,   153,   156,   157,   160,
     161,   162,   165,   168,   171,   172,   175,   178,   179,   182,
     183,   186,   189,   190,   193,   196,   197,   200,   201,   204,
     205,   208,   211,   212,   215,   218,   219,   222,   225,   226,
     229,   230,   233,   236,   237,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   252,   255,   258,   259,   262,
     265,   266,   269,   272,   273,   276,   279,   280,   281,   284,
     287,   288,   289,   292,   295,   296,   297,   298,   299,   302,
     303,   304,   305,   309,   312,   313,   316,   319,   320,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   334,   335,
     338,   339,   342,   345,   346,   349,   352,   353,   356,   357,
     360,   361,   362,   365,   366,   369,   372,   373,   376,   377,
     380,   381,   384,   385,   388,   391,   394,   395,   398,   399,
     402,   403,   406,   409,   410,   413,   416,   417,   420,   421,
     422
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_name", "T_number", "T_string",
  "T_newline", "T_eof", "T_semi_colon", "T_eq", "T_comma", "T_plus_eq",
  "T_minus_eq", "T_star_eq", "T_div_eq", "T_mod_eq", "T_or_eq", "T_xor_eq",
  "T_del", "T_pass", "T_break", "T_continue", "T_return", "T_import",
  "T_from", "T_star", "T_Lparan", "T_Rparan", "T_as", "T_dot", "T_if",
  "T_colon", "T_elif", "T_else", "T_for", "T_in", "T_indent", "T_dedent",
  "T_or", "T_and", "T_not", "T_lt", "T_gt", "T_deq", "T_ge", "T_le",
  "T_noteq", "T_is", "T_isnot", "T_notin", "T_bitwiseor", "T_bitwiseand",
  "T_bitwisexor", "T_leftshift", "T_rightshift", "T_plus", "T_minus",
  "T_divide", "T_mod", "T_double_divide", "T_tilde", "T_double_star",
  "T_squarebleft", "T_squarebright", "T_ellipsis", "T_none", "T_true",
  "T_false", "T_def", "$accept", "file_input", "stmt", "simple_stmt",
  "next_simple_stmt", "end_simple_stmt", "small_stmt", "expr_stmt",
  "next_expr_stmt", "last_expr_stmt", "testlist_star_expr",
  "first_testlist_star_expr", "last_testlist_star_expr",
  "end_testlist_star_expr", "augassign", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "optional_return", "import_stmt", "import_name", "import_from",
  "end_import_from", "import_as_name", "optional_t_name", "dotted_as_name",
  "import_as_names", "end_import_as_names", "dotted_as_names",
  "end_dotted_as_names", "dotted_name", "optional_dotted_name",
  "compound_stmt", "funcdef", "parameters", "optional_typedargslist",
  "typedargslist", "optional_eq_test", "repeat_optional_eq_test",
  "if_stmt", "elif_stmt", "for_stmt", "optional_else", "suite",
  "repeat_stmt", "test", "optional_if_else", "or_test", "repeat_or_test",
  "and_test", "repeat_and_test", "not_test", "comparison",
  "repeat_comp_expr", "comp_op", "star_expr", "expr", "repeat_expr",
  "xor_expr", "repeat_xor_expr", "and_expr", "repeat_and_expr",
  "shift_expr", "repeat_shift_expr", "arith_expr", "last_arith_expr",
  "term", "last_term", "factor", "power", "optional_factor", "atom_expr",
  "repeat_trailer", "atom", "optional_testlist_comp", "repeat_string",
  "testlist_comp", "first_testlist_comp", "last_testlist_comp",
  "repeat_testlist_comp", "end_testlist_comp", "trailer",
  "optional_arglist", "subscriptlist", "repeat_subscript", "subscript",
  "optional_test", "optional_sliceop", "sliceop", "exprlist",
  "first_exprlist", "last_exprlist", "optional_comma", "testlist",
  "repeat_test", "arglist", "repeat_argument", "argument", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -254

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-254)))

#define YYTABLE_NINF -182

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      67,  -254,  -254,    34,    67,  -254,   154,  -254,  -254,  -254,
     375,    25,    25,   219,   347,   375,   154,   375,   219,   219,
     219,   347,  -254,  -254,  -254,  -254,    51,    60,    67,  -254,
      19,  -254,    50,    40,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,    39,    37,
      42,  -254,  -254,   -12,    46,    32,    49,    41,    47,    -1,
    -254,    43,    -7,    34,  -254,  -254,  -254,  -254,  -254,    98,
    -254,   101,  -254,    92,   114,  -254,    97,   103,  -254,  -254,
    -254,   109,  -254,   120,   106,   104,  -254,  -254,  -254,  -254,
      80,   118,  -254,  -254,  -254,   237,  -254,  -254,   347,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   375,   347,
    -254,   375,  -254,   375,  -254,   375,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   219,   219,
    -254,   219,  -254,   219,  -254,   219,   219,  -254,   219,   219,
    -254,   219,   219,   219,   219,  -254,   219,  -254,   330,   142,
     375,  -254,    -7,  -254,   154,   138,   375,   138,    25,  -254,
      25,  -254,   146,  -254,    23,  -254,   347,  -254,   138,   302,
     375,  -254,   148,   121,  -254,    19,   144,  -254,  -254,    40,
      40,   122,    37,    42,   -12,    46,    32,    49,    41,    41,
      47,    47,    -1,    -1,    -1,    -1,  -254,   375,   375,   152,
     140,  -254,   159,  -254,   139,   108,   162,   147,  -254,    98,
    -254,  -254,   101,  -254,  -254,   114,  -254,    97,  -254,   170,
    -254,   167,  -254,   120,   120,  -254,  -254,   145,  -254,   150,
     153,   174,   158,  -254,   302,  -254,  -254,  -254,  -254,   375,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,   375,  -254,   330,   138,
    -254,   375,   138,   375,  -254,  -254,  -254,  -254,   172,   170,
    -254,  -254,  -254,   171,   375,   165,   302,   375,   176,  -254,
    -254,  -254,  -254,   159,  -254,   162,  -254,  -254,   169,  -254,
     167,   171,   173,   175,  -254,   165,  -254,   199,  -254,  -254,
    -254,   375,  -254,  -254,  -254,   171,   166,   302,   302,  -254,
     174,  -254,  -254,  -254,   150,  -254,   176,  -254,  -254
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   151,   152,   160,     2,     5,     0,    40,    44,    45,
      47,     0,     0,     0,   158,     0,     0,     0,     0,     0,
       0,   158,   154,   155,   156,   157,     0,     0,     2,     6,
      13,    14,    22,    27,    15,    16,    17,    41,    42,    43,
      18,    49,    50,     7,    71,    69,    70,    25,    92,    95,
      98,   101,    26,   103,   117,   120,   123,   126,   130,   134,
     139,   144,   147,   160,   153,     3,   187,   186,    39,   188,
      46,   193,    48,    67,    64,    51,    57,     0,   115,   163,
     164,     0,   159,   166,     0,     0,   100,   140,   141,   142,
       0,     0,     1,     4,    11,     0,     8,     9,     0,    32,
      33,    34,    35,    36,    37,    38,    19,    21,     0,    29,
      24,     0,    91,     0,    94,     0,    97,   111,   105,   106,
     107,   108,   109,   110,   113,   114,   112,   102,     0,     0,
     116,     0,   119,     0,   122,     0,     0,   125,     0,     0,
     129,     0,     0,     0,     0,   133,     0,   143,   173,     0,
     180,   146,   147,   161,     0,   190,     0,   190,     0,    66,
       0,    63,     0,    59,     0,   149,     0,   162,   190,     0,
       0,   150,    74,     0,    12,    13,    22,    20,    28,    27,
      27,     0,    95,    98,   103,   117,   120,   123,   126,   126,
     130,   130,   134,   134,   134,   134,   145,     0,     0,     0,
       0,   174,   196,   172,   178,     0,   176,     0,   148,   188,
     191,   185,   193,   192,    68,    64,    58,    57,    53,     0,
      52,    61,    55,   166,   166,   167,   165,     0,    87,    82,
       0,    77,     0,    75,     0,    10,    23,    30,    31,     0,
      96,    99,   104,   118,   121,   124,   127,   128,   131,   132,
     135,   136,   137,   138,   200,   199,     0,   170,     0,   190,
     171,   180,   190,   180,   189,   194,    65,    56,     0,     0,
      60,   168,   169,     0,     0,    85,     0,     0,    79,    73,
      72,    93,   198,   196,   195,   176,   175,   181,   182,    54,
      61,    89,     0,     0,    81,    85,    78,     0,    76,   197,
     177,   180,   179,   183,    62,    89,     0,     0,     0,    84,
      77,   184,    90,    88,    82,    86,    79,    83,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,    17,  -253,  -166,    33,  -254,   112,  -254,  -254,    36,
     115,  -254,  -136,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,   -54,     8,    57,     9,
     -60,  -254,    29,   -11,  -254,  -254,  -254,  -254,  -254,  -254,
     -78,   -82,  -254,   -67,  -254,   -46,  -225,   -55,   -10,  -254,
     141,    72,   155,    82,    -9,  -254,    85,  -254,    -4,     0,
      81,   143,    84,   149,    86,   156,  -142,   -22,   -75,   -21,
    -115,    22,  -254,  -254,  -254,   119,  -254,   255,   215,  -254,
    -254,  -254,  -104,  -254,  -254,  -254,  -254,    -3,    26,  -248,
    -254,  -254,   272,   136,    87,  -150,   -94,    83,  -254,    11,
      52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    96,    97,    30,    31,   106,   107,
      32,    33,   110,   178,   108,    34,    35,    36,    37,    38,
      39,    70,    40,    41,    42,   220,   221,   163,    74,   222,
     270,    75,   161,    76,   159,    43,    44,   173,   232,   233,
     278,   298,    45,   275,    46,   294,   229,   306,    47,   112,
      48,   114,    49,   116,    50,    51,   127,   128,    52,    53,
     130,    54,   132,    55,   134,    56,   137,    57,   140,    58,
     145,    59,    60,   147,    61,   151,    62,    81,    64,    82,
      83,   167,   168,   225,   152,   200,   205,   262,   206,   207,
     302,   303,    68,    69,   155,   211,    72,   157,   201,   259,
     202
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    77,    66,   228,    79,    84,    67,   213,    86,   280,
      80,    79,    66,    78,   177,   288,    67,    80,   226,   148,
     291,    65,   149,   117,   141,    94,   217,    95,    73,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   305,    63,
      87,    88,    89,   237,   238,    93,   246,   247,   218,   219,
     109,   295,   305,   311,    91,   150,   142,   143,   144,    98,
      92,    99,   100,   101,   102,   103,   104,   105,   228,   111,
       1,     2,     3,     4,     5,   113,   230,   250,   251,   252,
     253,   115,   314,   315,   131,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   135,   136,   129,    15,    71,   179,
     133,    16,   138,   139,   146,   180,   183,    17,   154,   284,
     228,   156,   286,   188,   189,   248,   249,   190,   191,   271,
     272,   158,    18,    19,   160,   162,   164,    20,   184,    21,
     166,    22,    23,    24,    25,    26,   165,   169,   199,   170,
     204,   228,   228,   171,   172,   203,   212,   214,   210,   216,
      66,   231,   234,    98,    67,   239,   223,     1,     2,     3,
      71,   256,   224,   192,   193,   194,   195,   257,   196,   258,
    -181,   260,   261,   217,     1,     2,     3,   269,   263,    13,
      14,   273,   274,   277,   276,   279,   297,   254,   255,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   293,   289,
     301,    15,   310,   313,   307,    16,   308,   175,   235,    18,
      19,    17,   236,   176,    20,   290,    21,   215,    22,    23,
      24,    25,     1,     2,     3,   267,    18,    19,   268,   281,
     304,    20,   316,    21,   318,    22,    23,    24,    25,    26,
       1,     2,     3,   174,   266,    14,   282,   317,   199,   309,
     312,   204,   181,   287,   240,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   292,   241,   243,   296,   182,   242,
     244,   208,   185,   245,    18,    19,    90,    17,   153,    20,
     186,    21,   300,    22,    23,    24,    25,   285,    85,   187,
     209,   287,    18,    19,   299,   265,   264,    20,     0,    21,
       0,    22,    23,    24,    25,     1,     2,     3,   227,     0,
     283,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     1,     2,     3,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     0,     0,   197,    14,    18,    19,     0,
       0,     0,    20,     0,    21,     0,    22,    23,    24,    25,
      17,     0,    13,    14,     0,     0,     0,     0,     1,     2,
       3,     0,     0,     0,     0,    18,    19,    17,     0,     0,
      20,   198,    21,     0,    22,    23,    24,    25,     0,     0,
       0,    14,    18,    19,     0,     0,     0,    20,     0,    21,
       0,    22,    23,    24,    25,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,     0,     0,     0,    20,     0,    21,     0,    22,
      23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      10,    12,     6,   169,    14,    15,     6,   157,    17,   234,
      14,    21,    16,    13,   108,   263,    16,    21,   168,    26,
     273,     4,    29,    35,    25,     6,     3,     8,     3,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   291,     5,
      18,    19,    20,   179,   180,    28,   188,   189,    25,    26,
      10,   276,   305,   301,     3,    62,    57,    58,    59,     9,
       0,    11,    12,    13,    14,    15,    16,    17,   234,    30,
       3,     4,     5,     6,     7,    38,   170,   192,   193,   194,
     195,    39,   307,   308,    52,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    53,    54,    50,    30,   108,   109,
      51,    34,    55,    56,    61,   109,   115,    40,    10,   259,
     276,    10,   262,   135,   136,   190,   191,   138,   139,   223,
     224,    29,    55,    56,    10,    28,    23,    60,   128,    62,
      10,    64,    65,    66,    67,    68,    27,    31,   148,    35,
     150,   307,   308,    63,    26,     3,   156,   158,    10,     3,
     154,     3,    31,     9,   154,    33,   166,     3,     4,     5,
     170,     9,   166,   141,   142,   143,   144,    27,   146,    10,
      31,    63,    10,     3,     3,     4,     5,    10,    31,    25,
      26,    36,    32,     9,    31,    27,    10,   197,   198,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    33,    27,
      31,    30,     3,    37,    31,    34,    31,    95,   175,    55,
      56,    40,   176,    98,    60,   269,    62,   160,    64,    65,
      66,    67,     3,     4,     5,   217,    55,    56,   219,   239,
     290,    60,   310,    62,   316,    64,    65,    66,    67,    68,
       3,     4,     5,     6,   215,    26,   256,   314,   258,   295,
     305,   261,   111,   263,   182,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   274,   183,   185,   277,   113,   184,
     186,   152,   129,   187,    55,    56,    21,    40,    63,    60,
     131,    62,   285,    64,    65,    66,    67,   261,    16,   133,
     154,   301,    55,    56,   283,   212,   209,    60,    -1,    62,
      -1,    64,    65,    66,    67,     3,     4,     5,     6,    -1,
     258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    25,    26,    55,    56,    -1,
      -1,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      40,    -1,    25,    26,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    55,    56,    40,    -1,    -1,
      60,    61,    62,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    26,    55,    56,    -1,    -1,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      65,    66,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    30,    34,    40,    55,    56,
      60,    62,    64,    65,    66,    67,    68,    70,    71,    72,
      75,    76,    79,    80,    84,    85,    86,    87,    88,    89,
      91,    92,    93,   104,   105,   111,   113,   117,   119,   121,
     123,   124,   127,   128,   130,   132,   134,   136,   138,   140,
     141,   143,   145,     5,   147,    70,   127,   128,   161,   162,
      90,   117,   165,     3,    97,   100,   102,   102,   128,   117,
     127,   146,   148,   149,   117,   161,   123,   140,   140,   140,
     146,     3,     0,    70,     6,     8,    73,    74,     9,    11,
      12,    13,    14,    15,    16,    17,    77,    78,    83,    10,
      81,    30,   118,    38,   120,    39,   122,    35,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   125,   126,    50,
     129,    52,   131,    51,   133,    53,    54,   135,    55,    56,
     137,    25,    57,    58,    59,   139,    61,   142,    26,    29,
      62,   144,   153,   147,    10,   163,    10,   166,    29,   103,
      10,   101,    28,    96,    23,    27,    10,   150,   151,    31,
      35,    63,    26,   106,     6,    75,    79,   165,    82,   117,
     127,   119,   121,   123,   128,   130,   132,   134,   136,   136,
     138,   138,   140,   140,   140,   140,   140,    25,    61,   117,
     154,   167,   169,     3,   117,   155,   157,   158,   144,   162,
      10,   164,   117,   164,   102,    97,     3,     3,    25,    26,
      94,    95,    98,   117,   127,   152,   164,     6,    72,   115,
     165,     3,   107,   108,    31,    73,    78,    81,    81,    33,
     120,   122,   125,   129,   131,   133,   135,   135,   137,   137,
     139,   139,   139,   139,   117,   117,     9,    27,    10,   168,
      63,    10,   156,    31,   163,   166,   101,    96,    98,    10,
      99,   151,   151,    36,    32,   112,    31,     9,   109,    27,
     115,   117,   117,   169,   164,   157,   164,   117,   158,    27,
      95,    71,   117,    33,   114,   115,   117,    10,   110,   168,
     156,    31,   159,   160,    99,    71,   116,    31,    31,   114,
       3,   158,   116,    37,   115,   115,   109,   112,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    71,    71,    72,    73,
      73,    74,    74,    74,    75,    75,    75,    75,    75,    76,
      77,    77,    78,    78,    79,    80,    80,    81,    81,    82,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    84,
      85,    86,    86,    86,    87,    88,    89,    90,    90,    91,
      91,    92,    93,    94,    94,    94,    95,    96,    96,    97,
      98,    99,    99,   100,   101,   101,   102,   103,   103,   104,
     104,   104,   105,   106,   107,   107,   108,   109,   109,   110,
     110,   111,   112,   112,   113,   114,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   120,   120,   121,   122,   122,
     123,   123,   124,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   128,   129,   129,   130,
     131,   131,   132,   133,   133,   134,   135,   135,   135,   136,
     137,   137,   137,   138,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   141,   142,   142,   143,   144,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   146,   146,
     147,   147,   148,   149,   149,   150,   151,   151,   152,   152,
     153,   153,   153,   154,   154,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   161,   162,   162,   163,   163,
     164,   164,   165,   166,   166,   167,   168,   168,   169,   169,
     169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     2,     1,
       3,     1,     2,     0,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     1,
       1,     2,     4,     1,     3,     1,     2,     0,     2,     2,
       2,     0,     3,     2,     0,     3,     2,     0,     2,     1,
       1,     1,     5,     3,     0,     1,     3,     0,     2,     0,
       4,     6,     0,     5,     7,     0,     3,     1,     5,     0,
       2,     2,     0,     4,     2,     0,     3,     2,     0,     3,
       2,     1,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     3,     2,
       0,     3,     2,     0,     3,     2,     0,     3,     3,     2,
       0,     3,     3,     2,     0,     3,     3,     3,     3,     1,
       2,     2,     2,     2,     0,     2,     2,     0,     2,     3,
       3,     1,     1,     2,     1,     1,     1,     1,     0,     1,
       0,     2,     2,     1,     1,     2,     0,     2,     2,     2,
       3,     3,     2,     0,     1,     3,     0,     3,     1,     4,
       0,     1,     0,     1,     2,     3,     1,     1,     0,     3,
       0,     1,     3,     0,     3,     3,     0,     3,     3,     2,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 56:
#line 129 "parser.y" /* yacc.c:1646  */
    {updateType((yyvsp[-1].data->scope), (yyvsp[-1].data->name), "package_name"); }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 133 "parser.y" /* yacc.c:1646  */
    {updateType((yyvsp[0].data->scope), (yyvsp[0].data->name), "package_alias"); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 153 "parser.y" /* yacc.c:1646  */
    {updateType((yyvsp[-1].data->scope), (yyvsp[-1].data->name), "package_name"); }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 165 "parser.y" /* yacc.c:1646  */
    {updateType((yyvsp[-3].data->scope), (yyvsp[-3].data->name), "function_name"); }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1672 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
