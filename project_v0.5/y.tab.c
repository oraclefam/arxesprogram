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
#line 1 "project.y" /* yacc.c:339  */
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "functions.h"
#include "validators.h"

  extern char Data_Type[50];

  extern void yyerror();
  extern int yylex();
  extern char* yytext;
  extern int yylineno;

  void storeDataType(char*);
  int isDuplicate(char*);
  void storeIdentifier(char*,char*);
  void DuplicateIdentifierError(char*);
  char* retrieveDataType();
  void clearBuffers();
  // int isValidAssignment(char*);
  // void AssignmentError(char*);
  char* extractIdentifier(char[]);
  void UpdateValue(char*,int);
  void UpdateValue_char(char* ,char*);
  void UpdateValue2(char*,char*);
  int getValue(char*);
  char* getValue_char(char* );
  int WhileFun(char*,int,int);
  int getPosition(int);
  void PrintMessage(char*,char*);
  void Return(char*);

  //For Array Identifiers
  int noOfArrayIdentifiers=0;
  char extractedIdentifier[50][50];



#line 108 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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
    ADD = 258,
    SUB = 259,
    MUL = 260,
    DIV = 261,
    POW = 262,
    ASSIGN = 263,
    newline = 264,
    print = 265,
    left_parenthesis = 266,
    right_parenthesis = 267,
    left_sbracket = 268,
    right_sbracket = 269,
    BIGGER_THAN = 270,
    SMALLER_THAN = 271,
    IS_EQUAL = 272,
    NOT_EQUAL = 273,
    AND = 274,
    OR = 275,
    EQ = 276,
    SC = 277,
    EC = 278,
    COMMA = 279,
    SEMICOLON = 280,
    character_value = 281,
    integer_value = 282,
    string_value = 283,
    INTEGER = 284,
    CHAR = 285,
    VARS = 286,
    PROGRAM = 287,
    STARTMAIN = 288,
    ENDMAIN = 289,
    FUNCTION = 290,
    RETURN = 291,
    ENDFUNCTION = 292,
    WHILE = 293,
    ENDWHILE = 294,
    FOR = 295,
    TO = 296,
    STEP = 297,
    ENDFOR = 298,
    PRINT = 299,
    BREAK = 300,
    STRING = 301,
    DATA_TYPE = 302,
    identifier = 303,
    array_identifier = 304,
    STRUCT = 305
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define POW 262
#define ASSIGN 263
#define newline 264
#define print 265
#define left_parenthesis 266
#define right_parenthesis 267
#define left_sbracket 268
#define right_sbracket 269
#define BIGGER_THAN 270
#define SMALLER_THAN 271
#define IS_EQUAL 272
#define NOT_EQUAL 273
#define AND 274
#define OR 275
#define EQ 276
#define SC 277
#define EC 278
#define COMMA 279
#define SEMICOLON 280
#define character_value 281
#define integer_value 282
#define string_value 283
#define INTEGER 284
#define CHAR 285
#define VARS 286
#define PROGRAM 287
#define STARTMAIN 288
#define ENDMAIN 289
#define FUNCTION 290
#define RETURN 291
#define ENDFUNCTION 292
#define WHILE 293
#define ENDWHILE 294
#define FOR 295
#define TO 296
#define STEP 297
#define ENDFOR 298
#define PRINT 299
#define BREAK 300
#define STRING 301
#define DATA_TYPE 302
#define identifier 303
#define array_identifier 304
#define STRUCT 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "project.y" /* yacc.c:355  */

  int intVal;
  char* dataType;
  char* strVal;
  char charVal;

#line 255 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 272 "y.tab.c" /* yacc.c:358  */

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


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


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
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
       2,     2,    51,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   128,   129,   132,   139,   148,   158,   161,
     170,   181,   188,   197,   201,   202,   203,   204,   209,   218,
     229,   236,   245,   250,   259,   270,   277,   286,   293,   294,
     297,   298,   299,   300,   304,   305,   306,   307,   308,   309,
     310,   314,   315,   316,   317,   318,   319,   320,   328,   338,
     348,   352,   353,   354,   355,   356,   357,   358,   359,   368,
     369,   382,   384,   400,   403,   404,   405,   406,   407,   408,
     412,   417,   424,   434,   444,   446,   447,   461,   464
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "POW",
  "ASSIGN", "newline", "print", "left_parenthesis", "right_parenthesis",
  "left_sbracket", "right_sbracket", "BIGGER_THAN", "SMALLER_THAN",
  "IS_EQUAL", "NOT_EQUAL", "AND", "OR", "EQ", "SC", "EC", "COMMA",
  "SEMICOLON", "character_value", "integer_value", "string_value",
  "INTEGER", "CHAR", "VARS", "PROGRAM", "STARTMAIN", "ENDMAIN", "FUNCTION",
  "RETURN", "ENDFUNCTION", "WHILE", "ENDWHILE", "FOR", "TO", "STEP",
  "ENDFOR", "PRINT", "BREAK", "STRING", "DATA_TYPE", "identifier",
  "array_identifier", "STRUCT", "'>'", "$accept", "start",
  "function_declaration", "return", "main", "parameter_list",
  "variable_list", "integer_variable_list", "character_variable_list",
  "body_pre", "body", "commands", "assignment_command", "expression",
  "while_command", "for_command", "conditional_command", "condition",
  "print_command", "assignment_command_char", "expression_char",
  "break_command", "multi_line_comments", YY_NULLPTR
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
     305,    62
};
# endif

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -9

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   -36,   -19,    32,  -108,     0,  -108,    -5,     3,    28,
      67,    35,    52,    23,    74,    51,    78,    15,  -108,  -108,
      82,  -108,     2,     5,    30,   104,    86,    63,     6,    85,
    -108,    95,  -108,  -108,   115,   101,  -108,  -108,   125,   111,
      81,     2,     5,   149,   106,   153,   141,   167,    39,   129,
    -108,  -108,  -108,  -108,  -108,  -108,    15,  -108,  -108,  -108,
      67,   133,  -108,  -108,  -108,   109,  -108,  -108,   121,  -108,
    -108,   162,   171,   176,   145,   168,   169,  -108,    38,   129,
    -108,  -108,  -108,  -108,  -108,  -108,   211,    73,    51,   172,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,   198,   210,   196,
     118,   105,  -108,  -108,  -108,    16,   199,    38,    67,    30,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,   201,   154,
     185,   204,   217,  -108,    21,   105,   105,   105,   105,   105,
    -108,  -108,  -108,  -108,   200,   206,    51,   123,  -108,   134,
     205,  -108,   186,  -108,    40,    40,    10,    10,   -14,  -108,
    -108,    30,   187,   202,  -108,   191,   222,   103,   212,  -108,
     213,   226,  -108,   154,   216,   143,  -108,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     2,     1,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    18,    19,     0,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,     0,    13,     9,    10,
      29,     0,    16,    17,    22,     0,    30,    27,     0,    31,
      50,     0,     0,     0,     0,     0,     0,    77,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
      20,    21,    25,    26,    78,    32,    33,     0,     0,     0,
       0,     0,    51,    75,    58,     0,     0,     0,    29,     0,
      11,    12,    65,    64,    66,    67,    68,    69,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
      48,    59,    60,    72,     0,     0,     0,     0,    63,     0,
       0,    71,     0,    57,    52,    53,    55,    56,    54,    49,
      73,     0,     0,     0,    61,     0,     0,     0,     0,     5,
       0,     0,     7,     0,     0,     0,    70,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,  -108,  -108,   188,  -108,   208,   203,   -53,
     -79,  -107,   -48,    83,   -47,   -44,  -108,  -108,   -43,   -38,
     135,   -37,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,   153,    14,    28,    20,    34,    38,    15,
      24,    48,    49,   105,    50,    51,    98,   118,    52,    53,
     106,    54,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,    80,   137,    31,    81,    82,    35,    88,     1,   109,
      83,    84,   139,   131,    85,     4,    26,   129,    60,   125,
     126,   127,   128,   129,   125,   126,   127,   128,   129,     5,
      61,    39,     6,   143,   132,     7,    10,   131,    11,     2,
      39,   130,     9,   131,   157,   127,   128,   129,   131,   101,
      32,    33,    40,    36,    37,   136,   165,   151,   132,    41,
      42,    40,    27,    17,   132,   102,   103,   131,    43,   132,
      44,    18,    19,    -8,    45,    46,    12,    43,    47,    44,
      22,    23,    16,    45,    46,   108,   104,    47,   132,    79,
      80,    79,    80,    81,    82,    81,    82,    61,    13,    83,
      84,    83,    84,    85,    39,    85,    29,    30,    21,    79,
      80,    58,    59,    81,    82,    56,   101,    79,    80,    83,
      84,    81,    82,    85,    39,    40,    25,    83,    84,    71,
     121,    85,   102,    62,    63,    39,    -6,    57,    -6,    65,
      66,    43,   122,    44,    39,    40,    64,    45,    46,    68,
      69,    47,    67,   123,    75,    39,    40,    90,    91,   152,
      74,    43,    70,    44,    76,    40,    77,    45,    46,    92,
      93,    47,    43,   154,    44,    78,    40,    86,    45,    46,
      89,    43,    47,    44,   124,    94,   167,    45,    46,    99,
     134,    47,    43,    97,    44,    65,    95,   100,    45,    46,
      68,    96,    47,   125,   126,   127,   128,   129,   144,   145,
     146,   147,   148,   112,   113,   114,   115,   116,   117,   107,
     110,   111,   119,   120,   133,   149,   140,   131,   138,   141,
     142,   150,   155,   160,   156,   158,   161,   162,   164,   159,
     163,   166,   135,     0,    87,    73,     0,     0,   132,    72
};

static const yytype_int16 yycheck[] =
{
      48,    48,   109,     1,    48,    48,     1,    60,     1,    88,
      48,    48,   119,    27,    48,    51,     1,     7,    12,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    48,
      24,     1,     0,    12,    48,    35,    33,    27,    35,    32,
       1,    25,    47,    27,   151,     5,     6,     7,    27,    11,
      48,    49,    22,    48,    49,   108,   163,   136,    48,    29,
      30,    22,    47,    11,    48,    27,    28,    27,    38,    48,
      40,    48,    49,    34,    44,    45,    48,    38,    48,    40,
      29,    30,    47,    44,    45,    12,    48,    48,    48,   137,
     137,   139,   139,   137,   137,   139,   139,    24,    31,   137,
     137,   139,   139,   137,     1,   139,    24,    25,    34,   157,
     157,    48,    49,   157,   157,    11,    11,   165,   165,   157,
     157,   165,   165,   157,     1,    22,    48,   165,   165,    48,
      12,   165,    27,    48,    49,     1,    33,    51,    35,    24,
      25,    38,    24,    40,     1,    22,    51,    44,    45,    24,
      25,    48,    51,    48,    48,     1,    22,    48,    49,    36,
      11,    38,    51,    40,    11,    22,    25,    44,    45,    48,
      49,    48,    38,    39,    40,     8,    22,    48,    44,    45,
      47,    38,    48,    40,   101,    23,    43,    44,    45,    21,
     107,    48,    38,    48,    40,    24,    25,    28,    44,    45,
      24,    25,    48,     3,     4,     5,     6,     7,   125,   126,
     127,   128,   129,    15,    16,    17,    18,    19,    20,     8,
      48,    49,    12,    27,    25,    25,    41,    27,    27,    25,
      13,    25,    27,    42,    48,    48,    14,    25,    12,    37,
      27,    25,   107,    -1,    56,    42,    -1,    -1,    48,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    32,    53,    51,    48,     0,    35,    54,    47,
      33,    35,    48,    31,    56,    61,    47,    11,    48,    49,
      58,    34,    29,    30,    62,    48,     1,    47,    57,    24,
      25,     1,    48,    49,    59,     1,    48,    49,    60,     1,
      22,    29,    30,    38,    40,    44,    45,    48,    63,    64,
      66,    67,    70,    71,    73,    74,    11,    51,    48,    49,
      12,    24,    48,    49,    51,    24,    25,    51,    24,    25,
      51,    48,    59,    60,    11,    48,    11,    25,     8,    64,
      66,    67,    70,    71,    73,    74,    48,    57,    61,    47,
      48,    49,    48,    49,    23,    25,    25,    48,    68,    21,
      28,    11,    27,    28,    48,    65,    72,     8,    12,    62,
      48,    49,    15,    16,    17,    18,    19,    20,    69,    12,
      27,    12,    24,    48,    65,     3,     4,     5,     6,     7,
      25,    27,    48,    25,    65,    72,    61,    63,    27,    63,
      41,    25,    13,    12,    65,    65,    65,    65,    65,    25,
      25,    62,    36,    55,    39,    27,    48,    63,    48,    37,
      42,    14,    25,    27,    12,    63,    25,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    55,    56,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    61,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    67,    68,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    71,    72,    72,    73,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     6,     2,    11,    10,     3,     3,     2,
       2,     4,     4,     2,     1,     1,     3,     3,     1,     1,
       3,     3,     2,     1,     1,     3,     3,     2,     3,     0,
       3,     3,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     4,     5,
       2,     1,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     6,    10,     3,     1,     1,     1,     1,     1,     1,
       9,     5,     4,     5,     2,     1,     1,     2,     3
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
      YY_LAC_DISCARD ("YYBACKUP");                              \
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


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
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
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
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
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

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
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

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");

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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 2:
#line 127 "project.y" /* yacc.c:1646  */
    { clearBuffers(); }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 128 "project.y" /* yacc.c:1646  */
    {;}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 129 "project.y" /* yacc.c:1646  */
    {/* ' > ' stops execution all together */}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 133 "project.y" /* yacc.c:1646  */
    { if(!isDuplicate((yyvsp[-8].strVal))){
                                            storeIdentifier((yyvsp[-8].strVal),retrieveDataType());
                                            storeDataType((yyvsp[-9].dataType));
                                          }else{
                                            DuplicateIdentifierError((yyvsp[-8].strVal));
                                          } }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 140 "project.y" /* yacc.c:1646  */
    { if(!isDuplicate((yyvsp[-6].strVal))){
                                            storeIdentifier((yyvsp[-6].strVal),retrieveDataType());
                                            storeDataType((yyvsp[-7].dataType));
                                          }else{
                                            DuplicateIdentifierError((yyvsp[-6].strVal));
                                          } }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "project.y" /* yacc.c:1646  */
    {
					if(isDuplicate((yyvsp[-1].strVal)))
   					{Return((yyvsp[-1].strVal));}
					else
   					{printf("\nERROR ON LINE %d : \nInvalid return! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-1].strVal));
   					exit(0);}
				   }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 158 "project.y" /* yacc.c:1646  */
    {;}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 161 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),retrieveDataType());
                                    storeDataType((yyvsp[-1].dataType));
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 170 "project.y" /* yacc.c:1646  */
    {  
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    storeDataType((yyvsp[-1].dataType));
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                	        }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 181 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),retrieveDataType());
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 188 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 197 "project.y" /* yacc.c:1646  */
    {/* no need to call yyerror cuz of line 1570 of y.tab.c*/}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 209 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"int");
                                    storeDataType("int");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 218 "project.y" /* yacc.c:1646  */
    {  
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"int");
                                    storeDataType("int");
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                	        }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 229 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"int");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 236 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"int");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 245 "project.y" /* yacc.c:1646  */
    {;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 250 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"char");
                                    storeDataType("char");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 259 "project.y" /* yacc.c:1646  */
    {  
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"char");
                                    storeDataType("char");
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                	        }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 270 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"char");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 277 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"char");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 286 "project.y" /* yacc.c:1646  */
    {;}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 293 "project.y" /* yacc.c:1646  */
    {;}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 294 "project.y" /* yacc.c:1646  */
    {;}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 297 "project.y" /* yacc.c:1646  */
    {;}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 298 "project.y" /* yacc.c:1646  */
    {;}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 299 "project.y" /* yacc.c:1646  */
    {;}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 300 "project.y" /* yacc.c:1646  */
    {;}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 304 "project.y" /* yacc.c:1646  */
    {;}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 305 "project.y" /* yacc.c:1646  */
    {;}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 306 "project.y" /* yacc.c:1646  */
    {;}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 307 "project.y" /* yacc.c:1646  */
    {;}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 308 "project.y" /* yacc.c:1646  */
    {;}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 309 "project.y" /* yacc.c:1646  */
    {;}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 310 "project.y" /* yacc.c:1646  */
    {;}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 314 "project.y" /* yacc.c:1646  */
    {;}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 315 "project.y" /* yacc.c:1646  */
    {;}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 316 "project.y" /* yacc.c:1646  */
    {;}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 317 "project.y" /* yacc.c:1646  */
    {;}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 318 "project.y" /* yacc.c:1646  */
    {;}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 319 "project.y" /* yacc.c:1646  */
    {;}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 320 "project.y" /* yacc.c:1646  */
    {;}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 328 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue((yyvsp[-3].strVal),(yyvsp[-1].intVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 338 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue((yyvsp[-3].strVal),(yyvsp[-1].intVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     			}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 348 "project.y" /* yacc.c:1646  */
    {;}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 352 "project.y" /* yacc.c:1646  */
    {(yyval.intVal)=(yyvsp[0].intVal);}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 353 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) + (yyvsp[0].intVal);}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 354 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) - (yyvsp[0].intVal);}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 355 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) ^ (yyvsp[0].intVal);}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 356 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) * (yyvsp[0].intVal);}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 357 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) / (yyvsp[0].intVal);}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 358 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-1].intVal);}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 359 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.intVal)=getValue((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 368 "project.y" /* yacc.c:1646  */
    {(yyval.intVal)=(yyvsp[0].intVal);}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 369 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.intVal)=getValue((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 382 "project.y" /* yacc.c:1646  */
    {;}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 384 "project.y" /* yacc.c:1646  */
    {;}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 400 "project.y" /* yacc.c:1646  */
    {;}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 403 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "<";}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 404 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = ">";}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 405 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "==";}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 406 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "!=";}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 407 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "&&";}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 408 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "||";}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 412 "project.y" /* yacc.c:1646  */
    {   if(isDuplicate((yyvsp[-3].strVal)))
 				{PrintMessage((yyvsp[-3].strVal),(yyvsp[-6].strVal));}
				else {printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    					exit(0);}
			    }
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 417 "project.y" /* yacc.c:1646  */
    {
								printf("%s \n ",(yyvsp[-2].strVal));
											}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 424 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue_char((yyvsp[-3].strVal),(yyvsp[-1].strVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 434 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue_char((yyvsp[-3].strVal),(yyvsp[-1].strVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     			}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 444 "project.y" /* yacc.c:1646  */
    {;}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 446 "project.y" /* yacc.c:1646  */
    {(yyval.strVal)=(yyvsp[0].strVal);}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 447 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.strVal)=getValue_char((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 461 "project.y" /* yacc.c:1646  */
    {break;}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 464 "project.y" /* yacc.c:1646  */
    {;}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2318 "y.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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

#if 1
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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 468 "project.y" /* yacc.c:1906  */

int main(){

  yyparse();
  printf("No Errors!!\n");
  return 0;
}

