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
    COMMA = 277,
    SEMICOLON = 278,
    character_value = 279,
    integer_value = 280,
    string_value = 281,
    INTEGER = 282,
    CHAR = 283,
    VARS = 284,
    PROGRAM = 285,
    FUNCTION = 286,
    WHILE = 287,
    ENDWHILE = 288,
    FOR = 289,
    TO = 290,
    STEP = 291,
    ENDFOR = 292,
    PRINT = 293,
    STRING = 294,
    DATA_TYPE = 295,
    identifier = 296,
    array_identifier = 297,
    STRUCT = 298
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
#define COMMA 277
#define SEMICOLON 278
#define character_value 279
#define integer_value 280
#define string_value 281
#define INTEGER 282
#define CHAR 283
#define VARS 284
#define PROGRAM 285
#define FUNCTION 286
#define WHILE 287
#define ENDWHILE 288
#define FOR 289
#define TO 290
#define STEP 291
#define ENDFOR 292
#define PRINT 293
#define STRING 294
#define DATA_TYPE 295
#define identifier 296
#define array_identifier 297
#define STRUCT 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 46 "project.y" /* yacc.c:1909  */

  int intVal;
  char* dataType;
  char* strVal;
  char charVal;

#line 147 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
