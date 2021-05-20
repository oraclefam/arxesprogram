%{ 
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
  int isDuplicate(char*, char*);
  void storeIdentifier(char*,char*);
  void DuplicateIdentifierError(char*);
  char* retrieveDataType();
  void clearBuffers();
  int isValidAssignment(char*);
  void AssignmentError(char*);
  char* extractIdentifier(char[]);

  //For Array Identifiers
  int noOfArrayIdentifiers=0;
  char extractedIdentifier[50][50];


%}

%define parse.lac full
%define parse.error verbose


%union {
  int intVal;
  char* dataType;
  char* strVal;
  char charVal;
}


%token ADD SUB MUL DIV POW
%token PROGRAM FUNCTION RETURN END_FUNCTION VARS

/*%token CHAR INTEGER */
%token ASSIGN
%left ADD SUB 
%left MUL DIV
%left POW
%start start
%token newline print
%token left_parenthesis right_parenthesis left_sbracket right_sbracket
%token COMMA SEMICOLON


%token <charVal>  character_value
%token <intVal>   integer_value
%token <strVal>   string_value

%token <intVal> INTEGER
%token <charVal> CHAR 
%token <strVal> PROGRAM
%token <strVal> FUNCTION
%token <strVal> VARS
%token <strVal> STRING
%token <dataType> DATA_TYPE
%token <strVal> identifier array_identifier
%token <strVal> STRUCT

%type <strVal> function_declaration
%type <strVal> parameter_list
%type <strVal> body

/*
%type <strVal> EXPRESSION 
*/

%% 

start :  PROGRAM identifier 					  { clearBuffers(); }
      |	 PROGRAM identifier function_declaration				 {;} 
      | error '>'                          {/* ' > ' stops execution all together */}  
      ;    

function_declaration : FUNCTION DATA_TYPE identifier left_parenthesis parameter_list right_parenthesis body
                                          { if(!isDuplicate($3,retrieveDataType())){
                                            storeIdentifier($3,retrieveDataType());
                                            storeDataType($2);
                                          }else{
                                            DuplicateIdentifierError($3);
                                          } } 
		    | function_declaration FUNCTION DATA_TYPE identifier left_parenthesis parameter_list right_parenthesis body
                                          { if(!isDuplicate($4,retrieveDataType())){
                                            storeIdentifier($4,retrieveDataType());
                                            storeDataType($3);
                                          }else{
                                            DuplicateIdentifierError($4);
                                          } } 
	            ;	

parameter_list : DATA_TYPE identifier		{
                                  if(!isDuplicate($2,retrieveDataType())){
                                    storeIdentifier($2,retrieveDataType());
                                    storeDataType($1);
                                  }else{
                                    DuplicateIdentifierError($2);
                                  } 
                              		        }

	       | DATA_TYPE array_identifier 	{  
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($2));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType())){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    storeDataType($1);
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                	        }

	       | parameter_list COMMA DATA_TYPE identifier  {
                                  if(!isDuplicate($4,retrieveDataType())){
                                    storeIdentifier($4,retrieveDataType());
                                  }else{
                                    DuplicateIdentifierError($4);
                                  }
                                }
	       | parameter_list COMMA DATA_TYPE array_identifier   {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($4));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType())){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  } 
	       | error '>'                   {/* no need to call yyerror cuz of line 1570 of y.tab.c*/}
	       ;



/*body : part1 part2 {;}
     | part2
*/
		

body : INTEGER identifier SEMICOLON 						{;}   
     | INTEGER array_identifier SEMICOLON					{;}   
     | CHAR identifier SEMICOLON 						{;}
     | CHAR array_identifier SEMICOLON 						{;}

     | CHAR identifier COMMA identifier SEMICOLON 				{;}
     | CHAR array_identifier array_identifier SEMICOLON 			{;}
     | CHAR identifier array_identifier SEMICOLON 				{;}
     | CHAR array_identifier identifier SEMICOLON 				{;}


     | INTEGER identifier identifier SEMICOLON 					{;} 
     | INTEGER array_identifier array_identifier SEMICOLON 			{;}
     | INTEGER identifier array_identifier SEMICOLON 				{;}
     | INTEGER array_identifier identifier SEMICOLON 				{;}
	
     


     | CHAR array_identifier SEMICOLON INTEGER array_identifier SEMICOLON  	{;}  
     | CHAR identifier SEMICOLON INTEGER array_identifier SEMICOLON  		{;}
     | CHAR array_identifier SEMICOLON INTEGER identifier SEMICOLON  		{;} 
     | CHAR identifier SEMICOLON INTEGER array_identifier SEMICOLON  		{;}
     ; 


/*
data_type_list : INTEGER variable_l
	        INTEGER array_identifier
*/	       




variable_list : identifier							{;}
	      | array_identifier 						{;}
              | variable_list COMMA identifier					{;}
              | variable_list COMMA array_identifier				{;}
	      ;



/*
variable : identifier 								{;}
	 | identifier left_sbracket integer_value right_sbracket 		{;}
	 | identifier left_sbracket  right_sbracket 				{;}	
	 | variable identifier left_sbracket integer_value right_sbracket 		{;}
	 | variable identifier left_sbracket  right_sbracket 				{;} */
	 ;






/*
commands : assignment_command SEMICOLON	print expression SEMICOLON newline    {printf("Printing %d\n", $4);}
	 | commands assignment_command SEMICOLON print expression SEMICOLON newline     {printf("Printing %d\n", $5);}  
	 ;

assignment_command : identifier ASSIGN expression  		     {updateSymbolVal($1,$3);}
		   ;

expression   : term							{$$ = $1;}
	     | expression ADD expression 				{$$ = $1 + $3;}
	     | expression SUB expression 				{$$ = $1 - $3;}
	     | expression POW expression 				{$$ = $1 ^ $3;}
	     | expression MUL expression 				{$$ = $1 * $3;}
	     | expression DIV expression 				{$$ = $1 / $3;}
	     | left_parenthesis expression right_parenthesis		{$$ = $2;}
	     | identifier left_parenthesis parameter_list right_parenthesis	{;} 
	     ;
term    : integer 					 		  {$$ = $1;}
	| identifier 	                                 		 {$$ = symbolVal($1);}
	;
*/
%%
int main(){

  yyparse();
  printf("No Errors!!\n");
  return 0;
}

