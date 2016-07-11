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

#ifndef YY_FRM2BIN_YY_PARSER_H_INCLUDED
# define YY_FRM2BIN_YY_PARSER_H_INCLUDED
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
#line 29 "parser.y" /* yacc.c:1909  */

	int num;
  	struct frm_id_t *id;
  	struct frm2bin_inst_t *inst;
  	struct frm_label_t *label;
  	struct list_t *list;
  	struct frm_arg_t *arg;
  	struct frm_mod_t *mod;
  	struct frm2bin_pred_t *pred;

#line 123 "parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE frm2bin_yylval;

int frm2bin_yyparse (void);

#endif /* !YY_FRM2BIN_YY_PARSER_H_INCLUDED  */
