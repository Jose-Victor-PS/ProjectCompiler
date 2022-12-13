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
    IDENTIFIER = 258,
    NUMBER = 259,
    EOL = 260,
    TRUE = 261,
    FALSE = 262,
    THIS = 263,
    ALLOCATION = 264,
    OPEN_PARENTHESIS = 265,
    CLOSE_PARENTHESIS = 266,
    OPEN_BRACKETS = 267,
    CLOSE_BRACKETS = 268,
    OPEN_SCOPE = 269,
    CLOSE_SCOPE = 270,
    DOT = 271,
    SEMICOLON = 272,
    COMMA = 273,
    EQUALS = 274,
    INT_TYPE = 275,
    BOOLEAN = 276,
    STRING = 277,
    LENGTH = 278,
    IF = 279,
    ELSE = 280,
    WHILE = 281,
    PRINT = 282,
    PUBLIC = 283,
    CLASS = 284,
    STATIC = 285,
    VOID = 286,
    MAIN = 287,
    EXTENDS = 288,
    RETURN = 289,
    PLUS = 290,
    MINUS = 291,
    COMPARE = 292,
    STAR = 293,
    AND = 294,
    NEGATION = 295
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define NUMBER 259
#define EOL 260
#define TRUE 261
#define FALSE 262
#define THIS 263
#define ALLOCATION 264
#define OPEN_PARENTHESIS 265
#define CLOSE_PARENTHESIS 266
#define OPEN_BRACKETS 267
#define CLOSE_BRACKETS 268
#define OPEN_SCOPE 269
#define CLOSE_SCOPE 270
#define DOT 271
#define SEMICOLON 272
#define COMMA 273
#define EQUALS 274
#define INT_TYPE 275
#define BOOLEAN 276
#define STRING 277
#define LENGTH 278
#define IF 279
#define ELSE 280
#define WHILE 281
#define PRINT 282
#define PUBLIC 283
#define CLASS 284
#define STATIC 285
#define VOID 286
#define MAIN 287
#define EXTENDS 288
#define RETURN 289
#define PLUS 290
#define MINUS 291
#define COMPARE 292
#define STAR 293
#define AND 294
#define NEGATION 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
