/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    EOL = 260,                     /* EOL  */
    TRUE = 261,                    /* TRUE  */
    FALSE = 262,                   /* FALSE  */
    THIS = 263,                    /* THIS  */
    ALLOCATION = 264,              /* ALLOCATION  */
    OPEN_PARENTHESIS = 265,        /* OPEN_PARENTHESIS  */
    CLOSE_PARENTHESIS = 266,       /* CLOSE_PARENTHESIS  */
    OPEN_BRACKETS = 267,           /* OPEN_BRACKETS  */
    CLOSE_BRACKETS = 268,          /* CLOSE_BRACKETS  */
    OPEN_SCOPE = 269,              /* OPEN_SCOPE  */
    CLOSE_SCOPE = 270,             /* CLOSE_SCOPE  */
    DOT = 271,                     /* DOT  */
    SEMICOLON = 272,               /* SEMICOLON  */
    COMMA = 273,                   /* COMMA  */
    EQUALS = 274,                  /* EQUALS  */
    INT_TYPE = 275,                /* INT_TYPE  */
    BOOLEAN = 276,                 /* BOOLEAN  */
    STRING = 277,                  /* STRING  */
    LENGTH = 278,                  /* LENGTH  */
    IF = 279,                      /* IF  */
    ELSE = 280,                    /* ELSE  */
    WHILE = 281,                   /* WHILE  */
    PRINT = 282,                   /* PRINT  */
    PUBLIC = 283,                  /* PUBLIC  */
    CLASS = 284,                   /* CLASS  */
    STATIC = 285,                  /* STATIC  */
    VOID = 286,                    /* VOID  */
    MAIN = 287,                    /* MAIN  */
    EXTENDS = 288,                 /* EXTENDS  */
    RETURN = 289,                  /* RETURN  */
    PLUS = 290,                    /* PLUS  */
    MINUS = 291,                   /* MINUS  */
    COMPARE = 292,                 /* COMPARE  */
    STAR = 293,                    /* STAR  */
    AND = 294,                     /* AND  */
    NEGATION = 295                 /* NEGATION  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
