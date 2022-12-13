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
#line 1 "minijava.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#define YYSTYPE char *
#line 7 "minijava.y" /* yacc.c:339  */

int yylex(void);
int yyerror(char *msg);

#line 76 "y.tab.c" /* yacc.c:339  */

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

/* Copy the second part of user declarations.  */

#line 207 "y.tab.c" /* yacc.c:358  */

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

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

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

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NUMBER", "EOL", "TRUE",
  "FALSE", "THIS", "ALLOCATION", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS",
  "OPEN_BRACKETS", "CLOSE_BRACKETS", "OPEN_SCOPE", "CLOSE_SCOPE", "DOT",
  "SEMICOLON", "COMMA", "EQUALS", "INT_TYPE", "BOOLEAN", "STRING",
  "LENGTH", "IF", "ELSE", "WHILE", "PRINT", "PUBLIC", "CLASS", "STATIC",
  "VOID", "MAIN", "EXTENDS", "RETURN", "PLUS", "MINUS", "COMPARE", "STAR",
  "AND", "NEGATION", "$accept", "goal", "main_class", "type_declarations",
  "type_declaration", "class_declaration", "class_extends_declaration",
  "var_declarations", "var_declaration", "method_declarations",
  "method_declaration", "fromal_parameter_list", "fromal_parameter_rests",
  "fromal_parameter_rest", "fromal_parameter", "type", "array_type",
  "boolean_type", "integer_type", "statements", "statement", "block",
  "assignment_statement", "array_assignment_statement", "if_statement",
  "while_statement", "print_statement", "expression", "and_expression",
  "compare_expression", "plus_expression", "minus_expression",
  "times_expression", "array_lookup", "array_length", "message_send",
  "expression_list", "expression_rests", "expression_rest",
  "primary_expression", "integer_literal", "true_literal", "false_literal",
  "identifier", "this_expression", "array_allocation_expression",
  "allocation_expression", "not_expression", "bracket_expression", YY_NULLPTR
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
     295
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
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
static const yytype_uint8 yydefact[] =
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
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    10,    11,    22,    23,    33,
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

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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
        case 2:
#line 21 "minijava.y" /* yacc.c:1646  */
    { return 0; }
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 25 "minijava.y" /* yacc.c:1646  */
    {printf("MainClass: %s Identifier %s %s %s %s %s %s %s %s %s Identifier %s %s VarDeclarations Statements %s %s\n", 
            (yyvsp[-17]), (yyvsp[-15]), (yyvsp[-14]), (yyvsp[-13]), (yyvsp[-12]), (yyvsp[-11]), (yyvsp[-10]), (yyvsp[-9]), (yyvsp[-8]), (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-1]), (yyvsp[0])) ;}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 28 "minijava.y" /* yacc.c:1646  */
    {printf("TypeDeclarations: TypeDeclaration TypeDeclarations\n") ;}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 31 "minijava.y" /* yacc.c:1646  */
    {printf("TypeDeclaration: ClassDeclaration\n") ;}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 32 "minijava.y" /* yacc.c:1646  */
    {printf("TypeDeclaration: ClassExtendsDeclaration\n") ;}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 35 "minijava.y" /* yacc.c:1646  */
    {printf("ClassDeclaration: %s Identifier %s VarDeclarations MethodDeclarations %s\n", (yyvsp[-5]), (yyvsp[-3]), (yyvsp[0])) ;}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 38 "minijava.y" /* yacc.c:1646  */
    {printf("ClassExtendsDeclaration: %s Identifier %s Identifier %s VarDeclarations MethodDeclarations %s\n", (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[0])) ;}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 40 "minijava.y" /* yacc.c:1646  */
    {printf("VarDeclarations: VarDeclaration VarDeclarations\n") ;}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 43 "minijava.y" /* yacc.c:1646  */
    {printf("VarDeclaration: Type Identifier %s\n", (yyvsp[0])) ;}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 45 "minijava.y" /* yacc.c:1646  */
    {printf("MethodDeclarations: MethodDeclaration MethodDeclarations\n") ;}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "minijava.y" /* yacc.c:1646  */
    {printf("MethodDeclaration: %s Type Identifier %s %s %s VarDeclarations Statements %s Expression %s %s\n",
                    (yyvsp[-11]), (yyvsp[-8]), (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])) ;}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 54 "minijava.y" /* yacc.c:1646  */
    {printf("MethodDeclaration: %s Type Identifier %s FormalParameterList %s %s VarDeclarations Statements %s Expression %s %s\n", (yyvsp[-12]), (yyvsp[-9]), (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])) ;}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 56 "minijava.y" /* yacc.c:1646  */
    {printf("FormalParameterList: FormalParameter FormalParameterRests\n") ;}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 58 "minijava.y" /* yacc.c:1646  */
    {printf("FormalParameterRests: FormalParameterRest FormalParameterRests\n") ;}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 61 "minijava.y" /* yacc.c:1646  */
    {printf("FormalParameterRest: %s FormalParameter\n", (yyvsp[-1])) ;}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "minijava.y" /* yacc.c:1646  */
    {printf("FormalParameter: Type Identifier\n") ;}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 65 "minijava.y" /* yacc.c:1646  */
    {printf("Type: ArrayType\n") ;}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "minijava.y" /* yacc.c:1646  */
    {printf("Type: BooleanType\n") ;}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "minijava.y" /* yacc.c:1646  */
    {printf("Type: IntegerType\n") ;}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "minijava.y" /* yacc.c:1646  */
    {printf("Type: Identifier\n") ;}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 70 "minijava.y" /* yacc.c:1646  */
    {printf("ArrayType: %s %s %s\n", (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])) ;}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 72 "minijava.y" /* yacc.c:1646  */
    {printf("BooleanType: %s\n", (yyvsp[0])) ;}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 74 "minijava.y" /* yacc.c:1646  */
    {printf("IntegerType: %s\n", (yyvsp[0])) ;}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 76 "minijava.y" /* yacc.c:1646  */
    {printf("Statements: statement Statements\n") ;}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 79 "minijava.y" /* yacc.c:1646  */
    {printf("Statement: Block\n") ;}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 80 "minijava.y" /* yacc.c:1646  */
    {printf("Statement: AssignmentStatement\n") ;}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 81 "minijava.y" /* yacc.c:1646  */
    {printf("Statement: ArrayAssignmentStatement\n") ;}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 82 "minijava.y" /* yacc.c:1646  */
    {printf("Statement: IfStatement\n") ;}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 83 "minijava.y" /* yacc.c:1646  */
    {printf("Statement: WhileStatement\n") ;}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 84 "minijava.y" /* yacc.c:1646  */
    {printf("Statement: PrintStatement\n") ;}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 86 "minijava.y" /* yacc.c:1646  */
    {printf("Block: %s Statements %s\n", (yyvsp[-2]), (yyvsp[0])) ;}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 88 "minijava.y" /* yacc.c:1646  */
    {printf("AssignmentStatement: Identifier %s Expression %s\n", (yyvsp[-2]), (yyvsp[0])) ;}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 91 "minijava.y" /* yacc.c:1646  */
    {printf("ArrayAssignmentStatement: Identifier %s Expression %s %s Expression %s\n", (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])) ;}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 94 "minijava.y" /* yacc.c:1646  */
    {printf("%s %s Expression %s Statement %s Statement\n", (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])) ;}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 96 "minijava.y" /* yacc.c:1646  */
    {printf("%s %s Expression %s Statement\n", (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])) ;}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 98 "minijava.y" /* yacc.c:1646  */
    {printf("%s %s Expression %s %s\n", (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])) ;}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 100 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: AndExpression\n") ;}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 101 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: CompareExpression\n") ;}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 102 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: PlusExpression\n") ;}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 103 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: MinusExpression\n") ;}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 104 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: TimesExpression\n") ;}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 105 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: ArrayLookup\n") ;}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 106 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: ArrayLength\n") ;}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 107 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: MessageSend\n") ;}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 108 "minijava.y" /* yacc.c:1646  */
    {printf("Expression: PrimaryExpression\n") ;}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 110 "minijava.y" /* yacc.c:1646  */
    {printf("AndExpression: PrimaryExpression %s PrimaryExpression\n", (yyvsp[-1])) ;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 112 "minijava.y" /* yacc.c:1646  */
    {printf("CompareExpression: PrimaryExpression %s PrimaryExpression\n", (yyvsp[-1])) ;}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 114 "minijava.y" /* yacc.c:1646  */
    {printf("PlusExpression: PrimaryExpression %s PrimaryExpression\n", (yyvsp[-1])) ;}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 116 "minijava.y" /* yacc.c:1646  */
    {printf("MinusExpression: PrimaryExpression %s PrimaryExpression\n", (yyvsp[-1])) ;}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 118 "minijava.y" /* yacc.c:1646  */
    {printf("TimesExpression: PrimaryExpression %s PrimaryExpression\n", (yyvsp[-1])) ;}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 121 "minijava.y" /* yacc.c:1646  */
    {printf("ArrayLookup: PrimaryExpression %s PrimaryExpression %s\n", (yyvsp[-2]), (yyvsp[0])) ;}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 123 "minijava.y" /* yacc.c:1646  */
    {printf("ArrayLength: PrimaryExpression %s %s\n", (yyvsp[-1]), (yyvsp[0])) ;}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 126 "minijava.y" /* yacc.c:1646  */
    {printf("MessageSend: PrimaryExpression %s Identifier %s %s\n", (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])) ;}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 128 "minijava.y" /* yacc.c:1646  */
    {printf("MessageSend: PrimaryExpression %s Identifier %s ExpressionList %s\n", (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])) ;}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 130 "minijava.y" /* yacc.c:1646  */
    {printf("ExpressionList: Expression ExpressionRests\n") ;}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 132 "minijava.y" /* yacc.c:1646  */
    {printf("ExpressionRests: ExpressionRest ExpressionRests\n") ;}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 135 "minijava.y" /* yacc.c:1646  */
    {printf("ExpressionRest: %s Expression\n", (yyvsp[-1])) ;}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 137 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: IntegerLiteral\n") ;}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 138 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: TrueLiteral\n") ;}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 139 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: FalseLiteral\n") ;}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 140 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: Identifier\n") ;}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 141 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: ThisExpression\n") ;}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 142 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: ArrayAllocationExpression\n") ;}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 143 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: AllocationExpression\n") ;}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 144 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: NotExpression\n") ;}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 145 "minijava.y" /* yacc.c:1646  */
    {printf("PrimaryExpression: BracketExpression\n") ;}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 147 "minijava.y" /* yacc.c:1646  */
    {printf("IntegerLiteral: %s\n", (yyvsp[0])) ;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 149 "minijava.y" /* yacc.c:1646  */
    {printf("TrueLiteral: %s\n", (yyvsp[0])) ;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 151 "minijava.y" /* yacc.c:1646  */
    {printf("FalseLiteral: %s\n", (yyvsp[0])) ;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 153 "minijava.y" /* yacc.c:1646  */
    {printf("Identifier: %s\n", (yyvsp[0])) ;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 155 "minijava.y" /* yacc.c:1646  */
    {printf("ThisExpression: %s\n", (yyvsp[0])) ;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 158 "minijava.y" /* yacc.c:1646  */
    {printf("ArrayAllocationExpression: %s %s %s Expression %s\n", (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])) ;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 161 "minijava.y" /* yacc.c:1646  */
    {printf("AllocationExpression: %s Identifier %s %s\n", (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])) ;}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 163 "minijava.y" /* yacc.c:1646  */
    {printf("NotExpression: %s Expression\n", (yyvsp[-1])) ;}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 165 "minijava.y" /* yacc.c:1646  */
    {printf("BracketExpression: %s Expression %s\n", (yyvsp[-2]), (yyvsp[0])) ;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1866 "y.tab.c" /* yacc.c:1646  */
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
#line 167 "minijava.y" /* yacc.c:1906  */


int main (void) {
    return yyparse();
}

int yyerror (char *msg) {
    return fprintf (stderr, "Error: %s\n", msg);
}
