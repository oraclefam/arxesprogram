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
    AM = 282,
    character_value = 283,
    integer_value = 284,
    string_value = 285,
    INTEGER = 286,
    CHAR = 287,
    VARS = 288,
    PROGRAM = 289,
    STARTMAIN = 290,
    ENDMAIN = 291,
    FUNCTION = 292,
    RETURN = 293,
    ENDFUNCTION = 294,
    WHILE = 295,
    ENDWHILE = 296,
    FOR = 297,
    TO = 298,
    STEP = 299,
    ENDFOR = 300,
    PRINT = 301,
    BREAK = 302,
    IF = 303,
    THEN = 304,
    ELSEIF = 305,
    ELSE = 306,
    ENDIF = 307,
    SWITCH = 308,
    CASE = 309,
    DEFAULT = 310,
    ENDSWITCH = 311,
    STRING = 312,
    DATA_TYPE = 313,
    STRUCT = 314,
    ENDSTRUCT = 315,
    TYPEDEF = 316,
    identifier = 317,
    array_identifier = 318
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
#define AM 282
#define character_value 283
#define integer_value 284
#define string_value 285
#define INTEGER 286
#define CHAR 287
#define VARS 288
#define PROGRAM 289
#define STARTMAIN 290
#define ENDMAIN 291
#define FUNCTION 292
#define RETURN 293
#define ENDFUNCTION 294
#define WHILE 295
#define ENDWHILE 296
#define FOR 297
#define TO 298
#define STEP 299
#define ENDFOR 300
#define PRINT 301
#define BREAK 302
#define IF 303
#define THEN 304
#define ELSEIF 305
#define ELSE 306
#define ENDIF 307
#define SWITCH 308
#define CASE 309
#define DEFAULT 310
#define ENDSWITCH 311
#define STRING 312
#define DATA_TYPE 313
#define STRUCT 314
#define ENDSTRUCT 315
#define TYPEDEF 316
#define identifier 317
#define array_identifier 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 59 "project.y" /* yacc.c:355  */

  int intVal;
  char* dataType;
  char* strVal;
  char charVal;

#line 293 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 310 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   786

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

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
       2,     2,    64,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   157,   157,   158,   161,   172,   179,   189,   192,   199,
     201,   204,   206,   212,   213,   214,   215,   219,   241,   284,
     291,   300,   310,   319,   330,   337,   346,   372,   373,   377,
     386,   397,   404,   413,   418,   427,   438,   445,   454,   461,
     462,   465,   466,   467,   468,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   496,   506,   516,   520,   522,   523,   524,
     525,   526,   527,   528,   537,   538,   551,   553,   557,   558,
     559,   560,   563,   564,   565,   566,   569,   572,   573,   574,
     575,   576,   577,   581,   586,   593,   603,   613,   615,   616,
     630,   633
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
  "SEMICOLON", "DOT", "AM", "character_value", "integer_value",
  "string_value", "INTEGER", "CHAR", "VARS", "PROGRAM", "STARTMAIN",
  "ENDMAIN", "FUNCTION", "RETURN", "ENDFUNCTION", "WHILE", "ENDWHILE",
  "FOR", "TO", "STEP", "ENDFOR", "PRINT", "BREAK", "IF", "THEN", "ELSEIF",
  "ELSE", "ENDIF", "SWITCH", "CASE", "DEFAULT", "ENDSWITCH", "STRING",
  "DATA_TYPE", "STRUCT", "ENDSTRUCT", "TYPEDEF", "identifier",
  "array_identifier", "'>'", "$accept", "start", "structure_declaration",
  "struct_variable_int", "struct_variable_char", "struct_body",
  "use_struct", "function_declaration", "return", "parameter_list", "main",
  "integer_variable_list", "character_variable_list", "body_pre", "body",
  "commands", "assignment_command", "expression", "while_command",
  "for_command", "if_command", "switch_command", "conditional_command",
  "condition", "print_command", "assignment_command_char",
  "expression_char", "break_command", "multi_line_comments", YY_NULLPTR
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
     315,   316,   317,   318,    62
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,   -41,   -33,    37,  -140,    23,  -140,   -31,    12,     1,
      72,  -140,    45,    34,    45,    50,    54,   -19,  -140,  -140,
      15,    45,    74,    88,    45,    97,  -140,     2,    14,    -1,
      74,     5,     7,   288,   146,    15,    96,    95,  -140,   135,
     106,  -140,   152,     2,    14,  -140,    31,   124,  -140,  -140,
      89,   130,  -140,  -140,    98,   131,   136,     5,     7,   190,
     140,   193,   180,   195,   196,   201,    33,   151,   213,   150,
    -140,  -140,    78,    56,  -140,  -140,  -140,  -140,     3,    70,
     202,  -140,  -140,  -140,  -140,   209,   214,  -140,  -140,    62,
    -140,  -140,    83,  -140,  -140,   217,   110,   116,   181,   221,
     216,  -140,   181,   185,    42,   191,   570,   192,  -140,   150,
    -140,  -140,    78,    56,  -140,  -140,  -140,  -140,   244,   673,
     673,   246,   231,  -140,   204,    85,    -2,  -140,     3,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   211,   259,
     243,     8,   261,   264,    27,  -140,  -140,  -140,   681,   252,
     218,  -140,   219,    42,   355,   597,    27,   673,  -140,  -140,
    -140,    45,   220,    24,  -140,  -140,  -140,  -140,  -140,  -140,
     250,   673,   239,   258,   271,   236,   234,  -140,   114,    27,
      27,    27,    27,    27,  -140,  -140,  -140,  -140,   228,   267,
     724,   268,  -140,   212,   397,    74,    91,    45,  -140,   600,
     265,  -140,   233,   673,   286,  -140,    21,    21,    28,    28,
      -4,   273,   237,  -140,  -140,   274,   538,  -140,  -140,    74,
    -140,   256,   289,   435,    27,   249,   279,   673,   629,   538,
     277,   296,  -140,   417,   287,   255,   473,   262,   284,   567,
     673,   293,   285,   263,   319,   304,  -140,   656,  -140,   673,
     324,   303,  -140,  -140,   511,   307,   314,   315,   280,   282,
     320,   323,   283,   290,   345,   349,   329,   330,   338,   339,
    -140,  -140
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      46,    47,    52,    53,    48,    49,    50,    51,     0,     0,
       0,    10,    13,    12,    14,     0,     0,     6,    33,     0,
      41,    38,     0,    42,    65,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,    28,    54,
      55,    56,    61,    62,    57,    58,    59,    60,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     7,     0,    15,
      16,    31,    32,    36,    37,   101,    43,    44,     0,     0,
       0,     0,     0,     0,     0,    66,    98,    73,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    26,    22,
      23,    40,     0,     0,    88,    87,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,     0,     0,    63,    74,    75,    95,     0,     0,
       0,     0,    80,     0,     0,     0,     0,    40,    86,     0,
       0,    94,     0,     0,     0,    72,    67,    68,    70,    71,
      69,     0,     0,    64,    96,     0,     0,    24,    25,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,    93,     0,
       0,     0,    21,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,   322,   326,   331,  -140,  -140,  -140,   245,
     350,   318,   325,   -12,   -30,   145,   -67,  -139,   -61,   -57,
     -55,    -3,   276,  -140,     9,    68,   223,   115,   132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    10,    39,    42,    29,    66,    17,   238,   126,
      18,    50,    54,    20,    33,    68,    69,   148,    70,    71,
      72,    73,   139,   170,    74,    75,   149,    76,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   109,    22,    37,   124,   178,    47,   110,    51,    30,
     161,   111,    35,   112,   190,    40,    14,   193,    25,     1,
     173,    67,   162,     4,     7,   185,   181,   182,   183,     5,
      43,    44,   174,    11,    55,   183,   197,     6,   144,   109,
     206,   207,   208,   209,   210,   110,    27,    28,   162,   111,
     185,   112,     2,   144,   105,    56,   145,   185,   186,    45,
      13,   125,    57,    58,    38,   113,    19,    48,    49,    52,
      53,   145,   146,    59,    12,    60,    41,   114,    19,    61,
      62,    63,     8,   186,     9,   233,    64,   109,   109,   177,
     186,    87,   -40,   110,   110,    65,    21,   111,   111,   112,
     112,    43,    44,   113,   147,    31,    32,    14,    23,    15,
     121,   122,   123,    89,    90,   114,    24,   179,   180,   181,
     182,   183,    92,    93,   131,   132,   205,   109,   119,   120,
     127,    16,   109,   110,    89,   136,   115,   111,   110,   112,
      92,   137,   111,   185,   112,   133,   134,   159,   160,   195,
      34,   113,   113,   217,   218,    36,   109,    78,    80,    81,
      82,   109,   110,   114,   114,   216,   111,   110,   112,   109,
      83,   111,   109,   112,   115,   110,   186,    84,   110,   111,
     109,   112,   111,   116,   112,   219,   110,   109,    88,   229,
     111,   113,   112,   110,    91,    94,   113,   111,    95,   112,
     117,    98,    99,   114,   100,   101,   102,   103,   114,   104,
     107,   106,   118,   128,    55,   179,   180,   181,   182,   183,
     113,   116,   115,   115,   215,   113,   164,   165,   166,   167,
     168,   169,   114,   113,   129,    56,   113,   114,   117,   130,
     135,   185,   140,   138,   113,   114,   141,   143,   114,   108,
     150,   113,   153,    59,   152,    60,   114,   156,   157,    61,
      62,    63,   115,   114,   154,   155,    64,   115,   158,   116,
     116,   171,   172,   175,   186,    65,   176,   187,   196,   198,
     188,   189,   200,   201,   202,   203,   117,   117,   204,    55,
     211,   115,   212,   214,   221,   222,   115,   224,   225,   226,
     230,   227,   194,   231,   115,   235,   240,   115,   241,   116,
      56,   234,   249,   243,   116,   115,   199,   244,   248,    57,
      58,    19,   115,   246,   245,   250,   117,   251,    59,   252,
      60,   117,   255,   256,    61,    62,    63,   257,   116,   258,
     259,    64,   260,   116,   261,   264,   262,   -40,   223,   263,
      65,   116,   265,   266,   116,   117,    55,   267,   268,   269,
     117,   228,   116,   270,   271,    85,    79,    26,   117,   116,
      86,   117,   236,   163,   239,    96,   191,    56,   142,   117,
       0,     0,     0,    97,     0,   247,   117,     0,     0,     0,
     -79,   -79,   -79,   -79,   254,    59,   -79,    60,    55,     0,
     -79,    61,    62,    63,     0,   -79,   -79,   -79,    64,   -79,
     -79,   -79,     0,     0,     0,     0,     0,    65,     0,   -84,
     179,   180,   181,   182,   183,     0,     0,     0,     0,   242,
       0,     0,   -84,   -84,   -84,   -84,    55,    59,   -84,    60,
       0,     0,   -84,    61,    62,    63,   185,   -84,   -84,   -84,
      64,   -84,   -84,   -84,     0,     0,     0,    56,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,    55,    59,   -78,    60,     0,   186,
     -78,    61,    62,    63,     0,   -78,   -78,   232,    64,   -78,
     -78,   -78,     0,     0,     0,   -83,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,    55,    59,   -83,    60,     0,     0,   -83,    61,
      62,    63,     0,   -83,   -83,   -83,    64,   -83,   -83,   -83,
       0,     0,     0,   -82,     0,    65,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
       0,    59,   -82,    60,     0,     0,   -82,    61,    62,    63,
      56,   -82,   -82,   -82,    64,   -82,   -82,   -82,    55,    57,
      58,    55,     0,    65,     0,     0,     0,     0,    59,     0,
      60,     0,     0,     0,    61,    62,    63,     0,     0,    56,
       0,    64,    56,     0,     0,     0,     0,     0,    55,     0,
      65,    55,   -20,     0,   -20,     0,   151,    59,     0,    60,
      59,     0,    60,    61,    62,    63,    61,    62,    63,    56,
      64,     0,    56,    64,     0,     0,     0,     0,     0,    65,
      55,     0,    65,     0,     0,     0,     0,    59,     0,    60,
      59,   220,    60,    61,    62,    63,    61,    62,    63,   192,
      64,    56,     0,    64,     0,     0,     0,    55,     0,    65,
       0,     0,    65,     0,     0,     0,     0,   237,     0,    59,
       0,    60,     0,     0,    55,    61,    62,    63,    56,     0,
       0,     0,    64,     0,   179,   180,   181,   182,   183,     0,
       0,    65,     0,     0,     0,    56,    59,     0,    60,     0,
       0,   253,    61,    62,    63,     0,   184,     0,     0,    64,
     185,     0,     0,    59,     0,    60,     0,     0,    65,    61,
      62,    63,     0,     0,     0,     0,    64,   179,   180,   181,
     182,   183,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     0,   186,     0,     0,     0,     0,     0,   213,
       0,     0,     0,   185,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186
};

static const yytype_int16 yycheck[] =
{
      30,    68,    14,     1,     1,   144,     1,    68,     1,    21,
      12,    68,    24,    68,   153,     1,    35,   156,    37,     1,
      12,    33,    24,    64,     1,    29,     5,     6,     7,    62,
      31,    32,    24,    64,     1,     7,    12,     0,    11,   106,
     179,   180,   181,   182,   183,   106,    31,    32,    24,   106,
      29,   106,    34,    11,    66,    22,    29,    29,    62,    60,
      59,    58,    31,    32,    62,    68,    33,    62,    63,    62,
      63,    29,    30,    40,    62,    42,    62,    68,    33,    46,
      47,    48,    59,    62,    61,   224,    53,   154,   155,    62,
      62,    60,    59,   154,   155,    62,    62,   154,   155,   154,
     155,    31,    32,   106,    62,    31,    32,    35,    58,    37,
      54,    55,    56,    24,    25,   106,    62,     3,     4,     5,
       6,     7,    24,    25,    62,    63,    12,   194,    50,    51,
      60,    59,   199,   194,    24,    25,    68,   194,   199,   194,
      24,    25,   199,    29,   199,    62,    63,    62,    63,   161,
      62,   154,   155,    62,    63,    58,   223,    11,    62,    64,
      25,   228,   223,   154,   155,   195,   223,   228,   223,   236,
      64,   228,   239,   228,   106,   236,    62,    25,   239,   236,
     247,   236,   239,    68,   239,   197,   247,   254,    64,   219,
     247,   194,   247,   254,    64,    64,   199,   254,    62,   254,
      68,    11,    62,   194,    11,    25,    11,    11,   199,     8,
      59,    66,    62,    11,     1,     3,     4,     5,     6,     7,
     223,   106,   154,   155,    12,   228,    15,    16,    17,    18,
      19,    20,   223,   236,    25,    22,   239,   228,   106,    25,
      23,    29,    21,    62,   247,   236,    30,    62,   239,    36,
      59,   254,     8,    40,    62,    42,   247,    11,    27,    46,
      47,    48,   194,   254,   119,   120,    53,   199,    64,   154,
     155,    12,    29,    12,    62,    62,    12,    25,    58,    29,
      62,    62,    43,    25,    13,    49,   154,   155,    54,     1,
      62,   223,    25,    25,    29,    62,   228,    11,    25,    62,
      44,    27,   157,    14,   236,    26,    29,   239,    12,   194,
      22,    62,    27,    26,   199,   247,   171,    62,    25,    31,
      32,    33,   254,    39,    62,    62,   194,     8,    40,    25,
      42,   199,     8,    30,    46,    47,    48,    30,   223,    25,
      25,    53,    62,   228,    62,    62,    26,    59,   203,    26,
      62,   236,    62,     8,   239,   223,     1,     8,    29,    29,
     228,   216,   247,    25,    25,    43,    35,    17,   236,   254,
      44,   239,   227,   128,   229,    57,   153,    22,   102,   247,
      -1,    -1,    -1,    58,    -1,   240,   254,    -1,    -1,    -1,
      35,    36,    37,    38,   249,    40,    41,    42,     1,    -1,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    22,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    35,    36,    37,    38,     1,    40,    41,    42,
      -1,    -1,    45,    46,    47,    48,    29,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    22,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,     1,    40,    41,    42,    -1,    62,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    22,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,     1,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    22,    -1,    62,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    -1,    -1,    45,    46,    47,    48,
      22,    50,    51,    52,    53,    54,    55,    56,     1,    31,
      32,     1,    -1,    62,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    22,
      -1,    53,    22,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      62,     1,    35,    -1,    37,    -1,    36,    40,    -1,    42,
      40,    -1,    42,    46,    47,    48,    46,    47,    48,    22,
      53,    -1,    22,    53,    -1,    -1,    -1,    -1,    -1,    62,
       1,    -1,    62,    -1,    -1,    -1,    -1,    40,    -1,    42,
      40,    41,    42,    46,    47,    48,    46,    47,    48,    52,
      53,    22,    -1,    53,    -1,    -1,    -1,     1,    -1,    62,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,    42,    -1,    -1,     1,    46,    47,    48,    22,    -1,
      -1,    -1,    53,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    62,    -1,    -1,    -1,    22,    40,    -1,    42,    -1,
      -1,    45,    46,    47,    48,    -1,    25,    -1,    -1,    53,
      29,    -1,    -1,    40,    -1,    42,    -1,    -1,    62,    46,
      47,    48,    -1,    -1,    -1,    -1,    53,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    34,    66,    64,    62,     0,     1,    59,    61,
      67,    64,    62,    59,    35,    37,    59,    72,    75,    33,
      78,    62,    78,    58,    62,    37,    75,    31,    32,    70,
      78,    31,    32,    79,    62,    78,    58,     1,    62,    68,
       1,    62,    69,    31,    32,    60,    79,     1,    62,    63,
      76,     1,    62,    63,    77,     1,    22,    31,    32,    40,
      42,    46,    47,    48,    53,    62,    71,    78,    80,    81,
      83,    84,    85,    86,    89,    90,    92,    93,    11,    70,
      62,    64,    25,    64,    25,    68,    69,    60,    64,    24,
      25,    64,    24,    25,    64,    62,    76,    77,    11,    62,
      11,    25,    11,    11,     8,    78,    80,    59,    36,    81,
      83,    84,    85,    86,    89,    90,    92,    93,    62,    50,
      51,    54,    55,    56,     1,    58,    74,    60,    11,    25,
      25,    62,    63,    62,    63,    23,    25,    25,    62,    87,
      21,    30,    87,    62,    11,    29,    30,    62,    82,    91,
      59,    36,    62,     8,    80,    80,    11,    27,    64,    62,
      63,    12,    24,    74,    15,    16,    17,    18,    19,    20,
      88,    12,    29,    12,    24,    12,    12,    62,    82,     3,
       4,     5,     6,     7,    25,    29,    62,    25,    62,    62,
      82,    91,    52,    82,    80,    78,    58,    12,    29,    80,
      43,    25,    13,    49,    54,    12,    82,    82,    82,    82,
      82,    62,    25,    25,    25,    12,    79,    62,    63,    78,
      41,    29,    62,    80,    11,    25,    62,    27,    80,    79,
      44,    14,    52,    82,    62,    26,    80,    38,    73,    80,
      29,    12,    12,    26,    62,    62,    39,    80,    25,    27,
      62,     8,    25,    45,    80,     8,    30,    30,    25,    25,
      62,    62,    26,    26,    62,    62,     8,     8,    29,    29,
      25,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    67,    67,    67,    67,    68,
      68,    69,    69,    70,    70,    70,    70,    71,    71,    72,
      72,    73,    74,    74,    74,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    84,    85,    85,
      85,    85,    86,    86,    86,    86,    87,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    91,    91,
      92,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     2,     5,     6,     6,     2,     1,
       2,     1,     2,     3,     3,     4,     4,    17,    18,    11,
      10,     3,     2,     2,     4,     4,     2,     6,     5,     1,
       1,     3,     3,     2,     1,     1,     3,     3,     2,     1,
       0,     3,     3,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     5,     2,     1,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     6,    10,     6,     3,
       4,     7,    10,     7,     4,     2,     3,     1,     1,     1,
       1,     1,     1,     9,     5,     4,     5,     2,     1,     1,
       2,     3
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
#line 157 "project.y" /* yacc.c:1646  */
    { clearBuffers(); }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 158 "project.y" /* yacc.c:1646  */
    {;}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 161 "project.y" /* yacc.c:1646  */
    {/* ' > ' stops execution all together */}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 172 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[-3].strVal))){ 
                                    store_struct_data_type((yyvsp[-3].strVal));    	
                                  }else{
 printf("\nERROR ON LINE %d : \nInvalid Struct Identifier! , Identifier '%s' already exists\n ",yylineno,(yyvsp[-3].strVal));
exit(0);                                    
                                  } }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 179 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[-3].strVal))){ 
                                    store_struct_data_type((yyvsp[-3].strVal));    	
                                  }else{
 printf("\nERROR ON LINE %d : \nInvalid Struct Identifier! , Identifier '%s' already exists\n ",yylineno,(yyvsp[-3].strVal));
exit(0);                                    
                                  } }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 189 "project.y" /* yacc.c:1646  */
    { ;}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 192 "project.y" /* yacc.c:1646  */
    {;}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 199 "project.y" /* yacc.c:1646  */
    { store_struct_value_int(); }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 201 "project.y" /* yacc.c:1646  */
    {;}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 204 "project.y" /* yacc.c:1646  */
    { store_struct_value_char((yyvsp[0].strVal)); }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 206 "project.y" /* yacc.c:1646  */
    {;}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 212 "project.y" /* yacc.c:1646  */
    {;}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 213 "project.y" /* yacc.c:1646  */
    {;}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 214 "project.y" /* yacc.c:1646  */
    {;}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 215 "project.y" /* yacc.c:1646  */
    {;}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 219 "project.y" /* yacc.c:1646  */
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
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 241 "project.y" /* yacc.c:1646  */
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
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 285 "project.y" /* yacc.c:1646  */
    { if(!isDuplicate((yyvsp[-8].strVal))){
                                            storeIdentifier((yyvsp[-8].strVal),retrieveDataType());
                                            storeDataType((yyvsp[-9].dataType));
                                          }else{
                                            DuplicateIdentifierError((yyvsp[-8].strVal));
                                          } }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 292 "project.y" /* yacc.c:1646  */
    { if(!isDuplicate((yyvsp[-6].strVal))){
                                            storeIdentifier((yyvsp[-6].strVal),retrieveDataType());
                                            storeDataType((yyvsp[-7].dataType));
                                          }else{
                                            DuplicateIdentifierError((yyvsp[-6].strVal));
                                          } }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 300 "project.y" /* yacc.c:1646  */
    {
					if(isDuplicate((yyvsp[-1].strVal)))
   					{Return((yyvsp[-1].strVal));}
					else
   					{printf("\nERROR ON LINE %d : \nInvalid return! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-1].strVal));
   					exit(0);}
				   }
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 310 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),retrieveDataType());
                                    storeDataType((yyvsp[-1].dataType));
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 319 "project.y" /* yacc.c:1646  */
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
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 330 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),retrieveDataType());
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 337 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 346 "project.y" /* yacc.c:1646  */
    {/* no need to call yyerror cuz of line 1570 of y.tab.c*/}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 372 "project.y" /* yacc.c:1646  */
    {;}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 373 "project.y" /* yacc.c:1646  */
    {;}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 377 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"int");
                                    storeDataType("int");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 386 "project.y" /* yacc.c:1646  */
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
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 397 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"int");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 404 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"int");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 413 "project.y" /* yacc.c:1646  */
    {;}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 418 "project.y" /* yacc.c:1646  */
    { 
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"char");
                                    storeDataType("char");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  } 
                              		        }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 427 "project.y" /* yacc.c:1646  */
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
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 438 "project.y" /* yacc.c:1646  */
    {
                                  if(!isDuplicate((yyvsp[0].strVal))){
                                    storeIdentifier((yyvsp[0].strVal),"char");
                                  }else{
                                    DuplicateIdentifierError((yyvsp[0].strVal));
                                  }
                                }
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 445 "project.y" /* yacc.c:1646  */
    {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier((yyvsp[0].strVal)));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"char");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 454 "project.y" /* yacc.c:1646  */
    {;}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 461 "project.y" /* yacc.c:1646  */
    {;}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 462 "project.y" /* yacc.c:1646  */
    {;}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 465 "project.y" /* yacc.c:1646  */
    {;}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 466 "project.y" /* yacc.c:1646  */
    {;}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 467 "project.y" /* yacc.c:1646  */
    {;}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 468 "project.y" /* yacc.c:1646  */
    {;}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 472 "project.y" /* yacc.c:1646  */
    {;}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 473 "project.y" /* yacc.c:1646  */
    {;}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 474 "project.y" /* yacc.c:1646  */
    {;}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 475 "project.y" /* yacc.c:1646  */
    {;}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 476 "project.y" /* yacc.c:1646  */
    {;}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 477 "project.y" /* yacc.c:1646  */
    {;}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 478 "project.y" /* yacc.c:1646  */
    {;}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 479 "project.y" /* yacc.c:1646  */
    {;}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 480 "project.y" /* yacc.c:1646  */
    {;}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 482 "project.y" /* yacc.c:1646  */
    {;}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 483 "project.y" /* yacc.c:1646  */
    {;}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 484 "project.y" /* yacc.c:1646  */
    {;}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 485 "project.y" /* yacc.c:1646  */
    {;}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 486 "project.y" /* yacc.c:1646  */
    {;}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 487 "project.y" /* yacc.c:1646  */
    {;}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 488 "project.y" /* yacc.c:1646  */
    {;}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 489 "project.y" /* yacc.c:1646  */
    {;}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 490 "project.y" /* yacc.c:1646  */
    {;}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 496 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue((yyvsp[-3].strVal),(yyvsp[-1].intVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     }
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 506 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue((yyvsp[-3].strVal),(yyvsp[-1].intVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     			}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 516 "project.y" /* yacc.c:1646  */
    {;}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 520 "project.y" /* yacc.c:1646  */
    {(yyval.intVal)=(yyvsp[0].intVal);}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 522 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) + (yyvsp[0].intVal);}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 523 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) - (yyvsp[0].intVal);}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 524 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) ^ (yyvsp[0].intVal);}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 525 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) * (yyvsp[0].intVal);}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 526 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-2].intVal) / (yyvsp[0].intVal);}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 527 "project.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-1].intVal);}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 528 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.intVal)=getValue((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 537 "project.y" /* yacc.c:1646  */
    {(yyval.intVal)=(yyvsp[0].intVal);}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 538 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.intVal)=getValue((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 551 "project.y" /* yacc.c:1646  */
    {;}
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 553 "project.y" /* yacc.c:1646  */
    {;}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 557 "project.y" /* yacc.c:1646  */
    {;}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 558 "project.y" /* yacc.c:1646  */
    {;}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 559 "project.y" /* yacc.c:1646  */
    {;}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 560 "project.y" /* yacc.c:1646  */
    {;}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 563 "project.y" /* yacc.c:1646  */
    {;}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 564 "project.y" /* yacc.c:1646  */
    {;}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 565 "project.y" /* yacc.c:1646  */
    {;}
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 566 "project.y" /* yacc.c:1646  */
    {;}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 569 "project.y" /* yacc.c:1646  */
    {;}
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 572 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "<";}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 573 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = ">";}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 574 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "==";}
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 575 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "!=";}
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 576 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "&&";}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 577 "project.y" /* yacc.c:1646  */
    {(yyval.strVal) = "||";}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 581 "project.y" /* yacc.c:1646  */
    {   if(isDuplicate((yyvsp[-3].strVal)))
 				{PrintMessage((yyvsp[-3].strVal),(yyvsp[-6].strVal));}
				else {printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    					exit(0);}
			    }
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 586 "project.y" /* yacc.c:1646  */
    {
								printf("%s \n ",(yyvsp[-2].strVal));
											}
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 593 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue_char((yyvsp[-3].strVal),(yyvsp[-1].strVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     }
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 603 "project.y" /* yacc.c:1646  */
    {
								if(isDuplicate((yyvsp[-3].strVal))) 
								{ 
  								   UpdateValue_char((yyvsp[-3].strVal),(yyvsp[-1].strVal));
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[-3].strVal));
    									exit(0);
								     }
	    						     			}
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 613 "project.y" /* yacc.c:1646  */
    {;}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 615 "project.y" /* yacc.c:1646  */
    {(yyval.strVal)=(yyvsp[0].strVal);}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 616 "project.y" /* yacc.c:1646  */
    {
				    if(isDuplicate((yyvsp[0].strVal))){
					(yyval.strVal)=getValue_char((yyvsp[0].strVal));
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,(yyvsp[0].strVal));
					 exit(0);
					}	
				  }
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 630 "project.y" /* yacc.c:1646  */
    {break;}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 633 "project.y" /* yacc.c:1646  */
    {;}
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2721 "y.tab.c" /* yacc.c:1646  */
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
#line 637 "project.y" /* yacc.c:1906  */

int main(){

  yyparse();
  printf("No Errors!!\n");
  return 0;
}

