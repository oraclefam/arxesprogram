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
  char getValue_char(char* );
  int WhileFun(char*,int,int);
  int getPosition(int);
void PrintMessage(char*,char*);

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
//%token PROGRAM FUNCTION RETURN END_FUNCTION VARS

/*%token CHAR INTEGER */
%token ASSIGN
%left ADD SUB 
%left MUL DIV
%left POW
%start start
%token newline print
%token left_parenthesis right_parenthesis left_sbracket right_sbracket
%token BIGGER_THAN SMALLER_THAN IS_EQUAL NOT_EQUAL AND OR EQ    /*AM*/
%token COMMA SEMICOLON


%token <charVal>  character_value
%token <intVal>   integer_value
%token <strVal>   string_value
%token <intVal> INTEGER
%token <charVal> CHAR 
%token <charVal> VARS
%token <strVal> PROGRAM
%token <strVal> FUNCTION
%token <strVal> WHILE ENDWHILE FOR TO STEP ENDFOR PRINT
  /*
%token <strVal> IF
%token <strVal> THEN
%token <strVal> ELSEIF
%token <strVal> ELSE
%token <strVal> ENDIF
%token <strVal> SWITCH
%token <strVal> CASE
%token <strVal> DEFAULT
%token <strVal> ENDSWITCH
%token <strVal> PRINT   */

%token <strVal> STRING
%token <dataType> DATA_TYPE
 /* %token <dataType> CHAR_OR_INTEGER */
%token <strVal> identifier array_identifier
%token <strVal> STRUCT

%type <strVal> function_declaration
%type <strVal> parameter_list
%type <strVal> body_pre
%type <strVal> body
%type <strVal> variable_list
%type <intVal> expression
%type <strVal> expression_char
%type <strVal> assignment_command
%type <strVal> assignment_command_char
%type <strVal> while_command
%type <strVal> for_command
%type <strVal> condition
%type <strVal> commands
%type <strVal> print_command /*
%type <strVal> if_command



%type <strVal> conditional_command */




%% 

start :  PROGRAM identifier 					  { clearBuffers(); }
      |	 PROGRAM identifier function_declaration				 {;} 
      | error '>'                          {/* ' > ' stops execution all together */}  
      ;    

function_declaration : FUNCTION DATA_TYPE identifier left_parenthesis parameter_list right_parenthesis body_pre body commands
                                          { if(!isDuplicate($3)){
                                            storeIdentifier($3,retrieveDataType());
                                            storeDataType($2);
                                          }else{
                                            DuplicateIdentifierError($3);
                                          } } 
		    | function_declaration FUNCTION DATA_TYPE identifier left_parenthesis parameter_list right_parenthesis body_pre body commands
                                          { if(!isDuplicate($4)){
                                            storeIdentifier($4,retrieveDataType());
                                            storeDataType($3);
                                          }else{
                                            DuplicateIdentifierError($4);
                                          } } 
	            ;	

parameter_list : DATA_TYPE identifier		{
                                  if(!isDuplicate($2)){
                                    storeIdentifier($2,retrieveDataType());
                                    storeDataType($1);
                                  }else{
                                    DuplicateIdentifierError($2);
                                  } 
                              		        }

	       | DATA_TYPE array_identifier 	{  
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($2));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    storeDataType($1);
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                	        }

	       | parameter_list COMMA DATA_TYPE identifier  {
                                  if(!isDuplicate($4)){
                                    storeIdentifier($4,retrieveDataType());
                                  }else{
                                    DuplicateIdentifierError($4);
                                  }
                                }
	       | parameter_list COMMA DATA_TYPE array_identifier   {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($4));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],retrieveDataType());
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  } 
	       | error '>'                   {/* no need to call yyerror cuz of line 1570 of y.tab.c*/}
	       ;


variable_list : identifier    					
	      | array_identifier 						
              | variable_list COMMA identifier 	
              | variable_list COMMA array_identifier				
	      ;



integer_variable_list : identifier		{ 
                                  if(!isDuplicate($1)){
                                    storeIdentifier($1,"int");
                                    storeDataType("int");
                                  }else{
                                    DuplicateIdentifierError($1);
                                  } 
                              		        }

	       | array_identifier 	{  
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($1));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"int");
                                    storeDataType("int");
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                	        }

	       | integer_variable_list COMMA  identifier  {
                                  if(!isDuplicate($3)){
                                    storeIdentifier($3,"int");
                                  }else{
                                    DuplicateIdentifierError($3);
                                  }
                                }
	       | integer_variable_list COMMA  array_identifier   {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($3));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"int");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  } 
	       | error '>'                   {;}
	       ;



character_variable_list : identifier		{ 
                                  if(!isDuplicate($1)){
                                    storeIdentifier($1,"char");
                                    storeDataType("char");
                                  }else{
                                    DuplicateIdentifierError($1);
                                  } 
                              		        }

	       | array_identifier 	{  
                                  strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($1));
                                  if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                    storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"char");
                                    storeDataType("char");
                                  }else{
                                    DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                  } 
                                  noOfArrayIdentifiers++;
                                	        }

	       | character_variable_list COMMA  identifier  {
                                  if(!isDuplicate($3)){
                                    storeIdentifier($3,"char");
                                  }else{
                                    DuplicateIdentifierError($3);
                                  }
                                }
	       | character_variable_list COMMA  array_identifier   {
                                    strcpy(extractedIdentifier[noOfArrayIdentifiers],extractIdentifier($3));
                                    if(!isDuplicate(extractedIdentifier[noOfArrayIdentifiers])){
                                      storeIdentifier(extractedIdentifier[noOfArrayIdentifiers],"char");
                                    }else{
                                      DuplicateIdentifierError(extractedIdentifier[noOfArrayIdentifiers]);
                                    } 
                                    noOfArrayIdentifiers++;
                                  } 
	       | error '>'                   {;}
	       ;





body_pre : VARS variable_list SEMICOLON {;}
	 |				{;}
	 ;

body : INTEGER integer_variable_list  SEMICOLON  {;}
     | CHAR  character_variable_list  SEMICOLON  {;}
     | body INTEGER integer_variable_list  SEMICOLON  {;}
     | body CHAR  character_variable_list  SEMICOLON  {;}
     ;


commands : assignment_command {;}
	 | while_command      {;}
	 | for_command        {;}
 	 | print_command      {;}
 	 | assignment_command_char {;}
	/* | if_command         {;}
	 | switch_command     {;}
	 */
	 | commands assignment_command      {;}
	 | commands while_command           {;}
	 | commands for_command             {;}
	 | commands print_command           {;}
 	 | commands assignment_command_char {;} 
	/* | commands if_command              {;}
	 | commands switch_command          {;}
*/
	 ;


//only for INTEGERS
assignment_command : identifier ASSIGN expression SEMICOLON {
								if(isDuplicate($1)) 
								{ 
  								   UpdateValue($1,$3);
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$1);
    									exit(0);
								     }
	    						     }
							    
		   | assignment_command identifier ASSIGN expression SEMICOLON {
								if(isDuplicate($2)) 
								{ 
  								   UpdateValue($2,$4);
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$2);
    									exit(0);
								     }
	    						     			}
													     
		   | error '>' {;}
		   ;


expression : integer_value {$$=$1;}
	   |expression ADD expression  {$$ = $1 + $3;}
	   |expression SUB expression  {$$ = $1 - $3;}
	   |expression POW expression  {$$ = $1 ^ $3;}
	   |expression MUL expression  {$$ = $1 * $3;}
	   |expression DIV expression  {$$ = $1 / $3;}
	   |left_parenthesis expression right_parenthesis  {$$ = $2;}
	   |identifier {
				    if(isDuplicate($1)){
					$$=getValue($1);
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$1);
					 exit(0);
					}	
				  }
	   | expression integer_value {$$=$2;}
	   |expression identifier {
				    if(isDuplicate($2)){
					$$=getValue($2);
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$2);
					 exit(0);
					}	
				  }
	   ;



while_command : WHILE left_parenthesis conditional_command  right_parenthesis commands ENDWHILE {;}        	      
	      ;
for_command : FOR identifier EQ integer_value TO integer_value STEP integer_value commands ENDFOR {;}
            ;

/*
if_command: IF left_parenthesis conditional_command  right_parenthesis THEN commands {;}
	  | if_command ELSEIF commands{;}
	  | if_command ELSE commands ENDIF {;}
	  | IF left_parenthesis conditional_command  right_parenthesis THEN commands ENDIF{;}
	 ;

switch_command: SWITCH left_parenthesis expression right_parenthesis CASE left_parenthesis expression right_parenthesis AM commands {;}
	      | switch_command CASE left_parenthesis expression right_parenthesis AM commands {;}
	      | switch_command DEFAULT AM commands {;}
	      | switch_command ENDSWITCH {;}
              ;
*/
conditional_command : identifier condition integer_value{;} 
		    ;

condition : SMALLER_THAN {$$ = "<";}
    	  | BIGGER_THAN  {$$ = ">";}
   	  | IS_EQUAL     {$$ = "==";}
   	  | NOT_EQUAL    {$$ = "!=";}
   	  | AND          {$$ = "&&";}
   	  | OR           {$$ = "||";}
    	  ;


print_command: PRINT left_parenthesis  string_value   COMMA left_sbracket identifier right_sbracket right_parenthesis SEMICOLON {   if(isDuplicate($6))
 				{PrintMessage($6,$3);}
				else {printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$6);
    					exit(0);}
			    }
	     | PRINT left_parenthesis  string_value  right_parenthesis SEMICOLON {
								printf("%s \n ",$3);
											}
	     ;



assignment_command_char : identifier ASSIGN expression_char SEMICOLON {
								if(isDuplicate($1)) 
								{ 
  								   UpdateValue_char($1,$3);
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$1);
    									exit(0);
								     }
	    						     }
							    
		   | assignment_command identifier ASSIGN expression_char SEMICOLON {
								if(isDuplicate($2)) 
								{ 
  								   UpdateValue_char($2,$4);
								}else{
									printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$2);
    									exit(0);
								     }
	    						     			}
													     
		   | error '>' {;}
		   ;
expression_char : string_value {$$=$1;}
	        |identifier {
				    if(isDuplicate($1)){
					$$=getValue_char($1);
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$1);
					 exit(0);
					}	
				  }
	   | expression string_value {$$=$2;}
	   |expression identifier {
				    if(isDuplicate($2)){
					$$=getValue_char($2);
							}
				   else {
					 printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$2);
					 exit(0);
					}	
				  }
	   ;



%%
int main(){

  yyparse();
  printf("No Errors!!\n");
  return 0;
}

