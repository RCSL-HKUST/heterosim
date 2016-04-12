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




/* Copy the first part of user declarations.  */
#line 1 "../m2c/cl2llvm/parser.y" /* yacc.c:339  */


#define YYDEBUG 1

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <lib/util/debug.h>
#include <lib/util/hash-table.h>
#include <lib/util/list.h>
#include <llvm-c/Core.h>
#include <llvm-c/Analysis.h>
#include <llvm-c/ExecutionEngine.h>
#include <llvm-c/Target.h>
#include <llvm-c/Transforms/Scalar.h>
#include <llvm-c/BitWriter.h>

#include "vector-ops.h"
#include "for-blocks.h"
#include "while-blocks.h"
#include "arg.h"
#include "declarator-list.h"
#include "function.h"
#include "val.h"
#include "type.h"
#include "init.h"
#include "symbol.h"
#include "built-in-funcs.h"
#include "parser.h"
#include "cl2llvm.h"
#include "array.h"

#define CL2LLVM_MAX_FUNC_ARGS 64
#define CL2LLVM_MAX_ARG_NAME_LEN 200
#define CL2LLVM_MAX_NUM_ARRAY_INDEX_DIM 100

extern LLVMBuilderRef cl2llvm_builder;
extern LLVMModuleRef cl2llvm_module;
extern LLVMValueRef cl2llvm_function;
extern LLVMBasicBlockRef cl2llvm_basic_block;

extern int temp_var_count;
extern char temp_var_name[50];

int block_count;
char block_name[50];

int  func_count;
char func_name[50];

extern struct hash_table_t *cl2llvm_built_in_func_table;
struct hash_table_t *cl2llvm_symbol_table;
extern struct hash_table_t *cl2llvm_built_in_const_table;

struct cl2llvm_function_t *cl2llvm_current_function;
LLVMBasicBlockRef current_basic_block;


#line 127 "y.tab.c" /* yacc.c:339  */

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
    TOK_ID = 258,
    TOK_CONST_INT = 259,
    TOK_CONST_INT_U = 260,
    TOK_CONST_INT_L = 261,
    TOK_CONST_INT_UL = 262,
    TOK_CONST_INT_LL = 263,
    TOK_CONST_INT_ULL = 264,
    TOK_CONST_DEC = 265,
    TOK_CONST_DEC_H = 266,
    TOK_CONST_DEC_F = 267,
    TOK_CONST_DEC_L = 268,
    TOK_CONST_VAL = 269,
    TOK_STRING = 270,
    TOK_COMMA = 271,
    TOK_SEMICOLON = 272,
    TOK_ELLIPSIS = 273,
    TOK_EQUAL = 274,
    TOK_ADD_EQUAL = 275,
    TOK_MINUS_EQUAL = 276,
    TOK_MULT_EQUAL = 277,
    TOK_DIV_EQUAL = 278,
    TOK_MOD_EQUAL = 279,
    TOK_AND_EQUAL = 280,
    TOK_OR_EQUAL = 281,
    TOK_EXCLUSIVE_EQUAL = 282,
    TOK_SHIFT_RIGHT_EQUAL = 283,
    TOK_SHIFT_LEFT_EQUAL = 284,
    TOK_CONDITIONAL = 285,
    TOK_COLON = 286,
    TOK_LOGICAL_OR = 287,
    TOK_LOGICAL_AND = 288,
    TOK_BITWISE_OR = 289,
    TOK_BITWISE_EXCLUSIVE = 290,
    TOK_BITWISE_AND = 291,
    TOK_EQUALITY = 292,
    TOK_INEQUALITY = 293,
    TOK_GREATER = 294,
    TOK_LESS = 295,
    TOK_GREATER_EQUAL = 296,
    TOK_LESS_EQUAL = 297,
    TOK_SHIFT_RIGHT = 298,
    TOK_SHIFT_LEFT = 299,
    TOK_PLUS = 300,
    TOK_MINUS = 301,
    TOK_MULT = 302,
    TOK_DIV = 303,
    TOK_MOD = 304,
    TOK_PREFIX = 305,
    TOK_LOGICAL_NEGATE = 306,
    TOK_BITWISE_NOT = 307,
    TOK_CURLY_BRACE_CLOSE = 308,
    TOK_CURLY_BRACE_OPEN = 309,
    TOK_PAR_OPEN = 310,
    TOK_PAR_CLOSE = 311,
    TOK_BRACKET_OPEN = 312,
    TOK_BRACKET_CLOSE = 313,
    TOK_POSTFIX = 314,
    TOK_STRUCT_REF = 315,
    TOK_STRUCT_DEREF = 316,
    TOK_DECREMENT = 317,
    TOK_INCREMENT = 318,
    TOK_AUTO = 319,
    TOK_BOOL = 320,
    TOK_BREAK = 321,
    TOK_CASE = 322,
    TOK_CHAR = 323,
    TOK_CHARN = 324,
    TOK_CONSTANT = 325,
    TOK_CONST = 326,
    TOK_CONTINUE = 327,
    TOK_DEFAULT = 328,
    TOK_DO = 329,
    TOK_DOUBLE = 330,
    TOK_DOUBLE_LONG = 331,
    TOK_DOUBLEN = 332,
    TOK_ENUM = 333,
    TOK_EVENT_T = 334,
    TOK_EXTERN = 335,
    TOK_FLOAT = 336,
    TOK_FLOATN = 337,
    TOK_FOR = 338,
    TOK_GLOBAL = 339,
    TOK_GOTO = 340,
    TOK_HALF = 341,
    TOK_IF = 342,
    TOK_ELSE = 343,
    TOK_IMAGE2D_T = 344,
    TOK_IMAGE3D_T = 345,
    TOK_IMAGE2D_ARRAY_T = 346,
    TOK_IMAGE1D_T = 347,
    TOK_IMAGE1D_BUFFER_T = 348,
    TOK_IMAGE1D_ARRAY_T = 349,
    TOK_INLINE = 350,
    TOK_INT = 351,
    TOK_INT_LONG = 352,
    TOK_LONG_LONG = 353,
    TOK_INTN = 354,
    TOK_INTPTR_T = 355,
    TOK_KERNEL = 356,
    TOK_LOCAL = 357,
    TOK_LONG = 358,
    TOK_LONGN = 359,
    TOK_PRIVATE = 360,
    TOK_PTRDIFF_T = 361,
    TOK_READ_ONLY = 362,
    TOK_READ_WRITE = 363,
    TOK_REGISTER = 364,
    TOK_RETURN = 365,
    TOK_SAMPLER_T = 366,
    TOK_SHORT = 367,
    TOK_SHORTN = 368,
    TOK_SIGNED = 369,
    TOK_SIZEOF = 370,
    TOK_SIZE_T = 371,
    TOK_STATIC = 372,
    TOK_STRUCT = 373,
    TOK_SWITCH = 374,
    TOK_TYPEDEF = 375,
    TOK_TYPENAME = 376,
    TOK_UCHARN = 377,
    TOK_UCHAR = 378,
    TOK_ULONG = 379,
    TOK_USHORT = 380,
    TOK_UINT = 381,
    TOK_UINT_LONG = 382,
    TOK_UINT_LONG_LONG = 383,
    TOK_UINTN = 384,
    TOK_ULONGN = 385,
    TOK_UINTPTR_T = 386,
    TOK_UNION = 387,
    TOK_UNSIGNED = 388,
    TOK_USHORTN = 389,
    TOK_VOID = 390,
    TOK_VOLATILE = 391,
    TOK_WHILE = 392,
    TOK_WRITE_ONLY = 393
  };
#endif
/* Tokens.  */
#define TOK_ID 258
#define TOK_CONST_INT 259
#define TOK_CONST_INT_U 260
#define TOK_CONST_INT_L 261
#define TOK_CONST_INT_UL 262
#define TOK_CONST_INT_LL 263
#define TOK_CONST_INT_ULL 264
#define TOK_CONST_DEC 265
#define TOK_CONST_DEC_H 266
#define TOK_CONST_DEC_F 267
#define TOK_CONST_DEC_L 268
#define TOK_CONST_VAL 269
#define TOK_STRING 270
#define TOK_COMMA 271
#define TOK_SEMICOLON 272
#define TOK_ELLIPSIS 273
#define TOK_EQUAL 274
#define TOK_ADD_EQUAL 275
#define TOK_MINUS_EQUAL 276
#define TOK_MULT_EQUAL 277
#define TOK_DIV_EQUAL 278
#define TOK_MOD_EQUAL 279
#define TOK_AND_EQUAL 280
#define TOK_OR_EQUAL 281
#define TOK_EXCLUSIVE_EQUAL 282
#define TOK_SHIFT_RIGHT_EQUAL 283
#define TOK_SHIFT_LEFT_EQUAL 284
#define TOK_CONDITIONAL 285
#define TOK_COLON 286
#define TOK_LOGICAL_OR 287
#define TOK_LOGICAL_AND 288
#define TOK_BITWISE_OR 289
#define TOK_BITWISE_EXCLUSIVE 290
#define TOK_BITWISE_AND 291
#define TOK_EQUALITY 292
#define TOK_INEQUALITY 293
#define TOK_GREATER 294
#define TOK_LESS 295
#define TOK_GREATER_EQUAL 296
#define TOK_LESS_EQUAL 297
#define TOK_SHIFT_RIGHT 298
#define TOK_SHIFT_LEFT 299
#define TOK_PLUS 300
#define TOK_MINUS 301
#define TOK_MULT 302
#define TOK_DIV 303
#define TOK_MOD 304
#define TOK_PREFIX 305
#define TOK_LOGICAL_NEGATE 306
#define TOK_BITWISE_NOT 307
#define TOK_CURLY_BRACE_CLOSE 308
#define TOK_CURLY_BRACE_OPEN 309
#define TOK_PAR_OPEN 310
#define TOK_PAR_CLOSE 311
#define TOK_BRACKET_OPEN 312
#define TOK_BRACKET_CLOSE 313
#define TOK_POSTFIX 314
#define TOK_STRUCT_REF 315
#define TOK_STRUCT_DEREF 316
#define TOK_DECREMENT 317
#define TOK_INCREMENT 318
#define TOK_AUTO 319
#define TOK_BOOL 320
#define TOK_BREAK 321
#define TOK_CASE 322
#define TOK_CHAR 323
#define TOK_CHARN 324
#define TOK_CONSTANT 325
#define TOK_CONST 326
#define TOK_CONTINUE 327
#define TOK_DEFAULT 328
#define TOK_DO 329
#define TOK_DOUBLE 330
#define TOK_DOUBLE_LONG 331
#define TOK_DOUBLEN 332
#define TOK_ENUM 333
#define TOK_EVENT_T 334
#define TOK_EXTERN 335
#define TOK_FLOAT 336
#define TOK_FLOATN 337
#define TOK_FOR 338
#define TOK_GLOBAL 339
#define TOK_GOTO 340
#define TOK_HALF 341
#define TOK_IF 342
#define TOK_ELSE 343
#define TOK_IMAGE2D_T 344
#define TOK_IMAGE3D_T 345
#define TOK_IMAGE2D_ARRAY_T 346
#define TOK_IMAGE1D_T 347
#define TOK_IMAGE1D_BUFFER_T 348
#define TOK_IMAGE1D_ARRAY_T 349
#define TOK_INLINE 350
#define TOK_INT 351
#define TOK_INT_LONG 352
#define TOK_LONG_LONG 353
#define TOK_INTN 354
#define TOK_INTPTR_T 355
#define TOK_KERNEL 356
#define TOK_LOCAL 357
#define TOK_LONG 358
#define TOK_LONGN 359
#define TOK_PRIVATE 360
#define TOK_PTRDIFF_T 361
#define TOK_READ_ONLY 362
#define TOK_READ_WRITE 363
#define TOK_REGISTER 364
#define TOK_RETURN 365
#define TOK_SAMPLER_T 366
#define TOK_SHORT 367
#define TOK_SHORTN 368
#define TOK_SIGNED 369
#define TOK_SIZEOF 370
#define TOK_SIZE_T 371
#define TOK_STATIC 372
#define TOK_STRUCT 373
#define TOK_SWITCH 374
#define TOK_TYPEDEF 375
#define TOK_TYPENAME 376
#define TOK_UCHARN 377
#define TOK_UCHAR 378
#define TOK_ULONG 379
#define TOK_USHORT 380
#define TOK_UINT 381
#define TOK_UINT_LONG 382
#define TOK_UINT_LONG_LONG 383
#define TOK_UINTN 384
#define TOK_ULONGN 385
#define TOK_UINTPTR_T 386
#define TOK_UNION 387
#define TOK_UNSIGNED 388
#define TOK_USHORTN 389
#define TOK_VOID 390
#define TOK_VOLATILE 391
#define TOK_WHILE 392
#define TOK_WRITE_ONLY 393

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 62 "../m2c/cl2llvm/parser.y" /* yacc.c:355  */

	long int const_int_val;
	unsigned long long const_int_val_ull;
	double  const_float_val;
	char * identifier;
	struct cl2llvm_type_t *llvm_type_ref;
	struct cl2llvm_val_t *llvm_value_ref;
	struct list_t * init_list;
	struct list_t * list_val_t;
	struct cl2llvm_arg_t *arg_t;
	struct list_t *arg_list;
	LLVMBasicBlockRef basic_block_ref;
	struct cl2llvm_while_blocks_t *llvm_while_blocks;
	struct cl2llvm_for_blocks_t *llvm_for_blocks;
	struct cl2llvm_decl_list_t *decl_list;

#line 457 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 472 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1875

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  343

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   393

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   222,   222,   223,   227,   228,   232,   241,   240,   385,
     391,   397,   405,   411,   422,   426,   471,   475,   479,   484,
     492,   498,   504,   510,   516,   523,   529,   538,   539,   543,
     544,   545,   550,   554,   560,   562,   566,   570,   648,   697,
     714,   735,   744,   754,   759,   760,   761,   762,   763,   764,
     765,   766,   780,   784,   788,   792,   796,   803,   890,   898,
     904,   909,   914,   919,   924,   932,   937,   940,   944,   952,
     963,   973,   986,  1001,  1169,  1170,  1174,  1178,  1182,  1186,
    1187,  1188,  1189,  1193,  1197,  1201,  1209,  1208,  1235,  1234,
    1268,  1285,  1320,  1284,  1363,  1399,  1362,  1442,  1467,  1441,
    1486,  1485,  1509,  1536,  1539,  1545,  1547,  1551,  1624,  1693,
    1771,  1850,  1908,  1972,  2035,  2108,  2182,  2266,  2348,  2430,
    2513,  2564,  2615,  2641,  2705,  2771,  2845,  2912,  2977,  2981,
    2985,  2989,  2994,  2998,  3002,  3007,  3012,  3018,  3023,  3028,
    3037,  3108,  3113,  3118,  3123,  3128,  3133,  3144,  3149,  3154,
    3166,  3286,  3300,  3304,  3314,  3320,  3326,  3332,  3338,  3344,
    3350,  3356,  3362,  3368,  3374,  3469,  3477,  3481,  3499,  3504,
    3509,  3514,  3519,  3524,  3529,  3534,  3539,  3544,  3549,  3554,
    3560,  3566,  3572,  3578,  3584,  3590,  3597,  3604,  3611,  3618,
    3625,  3631,  3637,  3643,  3649,  3655,  3661,  3667,  3673,  3679,
    3685,  3691,  3697,  3703,  3710
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ID", "TOK_CONST_INT",
  "TOK_CONST_INT_U", "TOK_CONST_INT_L", "TOK_CONST_INT_UL",
  "TOK_CONST_INT_LL", "TOK_CONST_INT_ULL", "TOK_CONST_DEC",
  "TOK_CONST_DEC_H", "TOK_CONST_DEC_F", "TOK_CONST_DEC_L", "TOK_CONST_VAL",
  "TOK_STRING", "TOK_COMMA", "TOK_SEMICOLON", "TOK_ELLIPSIS", "TOK_EQUAL",
  "TOK_ADD_EQUAL", "TOK_MINUS_EQUAL", "TOK_MULT_EQUAL", "TOK_DIV_EQUAL",
  "TOK_MOD_EQUAL", "TOK_AND_EQUAL", "TOK_OR_EQUAL", "TOK_EXCLUSIVE_EQUAL",
  "TOK_SHIFT_RIGHT_EQUAL", "TOK_SHIFT_LEFT_EQUAL", "TOK_CONDITIONAL",
  "TOK_COLON", "TOK_LOGICAL_OR", "TOK_LOGICAL_AND", "TOK_BITWISE_OR",
  "TOK_BITWISE_EXCLUSIVE", "TOK_BITWISE_AND", "TOK_EQUALITY",
  "TOK_INEQUALITY", "TOK_GREATER", "TOK_LESS", "TOK_GREATER_EQUAL",
  "TOK_LESS_EQUAL", "TOK_SHIFT_RIGHT", "TOK_SHIFT_LEFT", "TOK_PLUS",
  "TOK_MINUS", "TOK_MULT", "TOK_DIV", "TOK_MOD", "TOK_PREFIX",
  "TOK_LOGICAL_NEGATE", "TOK_BITWISE_NOT", "TOK_CURLY_BRACE_CLOSE",
  "TOK_CURLY_BRACE_OPEN", "TOK_PAR_OPEN", "TOK_PAR_CLOSE",
  "TOK_BRACKET_OPEN", "TOK_BRACKET_CLOSE", "TOK_POSTFIX", "TOK_STRUCT_REF",
  "TOK_STRUCT_DEREF", "TOK_DECREMENT", "TOK_INCREMENT", "TOK_AUTO",
  "TOK_BOOL", "TOK_BREAK", "TOK_CASE", "TOK_CHAR", "TOK_CHARN",
  "TOK_CONSTANT", "TOK_CONST", "TOK_CONTINUE", "TOK_DEFAULT", "TOK_DO",
  "TOK_DOUBLE", "TOK_DOUBLE_LONG", "TOK_DOUBLEN", "TOK_ENUM",
  "TOK_EVENT_T", "TOK_EXTERN", "TOK_FLOAT", "TOK_FLOATN", "TOK_FOR",
  "TOK_GLOBAL", "TOK_GOTO", "TOK_HALF", "TOK_IF", "TOK_ELSE",
  "TOK_IMAGE2D_T", "TOK_IMAGE3D_T", "TOK_IMAGE2D_ARRAY_T", "TOK_IMAGE1D_T",
  "TOK_IMAGE1D_BUFFER_T", "TOK_IMAGE1D_ARRAY_T", "TOK_INLINE", "TOK_INT",
  "TOK_INT_LONG", "TOK_LONG_LONG", "TOK_INTN", "TOK_INTPTR_T",
  "TOK_KERNEL", "TOK_LOCAL", "TOK_LONG", "TOK_LONGN", "TOK_PRIVATE",
  "TOK_PTRDIFF_T", "TOK_READ_ONLY", "TOK_READ_WRITE", "TOK_REGISTER",
  "TOK_RETURN", "TOK_SAMPLER_T", "TOK_SHORT", "TOK_SHORTN", "TOK_SIGNED",
  "TOK_SIZEOF", "TOK_SIZE_T", "TOK_STATIC", "TOK_STRUCT", "TOK_SWITCH",
  "TOK_TYPEDEF", "TOK_TYPENAME", "TOK_UCHARN", "TOK_UCHAR", "TOK_ULONG",
  "TOK_USHORT", "TOK_UINT", "TOK_UINT_LONG", "TOK_UINT_LONG_LONG",
  "TOK_UINTN", "TOK_ULONGN", "TOK_UINTPTR_T", "TOK_UNION", "TOK_UNSIGNED",
  "TOK_USHORTN", "TOK_VOID", "TOK_VOLATILE", "TOK_WHILE", "TOK_WRITE_ONLY",
  "$accept", "program", "external_def", "func_decl", "func_def", "$@1",
  "arg_list", "arg", "declarator_list", "addr_qual", "declarator",
  "type_qual", "access_qual", "sc_spec", "stmt_list", "lvalue",
  "array_deref_list", "stmt", "func_call", "param_list", "array_init",
  "init", "init_list", "declaration", "stmt_or_stmt_list", "label_stmt",
  "goto_stmt", "switch_stmt", "switch_body", "default_clause",
  "case_clause", "if_stmt", "@2", "if", "@3", "for_loop",
  "for_loop_header", "@4", "$@5", "@6", "$@7", "do_while_loop", "@8",
  "$@9", "while_loop", "$@10", "while_block_init", "maybe_expr", "expr",
  "unary_expr", "vec_literal", "vec_literal_param_two_elem",
  "vec_literal_param_list", "primary", "type_spec", "type_name", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393
};
# endif

#define YYPACT_NINF -219

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-219)))

#define YYTABLE_NINF -104

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1360,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,   161,  -219,  -219,  -219,   644,  -219,  -219,  -219,  -219,
    -219,    -9,  -219,  -219,  -219,   -15,  -219,  -219,  1360,    -4,
    -219,   719,  1360,    -6,  -219,  -219,  -219,  -219,   297,     1,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
       4,   133,   133,     4,  1303,  1303,   297,  1005,     4,     4,
      33,    38,  -219,    32,    87,    66,  1303,    80,  1303,   101,
    -219,  -219,   794,    73,   429,  -219,  -219,  -219,   297,  -219,
    -219,  -219,  -219,    62,  -219,   433,  -219,  -219,   141,  1751,
    -219,  -219,  -219,  -219,  1215,  -219,     4,     0,  1082,     0,
    -219,  -219,     0,   104,  -219,  -219,   116,   566,  1586,   -20,
       0,     0,  -219,  -219,   433,   569,   143,  1303,  1539,  1432,
    1686,  -219,    72,   107,  -219,  1303,  1303,  1303,  1303,  1303,
    1303,  1303,  1303,  1303,  1303,  1303,  1303,   167,  -219,  -219,
     115,  -219,  -219,  -219,  -219,  1303,  1303,  1303,  1303,  1303,
    1303,  1303,  1303,  1303,  1303,  1303,  1303,  1303,  1303,  1303,
    1303,  1303,  1303,  1303,  1228,  -219,     9,    29,  -219,  1751,
      74,   -12,  -219,  -219,  -219,  1364,    41,   869,  -219,   165,
    -219,  1611,  -219,     6,   -34,  1303,  1290,    12,  -219,   180,
    -219,  1751,  1751,  1751,  1751,  1751,  1751,  1751,  1751,  1751,
    1751,  1751,   283,  -219,  1303,   433,  1711,  1768,  1784,  1799,
    1813,  1826,   172,   172,   119,   119,   119,   119,    71,    71,
     100,   100,  -219,  -219,  -219,     5,  1303,  1228,  -219,   132,
    1005,  -219,   134,    95,  1303,  -219,  -219,  -219,  1303,   159,
     -30,  -219,  -219,  1636,  -219,  1751,  -219,    95,  -219,  1559,
    -219,  1303,  -219,  1751,    96,  -219,  1751,  1303,   990,  -219,
      30,  -219,   174,  1303,   433,  1731,   297,  -219,  -219,  -219,
    -219,    12,  -219,  -219,  1751,  1303,  1348,  1303,  1303,  -219,
    1303,  -219,   176,  -219,   297,  -219,   433,  -219,  1751,  1751,
    1751,  1661,  1303,  -219,  -219,  -219,   177,   140,  1303,  -219,
    -219,   144,  -219
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   200,   198,   192,    19,    27,   201,   202,   194,   172,
      32,   199,   193,    16,   204,   173,   174,   175,   176,   177,
     178,    23,   195,   196,   197,   190,   168,    22,    17,   191,
      18,   169,    29,    31,   171,   183,   189,    33,   186,   182,
     184,   179,   180,   181,   185,   187,   170,   188,   203,    28,
      30,     0,     2,     5,     4,     0,    25,    14,    26,    21,
      24,    20,   166,     1,     3,     0,    15,   167,     9,     0,
      10,    13,     0,     0,    12,    11,     6,     7,    34,    39,
     154,   156,   155,   157,   158,   159,   160,   161,   162,   163,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
      46,    45,     0,     0,   164,    74,   135,    44,    34,    55,
      56,    54,    50,    85,    47,   103,    49,    48,     0,   104,
     134,   165,   105,    76,     0,    39,     0,   149,     0,   164,
     145,   144,    38,    39,   136,   148,     0,   164,     0,     0,
     142,   141,    53,    52,   103,   103,     0,     0,     0,     0,
       0,   102,    66,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,   140,
      37,    35,    86,    90,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,    61,    59,
       0,     0,    75,    36,   106,     0,     0,     0,    94,     0,
      77,     0,    51,     0,     0,     0,     0,    66,    69,     0,
      73,   122,   123,   124,   126,   125,   127,   128,   129,   130,
     131,   132,     0,    40,     0,   103,     0,   121,   120,   138,
     139,   137,   114,   115,   117,   116,   119,   118,   113,   112,
     107,   108,   109,   110,   111,     0,     0,     0,    57,     0,
       0,   146,     0,    66,   103,    91,    88,   147,     0,     0,
       0,    79,    80,     0,    68,    67,    71,    66,    41,     0,
      87,     0,    65,    60,     0,    63,    62,     0,     0,   152,
       0,    98,     0,   103,   103,     0,    34,    78,    81,    82,
     100,    66,    70,    42,   133,     0,     0,     0,     0,   150,
       0,    95,     0,    89,    34,    83,   103,    72,    64,   151,
     153,     0,   103,    92,    84,   101,     0,     0,   103,    99,
      96,     0,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -219,   148,     3,    10,  -219,  -219,   129,    16,  -219,
     -41,  -219,  -219,  -219,   -96,   -73,   -92,  -219,  -219,    -2,
    -218,  -198,  -219,    48,  -120,  -219,  -219,  -219,  -219,   -75,
     -72,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -146,   -93,  -219,
    -219,  -219,  -219,    63,   -91,  -219
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    51,    52,   110,   111,    78,    69,    70,   112,    56,
      57,    58,    59,    60,   113,   114,   180,   115,   116,   207,
     208,   228,   163,   117,   118,   119,   120,   121,   280,   281,
     282,   122,   245,   123,   304,   124,   125,   303,   338,   274,
     332,   126,   154,   320,   127,   326,   225,   128,   129,   130,
     131,   299,   300,   132,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   144,   145,    53,   148,   183,   149,   135,   284,   219,
      54,    76,    72,   158,    66,   160,    55,   137,   139,   139,
     142,   267,   181,   307,   147,   150,   151,    67,   266,   286,
      66,   226,   133,   278,   216,    67,   215,   278,    67,   279,
      68,   209,   206,   279,   269,   267,   318,   211,    77,   295,
     152,    93,    73,    67,    53,   153,   134,   176,   292,   136,
     177,    54,   277,   210,   221,   210,   244,    55,   223,   244,
     227,    66,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,    71,   268,   319,   155,    71,   312,
     156,   226,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   209,   206,   327,   226,   315,   199,   200,   201,   202,
     203,   157,   271,   229,   230,   290,   164,    68,   302,   176,
     213,   176,   283,   285,   177,   159,   135,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,   201,   202,   203,
     182,   289,   176,   244,   140,   141,   161,   322,   184,   134,
     220,    63,   197,   198,   199,   200,   201,   202,   203,   212,
     243,   217,   244,   293,   296,   294,    66,   298,   272,   149,
      93,   227,   275,   287,   323,   305,   337,   297,   138,   301,
     306,   321,   341,   333,   339,   311,   340,   147,   314,    64,
     342,    75,   265,   218,   316,   308,   335,     0,   309,     0,
     325,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   328,     0,   329,   330,     1,   331,   334,     2,
       3,     4,     5,     0,     0,     0,     6,     7,     8,     0,
       9,    10,    11,    12,     0,    13,     0,    14,     0,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,    29,    30,    31,    32,    33,
       0,     0,    34,    35,    36,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,    40,    41,    42,    43,
      44,    45,    46,     0,     0,    47,    48,    49,     0,    50,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     0,     0,   185,  -103,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,    90,     0,     0,     0,     0,     0,     0,
       0,   288,    91,    92,    93,     0,     0,     0,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,    98,
      99,     0,     1,   100,     0,     2,     3,     4,     5,   101,
       0,   102,     6,     7,     8,     0,     9,    10,    11,    12,
     103,    13,   104,    14,   105,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,    29,    30,    31,    32,    33,     0,   106,    34,    35,
      36,     0,   107,     0,    37,     0,   108,     0,     0,    38,
      39,     0,    40,    41,    42,    43,    44,    45,    46,     0,
       0,    47,    48,    49,   109,    50,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,     0,     0,     0,    94,    95,   176,    96,    97,   177,
       0,   178,   179,     0,     0,    98,    99,     0,     1,   100,
       0,     2,     3,     4,     5,   101,     0,   102,     6,     7,
       8,     0,     9,    10,    11,    12,   103,    13,   104,    14,
     105,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,    29,    30,    31,
      32,    33,     0,   106,    34,    35,    36,     0,   107,     0,
      37,     0,   108,     0,     0,    38,    39,     0,    40,    41,
      42,    43,    44,    45,    46,     0,     0,    47,    48,    49,
     109,    50,   143,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,     0,     0,     0,
      94,    95,   213,   176,    97,     0,   177,     0,   178,   179,
       0,    98,    99,     0,     1,     0,     0,     2,     3,     4,
       5,     0,     0,     0,     6,     7,     8,    65,     9,    10,
      11,    12,     0,    13,     0,    14,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,    33,     0,     0,
      34,    35,    36,     0,   107,     0,    37,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,    44,    45,
      46,     0,     0,    47,    48,    49,     0,    50,     0,     1,
       0,     0,     2,     3,     4,     5,     0,     0,     0,     6,
       7,     8,    74,     9,    10,    11,    12,     0,    13,     0,
      14,     0,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,     0,     0,    34,    35,    36,     0,     0,
       0,    37,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    43,    44,    45,    46,     0,     0,    47,    48,
      49,     0,    50,     0,     1,     0,     0,     2,     3,     4,
       5,     0,     0,     0,     6,     7,     8,   162,     9,    10,
      11,    12,     0,    13,     0,    14,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,    33,     0,     0,
      34,    35,    36,     0,     0,     0,    37,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,    44,    45,
      46,     0,     0,    47,    48,    49,     0,    50,     0,     1,
       0,     0,     2,     3,     4,     5,     0,     0,     0,     6,
       7,     8,   273,     9,    10,    11,    12,     0,    13,     0,
      14,     0,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,     0,     0,    34,    35,    36,     0,     0,
       0,    37,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    43,    44,    45,    46,     0,     0,    47,    48,
      49,     0,    50,     0,     1,     0,     0,     2,     3,     4,
       5,     0,     0,     0,     6,     7,     8,     0,     9,    10,
      11,    12,     0,    13,     0,    14,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,    33,     0,     0,
      34,    35,    36,     0,     0,     0,    37,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,    44,    45,
      46,     0,     0,    47,    48,    49,   317,    50,   143,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
     185,     0,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,    90,     0,     0,     0,     0,   214,     0,     0,     0,
      91,    92,    93,     0,     0,     0,    94,    95,     0,     0,
      97,     0,     0,     0,     0,     0,     0,    98,    99,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     0,     0,
       6,     7,     8,     0,     9,   135,    11,    12,     0,     0,
       0,    14,     0,     0,    15,    16,    17,    18,    19,    20,
       0,    22,    23,    24,    25,    26,     0,     0,     0,    29,
       0,    31,     0,     0,     0,     0,    34,    35,    36,     0,
     107,     0,     0,     0,     0,     0,     0,    38,    39,    93,
      40,    41,    42,    43,    44,    45,    46,   136,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     0,     0,     6,     7,     8,
       0,     9,     0,    11,    12,     0,     0,     0,    14,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    22,    23,
      24,    25,    26,     0,     0,     0,    29,     0,    31,     0,
       0,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,    40,    41,    42,
      43,    44,    45,    46,     0,     0,    47,    48,   143,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
       0,   143,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,     0,    90,     0,    94,    95,     0,   204,
      97,   205,   176,    91,    92,    93,     0,    98,    99,    94,
      95,     0,   204,    97,     0,   176,     0,     0,     0,     0,
      98,    99,     0,   143,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,     0,   143,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
     107,     0,     0,     0,     0,    91,    92,    93,     0,    90,
       0,    94,    95,   107,   204,    97,     0,     0,    91,    92,
      93,     0,    98,    99,    94,    95,     0,     0,    97,     0,
       0,     0,     0,     0,   317,    98,    99,   143,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   185,     0,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,     0,     0,
      90,     0,     0,     0,     0,   107,     0,     0,     0,    91,
      92,    93,     0,     0,     0,    94,    95,     0,   107,   270,
       0,     0,     0,     0,     0,     1,    98,    99,     2,     3,
       4,     5,     0,     0,     0,     6,     7,     8,     0,     9,
      10,    11,    12,     0,    13,     0,    14,     0,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,    31,    32,    33,     0,
       0,    34,    35,    36,     0,     0,     0,    37,     0,   107,
       0,     0,    38,    39,     0,    40,    41,    42,    43,    44,
      45,    46,     0,     0,    47,    48,    49,     1,    50,     0,
       2,     3,     0,     0,     0,     0,     0,     6,     7,     8,
       0,     9,     0,    11,    12,     0,     0,     0,    14,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    22,    23,
      24,    25,    26,     0,     0,     0,    29,     0,    31,     0,
       0,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    39,   222,    40,    41,    42,
      43,    44,    45,    46,     0,     0,    47,    48,     0,   185,
       0,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   185,
       0,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,     0,     0,     0,   185,   313,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,   185,   214,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,     0,   185,   276,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,   185,   310,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,     0,   185,   336,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
     224,   185,   291,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   185,   324,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   185,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203
};

static const yytype_int16 yycheck[] =
{
      96,    94,    95,     0,    97,   125,    97,     3,   226,   155,
       0,    17,    16,   106,    55,   108,     0,    90,    91,    92,
      93,    16,   118,    53,    97,    98,    99,    47,    19,   227,
      71,    19,    31,    67,   154,    47,    56,    67,    47,    73,
      55,   134,   134,    73,    56,    16,    16,   138,    54,   267,
      17,    47,    56,    47,    51,    17,    55,    57,    53,    55,
      60,    51,    56,   136,   157,   138,    57,    51,   159,    57,
     162,   112,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    68,    56,    56,    55,    72,   287,
       3,    19,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   204,   311,    19,    19,    45,    46,    47,    48,
      49,    55,   215,    16,    17,   245,    53,    55,   274,    57,
      56,    57,   225,   226,    60,    55,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    47,    48,    49,
      88,   244,    57,    57,    91,    92,    55,   303,    17,    55,
      17,     0,    43,    44,    45,    46,    47,    48,    49,    53,
       3,   155,    57,   266,   267,   267,   217,   270,   137,   270,
      47,   273,    17,     3,   304,   278,   332,    55,    55,    55,
      31,    17,   338,    17,    17,   287,    56,   270,   291,    51,
      56,    72,   204,   155,   297,   280,   326,    -1,   280,    -1,
     306,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   315,    -1,   317,   318,    65,   320,   324,    68,
      69,    70,    71,    -1,    -1,    -1,    75,    76,    77,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    -1,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,   104,   105,   106,   107,   108,
      -1,    -1,   111,   112,   113,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,   122,   123,    -1,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,    -1,   138,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    30,    17,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    45,    46,    47,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,   104,   105,   106,   107,   108,    -1,   110,   111,   112,
     113,    -1,   115,    -1,   117,    -1,   119,    -1,    -1,   122,
     123,    -1,   125,   126,   127,   128,   129,   130,   131,    -1,
      -1,   134,   135,   136,   137,   138,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    -1,    -1,    51,    52,    57,    54,    55,    60,
      -1,    62,    63,    -1,    -1,    62,    63,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    -1,    74,    75,    76,
      77,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,   104,   105,   106,
     107,   108,    -1,   110,   111,   112,   113,    -1,   115,    -1,
     117,    -1,   119,    -1,    -1,   122,   123,    -1,   125,   126,
     127,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,
      51,    52,    56,    57,    55,    -1,    60,    -1,    62,    63,
      -1,    62,    63,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,     3,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,   104,   105,   106,   107,   108,    -1,    -1,
     111,   112,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,
      -1,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,    -1,   138,    -1,    65,
      -1,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    75,
      76,    77,     3,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,   104,   105,
     106,   107,   108,    -1,    -1,   111,   112,   113,    -1,    -1,
      -1,   117,    -1,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,   127,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,    -1,   138,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,     3,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,   104,   105,   106,   107,   108,    -1,    -1,
     111,   112,   113,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,    -1,   138,    -1,    65,
      -1,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    75,
      76,    77,     3,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,   104,   105,
     106,   107,   108,    -1,    -1,   111,   112,   113,    -1,    -1,
      -1,   117,    -1,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,   127,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,    -1,   138,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,   104,   105,   106,   107,   108,    -1,    -1,
     111,   112,   113,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,    16,   138,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    36,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    79,     3,    81,    82,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    91,    92,    93,    94,
      -1,    96,    97,    98,    99,   100,    -1,    -1,    -1,   104,
      -1,   106,    -1,    -1,    -1,    -1,   111,   112,   113,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,    47,
     125,   126,   127,   128,   129,   130,   131,    55,    -1,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    79,    -1,    81,    82,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    91,    92,    93,    94,    -1,    96,    97,
      98,    99,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,
      -1,    -1,    -1,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    36,    -1,    51,    52,    -1,    54,
      55,    56,    57,    45,    46,    47,    -1,    62,    63,    51,
      52,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    36,
      -1,    51,    52,   115,    54,    55,    -1,    -1,    45,    46,
      47,    -1,    62,    63,    51,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    16,    62,    63,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      36,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    51,    52,    -1,   115,    55,
      -1,    -1,    -1,    -1,    -1,    65,    62,    63,    68,    69,
      70,    71,    -1,    -1,    -1,    75,    76,    77,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    -1,   104,   105,   106,   107,   108,    -1,
      -1,   111,   112,   113,    -1,    -1,    -1,   117,    -1,   115,
      -1,    -1,   122,   123,    -1,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,    65,   138,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    79,    -1,    81,    82,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    91,    92,    93,    94,    -1,    96,    97,
      98,    99,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,
      -1,    -1,    -1,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    17,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    58,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    30,    56,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    30,    56,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    30,    56,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    30,    56,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      54,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    68,    69,    70,    71,    75,    76,    77,    79,
      80,    81,    82,    84,    86,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   104,
     105,   106,   107,   108,   111,   112,   113,   117,   122,   123,
     125,   126,   127,   128,   129,   130,   131,   134,   135,   136,
     138,   140,   141,   142,   143,   147,   148,   149,   150,   151,
     152,   193,   194,     0,   141,     3,   149,    47,    55,   145,
     146,   147,    16,    56,     3,   146,    17,    54,   144,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      36,    45,    46,    47,    51,    52,    54,    55,    62,    63,
      66,    72,    74,    83,    85,    87,   110,   115,   119,   137,
     142,   143,   147,   153,   154,   156,   157,   162,   163,   164,
     165,   166,   170,   172,   174,   175,   180,   183,   186,   187,
     188,   189,   192,    31,    55,     3,    55,   154,    55,   154,
     192,   192,   154,     3,   187,   187,   153,   154,   187,   193,
     154,   154,    17,    17,   181,    55,     3,    55,   187,    55,
     187,    55,     3,   161,    53,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    57,    60,    62,    63,
     155,   153,    88,   163,    17,    30,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    54,    56,   155,   158,   159,   187,
     154,   193,    53,    56,    56,    56,   163,   147,   162,   186,
      17,   187,    17,   193,    54,   185,    19,   155,   160,    16,
      17,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,     3,    57,   171,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   158,    19,    16,    56,    56,
      55,   187,   137,     3,   178,    17,    56,    56,    67,    73,
     167,   168,   169,   187,   159,   187,   160,     3,    58,   187,
     163,    31,    53,   187,   155,   159,   187,    55,   187,   190,
     191,    55,   186,   176,   173,   187,    31,    53,   168,   169,
      56,   155,   160,    58,   187,    19,   187,    16,    16,    56,
     182,    17,   186,   163,    31,   153,   184,   160,   187,   187,
     187,   187,   179,    17,   153,   163,    56,   186,   177,    17,
      56,   186,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   139,   140,   140,   141,   141,   142,   144,   143,   145,
     145,   145,   146,   146,   147,   147,   148,   148,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   150,   150,   151,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   158,   159,   160,   160,   160,   161,
     161,   161,   161,   162,   163,   163,   164,   165,   166,   167,
     167,   167,   167,   168,   169,   170,   171,   170,   173,   172,
     174,   176,   177,   175,   178,   179,   175,   181,   182,   180,
     184,   183,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     189,   190,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   193,   193,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     6,     0,     9,     0,
       1,     3,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     3,     2,     2,     1,
       3,     3,     4,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     1,     1,     1,     4,     3,     1,
       3,     1,     3,     3,     5,     3,     0,     2,     2,     2,
       4,     3,     5,     3,     1,     3,     2,     3,     5,     1,
       1,     2,     2,     3,     4,     1,     0,     4,     0,     6,
       2,     0,     0,    10,     0,     0,     9,     0,     0,     9,
       0,     7,     0,     0,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     1,     1,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     4,     4,     2,     2,
       6,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
        case 6:
#line 233 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		
		cl2llvm_yyerror("function declarations not supported");
	}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 241 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		int err;
		struct cl2llvm_function_t *new_function;	
		char arg_name[CL2LLVM_MAX_ARG_NAME_LEN];
		LLVMTypeRef func_args[CL2LLVM_MAX_FUNC_ARGS];
		LLVMTypeRef function_type;
		LLVMValueRef function;
		int arg_count;
		int i;

		/* Create name for function entry block */
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		
		arg_count = list_count((yyvsp[-2].arg_list));

		/* Check that first argument is not empty.  This step is 
		necessary because of the grammar definition which allows 
		for the first argument of a multi-argument function to be empty. */
		if (list_get((yyvsp[-2].arg_list), (yyvsp[-2].arg_list)->head) == NULL && arg_count > 1)
				yyerror("expected declaration specifiers or" 
					"'...' before ',' token");
		
		/* Read function arguments and create an array of argument types */
		else
		{
			for (i = 0; i < arg_count; i++)
			{
				
				struct cl2llvm_arg_t *current_arg = list_get(
					(yyvsp[-2].arg_list), i);
				if (!current_arg->name)
					yyerror("parameter name omitted");
				func_args[i] = current_arg->type_spec->llvm_type;
			}
		}

		/* Define function */
		function_type = LLVMFunctionType(
			(yyvsp[-5].decl_list)->type_spec->llvm_type, func_args, arg_count, 0);
		function = LLVMAddFunction(cl2llvm_module, (yyvsp[-4].identifier),
			function_type);
		LLVMSetFunctionCallConv(function, LLVMCCallConv);

		/* Create function's variable declaration block */
		LLVMBasicBlockRef basic_block = LLVMAppendBasicBlock( 
			function, block_name);
		
		/* Position builder at start of function */
		LLVMPositionBuilderAtEnd(cl2llvm_builder, basic_block);
			current_basic_block = basic_block;

		/* Create and initialize function object */
		new_function = cl2llvm_function_create((yyvsp[-4].identifier), (yyvsp[-2].arg_list));

		new_function->func = function;
		new_function->func_type = function_type;
		new_function->sign = (yyvsp[-5].decl_list)->type_spec->sign;
		new_function->entry_block = basic_block;

		/* Set current function to newly created function */
		cl2llvm_current_function = new_function;

		/* Insert function into global symbol table */
		err = hash_table_insert(cl2llvm_symbol_table, 
			(yyvsp[-4].identifier), new_function);
		if (!err)
			yyerror("function already defined");
	
		/* Declare parameters if the argument list is not empty*/
		if (list_get((yyvsp[-2].arg_list), (yyvsp[-2].arg_list)->head))
		{
			for (i = 0; i < arg_count; i++)
			{
				struct cl2llvm_arg_t *current_arg = list_get(
					(yyvsp[-2].arg_list), i);

				snprintf(arg_name, sizeof arg_name,
					"%s_addr", current_arg->name);

				struct cl2llvm_val_t *arg_pointer = 
					cl2llvm_val_create_w_init( 
					LLVMBuildAlloca(cl2llvm_builder, 
					current_arg->type_spec->llvm_type, 
					arg_name),
					current_arg->type_spec->sign);

				struct cl2llvm_symbol_t *symbol = 
					cl2llvm_symbol_create_w_init(
					arg_pointer->val, 
					current_arg->type_spec->sign, 
					current_arg->name);

				symbol->cl2llvm_val->type->llvm_type = 
					current_arg->type_spec->llvm_type;

				/* Name and store arguments */
				LLVMValueRef arg_val = LLVMGetParam(
					new_function->func, i);
				LLVMSetValueName(arg_val, current_arg->name);

				LLVMBuildStore(cl2llvm_builder, arg_val,
					arg_pointer->val);
				hash_table_insert(new_function->symbol_table,
					current_arg->name, symbol);

				/* Free argument */
				cl2llvm_val_free(arg_pointer);
			}
		}
		/* End declaration block and create first instruction block. */
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);

		LLVMBasicBlockRef first_block = LLVMAppendBasicBlock( 
			new_function->func, block_name);
		LLVMValueRef branch = LLVMBuildBr(cl2llvm_builder, 
			first_block);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, first_block);

		/* Set current basic block */
		current_basic_block = first_block;

		/* initialize function branch instruction for building 
		declarations off of */
		new_function->branch_instr = branch;

		/* Free declarator list */
		cl2llvm_decl_list_free((yyvsp[-5].decl_list));	
	}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 372 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		/* If function is of type void, create return instruction 
		by default*/
		if (LLVMGetReturnType(cl2llvm_current_function->func_type)
			== LLVMVoidType())
			LLVMBuildRetVoid(cl2llvm_builder);
	}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 385 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_arg_t *empty_arg = NULL;
		struct list_t *arg_list = list_create();
		list_add(arg_list, empty_arg);
		(yyval.arg_list) = arg_list;
	}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 392 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct list_t *arg_list = list_create();
		list_add(arg_list, (yyvsp[0].arg_t));
		(yyval.arg_list) = arg_list;
	}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 398 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		list_add((yyvsp[-2].arg_list), (yyvsp[0].arg_t));
		(yyval.arg_list) = (yyvsp[-2].arg_list);
	}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 406 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_arg_t *arg = cl2llvm_arg_create((yyvsp[-1].decl_list), (yyvsp[0].identifier));
		cl2llvm_decl_list_struct_free((yyvsp[-1].decl_list));
		(yyval.arg_t) = arg;
	}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 412 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_arg_t *arg = cl2llvm_arg_create((yyvsp[0].decl_list), NULL);
		cl2llvm_decl_list_struct_free((yyvsp[0].decl_list));
		(yyval.arg_t) = arg;
	}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 423 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.decl_list) = (yyvsp[0].decl_list);
	}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 427 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_attach_decl_to_list((yyvsp[0].decl_list), (yyvsp[-1].decl_list));
		if ((yyvsp[-1].decl_list)->type_spec != NULL && (yyvsp[0].decl_list)->addr_qual != 0)
		{
			switch ((yyvsp[0].decl_list)->addr_qual)
			{
				case 1:
					(yyvsp[-1].decl_list)->type_spec->llvm_type = LLVMPointerType( 
						LLVMGetElementType((yyvsp[-1].decl_list)->type_spec->llvm_type), 1);
					break;
					
				case 2:
					(yyvsp[-1].decl_list)->type_spec->llvm_type = LLVMPointerType(  
						LLVMGetElementType((yyvsp[-1].decl_list)->type_spec->llvm_type), 2);
						break;

				default:
					break;
			}
		}
		if ((yyvsp[-1].decl_list)->addr_qual != 0 && (yyvsp[0].decl_list)->type_spec != NULL)
		{
			switch ((yyvsp[-1].decl_list)->addr_qual)
			{
				case 1:
					(yyvsp[-1].decl_list)->type_spec->llvm_type = LLVMPointerType( 
						LLVMGetElementType((yyvsp[0].decl_list)->type_spec->llvm_type), 1);
						break;
					
				case 2:
					(yyvsp[-1].decl_list)->type_spec->llvm_type = LLVMPointerType( 	
						LLVMGetElementType((yyvsp[0].decl_list)->type_spec->llvm_type), 2);
						break;

				default:
					break;
			}
		}
		cl2llvm_decl_list_struct_free((yyvsp[0].decl_list));
		(yyval.decl_list) = (yyvsp[-1].decl_list);
	}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 472 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.const_int_val) = 1;
	}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 476 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.const_int_val) = 2;
	}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 480 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'private' not supported");
		(yyval.const_int_val) = 0;
	}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 485 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'constant' not supported");
		(yyval.const_int_val) = 0;
	}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 493 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_decl_list_t *decl_list = cl2llvm_decl_list_create();
		decl_list->type_spec = (yyvsp[0].llvm_type_ref);
		(yyval.decl_list) = decl_list;
	}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 499 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_decl_list_t *decl_list = cl2llvm_decl_list_create();
		decl_list->access_qual = NULL;
		(yyval.decl_list) = decl_list;
	}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 505 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_decl_list_t *decl_list = cl2llvm_decl_list_create();
		decl_list->kernel_t = 	"kernel";
		(yyval.decl_list) = decl_list;
	}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 511 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_decl_list_t *decl_list = cl2llvm_decl_list_create();
		decl_list->inline_t = NULL;
		(yyval.decl_list) = decl_list;
	}
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 517 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_decl_list_t *decl_list = cl2llvm_decl_list_create();
		decl_list->sc_spec = NULL;
		(yyval.decl_list) = decl_list;

	}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 524 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_decl_list_t *decl_list = cl2llvm_decl_list_create();
		decl_list->addr_qual = (yyvsp[0].const_int_val);
		(yyval.decl_list) = decl_list;
	}
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 530 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_decl_list_t *decl_list = cl2llvm_decl_list_create();
		decl_list->type_qual = NULL;
		(yyval.decl_list) = decl_list;
	}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 551 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'extern' not supported");
	}
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 555 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'static' not supported");
	}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 567 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = (yyvsp[-1].llvm_value_ref);
	}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 571 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *ptr;
		int i;
		struct cl2llvm_val_t *current_index;
		LLVMValueRef deref_ptr;
		LLVMValueRef indices[CL2LLVM_MAX_NUM_ARRAY_INDEX_DIM];

		/*Retrieve symbol from table*/
	 	/*symbol = hash_table_get(cl2llvm_current_function->symbol_table, $1);
		if (symbol == NULL)	
			yyerror("symbol undeclared first use in this program");*/
		
		deref_ptr = (yyvsp[-1].llvm_value_ref)->val;

		/* Loop through all dereference operators */	
		for (i = 0; i < list_count((yyvsp[0].list_val_t)); i++)
		{
			if  (LLVMGetTypeKind(LLVMGetElementType(LLVMTypeOf(
				deref_ptr))) == LLVMPointerTypeKind)
			{
				snprintf(temp_var_name, sizeof temp_var_name,
					"tmp_%d", temp_var_count++);
			
				deref_ptr = LLVMBuildLoad(cl2llvm_builder, 
					deref_ptr, temp_var_name);

				current_index = list_get((yyvsp[0].list_val_t), i);
				indices[0] = current_index->val;

				snprintf(temp_var_name, sizeof temp_var_name,
					"tmp_%d", temp_var_count++);
				deref_ptr = LLVMBuildGEP(cl2llvm_builder, 
					deref_ptr, indices, 1, 
					temp_var_name);
				
			}
			else if (LLVMGetTypeKind(LLVMGetElementType(LLVMTypeOf(
				deref_ptr))) == LLVMArrayTypeKind)

			{
				indices[0] = LLVMConstInt(LLVMInt32Type(), 0, 0);
				indices[1] = LLVMConstInt(LLVMInt32Type(), 0, 0);
				
				snprintf(temp_var_name, sizeof temp_var_name,
					"tmp_%d", temp_var_count++);
				
				deref_ptr = LLVMBuildGEP(cl2llvm_builder, 
					deref_ptr, indices, 2, temp_var_name); 

				current_index = list_get((yyvsp[0].list_val_t), i);
				indices[0] = current_index->val;
				

				/* Get element pointer */
				snprintf(temp_var_name, sizeof temp_var_name,
					"tmp_%d", temp_var_count++);

				deref_ptr = LLVMBuildGEP(cl2llvm_builder, 
					deref_ptr, indices, 1, temp_var_name);
			}
			else
				cl2llvm_yyerror("Subscripted value is neither array nor pointer");
		}

		ptr = cl2llvm_val_create_w_init(deref_ptr, 
			(yyvsp[-1].llvm_value_ref)->type->sign);

		/*Free pointers*/
		LIST_FOR_EACH((yyvsp[0].list_val_t), i)
		{
			cl2llvm_val_free(list_get((yyvsp[0].list_val_t), i));
		}
		list_free((yyvsp[0].list_val_t));
		cl2llvm_val_free((yyvsp[-1].llvm_value_ref));

		(yyval.llvm_value_ref) = ptr;
	}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 649 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *ptr;
		LLVMValueRef deref_ptr;
		LLVMValueRef indices[CL2LLVM_MAX_NUM_ARRAY_INDEX_DIM];

		deref_ptr = (yyvsp[0].llvm_value_ref)->val;

		if  (LLVMGetTypeKind(LLVMGetElementType(LLVMTypeOf(
			deref_ptr))) == LLVMPointerTypeKind)
		{
			snprintf(temp_var_name, sizeof temp_var_name,
				"tmp_%d", temp_var_count++);
			
			deref_ptr = LLVMBuildLoad(cl2llvm_builder, 
				deref_ptr, temp_var_name);

		}
		else if (LLVMGetTypeKind(LLVMGetElementType(LLVMTypeOf(
			deref_ptr))) == LLVMArrayTypeKind)

		{
			indices[0] = LLVMConstInt(LLVMInt32Type(), 0, 0);
			indices[1] = LLVMConstInt(LLVMInt32Type(), 0, 0);
				
			snprintf(temp_var_name, sizeof temp_var_name,
				"tmp_%d", temp_var_count++);
				
			deref_ptr = LLVMBuildGEP(cl2llvm_builder, 
				deref_ptr, indices, 2, temp_var_name); 

			indices[0] = LLVMConstInt(LLVMInt32Type(), 0, 0);
				
			/* Get element pointer */
			snprintf(temp_var_name, sizeof temp_var_name,
				"tmp_%d", temp_var_count++);

			deref_ptr = LLVMBuildGEP(cl2llvm_builder, 
				deref_ptr, indices, 1, temp_var_name);
		}
		else
			cl2llvm_yyerror("Invalid type argument of unary '*'.");
		

		ptr = cl2llvm_val_create_w_init(deref_ptr, 
			(yyvsp[0].llvm_value_ref)->type->sign);

		(yyval.llvm_value_ref) = ptr;
	}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 698 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_symbol_t *symbol;
		struct cl2llvm_val_t *symbol_val_dup;

		/* Access symbol from symbol table */
		symbol = hash_table_get(cl2llvm_current_function->symbol_table, (yyvsp[0].identifier));
		if (!symbol)
			yyerror("undefined identifier");

		/*Duplicate symbol*/
		symbol_val_dup = cl2llvm_val_create_w_init(symbol->cl2llvm_val->val, 
			symbol->cl2llvm_val->type->sign);


		(yyval.llvm_value_ref) = symbol_val_dup;
	}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 715 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {

		
		/* Get symbol from hash table */
	/*	symbol = hash_table_get(cl2llvm_current_function->symbol_table, $1);
		if (!symbol)	
			yyerror("symbol undeclared first use in this program");
*/

		/* If symbol is a vector retrieve the specified indices */
		if (LLVMGetTypeKind(LLVMGetElementType((yyvsp[-2].llvm_value_ref)->type->llvm_type))
			== LLVMVectorTypeKind)
		{	
			cl2llvm_get_vector_indices((yyvsp[-2].llvm_value_ref), (yyvsp[0].identifier));
		}
		(yyval.llvm_value_ref) = (yyvsp[-2].llvm_value_ref);
	}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 736 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct list_t *array_deref_list = list_create();
		
		if (LLVMGetTypeKind((yyvsp[-1].llvm_value_ref)->type->llvm_type) != LLVMIntegerTypeKind)
			yyerror("array index is not an integer");
		list_add(array_deref_list, (yyvsp[-1].llvm_value_ref));
		(yyval.list_val_t) = array_deref_list;
	}
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 745 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		if (LLVMGetTypeKind((yyvsp[-1].llvm_value_ref)->type->llvm_type) != LLVMIntegerTypeKind)
			yyerror("array index is not an integer");
		list_add((yyvsp[-3].list_val_t), (yyvsp[-1].llvm_value_ref));
		(yyval.list_val_t) = (yyvsp[-3].list_val_t);
	}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 755 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-1].llvm_value_ref) != NULL)
			cl2llvm_val_free((yyvsp[-1].llvm_value_ref));
	}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 767 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *ret_val;
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init( LLVMGetReturnType(cl2llvm_current_function->func_type), cl2llvm_current_function->sign);
		if (type->llvm_type != (yyvsp[-1].llvm_value_ref)->type->llvm_type || type->sign != (yyvsp[-1].llvm_value_ref)->type->sign)
			ret_val = llvm_type_cast((yyvsp[-1].llvm_value_ref), type);
		else
			ret_val = (yyvsp[-1].llvm_value_ref);
		LLVMBuildRet(cl2llvm_builder, ret_val->val);
		cl2llvm_type_free(type);
		if (ret_val != (yyvsp[-1].llvm_value_ref))
			cl2llvm_val_free(ret_val);
		cl2llvm_val_free((yyvsp[-1].llvm_value_ref));
	}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 781 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'continue' not supported");
	}
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 785 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'break' not supported");
	}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 789 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'switch' not supported");
	}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 793 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'label statements not supported");
	}
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 797 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'goto' not supported");
	}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 804 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		int *func_id;
		int i;
		LLVMValueRef cast_param_array[100];
		struct cl2llvm_arg_t *current_func_arg;
		struct cl2llvm_val_t *current_param;
		struct cl2llvm_function_t *function;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *cast_param;
		LLVMValueRef llvm_val_func_ret;
		struct cl2llvm_val_t *ret_val;
		LLVMTypeRef llvm_param_types[100];
		int offset = 0;

		/* If function is found in the built-in function table but not the
		   global symbol table, declare it and insert it into the  global
		   symbol table. */
		func_id = hash_table_get(cl2llvm_built_in_func_table, (yyvsp[-3].identifier));
		if (func_id && !hash_table_get(cl2llvm_symbol_table, (yyvsp[-3].identifier)))
			func_declare(func_id);
	
		/* Retrieve function specs from sybmol table */
		function = hash_table_get(cl2llvm_symbol_table, (yyvsp[-3].identifier));
		if (!function)
			yyerror("implicit declaration of function");
		
		/* If specified function arg count differs from the arg count of
		   the generated function, get offset */
		if (function->arg_count != LLVMCountParamTypes(function->func_type))
		{
			LLVMGetParamTypes(function->func_type, llvm_param_types);

			offset = LLVMCountParamTypes(function->func_type) -
				function->arg_count;
			for (i = 0; i < offset; i++)
			{
				cast_param_array[i] = LLVMConstInt(llvm_param_types[i], 0, 0);
			}		
		}

		/* check that parameter types match */
		for (i = 0; i < function->arg_count; i++)
		{
			current_func_arg = list_get(function->arg_list, i);
			current_param = list_get((yyvsp[-1].list_val_t), i);
			if (current_func_arg->type_spec->llvm_type != current_param->type->llvm_type)
			{
				type = cl2llvm_type_create_w_init( 
					current_func_arg->type_spec->llvm_type,
					current_func_arg->type_spec->sign);
				cast_param = llvm_type_cast(current_param, type);
				cl2llvm_type_free(type);
				cast_param_array[i + offset] = cast_param->val;
				cl2llvm_val_free(current_param);
				cl2llvm_val_free(cast_param);
			}
			else
			{
				cast_param_array[i + offset] = current_param->val;
				cl2llvm_val_free(current_param);
			}
		}
		list_free((yyvsp[-1].list_val_t));


		/* Build function call */
		if (LLVMGetReturnType(function->func_type) == LLVMVoidType())
		{
			llvm_val_func_ret = LLVMBuildCall(cl2llvm_builder, function->func,
				cast_param_array, function->arg_count + offset, "");
		}
		else
		{
			snprintf(temp_var_name, sizeof temp_var_name,
				"tmp_%d", temp_var_count++);

			llvm_val_func_ret = LLVMBuildCall(cl2llvm_builder, function->func,
				cast_param_array, function->arg_count + offset, temp_var_name);
		}

		/* Create return value */
		ret_val = cl2llvm_val_create_w_init(llvm_val_func_ret, 	
			function->sign);
		
		(yyval.llvm_value_ref) = ret_val;
	}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 891 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("function calls with no parameters not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 899 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct list_t *param_list = list_create();
		list_add(param_list, (yyvsp[0].llvm_value_ref));
		(yyval.list_val_t) = param_list;
	}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 905 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("array initializers not supported");
		(yyval.list_val_t) = NULL;
	}
#line 2923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 910 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("array initializers not supported");
		(yyval.list_val_t) = NULL;
	}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 915 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		list_add((yyvsp[-2].list_val_t), (yyvsp[0].llvm_value_ref));
		(yyval.list_val_t) = (yyvsp[-2].list_val_t);
	}
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 920 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("array initializers not supported");
		(yyval.list_val_t) = NULL;
	}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 925 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("array initializers not supported");
		(yyval.list_val_t) = NULL;
	}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 937 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = NULL;
	}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 941 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = (yyvsp[0].llvm_value_ref);
	}
#line 2975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 945 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("array initializers not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 953 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct list_t *init_list = list_create();
		struct cl2llvm_init_t *init = cl2llvm_init_create((yyvsp[-1].identifier));

		cl2llvm_val_free(init->cl2llvm_val);
		init->cl2llvm_val = (yyvsp[0].llvm_value_ref);

		list_add(init_list, init);
		(yyval.init_list) = init_list;
	}
#line 2999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 964 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_init_t *init = cl2llvm_init_create((yyvsp[-1].identifier));

		cl2llvm_val_free(init->cl2llvm_val);
		init->cl2llvm_val = (yyvsp[0].llvm_value_ref);

		list_add((yyvsp[-3].init_list), init);
		(yyval.init_list) = (yyvsp[-3].init_list);
	}
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 974 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct list_t *init_list = list_create();
		struct cl2llvm_init_t *init = cl2llvm_init_create((yyvsp[-2].identifier));

		cl2llvm_val_free(init->cl2llvm_val);
		init->cl2llvm_val = (yyvsp[0].llvm_value_ref);
		init->array_deref_list = (yyvsp[-1].list_val_t);

		list_add(init_list, init);
		(yyval.init_list) = init_list;

	}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 987 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_init_t *init = cl2llvm_init_create((yyvsp[-2].identifier));

		cl2llvm_val_free(init->cl2llvm_val);
		init->cl2llvm_val = (yyvsp[0].llvm_value_ref);
		init->array_deref_list = (yyvsp[-1].list_val_t);

		list_add((yyvsp[-4].init_list), init);
		(yyval.init_list) = (yyvsp[-4].init_list);
	}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1002 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *cl2llvm_index;
		LLVMTypeRef type;
		struct cl2llvm_val_t *ptr;
		struct cl2llvm_val_t *value;
		int i;
		struct cl2llvm_symbol_t *symbol;
		struct cl2llvm_val_t *cast_to_val;
		int init_count = list_count((yyvsp[-1].init_list));
		struct cl2llvm_init_t *current_list_elem;
		struct cl2llvm_symbol_t *err_symbol;
		char error_message[50];
		LLVMValueRef var_addr;

		/*Create each sybmol in the init_list*/
		for(i = 0; i < init_count; i++)
		{	
			int err;			
			current_list_elem = list_get((yyvsp[-1].init_list), i);
			
			/*if variable type is a vector*/
			if (LLVMGetTypeKind((yyvsp[-2].decl_list)->type_spec->llvm_type) == LLVMVectorTypeKind)
			{	
				/*Go to entry block and declare variable*/
				LLVMPositionBuilder(cl2llvm_builder, cl2llvm_current_function->entry_block, cl2llvm_current_function->branch_instr);
				var_addr = LLVMBuildAlloca(cl2llvm_builder, 
					(yyvsp[-2].decl_list)->type_spec->llvm_type, current_list_elem->name);
				LLVMPositionBuilderAtEnd(cl2llvm_builder, current_basic_block);

				/*Create symbol*/
				symbol = cl2llvm_symbol_create_w_init( var_addr, 
					(yyvsp[-2].decl_list)->type_spec->sign, current_list_elem->name);
				
				/* If initializer is present, store it. */
				if (current_list_elem->cl2llvm_val != NULL)
				{

					if (LLVMTypeOf(current_list_elem->cl2llvm_val->val) == (yyvsp[-2].decl_list)->type_spec->llvm_type 
						&& current_list_elem->cl2llvm_val->type->sign == (yyvsp[-2].decl_list)->type_spec->sign)
					{
						LLVMBuildStore(cl2llvm_builder, 
							current_list_elem->cl2llvm_val->val, var_addr);
					}
					else 
					{
						yyerror("type of vector initializer does not match type of declarator");
					}
				}
			}
			/*If data type is not an array*/
			else if (current_list_elem->array_deref_list == NULL)
			{
				/*Go to entry block and declare variable*/
				LLVMPositionBuilder(cl2llvm_builder, cl2llvm_current_function->entry_block, cl2llvm_current_function->branch_instr);
				var_addr = LLVMBuildAlloca(cl2llvm_builder, 
					(yyvsp[-2].decl_list)->type_spec->llvm_type, current_list_elem->name);
				LLVMPositionBuilderAtEnd(cl2llvm_builder, current_basic_block);

				/*Create symbol*/
				symbol = cl2llvm_symbol_create_w_init( var_addr, 
					(yyvsp[-2].decl_list)->type_spec->sign, current_list_elem->name);
				symbol->cl2llvm_val->type->llvm_type = (yyvsp[-2].decl_list)->type_spec->llvm_type;

				
				/*If initializer is present, cast initializer to declarator 
				  type and store*/
				if (current_list_elem->cl2llvm_val != NULL)
				{
					cast_to_val = llvm_type_cast( 
						current_list_elem->cl2llvm_val, 
						(yyvsp[-2].decl_list)->type_spec);
					LLVMBuildStore(cl2llvm_builder, cast_to_val->val, 
						symbol->cl2llvm_val->val);
					cl2llvm_val_free(cast_to_val);
				}
			}
			/*If init is an array*/
			else
			{		
				int i;
				int j;
				
				/* Check that array sizes are constants */
				for (i = 0; i < list_count(
					current_list_elem->array_deref_list); i++)
				{	
					value = list_get(current_list_elem->array_deref_list, i);
					if (!LLVMIsConstant(value->val))
						cl2llvm_yyerror("Array size must be a constant.");
				}

				/* Create type for pointer to array. */
				type = (yyvsp[-2].decl_list)->type_spec->llvm_type;

				for (i = 0; i < list_count(
					current_list_elem->array_deref_list); i++)
				{
					cl2llvm_index = list_get(current_list_elem->array_deref_list, i);
					j = 0;
					while(LLVMConstInt(LLVMInt1Type() ,1 ,0) 
						== LLVMConstICmp(LLVMIntSLT, 
						LLVMConstInt(LLVMInt32Type(), j,
						0), cl2llvm_index->val))
					{
						j++;
					}

					type = LLVMArrayType(type, j);
				}

				/* Go to entry block and allocate array pointer */
				LLVMPositionBuilder(cl2llvm_builder,
					cl2llvm_current_function->entry_block,
					cl2llvm_current_function->branch_instr);

				ptr = cl2llvm_val_create_w_init( LLVMBuildAlloca( 
					cl2llvm_builder, type,
					current_list_elem->name), 
					(yyvsp[-2].decl_list)->type_spec->sign);
	
				LLVMPositionBuilderAtEnd(cl2llvm_builder,
					current_basic_block);


				
				/* Create symbol */
				symbol = cl2llvm_symbol_create_w_init( 
					ptr->val , (yyvsp[-2].decl_list)->type_spec->sign, 
					current_list_elem->name);

				
				cl2llvm_val_free(ptr);

			}
			/* Insert symbol into symbol table */
			err = hash_table_insert(cl2llvm_current_function->symbol_table, 
				current_list_elem->name, symbol);
			if (!err)
			{
				snprintf(error_message, sizeof error_message,
					"Symbol '%s' previously declared.", current_list_elem->name);

				cl2llvm_yyerror(error_message);
			}
			/* Check that symbol is not a reserved constant */
			err_symbol = hash_table_get(cl2llvm_built_in_const_table, 
				current_list_elem->name);
			if (err_symbol)
			{
				snprintf(error_message, sizeof error_message,
					"'%s' expected an identifier.", current_list_elem->name);
				cl2llvm_yyerror(error_message);
			}

		}

		/* Free pointers */
		cl2llvm_decl_list_free((yyvsp[-2].decl_list));
		LIST_FOR_EACH((yyvsp[-1].init_list), i)
		{
			cl2llvm_init_free(list_get((yyvsp[-1].init_list), i));
		}
		list_free((yyvsp[-1].init_list));
	}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1202 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		/* goto endif block*/
		LLVMBuildBr(cl2llvm_builder, (yyvsp[0].basic_block_ref));
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[0].basic_block_ref));
		current_basic_block = (yyvsp[0].basic_block_ref);
	}
#line 3225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1209 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    { 
		/*create endif block. $1 now becomes the if false block*/
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef endif = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);
		
		/*Branch to endif*/
		LLVMBuildBr(cl2llvm_builder, endif);
		/*position builder at if false block*/
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-1].basic_block_ref));
		current_basic_block = (yyvsp[-1].basic_block_ref);

		(yyval.basic_block_ref) = endif;
	}
#line 3244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1224 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		/*branch to endif block and prepare to write code for endif block*/
		LLVMBuildBr(cl2llvm_builder, (yyvsp[-1].basic_block_ref));
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-1].basic_block_ref));
		current_basic_block = (yyvsp[-1].basic_block_ref);

	}
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1235 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *i1 = cl2llvm_type_create_w_init(LLVMInt1Type(), 1);
		
		/*Create endif block*/
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef endif = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);
		
		/*Create if true block*/
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef if_true = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);
		
		/*evaluate expression*/
		struct cl2llvm_val_t *bool_val =  cl2llvm_val_bool((yyvsp[-1].llvm_value_ref));
		LLVMBuildCondBr(cl2llvm_builder, bool_val->val, if_true, endif);
		(yyval.basic_block_ref) = endif;
		
		/*prepare to write if_true block*/
		LLVMPositionBuilderAtEnd(cl2llvm_builder, if_true);
		current_basic_block = if_true;
	
		cl2llvm_val_free(bool_val);
		cl2llvm_val_free((yyvsp[-1].llvm_value_ref));
		cl2llvm_type_free(i1);
	}
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1262 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.basic_block_ref) = (yyvsp[-1].basic_block_ref);
	}
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1269 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		/*Finish for loop statement*/
		LLVMBuildBr(cl2llvm_builder, (yyvsp[-1].llvm_for_blocks)->for_incr);

		/*Prepare to build for end*/
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-1].llvm_for_blocks)->for_end);
		current_basic_block = (yyvsp[-1].llvm_for_blocks)->for_end;

		/*Free for_blocks*/
		cl2llvm_for_blocks_free((yyvsp[-1].llvm_for_blocks));

	}
#line 3312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1285 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_for_blocks_t *for_blocks;
		
		/*Initialize "for" blocks*/
		for_blocks = cl2llvm_for_blocks_create();
		
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_cond = LLVMAppendBasicBlock(cl2llvm_current_function->func,
			block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_stmt = LLVMAppendBasicBlock(cl2llvm_current_function->func,
			block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_incr = LLVMAppendBasicBlock(cl2llvm_current_function->func,
			block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_end = LLVMAppendBasicBlock(cl2llvm_current_function->func, 
			block_name);

		for_blocks->for_cond = for_cond;
		for_blocks->for_stmt = for_stmt;
		for_blocks->for_incr = for_incr;
		for_blocks->for_end = for_end;

		/*Prepare to build for loop conditional*/
		LLVMBuildBr(cl2llvm_builder, for_blocks->for_cond);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, for_blocks->for_cond);

		(yyval.llvm_for_blocks) = for_blocks;
	}
#line 3351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1320 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *bool_val = NULL;

		/*Build for loop conditional*/
		if ((yyvsp[-1].llvm_value_ref) != NULL)
		{
			bool_val = cl2llvm_val_bool((yyvsp[-1].llvm_value_ref));
			LLVMBuildCondBr(cl2llvm_builder, bool_val->val, 
				(yyvsp[-2].llvm_for_blocks)->for_stmt, (yyvsp[-2].llvm_for_blocks)->for_end);	
		}
		else
		{
			LLVMBuildBr(cl2llvm_builder, (yyvsp[-2].llvm_for_blocks)->for_stmt);
		}
		
		/*Prepare to build for loop increment*/
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-2].llvm_for_blocks)->for_incr);

			
		/*Free pointers*/
		if (bool_val != NULL)
			cl2llvm_val_free(bool_val);
		if ((yyvsp[-4].llvm_value_ref) != NULL)
			cl2llvm_val_free((yyvsp[-4].llvm_value_ref));
		if ((yyvsp[-1].llvm_value_ref) != NULL)
			cl2llvm_val_free((yyvsp[-1].llvm_value_ref));
	}
#line 3383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1348 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		/*Finish for loop increment*/
		LLVMBuildBr(cl2llvm_builder, (yyvsp[-5].llvm_for_blocks)->for_cond);
			
		/*Prepare to build for loop statements*/
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-5].llvm_for_blocks)->for_stmt);
		current_basic_block = (yyvsp[-5].llvm_for_blocks)->for_stmt;

		/*Free pointers*/
		if ((yyvsp[-1].llvm_value_ref) != NULL)
			cl2llvm_val_free((yyvsp[-1].llvm_value_ref));

		(yyval.llvm_for_blocks) = (yyvsp[-5].llvm_for_blocks);
	}
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1363 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_for_blocks_t *for_blocks;
		
		/*Initialize "for" blocks*/
		for_blocks = cl2llvm_for_blocks_create();
		
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_cond = LLVMAppendBasicBlock(cl2llvm_current_function->func,
			block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_stmt = LLVMAppendBasicBlock(cl2llvm_current_function->func,
			block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_incr = LLVMAppendBasicBlock(cl2llvm_current_function->func,
			block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef for_end = LLVMAppendBasicBlock(cl2llvm_current_function->func, 
			block_name);

		for_blocks->for_cond = for_cond;
		for_blocks->for_stmt = for_stmt;
		for_blocks->for_incr = for_incr;
		for_blocks->for_end = for_end;

		/*Prepare to build for loop conditional*/
		LLVMBuildBr(cl2llvm_builder, for_blocks->for_cond);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, for_blocks->for_cond);

		(yyval.llvm_for_blocks) = for_blocks;
		
	}
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1399 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *bool_val = NULL;

		/*Build for loop conditional*/
		if ((yyvsp[-1].llvm_value_ref) != NULL)
		{
			bool_val = cl2llvm_val_bool((yyvsp[-1].llvm_value_ref));
			LLVMBuildCondBr(cl2llvm_builder, bool_val->val, 
				(yyvsp[-2].llvm_for_blocks)->for_stmt, (yyvsp[-2].llvm_for_blocks)->for_end);
		}
		else
		{
			LLVMBuildBr(cl2llvm_builder, (yyvsp[-2].llvm_for_blocks)->for_stmt);
		}

		/*Prepare to build for loop increment*/
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-2].llvm_for_blocks)->for_incr);
		
		/*Free pointers*/
		if (bool_val != NULL)
			cl2llvm_val_free(bool_val);
		if ((yyvsp[-1].llvm_value_ref) != NULL)
			cl2llvm_val_free((yyvsp[-1].llvm_value_ref));
		
	}
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1425 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		LLVMBuildBr(cl2llvm_builder, (yyvsp[-5].llvm_for_blocks)->for_cond);

		/*Prepare to build for loop statements*/
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-5].llvm_for_blocks)->for_stmt);
		current_basic_block = (yyvsp[-5].llvm_for_blocks)->for_stmt;
		/*Free pointers*/
		if ((yyvsp[-1].llvm_value_ref) != NULL)
			cl2llvm_val_free((yyvsp[-1].llvm_value_ref));

		(yyval.llvm_for_blocks) = (yyvsp[-5].llvm_for_blocks);

	}
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1442 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_while_blocks_t *while_blocks = cl2llvm_while_blocks_create();

		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef while_stmt = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);

		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef while_cond = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef while_end = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);
		
		LLVMBuildBr(cl2llvm_builder, while_stmt);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, while_stmt);
		current_basic_block = while_stmt;

		while_blocks->while_stmt = while_stmt;
		while_blocks->while_cond = while_cond;
		while_blocks->while_end = while_end;

		(yyval.llvm_while_blocks) = while_blocks;
	}
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1467 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		LLVMBuildBr(cl2llvm_builder, (yyvsp[-3].llvm_while_blocks)->while_cond);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-3].llvm_while_blocks)->while_cond);
		current_basic_block = (yyvsp[-3].llvm_while_blocks)->while_cond;
	}
#line 3529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1473 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *bool_val;
		
		bool_val = cl2llvm_val_bool((yyvsp[-2].llvm_value_ref));
		LLVMBuildCondBr(cl2llvm_builder, bool_val->val, (yyvsp[-7].llvm_while_blocks)->while_stmt,
			(yyvsp[-7].llvm_while_blocks)->while_end);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-7].llvm_while_blocks)->while_end);
		current_basic_block = (yyvsp[-7].llvm_while_blocks)->while_end;
	}
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1486 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *bool_val;
		bool_val = cl2llvm_val_bool((yyvsp[-1].llvm_value_ref));
		LLVMBuildCondBr(cl2llvm_builder, bool_val->val, (yyvsp[-2].llvm_while_blocks)->while_stmt, (yyvsp[-2].llvm_while_blocks)->while_end);

		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-2].llvm_while_blocks)->while_stmt);
	
		current_basic_block = (yyvsp[-2].llvm_while_blocks)->while_stmt;
	
		cl2llvm_val_free(bool_val);
		cl2llvm_val_free((yyvsp[-1].llvm_value_ref));
	}
#line 3560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1499 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		LLVMBuildBr(cl2llvm_builder, (yyvsp[-4].llvm_while_blocks)->while_cond);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, (yyvsp[-4].llvm_while_blocks)->while_end);
		current_basic_block = (yyvsp[-4].llvm_while_blocks)->while_end;
		cl2llvm_while_blocks_free((yyvsp[-4].llvm_while_blocks));
	}
#line 3571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1509 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_while_blocks_t *while_blocks = cl2llvm_while_blocks_create();

		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef while_stmt = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);

		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef while_cond = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);
		snprintf(block_name, sizeof block_name,
			"block_%d", block_count++);
		LLVMBasicBlockRef while_end = LLVMAppendBasicBlock(cl2llvm_current_function->func, block_name);
		
		LLVMBuildBr(cl2llvm_builder, while_cond);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, while_cond);

		while_blocks->while_stmt = while_stmt;
		while_blocks->while_cond = while_cond;
		while_blocks->while_end = while_end;

		(yyval.llvm_while_blocks) = while_blocks;
	}
#line 3599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1536 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = NULL;
	}
#line 3607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1540 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = (yyvsp[0].llvm_value_ref);
	}
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1548 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = (yyvsp[-1].llvm_value_ref);
	}
#line 3623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1552 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_val_t *value;
		struct cl2llvm_type_t *type = cl2llvm_type_create();
		struct cl2llvm_val_t *op1, *op2;
		
		/* Find out which value differs from the original and set the
		   dominant type equal to the type of that value. */
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, &op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = op1->type->llvm_type;
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = op2->type->llvm_type;
			type->sign = op2->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		snprintf(temp_var_name, sizeof temp_var_name,
				"tmp_%d", temp_var_count++);
		
		value = cl2llvm_val_create();

		/* Determine which type of addition to use based on type of
		   operators. */
		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value->val = LLVMBuildAdd(cl2llvm_builder, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFAdd(cl2llvm_builder, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for addition");
		}
		
		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free( op2);
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1625 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value;
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type = cl2llvm_type_create();
		struct cl2llvm_val_t *op1, *op2;

		/* Find out which value differs from the original and set the
		   dominant type equal to the type of that value. */	
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		snprintf(temp_var_name, sizeof temp_var_name,
				"tmp_%d", temp_var_count++);

		value = cl2llvm_val_create();
		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value->val = LLVMBuildSub(cl2llvm_builder, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFSub(cl2llvm_builder, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for subtraction");
		}
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);

		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 3773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1694 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;

		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, &op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value->val = LLVMBuildMul(cl2llvm_builder, op1->val,
				op2->val, temp_var_name);

			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;

			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFMul(cl2llvm_builder, op1->val,
				op2->val, temp_var_name);

			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;

			break;

		default:

			yyerror("invalid type of operands for addition");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;

	}
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1772 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:
			if (type->sign)
			{
				value->val = LLVMBuildSDiv(cl2llvm_builder, 
					op1->val, op2->val, temp_var_name);
			}
			else
			{
				value->val = LLVMBuildUDiv(cl2llvm_builder, 
					op1->val, op2->val, temp_var_name);
			}
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:
			value->val = LLVMBuildFDiv(cl2llvm_builder, 
					op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:
			
			yyerror("invalid type of operands for addition");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1851 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
	
		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		switch (type->sign)
		{
		case 1:
			value->val = LLVMBuildSRem(cl2llvm_builder, 
				op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case 0:
			value->val = LLVMBuildURem(cl2llvm_builder, 
				op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:
			
			yyerror("invalid type of operands for addition");
		}
		
		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);

		(yyval.llvm_value_ref) = value;

	}
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1909 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:
			value->val = LLVMBuildShl(cl2llvm_builder, 
				op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;


		default:
			
			yyerror("Invalid type of operands for '<<'.");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;

	}
#line 4068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1973 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:
			value->val = LLVMBuildAShr(cl2llvm_builder, 
				op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;


		default:
			
			yyerror("Invalid type of operands for '>>'.");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 2036 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}
		
		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value->val = LLVMBuildICmp(cl2llvm_builder, LLVMIntEQ,
				op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFCmp(cl2llvm_builder,
				LLVMRealOEQ, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for equality");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 2109 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value->val = LLVMBuildICmp(cl2llvm_builder, LLVMIntNE,
				op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFCmp(cl2llvm_builder, 
				LLVMRealONE, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for addition");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;

	}
#line 4290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 2183 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			if (type->sign)
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntSLT, op1->val, op2->val, 
					temp_var_name);
			}
			else
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntULT, op1->val, op2->val, 
					temp_var_name);
			}
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFCmp(cl2llvm_builder, 
				LLVMRealOLT, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for comparison");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;

	}
#line 4378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2267 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			if (type->sign)
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntSGT, op1->val, op2->val, 
					temp_var_name);
			}
			else
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntUGT, op1->val, op2->val, 
					temp_var_name);
			}
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFCmp(cl2llvm_builder, 
				LLVMRealOGT, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for comparison");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2349 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			if (type->sign)
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntSLE, op1->val, op2->val, 
					temp_var_name);
			}
			else
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntULE, op1->val, op2->val, 
					temp_var_name);
			}
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFCmp(cl2llvm_builder, 
				LLVMRealOLE, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for comparison");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2431 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);

		type = cl2llvm_type_create();
		value = cl2llvm_val_create();

		struct cl2llvm_val_t *op1, *op2;
		
		type_unify((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref), &op1, & op2);
		if(op1 == (yyvsp[-2].llvm_value_ref))
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}
		else
		{
			type->llvm_type = LLVMTypeOf(op1->val);
			type->sign = op1->type->sign;
		}

		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			if (type->sign)
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntSGE, op1->val, op2->val, 
					temp_var_name);
			}
			else
			{
				value->val = LLVMBuildICmp(cl2llvm_builder, 
					LLVMIntUGE, op1->val, op2->val, 
					temp_var_name);
			}
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value->val = LLVMBuildFCmp(cl2llvm_builder, 
				LLVMRealOGE, op1->val, op2->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:

			yyerror("invalid type of operands for comparison");
		}

		/* Free pointers */
		if ((yyvsp[-2].llvm_value_ref) != op1)
			cl2llvm_val_free(op1);
		else if ((yyvsp[0].llvm_value_ref) != op2)
			cl2llvm_val_free(op2);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2514 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *bool1;
		struct cl2llvm_val_t *bool2;
		struct cl2llvm_val_t *value;
		LLVMBasicBlockRef land_rhs;
		LLVMBasicBlockRef land_end;
		LLVMValueRef land_cond;

		/* Create basic blocks */
		land_rhs = LLVMAppendBasicBlock(cl2llvm_current_function->func, "land_rhs");
		land_end = LLVMAppendBasicBlock(cl2llvm_current_function->func, "land_end");

		/* Convert LHS to boolean value */
		bool1 = cl2llvm_val_bool((yyvsp[-2].llvm_value_ref));

		/* Create conditional branch. Branch will skip to end block if LHS
		   is false */
		LLVMBuildCondBr(cl2llvm_builder, bool1->val, land_rhs, land_end);
		
		/* Move builder to RHS block */
		LLVMPositionBuilderAtEnd(cl2llvm_builder, land_rhs);

		/* Convert RHS to Bool */
		bool2 = cl2llvm_val_bool((yyvsp[0].llvm_value_ref));

		/* Build branch to end block */
		LLVMBuildBr(cl2llvm_builder, land_end);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, land_end);

		/* Position builder at end block */
		
		/* Build Phi node */
		LLVMValueRef phi_vals[] = {LLVMConstInt(LLVMInt1Type(), 0, 0), bool2->val};
		LLVMBasicBlockRef phi_blocks[] = {current_basic_block, land_rhs};
		land_cond = LLVMBuildPhi(cl2llvm_builder, LLVMInt1Type(), "land_cond");
		LLVMAddIncoming(land_cond, phi_vals, phi_blocks, 2);

		/* Set current current basic block */
		current_basic_block = land_end;

		value = cl2llvm_val_create_w_init(land_cond, 1);

		/* Free pointers */
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free(bool1);
		cl2llvm_val_free(bool2);
	
		(yyval.llvm_value_ref) = value;
	}
#line 4692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2565 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *bool1;
		struct cl2llvm_val_t *bool2;
		struct cl2llvm_val_t *value;
		LLVMBasicBlockRef land_rhs;
		LLVMBasicBlockRef land_end;
		LLVMValueRef land_cond;

		/* Create basic blocks */
		land_rhs = LLVMAppendBasicBlock(cl2llvm_current_function->func, "land_rhs");
		land_end = LLVMAppendBasicBlock(cl2llvm_current_function->func, "land_end");

		/* Convert LHS to boolean value */
		bool1 = cl2llvm_val_bool((yyvsp[-2].llvm_value_ref));

		/* Create conditional branch. Branch will skip to end block if LHS
		   is true */
		LLVMBuildCondBr(cl2llvm_builder, bool1->val, land_end, land_rhs);
		
		/* Move builder to RHS block */
		LLVMPositionBuilderAtEnd(cl2llvm_builder, land_rhs);

		/* Convert RHS to Bool */
		bool2 = cl2llvm_val_bool((yyvsp[0].llvm_value_ref));

		/* Build branch to end block */
		LLVMBuildBr(cl2llvm_builder, land_end);

		/* Position builder at end block */
		LLVMPositionBuilderAtEnd(cl2llvm_builder, land_end);
		
		/* Build Phi node */
		LLVMValueRef phi_vals[] = {LLVMConstInt(LLVMInt1Type(), 1, 0), bool2->val};
		LLVMBasicBlockRef phi_blocks[] = {current_basic_block, land_rhs};
		land_cond = LLVMBuildPhi(cl2llvm_builder, LLVMInt1Type(), "land_cond");
		LLVMAddIncoming(land_cond, phi_vals, phi_blocks, 2);

		/* Set current current basic block */
		current_basic_block = land_end;

		value = cl2llvm_val_create_w_init(land_cond, 1);

		/* Free pointers */
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free(bool1);
		cl2llvm_val_free(bool2);
	
		(yyval.llvm_value_ref) = value;
	}
#line 4747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2616 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value;
		struct cl2llvm_type_t *type; 
		
		type = cl2llvm_type_create_w_init(LLVMGetElementType((yyvsp[-2].llvm_value_ref)->type->llvm_type) , (yyvsp[-2].llvm_value_ref)->type->sign);

		/* If lvalue is a component referenced vector. */
		if ((yyvsp[-2].llvm_value_ref)->vector_indices[0])
		{
			value = cl2llvm_build_component_wise_assignment((yyvsp[-2].llvm_value_ref), (yyvsp[0].llvm_value_ref));
		}
		else
		{
			/*Cast rvalue to type of lvalue and store*/
			value = llvm_type_cast((yyvsp[0].llvm_value_ref), type);
			LLVMBuildStore(cl2llvm_builder, value->val, (yyvsp[-2].llvm_value_ref)->val);
		}

		/*Free pointers*/
		cl2llvm_type_free(type);
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));

		(yyval.llvm_value_ref) = value;
	}
#line 4777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2642 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;		struct cl2llvm_val_t *value;

		type = cl2llvm_type_create_w_init(LLVMGetElementType(
			(yyvsp[-2].llvm_value_ref)->type->llvm_type), (yyvsp[-2].llvm_value_ref)->type->sign);

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		struct cl2llvm_val_t *lval = cl2llvm_val_create_w_init(
			LLVMBuildLoad(cl2llvm_builder, (yyvsp[-2].llvm_value_ref)->val, temp_var_name),
			(yyvsp[-2].llvm_value_ref)->type->sign);

		struct cl2llvm_val_t *rval = llvm_type_cast((yyvsp[0].llvm_value_ref), type);
	
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value = cl2llvm_val_create_w_init(
				LLVMBuildAdd(cl2llvm_builder, lval->val, 
				rval->val, temp_var_name), type->sign);
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value = cl2llvm_val_create_w_init(
				LLVMBuildFAdd(cl2llvm_builder, lval->val, 
				rval->val, temp_var_name), type->sign);
			break;

		default:

			yyerror("invalid type of operands for addition");
			value = cl2llvm_val_create();
		}

		LLVMBuildStore(cl2llvm_builder, value->val, (yyvsp[-2].llvm_value_ref)->val);
		
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free(rval);
		cl2llvm_val_free(lval);
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2706 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
		
		type = cl2llvm_type_create_w_init(LLVMGetElementType(
			(yyvsp[-2].llvm_value_ref)->type->llvm_type), (yyvsp[-2].llvm_value_ref)->type->sign);

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		struct cl2llvm_val_t *lval = cl2llvm_val_create_w_init(
			LLVMBuildLoad(cl2llvm_builder, (yyvsp[-2].llvm_value_ref)->val, temp_var_name),
			(yyvsp[-2].llvm_value_ref)->type->sign);

		struct cl2llvm_val_t *rval = llvm_type_cast((yyvsp[0].llvm_value_ref), type);

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value = cl2llvm_val_create_w_init(
				LLVMBuildSub(cl2llvm_builder, lval->val, 
				rval->val, temp_var_name), type->sign);
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value = cl2llvm_val_create_w_init(
				LLVMBuildFSub(cl2llvm_builder, lval->val, 
				rval->val, temp_var_name), type->sign);
			break;

		default:
			
			yyerror("invalid type of operands for addition");
			value = cl2llvm_val_create();
		}

		LLVMBuildStore(cl2llvm_builder, value->val, (yyvsp[-2].llvm_value_ref)->val);
	
		/* Free pointers */
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free(rval);
		cl2llvm_val_free(lval);
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2772 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;

		type = cl2llvm_type_create_w_init( 
			LLVMGetElementType((yyvsp[-2].llvm_value_ref)->type->llvm_type) , (yyvsp[-2].llvm_value_ref)->type->sign);
		value = cl2llvm_val_create();

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		struct cl2llvm_val_t *lval = cl2llvm_val_create_w_init(
			LLVMBuildLoad(cl2llvm_builder, (yyvsp[-2].llvm_value_ref)->val, temp_var_name),
			(yyvsp[-2].llvm_value_ref)->type->sign);
	
		struct cl2llvm_val_t *rval = llvm_type_cast((yyvsp[0].llvm_value_ref), type);

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:
			if (type->sign)
			{
				value->val = LLVMBuildSDiv(cl2llvm_builder, 
					lval->val, rval->val, temp_var_name);
			}
			else
			{
				value->val = LLVMBuildUDiv(cl2llvm_builder, 
					lval->val, rval->val, temp_var_name);
			}
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:
			value->val = LLVMBuildFDiv(cl2llvm_builder, 
					lval->val, rval->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:
			
			yyerror("invalid type of operands for addition");
		}
	
		LLVMBuildStore(cl2llvm_builder, value->val, (yyvsp[-2].llvm_value_ref)->val);
		
		/* Free pointers */
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free(rval);
		cl2llvm_val_free(lval);
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 4993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2846 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;

		type = cl2llvm_type_create_w_init(LLVMGetElementType(
			(yyvsp[-2].llvm_value_ref)->type->llvm_type), (yyvsp[-2].llvm_value_ref)->type->sign);
		value = cl2llvm_val_create();

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		struct cl2llvm_val_t *lval = cl2llvm_val_create_w_init(
			LLVMBuildLoad(cl2llvm_builder, (yyvsp[-2].llvm_value_ref)->val, temp_var_name),
			(yyvsp[-2].llvm_value_ref)->type->sign);
	
		struct cl2llvm_val_t *rval = llvm_type_cast((yyvsp[0].llvm_value_ref), type);

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value->val = LLVMBuildMul(cl2llvm_builder, 
				lval->val, rval->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:
			value->val = LLVMBuildFMul(cl2llvm_builder, 
					lval->val, rval->val, temp_var_name);
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:
			
			yyerror("invalid type of operands for addition");
		}
	
		LLVMBuildStore(cl2llvm_builder, value->val, (yyvsp[-2].llvm_value_ref)->val);
	
		/* Free pointers */
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free(lval);
		cl2llvm_val_free(rval);
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 5064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2913 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value;
	
		type = cl2llvm_type_create_w_init(LLVMGetElementType(
			(yyvsp[-2].llvm_value_ref)->type->llvm_type), (yyvsp[-2].llvm_value_ref)->type->sign);
		value = cl2llvm_val_create();

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		struct cl2llvm_val_t *lval = cl2llvm_val_create_w_init(
			LLVMBuildLoad(cl2llvm_builder, (yyvsp[-2].llvm_value_ref)->val, temp_var_name),
			(yyvsp[-2].llvm_value_ref)->type->sign);
	
		struct cl2llvm_val_t *rval = llvm_type_cast((yyvsp[0].llvm_value_ref), type);

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:
			if (type->sign)
			{
				value->val = LLVMBuildSRem(cl2llvm_builder, 
					lval->val, rval->val, temp_var_name);
			}
			else
			{
				value->val = LLVMBuildURem(cl2llvm_builder, 
					lval->val, rval->val, temp_var_name);
			}
			value->type->sign = type->sign;
			value->type->llvm_type = type->llvm_type;
			break;

		default:
			
			yyerror("invalid type of operands for addition");
		}
	
		LLVMBuildStore(cl2llvm_builder, value->val, (yyvsp[-2].llvm_value_ref)->val);
		
		/* Free pointers */
		cl2llvm_val_free((yyvsp[-2].llvm_value_ref));
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_val_free(rval);
		cl2llvm_val_free(lval);
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = value;
	}
#line 5133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2978 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'&=' not supported");
	}
#line 5141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2982 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'!=' not supported");
	}
#line 5149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2986 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'^=' not supported");
	}
#line 5157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2990 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {

		cl2llvm_yyerror("'>>=' not supported");
	}
#line 5166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2995 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'<<=' not supported");
	}
#line 5174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2999 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("a'?'b':'c not supported");
	}
#line 5182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 3003 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = (yyvsp[0].llvm_value_ref);
	}
#line 5190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 3008 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = (yyvsp[0].llvm_value_ref);
	}
#line 5198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 3013 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'!' not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 3019 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		
		cl2llvm_yyerror("bitwise and '&' not supported");
	}
#line 5216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 3024 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		
		cl2llvm_yyerror("bitwise or '|' not supported");
	}
#line 5225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 3029 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		
		cl2llvm_yyerror("bitwise exclusive or '^' not supported");
	}
#line 5234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 3038 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *switch_type;
		struct cl2llvm_type_t *type;
		struct cl2llvm_val_t *value_plus_one;
		struct cl2llvm_val_t *one;

		/* Create constant one to add to variable */
		one = cl2llvm_val_create_w_init(LLVMConstInt(LLVMInt32Type(), 1, 0), 1);

		type = cl2llvm_type_create_w_init(LLVMGetElementType(
			(yyvsp[-1].llvm_value_ref)->type->llvm_type), (yyvsp[-1].llvm_value_ref)->type->sign);

		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		struct cl2llvm_val_t *lval = cl2llvm_val_create_w_init(
			LLVMBuildLoad(cl2llvm_builder, (yyvsp[-1].llvm_value_ref)->val, temp_var_name),
			(yyvsp[-1].llvm_value_ref)->type->sign);

		/* Cast constant one to type of variable */
		struct cl2llvm_val_t *cast_one = llvm_type_cast(one, type);
	
		snprintf(temp_var_name, sizeof temp_var_name,
			"tmp_%d", temp_var_count++);
		
		/* Create an object that will hold the type of the operands.
		   This extra object is necessary since in the case of a vector 
		   type, we are concerned with the type of its components, but the
		   resultant type of the operation is a vector. */
		switch_type = cl2llvm_type_create_w_init(type->llvm_type, type->sign);
		if (LLVMGetTypeKind(switch_type->llvm_type) == LLVMVectorTypeKind)
		{
			switch_type->llvm_type = LLVMGetElementType(type->llvm_type);
		}

		switch (LLVMGetTypeKind(switch_type->llvm_type))
		{
		case LLVMIntegerTypeKind:

			value_plus_one = cl2llvm_val_create_w_init(
				LLVMBuildAdd(cl2llvm_builder, lval->val, 
				cast_one->val, temp_var_name), type->sign);
			break;

		case LLVMHalfTypeKind:
		case LLVMFloatTypeKind:
		case LLVMDoubleTypeKind:

			value_plus_one = cl2llvm_val_create_w_init(
				LLVMBuildFAdd(cl2llvm_builder, lval->val, 
				cast_one->val, temp_var_name), type->sign);
			break;

		default:

			yyerror("invalid type of operand for post '++'");
			value_plus_one = cl2llvm_val_create();
		}
		
		LLVMBuildStore(cl2llvm_builder, value_plus_one->val, (yyvsp[-1].llvm_value_ref)->val);
		
		cl2llvm_val_free(one);
		cl2llvm_val_free(value_plus_one);
		cl2llvm_val_free(cast_one);
		cl2llvm_val_free(lval);
		cl2llvm_type_free(type);
		cl2llvm_type_free(switch_type);

		(yyval.llvm_value_ref) = (yyvsp[-1].llvm_value_ref);

	}
#line 5309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 3109 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {	
		cl2llvm_yyerror("pre-increment not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 3114 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("pre decrement not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 3119 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("post decrement not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 3124 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("unary minus not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 3129 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("unary plus not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 3134 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value;

		value = llvm_type_cast((yyvsp[0].llvm_value_ref), (yyvsp[-2].llvm_type_ref));
	
		/* Free pointers */
		cl2llvm_val_free((yyvsp[0].llvm_value_ref));
		cl2llvm_type_free((yyvsp[-2].llvm_type_ref));
		(yyval.llvm_value_ref) = value;
	}
#line 5369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 3145 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'sizeof' not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 3150 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'~'not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 3155 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'&' not supported");
		(yyval.llvm_value_ref) = NULL;
	}
#line 5396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 3167 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		int index;
		struct cl2llvm_val_t *current_vec_elem;
		struct cl2llvm_type_t *elem_type;
		struct cl2llvm_val_t *cast_val;
		struct cl2llvm_val_t *value;
		struct cl2llvm_val_t *blank_elem = cl2llvm_val_create_w_init( LLVMConstInt(LLVMInt32Type(), 0, 0), 1);
		struct cl2llvm_val_t *cast_index;
		struct cl2llvm_val_t *cl2llvm_index;
		LLVMValueRef vec_const_elems[16];
		int vec_nonconst_elems[16];
		int elem_count = 0;
		int non_const_elem_count = 0;

		cast_index = NULL;
		cast_val = NULL;
		current_vec_elem = NULL;

		snprintf(temp_var_name, sizeof(temp_var_name),
			"tmp_%d", temp_var_count++);
		/* Create type object to represent element type */
		elem_type = cl2llvm_type_create_w_init(LLVMGetElementType((yyvsp[-4].llvm_type_ref)->llvm_type), (yyvsp[-4].llvm_type_ref)->sign);
		/*Go to entry block and declare vector*/
		LLVMPositionBuilder(cl2llvm_builder, cl2llvm_current_function->entry_block, cl2llvm_current_function->branch_instr);
		LLVMValueRef vec_addr = LLVMBuildAlloca(cl2llvm_builder, 
			(yyvsp[-4].llvm_type_ref)->llvm_type, temp_var_name);
		LLVMPositionBuilderAtEnd(cl2llvm_builder, current_basic_block);

		/*Expand any vectors present in list*/
		expand_vectors((yyvsp[-1].list_val_t));

		/*Iterate over list and build a vector of all constant entries*/
		for (index = 0; index < list_count((yyvsp[-1].list_val_t)); ++index)
		{
			current_vec_elem = list_get((yyvsp[-1].list_val_t), index);
			if(LLVMIsConstant(current_vec_elem->val) == 1)
			{
				
				cast_val = llvm_type_cast(current_vec_elem, elem_type);
				vec_const_elems[index] = cast_val->val;
				vec_nonconst_elems[index] = 0;
				elem_count++;
			}
			else
			{
				cast_val = llvm_type_cast(blank_elem, elem_type);
				vec_const_elems[index] = cast_val->val;
				vec_nonconst_elems[index] = 1;
				elem_count++;
				non_const_elem_count++;
			}
			if (elem_count > LLVMGetVectorSize((yyvsp[-4].llvm_type_ref)->llvm_type))
				yyerror("Too many elements in vector literal");
			cl2llvm_val_free(cast_val);
		}
		if (elem_count < LLVMGetVectorSize((yyvsp[-4].llvm_type_ref)->llvm_type))
			yyerror("Too few elements in vector literal");
		
		LLVMValueRef new_vector = LLVMConstVector(vec_const_elems, elem_count);

		/*Store constant vector*/
		if(non_const_elem_count < elem_count)
			LLVMBuildStore(cl2llvm_builder, new_vector, vec_addr);

		
		/*If there are non-constant entries in vector, insert them*/
		if (non_const_elem_count)
		{
			for (index = 0; index < elem_count; index++)
			{	
				cl2llvm_index = cl2llvm_val_create_w_init( LLVMConstInt(LLVMInt32Type(), index, 0), 1);
				cast_val = NULL;
				cast_index = NULL;

				current_vec_elem = list_get((yyvsp[-1].list_val_t), index);
				if (vec_nonconst_elems[index])
				{
					cast_val = llvm_type_cast(current_vec_elem, elem_type);
					
					snprintf(temp_var_name, sizeof(temp_var_name),
						"tmp_%d", temp_var_count++);

					LLVMValueRef vector_load = LLVMBuildLoad( cl2llvm_builder, vec_addr, temp_var_name);

					snprintf(temp_var_name, sizeof(temp_var_name),
						"tmp_%d", temp_var_count++);
					cast_index = llvm_type_cast(cl2llvm_index, elem_type);

					new_vector = LLVMBuildInsertElement( cl2llvm_builder, vector_load, cast_val->val, cl2llvm_index->val, temp_var_name);

					LLVMBuildStore(cl2llvm_builder, new_vector, vec_addr);

				}
				if (cast_val != NULL)
					cl2llvm_val_free(cast_val);
				if (cast_index != NULL)
					cl2llvm_val_free(cast_index);
				cl2llvm_val_free(cl2llvm_index);
			}

		}
		cl2llvm_val_free(blank_elem);
		cl2llvm_type_free(elem_type);

		LIST_FOR_EACH((yyvsp[-1].list_val_t), index)
		{
			cl2llvm_val_free(list_get((yyvsp[-1].list_val_t), index));
		}
		list_free((yyvsp[-1].list_val_t));

		value = cl2llvm_val_create_w_init(new_vector, (yyvsp[-4].llvm_type_ref)->sign);
		
		(yyval.llvm_value_ref) = value;

		cl2llvm_type_free((yyvsp[-4].llvm_type_ref));
	}
#line 5517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 3287 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct list_t *vec_elem_list;

		vec_elem_list = list_create();
		list_add(vec_elem_list, (yyvsp[-2].llvm_value_ref));
		list_add(vec_elem_list, (yyvsp[0].llvm_value_ref));

		(yyval.list_val_t) = vec_elem_list;

	}
#line 5532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 3301 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.list_val_t) = (yyvsp[0].list_val_t);
	}
#line 5540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 3305 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		list_add((yyvsp[-2].list_val_t), (yyvsp[0].llvm_value_ref));

		(yyval.list_val_t) = (yyvsp[-2].list_val_t);
	}
#line 5550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 3315 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstInt(LLVMInt32Type(), (yyvsp[0].const_int_val), 0), 1);
		(yyval.llvm_value_ref) = value;
	}
#line 5560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 3321 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstInt(LLVMInt32Type(), (yyvsp[0].const_int_val), 0), 1);
		(yyval.llvm_value_ref) = value;
	}
#line 5570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 3327 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstInt(LLVMInt32Type(), (yyvsp[0].const_int_val), 0), 0);
		(yyval.llvm_value_ref) = value;
	}
#line 5580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 3333 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value =  cl2llvm_val_create_w_init(
			LLVMConstInt(LLVMInt32Type(), (yyvsp[0].const_int_val), 0), 0);
		(yyval.llvm_value_ref) = value;
	}
#line 5590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 3339 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstInt(LLVMInt64Type(), (yyvsp[0].const_int_val_ull), 0), 1);
		(yyval.llvm_value_ref) = value;
	}
#line 5600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 3345 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstInt(LLVMInt64Type(), (yyvsp[0].const_int_val_ull), 0), 0);
		(yyval.llvm_value_ref) = value;
	}
#line 5610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 3351 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init( 
			LLVMConstReal(LLVMDoubleType(), (yyvsp[0].const_float_val)), 1);
		(yyval.llvm_value_ref) = value;
	}
#line 5620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 3357 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstReal(LLVMHalfType(), (yyvsp[0].const_float_val)), 1);
		(yyval.llvm_value_ref) = value;
	}
#line 5630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 3363 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstReal(LLVMFloatType(), (yyvsp[0].const_float_val)), 1);
		(yyval.llvm_value_ref) = value;
	}
#line 5640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 3369 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMConstReal(LLVMDoubleType(), (yyvsp[0].const_float_val)), 1);
		(yyval.llvm_value_ref) = value;
	}
#line 5650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 3375 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		int i;
		int component_count = 0;
		LLVMValueRef new_vector_addr;
		LLVMValueRef new_vector;
		LLVMValueRef component;
		
		snprintf(temp_var_name, sizeof(temp_var_name),
			"tmp_%d", temp_var_count++);
		struct cl2llvm_val_t *value = cl2llvm_val_create_w_init(
			LLVMBuildLoad(cl2llvm_builder, (yyvsp[0].llvm_value_ref)->val, temp_var_name),
			(yyvsp[0].llvm_value_ref)->type->sign);

		/* If value is an array element, retrieve element type */
		if (LLVMGetTypeKind(value->type->llvm_type) == LLVMArrayTypeKind
			|| LLVMGetTypeKind(value->type->llvm_type) == LLVMPointerTypeKind
			|| LLVMGetTypeKind(value->type->llvm_type) == LLVMStructTypeKind)
		{
			value->type->llvm_type = LLVMGetElementType(value->type->llvm_type);
		}

		/* If element is of vector type, check for component indices. */
		if (LLVMGetTypeKind(LLVMGetElementType((yyvsp[0].llvm_value_ref)->type->llvm_type))
			== LLVMVectorTypeKind && (yyvsp[0].llvm_value_ref)->vector_indices[i])
		{
			/* Get vector component count */
			while((yyvsp[0].llvm_value_ref)->vector_indices[component_count])
				component_count++;
			/* If there are multiple components */
			if (component_count == 2 || component_count == 3
				|| component_count == 4 || component_count == 8
				|| component_count == 16)
			{

				snprintf(temp_var_name, sizeof temp_var_name,
					"tmp_%d", temp_var_count++);

				/* Go to entry block and allocate new vector */
				LLVMPositionBuilder(cl2llvm_builder, 
					cl2llvm_current_function->entry_block,
					cl2llvm_current_function->branch_instr);
			
				new_vector_addr = LLVMBuildAlloca(cl2llvm_builder,
					LLVMVectorType(LLVMGetElementType(value->type->llvm_type),
					component_count), temp_var_name);

				LLVMPositionBuilderAtEnd(cl2llvm_builder, current_basic_block);


				/* Load new vector */
				snprintf(temp_var_name, sizeof temp_var_name,
					"tmp_%d", temp_var_count++);
				new_vector = LLVMBuildLoad(cl2llvm_builder, new_vector_addr,
					temp_var_name);

				while ((yyvsp[0].llvm_value_ref)->vector_indices[i])
				{
					snprintf(temp_var_name, sizeof temp_var_name,
						"tmp_%d", temp_var_count++);
					component = LLVMBuildExtractElement(cl2llvm_builder, 
						value->val, (yyvsp[0].llvm_value_ref)->vector_indices[i]->val,
						temp_var_name);

					snprintf(temp_var_name, sizeof temp_var_name,
						"tmp_%d", temp_var_count++);
					new_vector = LLVMBuildInsertElement(cl2llvm_builder, 
						new_vector, component, (yyvsp[0].llvm_value_ref)->vector_indices[i]->val,
						temp_var_name);
					i++;
				}
				value->val = new_vector;
				value->type->llvm_type = LLVMTypeOf(new_vector);
			}
			else if (component_count == 1)
			{
				snprintf(temp_var_name, sizeof temp_var_name,
					"tmp_%d", temp_var_count++);
				
				component = LLVMBuildExtractElement(cl2llvm_builder, 
					value->val, (yyvsp[0].llvm_value_ref)->vector_indices[0]->val,
					temp_var_name);
				value->val = component;
				value->type->llvm_type = LLVMTypeOf(component);
			}
			else
				cl2llvm_yyerror("Invalid vector type.");
		}
			

		cl2llvm_val_free((yyvsp[0].llvm_value_ref));

		(yyval.llvm_value_ref) = value;
	}
#line 5748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 3470 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_value_ref) = (yyvsp[0].llvm_value_ref);
	}
#line 5756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 3478 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		(yyval.llvm_type_ref) = (yyvsp[0].llvm_type_ref);
	}
#line 5764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 3482 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		LLVMTypeRef ptr_type;
		struct cl2llvm_type_t *type;
		
		/* Create pointer type */
		ptr_type = LLVMPointerType((yyvsp[-1].llvm_type_ref)->llvm_type, 0);
		
		type = cl2llvm_type_create_w_init(ptr_type, (yyvsp[-1].llvm_type_ref)->sign);
	
		/* Free pointers */
		cl2llvm_type_free((yyvsp[-1].llvm_type_ref));
		
		(yyval.llvm_type_ref) = type;
	}
#line 5783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 3500 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'intptr_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 3505 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'ptrdiff_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 3510 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'uintptr_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 3515 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'sampler_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 3520 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'event_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 3525 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'image2d_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 3530 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'image3d_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3535 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'image2d_array_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3540 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'image1d_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3545 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'image1d_buffer_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 3550 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		cl2llvm_yyerror("'image1d_array_t' not supported");
		(yyval.llvm_type_ref) = NULL;
	}
#line 5882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3555 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt32Type(), 0);
		(yyval.llvm_type_ref) = type;
	}
#line 5892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 3561 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt32Type(), 0);
		(yyval.llvm_type_ref) = type;
	}
#line 5902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3567 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt64Type(), 0);
		(yyval.llvm_type_ref) = type;
	}
#line 5912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 3573 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt8Type(), 0);
		(yyval.llvm_type_ref) = type;
	}
#line 5922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 3579 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt16Type(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 5932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 3585 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt16Type(), 0);
		(yyval.llvm_type_ref) = type;
	}
#line 5942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3591 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt32Type(), (yyvsp[0].const_int_val)), 0);
		(yyval.llvm_type_ref) = type;

	}
#line 5953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 3598 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt8Type(), (yyvsp[0].const_int_val)), 0);
		(yyval.llvm_type_ref) = type;

	}
#line 5964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 3605 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt32Type(), (yyvsp[0].const_int_val)), 0);
		(yyval.llvm_type_ref) = type;

	}
#line 5975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 3612 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt16Type(), (yyvsp[0].const_int_val)), 0);
		(yyval.llvm_type_ref) = type;

	}
#line 5986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 3619 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt16Type(), (yyvsp[0].const_int_val)), 1);
		(yyval.llvm_type_ref) = type;

	}
#line 5997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 3626 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt32Type(), (yyvsp[0].const_int_val)), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 3632 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt32Type(), (yyvsp[0].const_int_val)), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 3638 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMInt8Type(), (yyvsp[0].const_int_val)), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 3644 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMFloatType(), (yyvsp[0].const_int_val)), 0);
		(yyval.llvm_type_ref) = type;
	}
#line 6037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 3650 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type;
		type = cl2llvm_type_create_w_init(LLVMVectorType(LLVMDoubleType(), (yyvsp[0].const_int_val)), 0);
		(yyval.llvm_type_ref) = type;
	}
#line 6047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 3656 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt32Type(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 3662 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt32Type(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 3668 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt64Type(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 3674 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt8Type(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 3680 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMFloatType(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 3686 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt1Type(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 3692 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMDoubleType(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 3698 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMInt64Type(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 3704 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMVoidType(), 1);
		(yyval.llvm_type_ref) = type;

	}
#line 6138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 3711 "../m2c/cl2llvm/parser.y" /* yacc.c:1646  */
    {
		struct cl2llvm_type_t *type = cl2llvm_type_create_w_init(
			LLVMHalfType(), 1);
		(yyval.llvm_type_ref) = type;
	}
#line 6148 "y.tab.c" /* yacc.c:1646  */
    break;


#line 6152 "y.tab.c" /* yacc.c:1646  */
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
#line 3721 "../m2c/cl2llvm/parser.y" /* yacc.c:1906  */


