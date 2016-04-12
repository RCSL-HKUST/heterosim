/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_SI2BIN_YY_PARSER_H_INCLUDED
# define YY_SI2BIN_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int si2bin_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_SCALAR_REGISTER = 258,
    TOK_VECTOR_REGISTER = 259,
    TOK_SPECIAL_REGISTER = 260,
    TOK_MEMORY_REGISTER = 261,
    TOK_DECIMAL = 262,
    TOK_HEX = 263,
    TOK_FLOAT = 264,
    TOK_ID = 265,
    TOK_COMMA = 266,
    TOK_COLON = 267,
    TOK_FORMAT = 268,
    TOK_OFFEN = 269,
    TOK_IDXEN = 270,
    TOK_OFFSET = 271,
    TOK_OBRA = 272,
    TOK_CBRA = 273,
    TOK_OPAR = 274,
    TOK_CPAR = 275,
    TOK_NEW_LINE = 276,
    TOK_AMP = 277,
    TOK_ABS = 278,
    TOK_NEG = 279,
    TOK_STAR = 280,
    TOK_EQ = 281,
    TOK_UAV = 282,
    TOK_HL = 283,
    TOK_GLOBAL = 284,
    TOK_METADATA = 285,
    TOK_ARGS = 286,
    TOK_DATA = 287,
    TOK_TEXT = 288,
    TOK_CONST = 289,
    TOK_INT_DECL = 290,
    TOK_SHORT_DECL = 291,
    TOK_FLOAT_DECL = 292,
    TOK_HALF_DECL = 293,
    TOK_WORD_DECL = 294,
    TOK_BYTE_DECL = 295
  };
#endif
/* Tokens.  */
#define TOK_SCALAR_REGISTER 258
#define TOK_VECTOR_REGISTER 259
#define TOK_SPECIAL_REGISTER 260
#define TOK_MEMORY_REGISTER 261
#define TOK_DECIMAL 262
#define TOK_HEX 263
#define TOK_FLOAT 264
#define TOK_ID 265
#define TOK_COMMA 266
#define TOK_COLON 267
#define TOK_FORMAT 268
#define TOK_OFFEN 269
#define TOK_IDXEN 270
#define TOK_OFFSET 271
#define TOK_OBRA 272
#define TOK_CBRA 273
#define TOK_OPAR 274
#define TOK_CPAR 275
#define TOK_NEW_LINE 276
#define TOK_AMP 277
#define TOK_ABS 278
#define TOK_NEG 279
#define TOK_STAR 280
#define TOK_EQ 281
#define TOK_UAV 282
#define TOK_HL 283
#define TOK_GLOBAL 284
#define TOK_METADATA 285
#define TOK_ARGS 286
#define TOK_DATA 287
#define TOK_TEXT 288
#define TOK_CONST 289
#define TOK_INT_DECL 290
#define TOK_SHORT_DECL 291
#define TOK_FLOAT_DECL 292
#define TOK_HALF_DECL 293
#define TOK_WORD_DECL 294
#define TOK_BYTE_DECL 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 53 "parser.y" /* yacc.c:1909  */

	int num;
	float num_float;
	struct si2bin_id_t *id;
	struct si2bin_inst_t *inst;
	struct si_label_t *label;
	struct list_t *list;
	struct si2bin_arg_t *arg;
	struct si_arg_t *si_arg;

#line 145 "parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE si2bin_yylval;

int si2bin_yyparse (void);

#endif /* !YY_SI2BIN_YY_PARSER_H_INCLUDED  */
