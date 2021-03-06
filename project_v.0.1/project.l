%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
    void extern yyerror(char*);
    void InvalidToken();
%}


whitespace      [ \t\r\v\f]
linefeed        \n


%%
"void"          |
"int"           |
"char"          |
"unsigned int"  |
"unsigned char" |
"int*"          |
"char*"         {yylval.dataType = strdup(yytext);return DATA_TYPE;}

"struct"       {yylval.dataType = strdup(yytext);return STRUCT;}
"PROGRAM"      {yylval.dataType = strdup(yytext); return PROGRAM;} 
"FUNCTION"     {yylval.dataType = strdup(yytext); return FUNCTION;}
"VARS"	       {yylval.dataType = strdup(yytext); return VARS;}
"INTEGER"      {yylval.dataType = strdup(yytext); return INTEGER;}
"CHAR"      {yylval.dataType = strdup(yytext); return CHAR;}
 /*
"INTEGER"   |
"CHAR"      {yylval.dataType = strdup(yytext); return CHAR_OR_INTEGER;}
*/

";" 				{return SEMICOLON;}
"(" 				{return left_parenthesis;}
")" 				{return right_parenthesis;}
"," 				{return COMMA;}
"[" 				{return left_sbracket;}
"]" 				{return right_sbracket;} 
"+"				{return ADD;}
"-"				{return SUB;}
"^"				{return POW;}
"*"				{return MUL;}
"/"				{return DIV;}
"="				{return ASSIGN;}




[\'][a-zA-Z][\']             {yylval.charVal = yytext[1];    return character_value;}
[-+]?[0-9]+                  {yylval.intVal = atoi(yytext);  return integer_value;}

[a-zA-Z][_a-zA-Z0-9]*(\[[0-9]+\])+ {yylval.strVal = strdup(yytext); return array_identifier;}
[a-zA-Z_][a-zA-Z0-9_]* 	           {yylval.dataType = strdup(yytext); return identifier;}

\"(\\.|[^"])*\"              {yylval.strVal = strdup(yytext); return string_value;} 






{linefeed}                                      {yylineno++;}
{whitespace}                                    ;
.                                               {InvalidToken();}

 /* 
"PROGRAM"                       {yylval.dataType = strdup(yytext); return PROGRAM;} 
"FUNCTION"                      {yylval.dataType = strdup(yytext); return FUNCTION;} 
CHAR				{return CHAR;}
INTEGER				{return INTEGER;}
\n		       		{return newline;}
"print"				{return print;}
RETURN				{return RETURN;}
END_FUNCTION			{return END_FUNCTION;}
VARS				{return VARS;}
PROGRAM	               		{return PROGRAM;}
FUNCTION 			{return FUNCTION;}
 */

%%

int yywrap(void) {return 1;}
void yyerror(char *s) {
    fprintf(stderr, "\nERROR ON LINE %d : \n %s\n", yylineno, s);
    exit(0);
}

void InvalidToken(){
    printf("ERROR ON LINE %d : \n Invalid Token %s\n", yylineno,yytext);
    exit(0);
}


