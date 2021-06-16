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
char* getDatatype(char*);


void store_struct_data_type(char*);
void store_struct_value_char(char*);
void store_struct_value_int();
void struct_name(char*);
int isDuplicate_struct(char*);
void struct_assign_char_value(char*, char*);
void struct_assign_int_value(char*, int );



  //For Array Identifiers
  int noOfArrayIdentifiers=0;
  char extractedIdentifier[50][50];



#line 120 "y.tab.c" /* yacc.c:339  */

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
    DOT = 281,
    character_value = 282,
    integer_value = 283,
    string_value = 284,
    INTEGER = 285,
    CHAR = 286,
    VARS = 287,
    PROGRAM = 288,
    STARTMAIN = 289,
    ENDMAIN = 290,
    FUNCTION = 291,
    RETURN = 292,
    ENDFUNCTION = 293,
    WHILE = 294,
    ENDWHILE = 295,
    FOR = 296,
    TO = 297,
    STEP = 298,
    ENDFOR = 299,
    PRINT = 300,
    BREAK = 301,
    STRING = 302,
    DATA_TYPE = 303,
    STRUCT = 304,
    ENDSTRUCT = 305,
    TYPEDEF = 306,
    identifier = 307,
    array_identifier = 308
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
#define DOT 281
#define character_value 282
#define integer_value 283
#define string_value 284
#define INTEGER 285
#define CHAR 286
#define VARS 287
#define PROGRAM 288
#define STARTMAIN 289
#define ENDMAIN 290
#define FUNCTION 291
#define RETURN 292
#define ENDFUNCTION 293
#define WHILE 294
#define ENDWHILE 295
#define FOR 296
#define TO 297
#define STEP 298
#define ENDFOR 299
#define PRINT 300
#define BREAK 301
#define STRING 302
#define DATA_TYPE 303
#define STRUCT 304
#define ENDSTRUCT 305
#define TYPEDEF 306
#define identifier 307
#define array_identifier 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 59 "project.y" /* yacc.c:355  */

  int intVal;
  char* dataType;
  char* strVal;
  char charVal;

#line 273 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 290 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
       2,     2,    54,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   150,   153,   164,   171,   181,   183,   190,
     192,   195,   197,   203,   204,   205,   206,   210,   232,   275,
     282,   291,   301,   310,   321,   328,   337,   363,   364,   368,
     377,   388,   395,   404,   409,   418,   429,   436,   445,   452,
     453,   456,   457,   458,   459,   463,   464,   465,   466,   467,
     468,   469,   473,   474,   475,   476,   477,   478,   479,   487,
     497,   507,   511,   513,   514,   515,   516,   517,   518,   519,
     528,   529,   542,   544,   560,   563,   564,   565,   566,   567,
     568,   572,   577,   584,   594,   604,   606,   607,   621,   624
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
  "SEMICOLON", "DOT", "character_value", "integer_value", "string_value",
  "INTEGER", "CHAR", "VARS", "PROGRAM", "STARTMAIN", "ENDMAIN", "FUNCTION",
  "RETURN", "ENDFUNCTION", "WHILE", "ENDWHILE", "FOR", "TO", "STEP",
  "ENDFOR", "PRINT", "BREAK", "STRING", "DATA_TYPE", "STRUCT", "ENDSTRUCT",
  "TYPEDEF", "identifier", "array_identifier", "'>'", "$accept", "start",
  "structure_declaration", "struct_variable_int", "struct_variable_char",
  "struct_body", "use_struct", "function_declaration", "return",
  "parameter_list", "main", "integer_variable_list",
  "character_variable_list", "body_pre", "body", "commands",
  "assignment_command", "expression", "while_command", "for_command",
  "conditional_command", "condition", "print_command",
  "assignment_command_char", "expression_char", "break_command",
  "multi_line_comments", YY_NULLPTR
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
     305,   306,   307,   308,    62
};
# endif

#define YYPACT_NINF -65

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-65)))

#define YYTABLE_NINF -41

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   -41,   -23,    18,   -65,    20,   -65,   -32,    -4,    26,
      -2,   -65,    53,    37,    53,    51,    41,    47,   -65,   -65,
     101,    53,   128,    43,    53,    62,   -65,    14,    16,   138,
     128,     8,    11,    13,    90,   101,    88,   107,   -65,   142,
     118,   -65,   161,    14,    16,   -65,   149,   120,   -65,   -65,
      82,   135,   -65,   -65,   146,   144,   155,     8,    11,   203,
     164,   210,   200,   220,    45,   181,   165,   182,   -65,   -65,
     -65,   -65,   -65,   -65,    22,   207,   229,   -65,   -65,   -65,
     -65,   219,   230,   -65,   -65,   124,   -65,   -65,   130,   -65,
     -65,   222,   160,   169,   208,   238,   243,   -65,    76,   224,
     174,   231,   -65,   182,   -65,   -65,   -65,   -65,   -65,   -65,
     273,   228,   170,     7,   -65,    22,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   260,   272,   257,    64,   153,
     -65,   -65,   -65,   246,   262,   236,   -65,   244,    76,   -65,
     -65,   -65,    53,   247,    68,   -65,   -65,   -65,   -65,   -65,
     -65,   269,   217,   258,   274,   288,   -65,    21,   153,   153,
     153,   153,   153,   -65,   -65,   -65,   -65,   250,   278,   261,
     279,   128,   180,    53,   -65,    81,   277,   -65,   254,   -65,
      50,    50,    46,    46,    44,   282,   256,   -65,   -65,    78,
     -65,   -65,   128,   -65,   266,   296,   259,   290,   190,    78,
     284,   303,   292,   265,   267,   280,   156,   217,   295,   270,
     313,   298,   -65,   202,   -65,   316,   297,   -65,   -65,   299,
     300,   302,   281,   283,   305,   306,   285,   286,   323,   324,
     308,   311,   309,   315,   -65,   -65
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     1,     0,     0,     0,
       0,     8,    40,     0,    40,     0,     0,     0,     2,    39,
       0,    40,     0,     0,    40,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,    11,     0,     0,     0,     5,     0,     0,    29,    30,
       0,     0,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,    10,    13,    12,
      14,     0,     0,     6,    33,     0,    41,    38,     0,    42,
      61,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    28,    52,    53,    54,    55,    56,    57,    58,
       0,     0,     0,     0,     7,     0,    15,    16,    31,    32,
      36,    37,    89,    43,    44,     0,     0,     0,     0,     0,
      62,    86,    69,     0,     0,     0,    27,     0,     0,    26,
      22,    23,    40,     0,     0,    76,    75,    77,    78,    79,
      80,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,     0,    59,    70,    71,    83,     0,     0,     0,
       0,     0,     0,    40,    74,     0,     0,    82,     0,    68,
      63,    64,    66,    67,    65,     0,     0,    60,    84,     0,
      24,    25,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    81,     0,     0,    21,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   -65,   301,   304,   307,   -65,   -65,   -65,   226,
     326,   289,   287,   -13,   -30,   -34,   -64,   132,   -63,   -62,
     -65,   -65,   -61,   -60,   209,   -59,   -50
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    10,    39,    42,    29,    64,    17,   205,   113,
      18,    50,    54,    20,    33,    66,    67,   133,    68,    69,
     126,   151,    70,    71,   134,    72,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    22,   103,   104,   105,   106,   107,   108,    30,    47,
       1,    35,    51,     4,    55,    37,   109,    40,     6,   142,
      65,     7,    11,   111,   158,   159,   160,   161,   162,     5,
     100,   143,    14,   179,    15,    56,   103,   104,   105,   106,
     107,   108,     2,    57,    58,    19,    55,    16,    12,   164,
     109,    99,    59,   162,    60,   160,   161,   162,    61,    62,
      48,    49,   -40,    52,    53,    63,    38,    56,    41,     8,
     112,     9,   164,   165,   164,    13,   154,    19,   164,    55,
     173,    14,    55,    25,    59,    19,    60,   129,   155,    21,
      61,    62,   143,    24,   -40,    34,   165,    63,   165,    23,
      56,    74,   165,    56,   130,   131,    85,    86,    57,    58,
      36,   103,   104,   105,   106,   107,   108,    59,   175,    60,
      59,   193,    60,    61,    62,   109,    61,    62,   132,   171,
      63,    27,    28,    63,   103,   104,   105,   106,   107,   108,
      76,   189,   103,   104,   105,   106,   107,   108,   109,   103,
     104,   105,   106,   107,   108,   198,   109,    55,    31,    32,
     192,    77,   199,   109,   129,   206,    55,    78,    43,    44,
      88,    89,    79,   213,    84,    55,   118,   119,    56,    57,
      58,   130,   120,   121,    85,   123,    80,    56,    45,    87,
     -20,    55,   -20,    88,   124,    59,    56,    60,    90,    83,
     102,    61,    62,    55,    59,   156,    60,    91,    63,   136,
      61,    62,    56,    59,    94,    60,    95,    63,    55,    61,
      62,    96,   140,   141,    56,    97,    63,   204,    98,    59,
     101,    60,   190,   191,   110,    61,    62,    43,    44,    56,
     115,    59,    63,    60,   116,   122,   218,    61,    62,   158,
     159,   160,   161,   162,    63,   117,    59,   114,    60,   127,
     125,   157,    61,    62,   158,   159,   160,   161,   162,    63,
     169,   163,   128,   135,   164,   145,   146,   147,   148,   149,
     150,   138,   139,   137,   152,   153,   187,   166,   167,   164,
     180,   181,   182,   183,   184,   172,   168,   174,   165,   177,
     176,   178,   185,   186,   188,   194,   195,   196,   197,   200,
     201,   202,   207,   165,   203,   208,   209,   210,   212,   211,
     214,   216,   215,   217,   219,   222,   220,   223,   221,   226,
     227,   230,   231,   224,   234,   225,   232,   228,   229,   233,
     235,   144,    75,    26,    81,    93,    92,   170,    82
};

static const yytype_uint8 yycheck[] =
{
      30,    14,    66,    66,    66,    66,    66,    66,    21,     1,
       1,    24,     1,    54,     1,     1,    66,     1,     0,    12,
      33,     1,    54,     1,     3,     4,     5,     6,     7,    52,
      64,    24,    34,    12,    36,    22,   100,   100,   100,   100,
     100,   100,    33,    30,    31,    32,     1,    49,    52,    28,
     100,    64,    39,     7,    41,     5,     6,     7,    45,    46,
      52,    53,    49,    52,    53,    52,    52,    22,    52,    49,
      48,    51,    28,    52,    28,    49,    12,    32,    28,     1,
      12,    34,     1,    36,    39,    32,    41,    11,    24,    52,
      45,    46,    24,    52,    49,    52,    52,    52,    52,    48,
      22,    11,    52,    22,    28,    29,    24,    25,    30,    31,
      48,   175,   175,   175,   175,   175,   175,    39,   152,    41,
      39,    40,    41,    45,    46,   175,    45,    46,    52,   142,
      52,    30,    31,    52,   198,   198,   198,   198,   198,   198,
      52,   171,   206,   206,   206,   206,   206,   206,   198,   213,
     213,   213,   213,   213,   213,   189,   206,     1,    30,    31,
     173,    54,   192,   213,    11,   199,     1,    25,    30,    31,
      24,    25,    54,   207,    54,     1,    52,    53,    22,    30,
      31,    28,    52,    53,    24,    25,    25,    22,    50,    54,
      34,     1,    36,    24,    25,    39,    22,    41,    54,    50,
      35,    45,    46,     1,    39,    52,    41,    52,    52,    35,
      45,    46,    22,    39,    11,    41,    52,    52,     1,    45,
      46,    11,    52,    53,    22,    25,    52,    37,     8,    39,
      49,    41,    52,    53,    52,    45,    46,    30,    31,    22,
      11,    39,    52,    41,    25,    23,    44,    45,    46,     3,
       4,     5,     6,     7,    52,    25,    39,    50,    41,    21,
      52,   129,    45,    46,     3,     4,     5,     6,     7,    52,
     138,    25,    29,    49,    28,    15,    16,    17,    18,    19,
      20,     8,    54,    52,    12,    28,    25,    25,    52,    28,
     158,   159,   160,   161,   162,    48,    52,    28,    52,    25,
      42,    13,    52,    25,    25,    28,    52,    25,    52,    43,
      14,    52,    28,    52,    24,    12,    24,    52,    38,    52,
      25,     8,    52,    25,     8,    25,    29,    25,    29,    24,
      24,     8,     8,    52,    25,    52,    28,    52,    52,    28,
      25,   115,    35,    17,    43,    58,    57,   138,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    33,    56,    54,    52,     0,     1,    49,    51,
      57,    54,    52,    49,    34,    36,    49,    62,    65,    32,
      68,    52,    68,    48,    52,    36,    65,    30,    31,    60,
      68,    30,    31,    69,    52,    68,    48,     1,    52,    58,
       1,    52,    59,    30,    31,    50,    69,     1,    52,    53,
      66,     1,    52,    53,    67,     1,    22,    30,    31,    39,
      41,    45,    46,    52,    61,    68,    70,    71,    73,    74,
      77,    78,    80,    81,    11,    60,    52,    54,    25,    54,
      25,    58,    59,    50,    54,    24,    25,    54,    24,    25,
      54,    52,    66,    67,    11,    52,    11,    25,     8,    68,
      70,    49,    35,    71,    73,    74,    77,    78,    80,    81,
      52,     1,    48,    64,    50,    11,    25,    25,    52,    53,
      52,    53,    23,    25,    25,    52,    75,    21,    29,    11,
      28,    29,    52,    72,    79,    49,    35,    52,     8,    54,
      52,    53,    12,    24,    64,    15,    16,    17,    18,    19,
      20,    76,    12,    28,    12,    24,    52,    72,     3,     4,
       5,     6,     7,    25,    28,    52,    25,    52,    52,    72,
      79,    68,    48,    12,    28,    70,    42,    25,    13,    12,
      72,    72,    72,    72,    72,    52,    25,    25,    25,    69,
      52,    53,    68,    40,    28,    52,    25,    52,    70,    69,
      43,    14,    52,    24,    37,    63,    70,    28,    12,    24,
      52,    52,    38,    70,    25,    52,     8,    25,    44,     8,
      29,    29,    25,    25,    52,    52,    24,    24,    52,    52,
       8,     8,    28,    28,    25,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    61,    61,    62,
      62,    63,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    74,    75,    76,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    78,    79,    79,    80,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     2,     5,     6,     6,     2,     1,
       2,     1,     2,     3,     3,     4,     4,    17,    18,    11,
      10,     3,     2,     2,     4,     4,     2,     6,     5,     1,
       1,     3,     3,     2,     1,     1,     3,     3,     2,     1,
       0,     3,     3,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     4,
       5,     2,     1,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     6,    10,     3,     1,     1,     1,     1,     1,
       1,     9,     5,     4,     5,     2,     1,     1,     2,     3
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
#line 149 "project.y" /* yacc.c:1646  */
    { clearBuffers(); }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 150 "project.y" /* yacc.c:1646  */
    {;}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 153 "project.y" /* yacc.c:1646  */
    {/* ' > ' stops execution all together */}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 164 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[-3].strVal))){ 
                                    store_struct_data_type((yyvsp[-3].strVal));    	
                                  }else{
 printf("\nERROR ON LINE %d : \nInvalid Struct Identifier! , Identifier '%s' already exists\n ",yylineno,(yyvsp[-3].strVal));
exit(0);                                    
                                  } }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 171 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[-3].strVal))){ 
                                    store_struct_data_type((yyvsp[-3].strVal));    	
                                  }else{
 printf("\nERROR ON LINE %d : \nInvalid Struct Identifier! , Identifier '%s' already exists\n ",yylineno,(yyvsp[-3].strVal));
exit(0);                                    
                                  } }
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 181 "project.y" /* yacc.c:1646  */
    { ;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 183 "project.y" /* yacc.c:1646  */
    {;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 190 "project.y" /* yacc.c:1646  */
    { store_struct_value_int(); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 192 "project.y" /* yacc.c:1646  */
    {;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 195 "project.y" /* yacc.c:1646  */
    { store_struct_value_char((yyvsp[0].strVal)); }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 197 "project.y" /* yacc.c:1646  */
    {;}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 203 "project.y" /* yacc.c:1646  */
    {;}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 204 "project.y" /* yacc.c:1646  */
    {;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 205 "project.y" /* yacc.c:1646  */
    {;}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 206 "project.y" /* yacc.c:1646  */
    {;}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 210 "project.y" /* yacc.c:1646  */
    {

 if(isDuplicate_struct((yyvsp[-14].strVal)) ){
struct_name((yyvsp[-13].strVal));
printf("\n Instance '%s' of struct '%s' \n",(yyvsp[-13].strVal),(yyvsp[-14].strVal));                                            
                                          }else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier '%s' is not type '%s'\n ",yylineno,(yyvsp[-14].strVal),(yyvsp[-15].strVal));
exit(0);                                            
                                          }


if(strcmp((yyvsp[-13].strVal),(yyvsp[-11].strVal))==0 && strcmp((yyvsp[-13].strVal),(yyvsp[-5].strVal))==0 ){ 
struct_assign_char_value((yyvsp[-9].strVal),(yyvsp[-7].strVal));
struct_assign_int_value((yyvsp[-3].strVal), (yyvsp[-1].intVal));
noOfStructVariables++;
}else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier name '%s' and Identifier name '%s' must be '%s' ",yylineno,(yyvsp[-5].strVal),(yyvsp[-11].strVal),(yyvsp[-13].strVal));
exit(0); 
 }}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 232 "project.y" /* yacc.c:1646  */
    {

 if(isDuplicate_struct((yyvsp[-14].strVal)) ){
struct_name((yyvsp[-13].strVal));
printf("\n Instance '%s' of struct '%s' \n",(yyvsp[-13].strVal),(yyvsp[-14].strVal));                                            
                                          }else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier '%s' is not type '%s'\n ",yylineno,(yyvsp[-14].strVal),(yyvsp[-15].strVal));
exit(0);                                            
                                          }


if(strcmp((yyvsp[-13].strVal),(yyvsp[-11].strVal))==0 && strcmp((yyvsp[-13].strVal),(yyvsp[-5].strVal))==0 ){ 
struct_assign_char_value((yyvsp[-9].strVal),(yyvsp[-7].strVal));
struct_assign_int_value((yyvsp[-3].strVal), (yyvsp[-1].intVal));
noOfStructVariables++;
}else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier name '%s' and Identifier name '%s' must be '%s' ",yylineno,(yyvsp[-5].strVal),(yyvsp[-11].strVal),(yyvsp[-13].strVal));
exit(0); 
 }}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 276 "project.y" /* yacc.c:1646  */
    { if(!isDuplicate((yyvsp[-8].strVal))){
                                            storeIdentifier((yyvsp[-8].strVal),retrieveDataType());
                                            storeDataType((yyvsp[-9].dataType));
                                          }else{
                                            DuplicateIdentifierError((yyvsp[-8].strVal));
                                          } }
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 283 "project.y" /* yacc.c:1646  */
    { if(!isDuplicate((yyvsp[-6].strVal))){
                                            storeIdentifier((yyvsp[-6].strVal),retrieveDataType());
                                            storeDataType((yyvsp[-7].dataType));
                                          }else{
                                            DuplicateIdentifierError((yyvsp[-6].strVal));
                                          } }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 291 "project.y" /* yacc.c:1646  */
    {
					if(isDuplicate((yyvsp[-1].strVal)))
   					{Return((yyvsp[-1].strVal));}
					else
   					{printf("\nERROR ON LINE %d : \nInvalid return! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-1].strVal));
   					exit(0);}
				   }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 301 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),retrieveDataType());
                                    storeDataType((yyvsp[-1].dataType));
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 310 "project.y" /* yacc.c:1646  */
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
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 321 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),retrieveDataType());
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 328 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 337 "project.y" /* yacc.c:1646  */
    {/* no need to call yyerror cuz of line 1570 of y.tab.c*/}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 363 "project.y" /* yacc.c:1646  */
    {;}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 364 "project.y" /* yacc.c:1646  */
    {;}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 368 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"int");
                                    storeDataType("int");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 377 "project.y" /* yacc.c:1646  */
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
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 388 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"int");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 395 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"int");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 404 "project.y" /* yacc.c:1646  */
    {;}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 409 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"char");
                                    storeDataType("char");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 418 "project.y" /* yacc.c:1646  */
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
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 429 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"char");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 436 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"char");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 445 "project.y" /* yacc.c:1646  */
    {;}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 452 "project.y" /* yacc.c:1646  */
    {;}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 453 "project.y" /* yacc.c:1646  */
    {;}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 456 "project.y" /* yacc.c:1646  */
    {;}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 457 "project.y" /* yacc.c:1646  */
    {;}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 458 "project.y" /* yacc.c:1646  */
    {;}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 459 "project.y" /* yacc.c:1646  */
    {;}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 463 "project.y" /* yacc.c:1646  */
    {;}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 464 "project.y" /* yacc.c:1646  */
    {;}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 465 "project.y" /* yacc.c:1646  */
    {;}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 466 "project.y" /* yacc.c:1646  */
    {;}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 467 "project.y" /* yacc.c:1646  */
    {;}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 468 "project.y" /* yacc.c:1646  */
    {;}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 469 "project.y" /* yacc.c:1646  */
    {;}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 473 "project.y" /* yacc.c:1646  */
    {;}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 474 "project.y" /* yacc.c:1646  */
    {;}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 475 "project.y" /* yacc.c:1646  */
    {;}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 476 "project.y" /* yacc.c:1646  */
    {;}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 477 "project.y" /* yacc.c:1646  */
    {;}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 478 "project.y" /* yacc.c:1646  */
    {;}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 479 "project.y" /* yacc.c:1646  */
    {;}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 487 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue((yyvsp[-3].strVal),(yyvsp[-1].intVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 497 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue((yyvsp[-3].strVal),(yyvsp[-1].intVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     			}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 507 "project.y" /* yacc.c:1646  */
    {;}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 511 "project.y" /* yacc.c:1646  */
    {(yyval.intVal)=(yyvsp[0].intVal);}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 513 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) + (yyvsp[0].intVal);}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 514 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) - (yyvsp[0].intVal);}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 515 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) ^ (yyvsp[0].intVal);}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 516 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) * (yyvsp[0].intVal);}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 517 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) / (yyvsp[0].intVal);}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 518 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-1].intVal);}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 519 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.intVal)=getValue((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 528 "project.y" /* yacc.c:1646  */
    {(yyval.intVal)=(yyvsp[0].intVal);}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 529 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.intVal)=getValue((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 542 "project.y" /* yacc.c:1646  */
    {;}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 544 "project.y" /* yacc.c:1646  */
    {;}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 560 "project.y" /* yacc.c:1646  */
    {;}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 563 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "<";}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 564 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = ">";}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 565 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "==";}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 566 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "!=";}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 567 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "&&";}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 568 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "||";}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 572 "project.y" /* yacc.c:1646  */
    {   if(isDuplicate((yyvsp[-3].strVal)))
 				{PrintMessage((yyvsp[-3].strVal),(yyvsp[-6].strVal));}
				else {printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    					exit(0);}
			    }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 577 "project.y" /* yacc.c:1646  */
    {
								printf("%s \n ",(yyvsp[-2].strVal));
											}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 584 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue_char((yyvsp[-3].strVal),(yyvsp[-1].strVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     }
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 594 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue_char((yyvsp[-3].strVal),(yyvsp[-1].strVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     			}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 604 "project.y" /* yacc.c:1646  */
    {;}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 606 "project.y" /* yacc.c:1646  */
    {(yyval.strVal)=(yyvsp[0].strVal);}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 607 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.strVal)=getValue_char((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 621 "project.y" /* yacc.c:1646  */
    {break;}
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 624 "project.y" /* yacc.c:1646  */
    {;}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2520 "y.tab.c" /* yacc.c:1646  */
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
#line 628 "project.y" /* yacc.c:1906  */

int main(){

  yyparse();
  printf("No Errors!!\n");
  return 0;
}

