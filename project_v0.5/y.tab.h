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
#line 47 "project.y" /* yacc.c:1909  */

  int intVal;
  char* dataType;
  char* strVal;
  char charVal;

#line 161 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
