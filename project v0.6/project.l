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

"STRUCT"       {yylval.dataType = strdup(yytext);return STRUCT;}  


"PROGRAM"      {yylval.dataType = strdup(yytext); return PROGRAM;} 
"FUNCTION"     {yylval.dataType = strdup(yytext); return FUNCTION;}
"WHILE"        {yylval.dataType = strdup(yytext); return WHILE;}
"ENDWHILE"     {yylval.dataType = strdup(yytext); return ENDWHILE;}
"VARS"	       {yylval.dataType = strdup(yytext); return VARS;}
"FOR"          {yylval.dataType = strdup(yytext); return FOR;}
"TO"           {yylval.dataType = strdup(yytext); return TO;}
"STEP"         {yylval.dataType = strdup(yytext); return STEP;}
"ENDFOR"       {yylval.dataType = strdup(yytext); return ENDFOR;}
"INTEGER"      {yylval.dataType = strdup(yytext); return INTEGER;}
"CHAR"         {yylval.dataType = strdup(yytext); return CHAR;}
"PRINT"        {yylval.dataType = strdup(yytext); return PRINT;}
"BREAK"        {yylval.dataType = strdup(yytext); return BREAK;}
"RETURN"       {yylval.dataType = strdup(yytext); return RETURN;}
"ENDFUNCTION"  {yylval.dataType = strdup(yytext); return ENDFUNCTION;}
"STARTMAIN"    {yylval.dataType = strdup(yytext); return STARTMAIN;}
"ENDMAIN"      {yylval.dataType = strdup(yytext); return ENDMAIN;}

"ENDSTRUCT"    {yylval.dataType = strdup(yytext); return ENDSTRUCT;}
"TYPEDEF"      {yylval.dataType = strdup(yytext); return TYPEDEF;}
 /*
"IF"           {yylval.dataType = strdup(yytext); return IF;}
"THEN"         {yylval.dataType = strdup(yytext); return THEN;}
"ELSEIF"       {yylval.dataType = strdup(yytext); return ELSEIF;}
"ELSE"         {yylval.dataType = strdup(yytext); return ELSE;}
"ENDIF"        {yylval.dataType = strdup(yytext); return ENDIF;}
"SWITCH"       {yylval.dataType = strdup(yytext); return SWITCH;}
"CASE"         {yylval.dataType = strdup(yytext); return CASE;}
"DEFAULT"      {yylval.dataType = strdup(yytext); return DEFAULT;}
"ENDSWITCH"    {yylval.dataType = strdup(yytext); return ENDSWITCH;}

*/
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
">"				{return BIGGER_THAN;}
"<"				{return SMALLER_THAN;}
"=="				{return IS_EQUAL;}
"!="				{return NOT_EQUAL;}
"&&"				{return AND;}
"||"				{return OR;}
":="				{return EQ;}
"/*"				{return SC;}
"*/"				{return EC;}
"."				{return DOT;}




 /*
":"				{return AM;} */





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


