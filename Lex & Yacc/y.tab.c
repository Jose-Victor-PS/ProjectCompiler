/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "minijava.y"

#include <stdio.h>
#include <string.h>
#define YYSTYPE char *
#line 7 "minijava.y"

int yylex(void);
int yyerror(char *msg);

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_EOL = 5,                        /* EOL  */
  YYSYMBOL_TRUE = 6,                       /* TRUE  */
  YYSYMBOL_FALSE = 7,                      /* FALSE  */
  YYSYMBOL_THIS = 8,                       /* THIS  */
  YYSYMBOL_ALLOCATION = 9,                 /* ALLOCATION  */
  YYSYMBOL_OPEN_PARENTHESIS = 10,          /* OPEN_PARENTHESIS  */
  YYSYMBOL_CLOSE_PARENTHESIS = 11,         /* CLOSE_PARENTHESIS  */
  YYSYMBOL_OPEN_BRACKETS = 12,             /* OPEN_BRACKETS  */
  YYSYMBOL_CLOSE_BRACKETS = 13,            /* CLOSE_BRACKETS  */
  YYSYMBOL_OPEN_SCOPE = 14,                /* OPEN_SCOPE  */
  YYSYMBOL_CLOSE_SCOPE = 15,               /* CLOSE_SCOPE  */
  YYSYMBOL_DOT = 16,                       /* DOT  */
  YYSYMBOL_SEMICOLON = 17,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_EQUALS = 19,                    /* EQUALS  */
  YYSYMBOL_INT_TYPE = 20,                  /* INT_TYPE  */
  YYSYMBOL_BOOLEAN = 21,                   /* BOOLEAN  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_LENGTH = 23,                    /* LENGTH  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_PRINT = 27,                     /* PRINT  */
  YYSYMBOL_PUBLIC = 28,                    /* PUBLIC  */
  YYSYMBOL_CLASS = 29,                     /* CLASS  */
  YYSYMBOL_STATIC = 30,                    /* STATIC  */
  YYSYMBOL_VOID = 31,                      /* VOID  */
  YYSYMBOL_MAIN = 32,                      /* MAIN  */
  YYSYMBOL_EXTENDS = 33,                   /* EXTENDS  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_PLUS = 35,                      /* PLUS  */
  YYSYMBOL_MINUS = 36,                     /* MINUS  */
  YYSYMBOL_COMPARE = 37,                   /* COMPARE  */
  YYSYMBOL_STAR = 38,                      /* STAR  */
  YYSYMBOL_AND = 39,                       /* AND  */
  YYSYMBOL_NEGATION = 40,                  /* NEGATION  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_goal = 42,                      /* goal  */
  YYSYMBOL_main_class = 43,                /* main_class  */
  YYSYMBOL_type_declarations = 44,         /* type_declarations  */
  YYSYMBOL_type_declaration = 45,          /* type_declaration  */
  YYSYMBOL_class_declaration = 46,         /* class_declaration  */
  YYSYMBOL_class_extends_declaration = 47, /* class_extends_declaration  */
  YYSYMBOL_var_declarations = 48,          /* var_declarations  */
  YYSYMBOL_var_declaration = 49,           /* var_declaration  */
  YYSYMBOL_method_declarations = 50,       /* method_declarations  */
  YYSYMBOL_method_declaration = 51,        /* method_declaration  */
  YYSYMBOL_fromal_parameter_list = 52,     /* fromal_parameter_list  */
  YYSYMBOL_fromal_parameter_rests = 53,    /* fromal_parameter_rests  */
  YYSYMBOL_fromal_parameter_rest = 54,     /* fromal_parameter_rest  */
  YYSYMBOL_fromal_parameter = 55,          /* fromal_parameter  */
  YYSYMBOL_type = 56,                      /* type  */
  YYSYMBOL_array_type = 57,                /* array_type  */
  YYSYMBOL_boolean_type = 58,              /* boolean_type  */
  YYSYMBOL_integer_type = 59,              /* integer_type  */
  YYSYMBOL_statements = 60,                /* statements  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_block = 62,                     /* block  */
  YYSYMBOL_assignment_statement = 63,      /* assignment_statement  */
  YYSYMBOL_array_assignment_statement = 64, /* array_assignment_statement  */
  YYSYMBOL_if_statement = 65,              /* if_statement  */
  YYSYMBOL_while_statement = 66,           /* while_statement  */
  YYSYMBOL_print_statement = 67,           /* print_statement  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_and_expression = 69,            /* and_expression  */
  YYSYMBOL_compare_expression = 70,        /* compare_expression  */
  YYSYMBOL_plus_expression = 71,           /* plus_expression  */
  YYSYMBOL_minus_expression = 72,          /* minus_expression  */
  YYSYMBOL_times_expression = 73,          /* times_expression  */
  YYSYMBOL_array_lookup = 74,              /* array_lookup  */
  YYSYMBOL_array_length = 75,              /* array_length  */
  YYSYMBOL_message_send = 76,              /* message_send  */
  YYSYMBOL_expression_list = 77,           /* expression_list  */
  YYSYMBOL_expression_rests = 78,          /* expression_rests  */
  YYSYMBOL_expression_rest = 79,           /* expression_rest  */
  YYSYMBOL_primary_expression = 80,        /* primary_expression  */
  YYSYMBOL_integer_literal = 81,           /* integer_literal  */
  YYSYMBOL_true_literal = 82,              /* true_literal  */
  YYSYMBOL_false_literal = 83,             /* false_literal  */
  YYSYMBOL_identifier = 84,                /* identifier  */
  YYSYMBOL_this_expression = 85,           /* this_expression  */
  YYSYMBOL_array_allocation_expression = 86, /* array_allocation_expression  */
  YYSYMBOL_allocation_expression = 87,     /* allocation_expression  */
  YYSYMBOL_not_expression = 88,            /* not_expression  */
  YYSYMBOL_bracket_expression = 89         /* bracket_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    21,    21,    23,    28,    29,    31,    32,    34,    37,
      40,    41,    43,    45,    46,    48,    52,    56,    58,    59,
      61,    63,    65,    66,    67,    68,    70,    72,    74,    76,
      77,    79,    80,    81,    82,    83,    84,    86,    88,    90,
      93,    96,    98,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   110,   112,   114,   116,   118,   120,   123,   125,
     127,   130,   132,   133,   135,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   147,   149,   151,   153,   155,   157,
     160,   163,   165
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "NUMBER",
  "EOL", "TRUE", "FALSE", "THIS", "ALLOCATION", "OPEN_PARENTHESIS",
  "CLOSE_PARENTHESIS", "OPEN_BRACKETS", "CLOSE_BRACKETS", "OPEN_SCOPE",
  "CLOSE_SCOPE", "DOT", "SEMICOLON", "COMMA", "EQUALS", "INT_TYPE",
  "BOOLEAN", "STRING", "LENGTH", "IF", "ELSE", "WHILE", "PRINT", "PUBLIC",
  "CLASS", "STATIC", "VOID", "MAIN", "EXTENDS", "RETURN", "PLUS", "MINUS",
  "COMPARE", "STAR", "AND", "NEGATION", "$accept", "goal", "main_class",
  "type_declarations", "type_declaration", "class_declaration",
  "class_extends_declaration", "var_declarations", "var_declaration",
  "method_declarations", "method_declaration", "fromal_parameter_list",
  "fromal_parameter_rests", "fromal_parameter_rest", "fromal_parameter",
  "type", "array_type", "boolean_type", "integer_type", "statements",
  "statement", "block", "assignment_statement",
  "array_assignment_statement", "if_statement", "while_statement",
  "print_statement", "expression", "and_expression", "compare_expression",
  "plus_expression", "minus_expression", "times_expression",
  "array_lookup", "array_length", "message_send", "expression_list",
  "expression_rests", "expression_rest", "primary_expression",
  "integer_literal", "true_literal", "false_literal", "identifier",
  "this_expression", "array_allocation_expression",
  "allocation_expression", "not_expression", "bracket_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,     0,     4,   -21,  -128,    15,  -128,     0,    37,   -21,
    -128,  -128,     9,     5,  -128,  -128,    30,    91,     0,    14,
      49,  -128,    38,    91,     0,  -128,  -128,  -128,  -128,    51,
      42,    56,    91,    60,    38,  -128,    66,    91,    85,  -128,
       0,  -128,  -128,  -128,    38,    74,    87,    84,   101,    23,
    -128,    96,   100,   104,   109,     0,     0,    91,   102,    91,
    -128,   109,  -128,   107,     6,    91,  -128,  -128,   105,     6,
     118,   119,   120,   106,     6,  -128,  -128,  -128,  -128,  -128,
    -128,    98,     6,    91,   117,    81,    81,    81,    81,  -128,
      81,    81,   108,     6,  -128,  -128,  -128,  -128,  -128,    32,
      81,    81,   123,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,    41,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,   124,   125,   121,   128,   126,    81,   129,   133,   136,
     137,  -128,     6,    81,    24,    81,    81,    81,    81,    81,
       6,   130,   134,   131,  -128,   135,   138,    81,   140,  -128,
     132,   141,  -128,   145,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,    81,   143,  -128,   146,  -128,     6,  -128,    97,
     139,  -128,  -128,  -128,  -128,   142,   150,  -128,    81,  -128,
     142,  -128,  -128,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     5,    77,     0,     1,     0,     0,     5,
       6,     7,     0,     0,     2,     4,     0,    11,     0,     0,
      28,    27,    14,    11,     0,    22,    23,    24,    25,     0,
       0,     0,     0,     0,    14,    10,     0,    11,     0,    26,
       0,     8,    13,    12,    14,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    19,     0,     0,    11,     0,     0,
      17,    19,    21,     0,    30,    11,    20,    18,     0,    30,
       0,     0,     0,     0,    30,    31,    32,    33,    34,    35,
      36,     0,    30,    11,     0,     0,     0,     0,     0,    29,
       0,     0,     0,    30,    37,    74,    75,    76,    78,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,    82,
       0,     0,    58,     0,    54,    55,    53,    56,    52,    41,
      42,    15,     0,     0,     3,     0,    80,     0,    57,     0,
       0,    16,    79,    40,    59,    63,     0,    39,     0,    61,
      63,    60,    64,    62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,   153,  -128,  -128,  -128,   -16,  -128,    28,
    -128,  -128,   103,  -128,   110,   -31,  -128,  -128,  -128,   -23,
    -127,  -128,  -128,  -128,  -128,  -128,  -128,   -76,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,   -17,  -128,   -13,
    -128,  -128,  -128,    -1,  -128,  -128,  -128,  -128,  -128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     8,     9,    10,    11,    22,    23,    33,
      34,    53,    60,    61,    54,    24,    25,    26,    27,    73,
      74,    75,    76,    77,    78,    79,    80,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   176,   179,   180,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,    40,     1,     4,     6,   150,    13,    35,     7,     4,
     121,   122,   123,   159,   124,   125,    28,    29,    55,    17,
      69,    44,    28,    36,   130,   131,     4,     4,    55,    12,
      70,    28,    71,    72,    52,     4,    28,    16,    18,    46,
     173,    64,    14,    20,    21,    30,    84,   152,    28,    82,
     145,    89,   128,   133,    62,    63,    28,   134,    28,    92,
      19,    31,    42,    81,    28,    37,    32,    93,    81,    39,
     127,   165,    47,    81,    38,    41,   135,   136,   137,   138,
     139,    81,    28,    43,     4,    95,   170,    96,    97,    98,
      99,   100,    81,   175,     4,    45,    48,    49,   129,    50,
       4,    95,   182,    96,    97,    98,    99,   100,   174,    56,
      90,    20,    21,    51,    57,    58,    65,    91,    68,    83,
     151,   101,   154,   155,   156,   157,   158,    59,    85,    86,
      87,    81,    94,   153,   132,   140,   141,   101,   142,    81,
      88,   143,   126,   144,   146,   147,   148,   160,   149,   161,
     162,   166,   163,   164,   168,   169,   177,   167,   171,   172,
     178,   181,    15,   183,    67,     0,    81,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       1,    32,    29,     3,     0,   132,     7,    23,    29,     3,
      86,    87,    88,   140,    90,    91,    17,    18,    49,    14,
      14,    37,    23,    24,   100,   101,     3,     3,    59,    14,
      24,    32,    26,    27,    11,     3,    37,    28,    33,    40,
     167,    57,     5,    20,    21,    31,    69,    23,    49,    65,
     126,    74,    20,    12,    55,    56,    57,    16,    59,    82,
      30,    12,    34,    64,    65,    14,    28,    83,    69,    13,
      93,   147,    44,    74,    32,    15,    35,    36,    37,    38,
      39,    82,    83,    17,     3,     4,   162,     6,     7,     8,
       9,    10,    93,   169,     3,    10,    22,    10,    99,    15,
       3,     4,   178,     6,     7,     8,     9,    10,    11,    13,
      12,    20,    21,    12,    14,    11,    14,    19,    11,    14,
     133,    40,   135,   136,   137,   138,   139,    18,    10,    10,
      10,   132,    15,   134,    11,    11,    11,    40,    17,   140,
      34,    13,    34,    17,    15,    12,    10,    17,    11,    15,
      19,    11,    17,    15,    13,    10,    17,    25,    15,    13,
      18,    11,     9,   180,    61,    -1,   167,    -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    29,    42,    43,     3,    84,     0,    29,    44,    45,
      46,    47,    14,    84,     5,    44,    28,    14,    33,    30,
      20,    21,    48,    49,    56,    57,    58,    59,    84,    84,
      31,    12,    28,    50,    51,    48,    84,    14,    32,    13,
      56,    15,    50,    17,    48,    10,    84,    50,    22,    10,
      15,    12,    11,    52,    55,    56,    13,    14,    11,    18,
      53,    54,    84,    84,    48,    14,    55,    53,    11,    14,
      24,    26,    27,    60,    61,    62,    63,    64,    65,    66,
      67,    84,    48,    14,    60,    10,    10,    10,    34,    60,
      12,    19,    60,    48,    15,     4,     6,     7,     8,     9,
      10,    40,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    68,    68,    68,    68,    68,    34,    60,    20,    84,
      68,    68,    11,    12,    16,    35,    36,    37,    38,    39,
      11,    11,    17,    13,    17,    68,    15,    12,    10,    11,
      61,    80,    23,    84,    80,    80,    80,    80,    80,    61,
      17,    15,    19,    17,    15,    68,    11,    25,    13,    10,
      68,    15,    13,    61,    11,    68,    77,    17,    18,    78,
      79,    11,    68,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    44,    44,    45,    45,    46,    47,
      48,    48,    49,    50,    50,    51,    51,    52,    53,    53,
      54,    55,    56,    56,    56,    56,    57,    58,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    62,    63,    64,
      65,    66,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      76,    77,    78,    78,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,    18,     2,     0,     1,     1,     6,     8,
       2,     0,     3,     2,     0,    12,    13,     2,     2,     0,
       2,     2,     1,     1,     1,     1,     3,     1,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     3,     4,     7,
       7,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     4,     3,     5,
       6,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* goal: main_class type_declarations EOL  */
#line 21 "minijava.y"
                                        { return 0; }
#line 1404 "y.tab.c"
    break;

  case 3: /* main_class: CLASS identifier OPEN_SCOPE PUBLIC STATIC VOID MAIN OPEN_PARENTHESIS STRING OPEN_BRACKETS CLOSE_BRACKETS identifier CLOSE_PARENTHESIS OPEN_SCOPE var_declarations statements CLOSE_SCOPE CLOSE_SCOPE  */
#line 25 "minijava.y"
            {printf("MainClass: %s Identifier %s %s %s %s %s %s %s %s %s Identifier %s %s VarDeclarations Statements %s %s\n", 
            yyvsp[-17], yyvsp[-15], yyvsp[-14], yyvsp[-13], yyvsp[-12], yyvsp[-11], yyvsp[-10], yyvsp[-9], yyvsp[-8], yyvsp[-7], yyvsp[-5], yyvsp[-4], yyvsp[-1], yyvsp[0]) ;}
#line 1411 "y.tab.c"
    break;

  case 4: /* type_declarations: type_declaration type_declarations  */
#line 28 "minijava.y"
                                                      {printf("TypeDeclarations: TypeDeclaration TypeDeclarations\n") ;}
#line 1417 "y.tab.c"
    break;

  case 6: /* type_declaration: class_declaration  */
#line 31 "minijava.y"
                                    {printf("TypeDeclaration: ClassDeclaration\n") ;}
#line 1423 "y.tab.c"
    break;

  case 7: /* type_declaration: class_extends_declaration  */
#line 32 "minijava.y"
                                              {printf("TypeDeclaration: ClassExtendsDeclaration\n") ;}
#line 1429 "y.tab.c"
    break;

  case 8: /* class_declaration: CLASS identifier OPEN_SCOPE var_declarations method_declarations CLOSE_SCOPE  */
#line 35 "minijava.y"
                   {printf("ClassDeclaration: %s Identifier %s VarDeclarations MethodDeclarations %s\n", yyvsp[-5], yyvsp[-3], yyvsp[0]) ;}
#line 1435 "y.tab.c"
    break;

  case 9: /* class_extends_declaration: CLASS identifier EXTENDS identifier OPEN_SCOPE var_declarations method_declarations CLOSE_SCOPE  */
#line 38 "minijava.y"
                           {printf("ClassExtendsDeclaration: %s Identifier %s Identifier %s VarDeclarations MethodDeclarations %s\n", yyvsp[-7], yyvsp[-5], yyvsp[-3], yyvsp[0]) ;}
#line 1441 "y.tab.c"
    break;

  case 10: /* var_declarations: var_declaration var_declarations  */
#line 40 "minijava.y"
                                                   {printf("VarDeclarations: VarDeclaration VarDeclarations\n") ;}
#line 1447 "y.tab.c"
    break;

  case 12: /* var_declaration: type identifier SEMICOLON  */
#line 43 "minijava.y"
                                           {printf("VarDeclaration: Type Identifier %s\n", yyvsp[0]) ;}
#line 1453 "y.tab.c"
    break;

  case 13: /* method_declarations: method_declaration method_declarations  */
#line 45 "minijava.y"
                                                            {printf("MethodDeclarations: MethodDeclaration MethodDeclarations\n") ;}
#line 1459 "y.tab.c"
    break;

  case 15: /* method_declaration: PUBLIC type identifier OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_SCOPE var_declarations statements RETURN expression SEMICOLON CLOSE_SCOPE  */
#line 50 "minijava.y"
                    {printf("MethodDeclaration: %s Type Identifier %s %s %s VarDeclarations Statements %s Expression %s %s\n",
                    yyvsp[-11], yyvsp[-8], yyvsp[-7], yyvsp[-6], yyvsp[-3], yyvsp[-1], yyvsp[0]) ;}
#line 1466 "y.tab.c"
    break;

  case 16: /* method_declaration: PUBLIC type identifier OPEN_PARENTHESIS fromal_parameter_list CLOSE_PARENTHESIS OPEN_SCOPE var_declarations statements RETURN expression SEMICOLON CLOSE_SCOPE  */
#line 54 "minijava.y"
                    {printf("MethodDeclaration: %s Type Identifier %s FormalParameterList %s %s VarDeclarations Statements %s Expression %s %s\n", yyvsp[-12], yyvsp[-9], yyvsp[-7], yyvsp[-6], yyvsp[-3], yyvsp[-1], yyvsp[0]) ;}
#line 1472 "y.tab.c"
    break;

  case 17: /* fromal_parameter_list: fromal_parameter fromal_parameter_rests  */
#line 56 "minijava.y"
                                                               {printf("FormalParameterList: FormalParameter FormalParameterRests\n") ;}
#line 1478 "y.tab.c"
    break;

  case 18: /* fromal_parameter_rests: fromal_parameter_rest fromal_parameter_rests  */
#line 58 "minijava.y"
                                                                     {printf("FormalParameterRests: FormalParameterRest FormalParameterRests\n") ;}
#line 1484 "y.tab.c"
    break;

  case 20: /* fromal_parameter_rest: COMMA fromal_parameter  */
#line 61 "minijava.y"
                                              {printf("FormalParameterRest: %s FormalParameter\n", yyvsp[-1]) ;}
#line 1490 "y.tab.c"
    break;

  case 21: /* fromal_parameter: type identifier  */
#line 63 "minijava.y"
                                  {printf("FormalParameter: Type Identifier\n") ;}
#line 1496 "y.tab.c"
    break;

  case 22: /* type: array_type  */
#line 65 "minijava.y"
                 {printf("Type: ArrayType\n") ;}
#line 1502 "y.tab.c"
    break;

  case 23: /* type: boolean_type  */
#line 66 "minijava.y"
                     {printf("Type: BooleanType\n") ;}
#line 1508 "y.tab.c"
    break;

  case 24: /* type: integer_type  */
#line 67 "minijava.y"
                     {printf("Type: IntegerType\n") ;}
#line 1514 "y.tab.c"
    break;

  case 25: /* type: identifier  */
#line 68 "minijava.y"
                   {printf("Type: Identifier\n") ;}
#line 1520 "y.tab.c"
    break;

  case 26: /* array_type: INT_TYPE OPEN_BRACKETS CLOSE_BRACKETS  */
#line 70 "minijava.y"
                                                  {printf("ArrayType: %s %s %s\n", yyvsp[-2], yyvsp[-1], yyvsp[0]) ;}
#line 1526 "y.tab.c"
    break;

  case 27: /* boolean_type: BOOLEAN  */
#line 72 "minijava.y"
                      {printf("BooleanType: %s\n", yyvsp[0]) ;}
#line 1532 "y.tab.c"
    break;

  case 28: /* integer_type: INT_TYPE  */
#line 74 "minijava.y"
                       {printf("IntegerType: %s\n", yyvsp[0]) ;}
#line 1538 "y.tab.c"
    break;

  case 29: /* statements: statement statements  */
#line 76 "minijava.y"
                                 {printf("Statements: statement Statements\n") ;}
#line 1544 "y.tab.c"
    break;

  case 31: /* statement: block  */
#line 79 "minijava.y"
                 {printf("Statement: Block\n") ;}
#line 1550 "y.tab.c"
    break;

  case 32: /* statement: assignment_statement  */
#line 80 "minijava.y"
                                  {printf("Statement: AssignmentStatement\n") ;}
#line 1556 "y.tab.c"
    break;

  case 33: /* statement: array_assignment_statement  */
#line 81 "minijava.y"
                                        {printf("Statement: ArrayAssignmentStatement\n") ;}
#line 1562 "y.tab.c"
    break;

  case 34: /* statement: if_statement  */
#line 82 "minijava.y"
                          {printf("Statement: IfStatement\n") ;}
#line 1568 "y.tab.c"
    break;

  case 35: /* statement: while_statement  */
#line 83 "minijava.y"
                             {printf("Statement: WhileStatement\n") ;}
#line 1574 "y.tab.c"
    break;

  case 36: /* statement: print_statement  */
#line 84 "minijava.y"
                             {printf("Statement: PrintStatement\n") ;}
#line 1580 "y.tab.c"
    break;

  case 37: /* block: OPEN_SCOPE statements CLOSE_SCOPE  */
#line 86 "minijava.y"
                                         {printf("Block: %s Statements %s\n", yyvsp[-2], yyvsp[0]) ;}
#line 1586 "y.tab.c"
    break;

  case 38: /* assignment_statement: identifier EQUALS expression SEMICOLON  */
#line 88 "minijava.y"
                                                             {printf("AssignmentStatement: Identifier %s Expression %s\n", yyvsp[-2], yyvsp[0]) ;}
#line 1592 "y.tab.c"
    break;

  case 39: /* array_assignment_statement: identifier OPEN_BRACKETS expression CLOSE_BRACKETS EQUALS expression SEMICOLON  */
#line 91 "minijava.y"
                            {printf("ArrayAssignmentStatement: Identifier %s Expression %s %s Expression %s\n", yyvsp[-5], yyvsp[-3], yyvsp[-2], yyvsp[0]) ;}
#line 1598 "y.tab.c"
    break;

  case 40: /* if_statement: IF OPEN_PARENTHESIS expression CLOSE_PARENTHESIS statement ELSE statement  */
#line 94 "minijava.y"
              {printf("%s %s Expression %s Statement %s Statement\n", yyvsp[-6], yyvsp[-5], yyvsp[-3], yyvsp[-1]) ;}
#line 1604 "y.tab.c"
    break;

  case 41: /* while_statement: WHILE OPEN_PARENTHESIS expression CLOSE_PARENTHESIS statement  */
#line 96 "minijava.y"
                                                                               {printf("%s %s Expression %s Statement\n", yyvsp[-4], yyvsp[-3], yyvsp[-1]) ;}
#line 1610 "y.tab.c"
    break;

  case 42: /* print_statement: PRINT OPEN_PARENTHESIS expression CLOSE_PARENTHESIS SEMICOLON  */
#line 98 "minijava.y"
                                                                               {printf("%s %s Expression %s %s\n", yyvsp[-4], yyvsp[-3], yyvsp[-1], yyvsp[0]) ;}
#line 1616 "y.tab.c"
    break;

  case 43: /* expression: and_expression  */
#line 100 "minijava.y"
                           {printf("Expression: AndExpression\n") ;}
#line 1622 "y.tab.c"
    break;

  case 44: /* expression: compare_expression  */
#line 101 "minijava.y"
                                 {printf("Expression: CompareExpression\n") ;}
#line 1628 "y.tab.c"
    break;

  case 45: /* expression: plus_expression  */
#line 102 "minijava.y"
                              {printf("Expression: PlusExpression\n") ;}
#line 1634 "y.tab.c"
    break;

  case 46: /* expression: minus_expression  */
#line 103 "minijava.y"
                               {printf("Expression: MinusExpression\n") ;}
#line 1640 "y.tab.c"
    break;

  case 47: /* expression: times_expression  */
#line 104 "minijava.y"
                               {printf("Expression: TimesExpression\n") ;}
#line 1646 "y.tab.c"
    break;

  case 48: /* expression: array_lookup  */
#line 105 "minijava.y"
                           {printf("Expression: ArrayLookup\n") ;}
#line 1652 "y.tab.c"
    break;

  case 49: /* expression: array_length  */
#line 106 "minijava.y"
                           {printf("Expression: ArrayLength\n") ;}
#line 1658 "y.tab.c"
    break;

  case 50: /* expression: message_send  */
#line 107 "minijava.y"
                           {printf("Expression: MessageSend\n") ;}
#line 1664 "y.tab.c"
    break;

  case 51: /* expression: primary_expression  */
#line 108 "minijava.y"
                                 {printf("Expression: PrimaryExpression\n") ;}
#line 1670 "y.tab.c"
    break;

  case 52: /* and_expression: primary_expression AND primary_expression  */
#line 110 "minijava.y"
                                                          {printf("AndExpression: PrimaryExpression %s PrimaryExpression\n", yyvsp[-1]) ;}
#line 1676 "y.tab.c"
    break;

  case 53: /* compare_expression: primary_expression COMPARE primary_expression  */
#line 112 "minijava.y"
                                                                  {printf("CompareExpression: PrimaryExpression %s PrimaryExpression\n", yyvsp[-1]) ;}
#line 1682 "y.tab.c"
    break;

  case 54: /* plus_expression: primary_expression PLUS primary_expression  */
#line 114 "minijava.y"
                                                            {printf("PlusExpression: PrimaryExpression %s PrimaryExpression\n", yyvsp[-1]) ;}
#line 1688 "y.tab.c"
    break;

  case 55: /* minus_expression: primary_expression MINUS primary_expression  */
#line 116 "minijava.y"
                                                              {printf("MinusExpression: PrimaryExpression %s PrimaryExpression\n", yyvsp[-1]) ;}
#line 1694 "y.tab.c"
    break;

  case 56: /* times_expression: primary_expression STAR primary_expression  */
#line 118 "minijava.y"
                                                             {printf("TimesExpression: PrimaryExpression %s PrimaryExpression\n", yyvsp[-1]) ;}
#line 1700 "y.tab.c"
    break;

  case 57: /* array_lookup: primary_expression OPEN_BRACKETS primary_expression CLOSE_BRACKETS  */
#line 121 "minijava.y"
              {printf("ArrayLookup: PrimaryExpression %s PrimaryExpression %s\n", yyvsp[-2], yyvsp[0]) ;}
#line 1706 "y.tab.c"
    break;

  case 58: /* array_length: primary_expression DOT LENGTH  */
#line 123 "minijava.y"
                                            {printf("ArrayLength: PrimaryExpression %s %s\n", yyvsp[-1], yyvsp[0]) ;}
#line 1712 "y.tab.c"
    break;

  case 59: /* message_send: primary_expression DOT identifier OPEN_PARENTHESIS CLOSE_PARENTHESIS  */
#line 126 "minijava.y"
              {printf("MessageSend: PrimaryExpression %s Identifier %s %s\n", yyvsp[-3], yyvsp[-1], yyvsp[0]) ;}
#line 1718 "y.tab.c"
    break;

  case 60: /* message_send: primary_expression DOT identifier OPEN_PARENTHESIS expression_list CLOSE_PARENTHESIS  */
#line 128 "minijava.y"
              {printf("MessageSend: PrimaryExpression %s Identifier %s ExpressionList %s\n", yyvsp[-4], yyvsp[-2], yyvsp[0]) ;}
#line 1724 "y.tab.c"
    break;

  case 61: /* expression_list: expression expression_rests  */
#line 130 "minijava.y"
                                             {printf("ExpressionList: Expression ExpressionRests\n") ;}
#line 1730 "y.tab.c"
    break;

  case 62: /* expression_rests: expression_rest expression_rests  */
#line 132 "minijava.y"
                                                   {printf("ExpressionRests: ExpressionRest ExpressionRests\n") ;}
#line 1736 "y.tab.c"
    break;

  case 64: /* expression_rest: COMMA expression  */
#line 135 "minijava.y"
                                  {printf("ExpressionRest: %s Expression\n", yyvsp[-1]) ;}
#line 1742 "y.tab.c"
    break;

  case 65: /* primary_expression: integer_literal  */
#line 137 "minijava.y"
                                    {printf("PrimaryExpression: IntegerLiteral\n") ;}
#line 1748 "y.tab.c"
    break;

  case 66: /* primary_expression: true_literal  */
#line 138 "minijava.y"
                                   {printf("PrimaryExpression: TrueLiteral\n") ;}
#line 1754 "y.tab.c"
    break;

  case 67: /* primary_expression: false_literal  */
#line 139 "minijava.y"
                                    {printf("PrimaryExpression: FalseLiteral\n") ;}
#line 1760 "y.tab.c"
    break;

  case 68: /* primary_expression: identifier  */
#line 140 "minijava.y"
                                 {printf("PrimaryExpression: Identifier\n") ;}
#line 1766 "y.tab.c"
    break;

  case 69: /* primary_expression: this_expression  */
#line 141 "minijava.y"
                                      {printf("PrimaryExpression: ThisExpression\n") ;}
#line 1772 "y.tab.c"
    break;

  case 70: /* primary_expression: array_allocation_expression  */
#line 142 "minijava.y"
                                                  {printf("PrimaryExpression: ArrayAllocationExpression\n") ;}
#line 1778 "y.tab.c"
    break;

  case 71: /* primary_expression: allocation_expression  */
#line 143 "minijava.y"
                                            {printf("PrimaryExpression: AllocationExpression\n") ;}
#line 1784 "y.tab.c"
    break;

  case 72: /* primary_expression: not_expression  */
#line 144 "minijava.y"
                                     {printf("PrimaryExpression: NotExpression\n") ;}
#line 1790 "y.tab.c"
    break;

  case 73: /* primary_expression: bracket_expression  */
#line 145 "minijava.y"
                                         {printf("PrimaryExpression: BracketExpression\n") ;}
#line 1796 "y.tab.c"
    break;

  case 74: /* integer_literal: NUMBER  */
#line 147 "minijava.y"
                        {printf("IntegerLiteral: %s\n", yyvsp[0]) ;}
#line 1802 "y.tab.c"
    break;

  case 75: /* true_literal: TRUE  */
#line 149 "minijava.y"
                   {printf("TrueLiteral: %s\n", yyvsp[0]) ;}
#line 1808 "y.tab.c"
    break;

  case 76: /* false_literal: FALSE  */
#line 151 "minijava.y"
                     {printf("FalseLiteral: %s\n", yyvsp[0]) ;}
#line 1814 "y.tab.c"
    break;

  case 77: /* identifier: IDENTIFIER  */
#line 153 "minijava.y"
                       {printf("Identifier: %s\n", yyvsp[0]) ;}
#line 1820 "y.tab.c"
    break;

  case 78: /* this_expression: THIS  */
#line 155 "minijava.y"
                      {printf("ThisExpression: %s\n", yyvsp[0]) ;}
#line 1826 "y.tab.c"
    break;

  case 79: /* array_allocation_expression: ALLOCATION INT_TYPE OPEN_BRACKETS expression CLOSE_BRACKETS  */
#line 158 "minijava.y"
                             {printf("ArrayAllocationExpression: %s %s %s Expression %s\n", yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[0]) ;}
#line 1832 "y.tab.c"
    break;

  case 80: /* allocation_expression: ALLOCATION identifier OPEN_PARENTHESIS CLOSE_PARENTHESIS  */
#line 161 "minijava.y"
                       {printf("AllocationExpression: %s Identifier %s %s\n", yyvsp[-3], yyvsp[-1], yyvsp[0]) ;}
#line 1838 "y.tab.c"
    break;

  case 81: /* not_expression: NEGATION expression  */
#line 163 "minijava.y"
                                    {printf("NotExpression: %s Expression\n", yyvsp[-1]) ;}
#line 1844 "y.tab.c"
    break;

  case 82: /* bracket_expression: OPEN_PARENTHESIS expression CLOSE_PARENTHESIS  */
#line 165 "minijava.y"
                                                                  {printf("BracketExpression: %s Expression %s\n", yyvsp[-2], yyvsp[0]) ;}
#line 1850 "y.tab.c"
    break;


#line 1854 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 167 "minijava.y"


int main (void) {
    return yyparse();
}

int yyerror (char *msg) {
    return fprintf (stderr, "Error: %s\n", msg);
}
