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
    PROGRAM = 263,
    FUNCTION = 264,
    RETURN = 265,
    END_FUNCTION = 266,
    VARS = 267,
    ASSIGN = 268,
    newline = 269,
    print = 270,
    left_parenthesis = 271,
    right_parenthesis = 272,
    left_sbracket = 273,
    right_sbracket = 274,
    COMMA = 275,
    SEMICOLON = 276,
    character_value = 277,
    integer_value = 278,
    string_value = 279,
    INTEGER = 280,
    CHAR = 281,
    STRING = 282,
    DATA_TYPE = 283,
    identifier = 284,
    array_identifier = 285,
    STRUCT = 286
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define POW 262
#define PROGRAM 263
#define FUNCTION 264
#define RETURN 265
#define END_FUNCTION 266
#define VARS 267
#define ASSIGN 268
#define newline 269
#define print 270
#define left_parenthesis 271
#define right_parenthesis 272
#define left_sbracket 273
#define right_sbracket 274
#define COMMA 275
#define SEMICOLON 276
#define character_value 277
#define integer_value 278
#define string_value 279
#define INTEGER 280
#define CHAR 281
#define STRING 282
#define DATA_TYPE 283
#define identifier 284
#define array_identifier 285
#define STRUCT 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "project.y" /* yacc.c:1909  */

  int intVal;
  char* dataType;
  char* strVal;
  char charVal;

#line 123 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
