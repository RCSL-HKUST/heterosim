/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         frm2bin_yyparse
#define yylex           frm2bin_yylex
#define yyerror         frm2bin_yyerror
#define yydebug         frm2bin_yydebug
#define yynerrs         frm2bin_yynerrs

#define yylval          frm2bin_yylval
#define yychar          frm2bin_yychar

/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <lib/util/debug.h>
#include <lib/util/hash-table.h>
#include <lib/util/elf-encode.h>
#include <lib/util/list.h>

#include "id.h"
#include "frm2bin.h"
#include "arg.h"
#include "inst.h"
#include "inst-info.h"
#include "inner-bin.h"
#include "outer-bin.h"

/*
#include "stream.h"
#include "symbol.h"
*/

#define YYERROR_VERBOSE


#line 102 "parser.c" /* yacc.c:339  */

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
#ifndef YY_FRM2BIN_YY_Y_TAB_H_INCLUDED
# define YY_FRM2BIN_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int frm2bin_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_PRED = 258,
    TOK_PRED_REGISTER = 259,
    TOK_ZERO_REGISTER = 260,
    TOK_SCALAR_REGISTER = 261,
    TOK_SPECIAL_REGISTER = 262,
    TOK_CCOP = 263,
    TOK_DECIMAL = 264,
    TOK_HEX = 265,
    TOK_PT = 266,
    TOK_ARG_TYPE = 267,
    TOK_ID = 268,
    TOK_COMMA = 269,
    TOK_COLON = 270,
    TOK_ADD = 271,
    TOK_SEMICOLON = 272,
    TOK_OBRA = 273,
    TOK_CBRA = 274,
    TOK_OPAR = 275,
    TOK_CPAR = 276,
    TOK_NEW_LINE = 277,
    TOK_AMP = 278,
    TOK_ABS = 279,
    TOK_NEG = 280,
    TOK_NUM = 281,
    TOK_GLOBAL = 282,
    TOK_ARGS = 283,
    TOK_TEXT = 284
  };
#endif
/* Tokens.  */
#define TOK_PRED 258
#define TOK_PRED_REGISTER 259
#define TOK_ZERO_REGISTER 260
#define TOK_SCALAR_REGISTER 261
#define TOK_SPECIAL_REGISTER 262
#define TOK_CCOP 263
#define TOK_DECIMAL 264
#define TOK_HEX 265
#define TOK_PT 266
#define TOK_ARG_TYPE 267
#define TOK_ID 268
#define TOK_COMMA 269
#define TOK_COLON 270
#define TOK_ADD 271
#define TOK_SEMICOLON 272
#define TOK_OBRA 273
#define TOK_CBRA 274
#define TOK_OPAR 275
#define TOK_CPAR 276
#define TOK_NEW_LINE 277
#define TOK_AMP 278
#define TOK_ABS 279
#define TOK_NEG 280
#define TOK_NUM 281
#define TOK_GLOBAL 282
#define TOK_ARGS 283
#define TOK_TEXT 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 29 "parser.y" /* yacc.c:355  */

	int num;
  	struct frm_id_t *id;
  	struct frm2bin_inst_t *inst;
  	struct frm_label_t *label;
  	struct list_t *list;
  	struct frm_arg_t *arg;
  	struct frm_mod_t *mod;
  	struct frm2bin_pred_t *pred;

#line 211 "parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE frm2bin_yylval;

int frm2bin_yyparse (void);

#endif /* !YY_FRM2BIN_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   58

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  67

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    79,    83,    84,    88,    92,    93,    97,
     101,   118,   139,   140,   144,   148,   149,   153,   169,   170,
     174,   178,   179,   183,   219,   223,   247,   269,   273,   287,
     296,   302,   308,   314,   320,   325,   336,   343,   371,   382,
     396,   406,   414,   422
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_PRED", "TOK_PRED_REGISTER",
  "TOK_ZERO_REGISTER", "TOK_SCALAR_REGISTER", "TOK_SPECIAL_REGISTER",
  "TOK_CCOP", "TOK_DECIMAL", "TOK_HEX", "TOK_PT", "TOK_ARG_TYPE", "TOK_ID",
  "TOK_COMMA", "TOK_COLON", "TOK_ADD", "TOK_SEMICOLON", "TOK_OBRA",
  "TOK_CBRA", "TOK_OPAR", "TOK_CPAR", "TOK_NEW_LINE", "TOK_AMP", "TOK_ABS",
  "TOK_NEG", "TOK_NUM", "TOK_GLOBAL", "TOK_ARGS", "TOK_TEXT", "$accept",
  "program", "kernel_list", "kernel", "section_list", "section",
  "global_section", "args_section", "args_header", "args_stmt_list",
  "args_stmt", "text_section", "text_header", "text_stmt_list",
  "text_stmt", "rl_instr", "rl_arg_list", "rl_operand", "rl_arg", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

#define YYPACT_NINF -35

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-35)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -8,   -26,   -10,    17,   -35,   -26,   -13,   -35,     2,   -35,
     -35,     7,     8,   -35,   -13,   -35,    19,   -35,    -1,   -35,
     -35,   -35,   -35,    10,   -35,    19,    20,     0,   -35,   -35,
      -1,    18,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,    21,    16,   -35,   -35,    23,   -35,    12,
     -35,    26,     9,    24,     0,   -35,    25,    28,   -35,   -35,
     -35,    27,    29,    30,   -35,    31,   -35
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     0,     3,     0,     1,
       5,     0,     0,     6,     7,     9,    12,    10,    18,    11,
      14,    20,     8,     0,    13,    15,     0,    27,    24,    19,
      21,     0,    17,    16,    27,    33,    32,    30,    31,    42,
      34,    35,    41,    43,     0,    26,    36,    28,    22,     0,
      25,     0,     0,     0,    27,    23,     0,     0,    38,    40,
      29,     0,     0,     0,    39,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,    22,   -35,    32,   -35,   -35,   -35,   -35,    33,
     -35,   -35,   -35,    11,   -35,   -35,   -34,   -35,   -35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    13,    14,     6,    15,    16,    24,
      25,    17,    18,    29,    30,    31,    45,    46,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,     2,    26,     8,    35,    36,    37,    38,    39,    40,
      41,    42,    27,    43,     1,    11,    12,     9,    44,     2,
      60,    28,    52,     7,    19,    57,    53,    10,    58,    20,
      21,    23,    32,    34,    55,    49,    56,    54,    62,    51,
      65,    48,     0,    59,    61,    63,    22,     0,    64,     0,
      66,     0,     0,     0,     0,     0,     0,     0,    33
};

static const yytype_int8 yycheck[] =
{
      34,    27,     3,    13,     4,     5,     6,     7,     8,     9,
      10,    11,    13,    13,    22,    28,    29,     0,    18,    27,
      54,    22,     6,     1,    22,    16,    10,     5,    19,    22,
      22,    12,    22,    13,    22,    17,    10,    14,    10,    18,
      10,    30,    -1,    19,    19,    18,    14,    -1,    19,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    27,    31,    32,    33,    36,    32,    13,     0,
      32,    28,    29,    34,    35,    37,    38,    41,    42,    22,
      22,    22,    34,    12,    39,    40,     3,    13,    22,    43,
      44,    45,    22,    39,    13,     4,     5,     6,     7,     8,
       9,    10,    11,    13,    18,    46,    47,    48,    43,    17,
      46,    18,     6,    10,    14,    22,    10,    16,    19,    19,
      46,    19,    10,    18,    19,    10,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    31,    32,    32,    33,    34,    34,    35,
      35,    36,    37,    37,    38,    39,    39,    40,    41,    41,
      42,    43,    43,    44,    44,    45,    45,    46,    46,    46,
      47,    47,    47,    47,    47,    47,    48,    48,    48,    48,
      48,    48,    48,    48
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     2,     1,
       1,     3,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     3,     1,     3,     2,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     7,     3,     5,
       3,     1,     1,     1
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
        case 9:
#line 98 "parser.y" /* yacc.c:1646  */
    {
		/* do nothing right now */
	}
#line 1348 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "parser.y" /* yacc.c:1646  */
    {
		/* do nothing right now */
		/* Process any tasks still left */
		/* si2bin_task_list_process(); */
		
		/* Clean up tasks and symbol table when finished parsing kernel */
		/* si2bin_task_list_done(); */
		/* si2bin_symbol_table_done(); */

		/* Set up new tasks and symbol table for next kernel */
		/* si2bin_task_list_init(); */
		/* si2bin_symbol_table_init(); */
	}
#line 1366 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 119 "parser.y" /* yacc.c:1646  */
    {
		struct frm_id_t *id = (yyvsp[-1].id);

		frm2bin_inner_bin = frm2bin_inner_bin_create(id->name);
		//frm2bin_metadata = frm2bin_metadata_create();
		frm2bin_entry = frm2bin_inner_bin_entry_create();

		//frm2bin_metadata->uniqueid = frm2bin_uniqueid;

		frm2bin_inner_bin_add_entry(frm2bin_inner_bin, frm2bin_entry);

		frm2bin_outer_bin_add(frm2bin_outer_bin, frm2bin_inner_bin);

		//frm2bin_uniqueid ++;

		frm_id_free(id);
	}
#line 1388 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "parser.y" /* yacc.c:1646  */
    {
		int size;
		
		/* check the size of the current argument */
		/* format for tok_arg_type: .i32, .i64, .f32, .f64 */
		size = (atoi(((yyvsp[-1].id)->name) + 2)) / 4;
		
		/* increase the kernel argument total size */
		frm2bin_inner_bin->arg_totalSize += size;
		
		frm_id_free((yyvsp[-1].id));
	}
#line 1405 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 184 "parser.y" /* yacc.c:1646  */
    {
		//struct FRM2bin_inst_t *inst = $1;

		/* Generate code */
		//frm2bin_inst_gen(inst);
		//elf_enc_buffer_write(frm2bin_entry->text_section_buffer, inst->inst_bytes.bytes, inst->size);
		
		/* Dump Instruction Info */
		//frm2bin_inst_dump(inst, stdout);
		//frm2bin_inst_free(inst);
		
		
		struct frm2bin_inst_t *inst = (yyvsp[-2].inst);
	      
		/* Generate code */
		/*
		frm_stream_add_inst(frm_out_stream, inst);
		*/
		frm2bin_inst_gen(inst);
		
		/* write instruction binary to the buffer */
		/* This will be deleted later */
		elf_enc_buffer_write(text_section_buffer, inst->inst_bytes.bytes, inst->size);
		
		/* write instruction binary to text section buffer */
		elf_enc_buffer_write(frm2bin_entry->text_section_buffer, inst->inst_bytes.bytes, inst->size);
		
		/* dump the instruction binary to the console */
		/*
		frm2bin_inst_dump(inst, stdout);
		*/
		
		frm2bin_inst_free(inst);
	}
#line 1444 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 224 "parser.y" /* yacc.c:1646  */
    {
  	  	struct frm2bin_inst_t *inst;
  	  	struct frm_id_t *id;
  	  	struct list_t *arg_list;
  	  	struct frm2bin_pred_t *pred;

  	  	/* Get arguments */
  	  	id = (yyvsp[-1].id);
  	  	arg_list = (yyvsp[0].list);

  	  	/* create predicate */
  	  	pred = (yyvsp[-2].pred);

  	  	/* create instruction */
  	  	inst = frm2bin_inst_create(pred, id->name, arg_list);

  	  	/* Return instructions */
  	  	frm_id_free(id);
  	  	frm2bin_pred_free(pred);

  	  	(yyval.inst) = inst;
  	}
#line 1471 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 248 "parser.y" /* yacc.c:1646  */
    {
  	  	struct frm2bin_inst_t *inst;
  	  	struct frm_id_t *id;
  	  	struct list_t *arg_list;

  	  	/* Get arguments */
  	  	id = (yyvsp[-1].id);
  	  	arg_list = (yyvsp[0].list);

  	  	/* create instruction */
  	  	inst = frm2bin_inst_create(NULL, id->name, arg_list);

  	  	/* Return instructions */
  	  	frm_id_free(id);
  	  	(yyval.inst) = inst;
  	}
#line 1492 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 269 "parser.y" /* yacc.c:1646  */
    {
  	  	(yyval.list) = NULL;
  	}
#line 1500 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 274 "parser.y" /* yacc.c:1646  */
    {
  	  	struct list_t *arg_list;

  	  	/* create */
  	  	arg_list = list_create();

  	  	/* Initialize */
  	  	list_add(arg_list, (yyvsp[0].arg));

  	  	/* Return the arg list */
  	  	(yyval.list) = arg_list;
  	}
#line 1517 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 288 "parser.y" /* yacc.c:1646  */
    {
  		/* Add argument to head of the list_t in $3 */
  	  	list_insert((yyvsp[0].list), 0, (yyvsp[-2].arg));
  	  	(yyval.list) = (yyvsp[0].list);
  	}
#line 1527 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 297 "parser.y" /* yacc.c:1646  */
    {
  	  	(yyval.arg) = frm_arg_create_scalar_register((yyvsp[0].id)->name);
  	  	frm_id_free((yyvsp[0].id));
  	}
#line 1536 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 303 "parser.y" /* yacc.c:1646  */
    {
  	  	(yyval.arg) = frm_arg_create_special_register((yyvsp[0].id)->name);
  	  	frm_id_free((yyvsp[0].id));
  	}
#line 1545 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 309 "parser.y" /* yacc.c:1646  */
    {
		(yyval.arg) = frm_arg_create_zero_register((yyvsp[0].id)->name);
  	  	frm_id_free((yyvsp[0].id));
  	}
#line 1554 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 315 "parser.y" /* yacc.c:1646  */
    {
  	  	(yyval.arg) = frm_arg_create_predicate_register((yyvsp[0].id)->name);
  	  	frm_id_free((yyvsp[0].id));
  	}
#line 1563 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 321 "parser.y" /* yacc.c:1646  */
    {
  	  	(yyval.arg) = frm_arg_create_literal((yyvsp[0].num));
  	}
#line 1571 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 326 "parser.y" /* yacc.c:1646  */
    {
  	  	int value;

  	  	sscanf((yyvsp[0].id)->name, "%x", &value);
  	  	(yyval.arg) = frm_arg_create_literal(value);
  	  	frm_id_free((yyvsp[0].id));
  	}
#line 1583 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 337 "parser.y" /* yacc.c:1646  */
    {
  	  	(yyval.arg) = (yyvsp[0].arg);
  	}
#line 1591 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 344 "parser.y" /* yacc.c:1646  */
    {
  	  	int bank_idx;
  	  	/* offset within a bank */
  	  	int offset;
  	  	int negative;

  	  	if (!strcmp((yyvsp[-6].id)->name, "c") || !strcmp((yyvsp[-6].id)->name, "-c"))
  	  	{
  	  		/* extract the hex value and assign it to the variable */
  	  	  	sscanf((yyvsp[-4].id)->name, "%x", &bank_idx);
  	  	  	sscanf((yyvsp[-1].id)->name, "%x", &offset);
  	  	  	negative = strcmp((yyvsp[-6].id)->name, "c") ? 1 : 0;

  	  	  	(yyval.arg) = frm_arg_create_const_maddr(bank_idx, offset, negative);
  	  	}
  	  	else 
  	  	{
  	  		frm2bin_yyerror_fmt("invalid constant memory identifier: %s", 
				(yyvsp[-6].id)->name);
  	  	}

  	  	frm_id_free((yyvsp[-6].id));
  	  	frm_id_free((yyvsp[-4].id));
  	  	frm_id_free((yyvsp[-1].id));
  	}
#line 1621 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 372 "parser.y" /* yacc.c:1646  */
    {
  	  	int reg_idx;
  	  	/* start from the 2nd character, 1st one is "R" */
  	  	reg_idx = atoi(((yyvsp[-1].id)->name) + 1);
  	  	(yyval.arg) = frm_arg_create_glob_maddr(reg_idx, 0);

  	  	frm_id_free((yyvsp[-1].id));
  	}
#line 1634 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 383 "parser.y" /* yacc.c:1646  */
    {
  	  	int reg_idx;
  	  	int offset;
  	  	/* start from the 2nd character, 1st one is "R" */
  	  	reg_idx = atoi(((yyvsp[-3].id)->name) + 1);
  	  	sscanf((yyvsp[-1].id)->name, "%x", &offset);
  	  	(yyval.arg) = frm_arg_create_glob_maddr(reg_idx, offset);

  	  	frm_id_free((yyvsp[-3].id));
  	  	frm_id_free((yyvsp[-1].id));
  	}
#line 1650 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 397 "parser.y" /* yacc.c:1646  */
    {
  		int offset;
  		sscanf((yyvsp[-1].id)->name, "%x", &offset);
  		(yyval.arg) = frm_arg_create_shared_maddr(-1, offset);
  		
  		frm_id_free((yyvsp[-1].id));
  	}
#line 1662 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 407 "parser.y" /* yacc.c:1646  */
    {
  	  	(yyval.arg) = frm_arg_create_pt((yyvsp[0].id)->name);
  	  	
  	  	frm_id_free((yyvsp[0].id));
  	}
#line 1672 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 415 "parser.y" /* yacc.c:1646  */
    {
  		(yyval.arg) = frm_arg_create_ccop((yyvsp[0].id)->name);
  		
  		frm_id_free((yyvsp[0].id));
  	}
#line 1682 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 423 "parser.y" /* yacc.c:1646  */
    {
  		/* not supported yet */
  	  	frm2bin_yyerror_fmt("unsupported TOK_ID: %s", (yyvsp[0].id)->name);
  	  	frm_id_free((yyvsp[0].id));

		/*
  	  	struct frm_arg_t *arg;
  	  	struct frm_id_t *id;
  	  	struct frm_symbol_t *symbol;

  	  	id = $1;
  	  	symbol = hash_talbe_get(frm_symbol_table, id->name);
  	  	if(!symbol)
  	  	{
  	  	  symbol = frm_symbol_create(id->name);
  	  	  hash_talbe_insert(frm_symbol_talbe, id->name, symbol);
  	  	}

  	  	arg = frm_arg_create_
		*/
  	}
#line 1708 "parser.c" /* yacc.c:1646  */
    break;


#line 1712 "parser.c" /* yacc.c:1646  */
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
#line 447 "parser.y" /* yacc.c:1906  */

