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
#line 59 "project.y" /* yacc.c:1909  */

  int intVal;
  char* dataType;
  char* strVal;
  char charVal;

#line 187 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
