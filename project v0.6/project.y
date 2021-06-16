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
  char* getValue_char(char* );
  int WhileFun(char*,int,int);
  int getPosition(int);
  void PrintMessage(char*,char*);
  void Return(char*);
char* getDatatype(char*);


void store_struct_var(char*, char*);
int isDuplicate_struct(char*);
void struct_assign_char_value(char*, char*);
void struct_assign_int_value(char*, int );



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
%token BIGGER_THAN SMALLER_THAN IS_EQUAL NOT_EQUAL AND OR EQ SC EC 
%token COMMA SEMICOLON 
%token DOT


%token <charVal>  character_value
%token <intVal>   integer_value
%token <strVal>   string_value
%token <intVal> INTEGER
%token <charVal> CHAR 
%token <charVal> VARS
%token <strVal> PROGRAM STARTMAIN ENDMAIN 
%token <strVal> FUNCTION RETURN ENDFUNCTION 
%token <strVal> WHILE ENDWHILE FOR TO STEP ENDFOR PRINT BREAK
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
%token <strVal> STRUCT ENDSTRUCT TYPEDEF


 /* %token <dataType> CHAR_OR_INTEGER */
%token <strVal> identifier array_identifier


%type <strVal> function_declaration
%type <strVal> parameter_list
%type <strVal> body_pre
%type <strVal> body
%type <intVal> expression
%type <strVal> expression_char
%type <strVal> assignment_command
%type <strVal> assignment_command_char
%type <strVal> while_command
%type <strVal> for_command
%type <strVal> condition
%type <strVal> commands
%type <strVal> print_command 
%type <strVal> break_command
%type <strVal> multi_line_comments
%type <strVal> return
%type <strVal> main


%type <strVal> structure_declaration
%type <strVal> struct_body
%type <strVal> use_struct
%type <strVal> struct_variable_int
%type <strVal> struct_variable_char
/*
%type <strVal> if_command



%type <strVal> conditional_command */




%% 

start :  PROGRAM identifier structure_declaration main	{ clearBuffers(); }
      |	 PROGRAM identifier structure_declaration function_declaration  main 	 {;} 


      | error '>'                          {/* ' > ' stops execution all together */}  
      ;    









structure_declaration : STRUCT identifier body_pre struct_body ENDSTRUCT { if(!isDuplicate($2)){
                                            storeIdentifier($2,$1);
                                            storeDataType($1);
                                          }else{
                                            DuplicateIdentifierError($2);
                                          } } 
| TYPEDEF STRUCT identifier body_pre body ENDSTRUCT  { if(!isDuplicate($3)){
                                            storeIdentifier($3,$1);
                                            storeDataType($2);
                                          }else{
                                            DuplicateIdentifierError($3);
                                          } } 
| structure_declaration STRUCT identifier body_pre body ENDSTRUCT  { if(!isDuplicate($3)){
                                            storeIdentifier($3,$1);
                                            storeDataType($2);
                                          }else{
                                            DuplicateIdentifierError($3);
                                          } } 
| structure_declaration TYPEDEF STRUCT identifier body_pre body ENDSTRUCT  { if(!isDuplicate($4)){
                                            storeIdentifier($4,$1);
                                            storeDataType($3);
                                          }else{
                                            DuplicateIdentifierError($4);
                                          } } 
		      ;

struct_variable_int : identifier	{ 
                                  if(!isDuplicate_struct($1)){ 
                                    store_struct_var($1,"int");
                                    
				    $$ = $1;	
                                  }else{
 printf("\nERROR ON LINE %d : \nInvalid Struct Identifier! , Identifier '%s' already exists\n ",yylineno,$1);
exit(0);                                    
                                  } 
                              		        }
	       | error '>'                   {;}
	       ;

struct_variable_char : identifier	{ 
                                  if(!isDuplicate_struct($1)){
                                    store_struct_var($1,"char");
                                    storeDataType("char");
				    $$ = $1;	
                                  }else{
printf("\nERROR ON LINE %d : \nInvalid Struct Identifier! , Identifier '%s' already exists\n ",yylineno,$1);
exit(0);                                     
                                  } 
                              		        }
	       | error '>'                   {;}
	       ;




struct_body : INTEGER struct_variable_int  SEMICOLON  {;}
     | CHAR  struct_variable_char  SEMICOLON  {;}
     | struct_body INTEGER struct_variable_int  SEMICOLON  {;}
     | struct_body CHAR  struct_variable_char  SEMICOLON  {;}
     ;


use_struct: body_pre STRUCT identifier struct_variable_char SEMICOLON identifier COMMA identifier ASSIGN string_value SEMICOLON {

 if(isDuplicate($3) && strcmp(getDatatype($3),"STRUCT")==0 ){
printf("\n Struct Identifier '%s' type '%s' \n",$4,$3);                                            
                                          }else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier '%s' is not type '%s'\n ",yylineno,$3,$2);
exit(0);                                            
                                          }

if(strcmp($4,$6)==0  &&  isDuplicate_struct($8)){ 
struct_assign_char_value($8, $10);
}else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier name '%s' must be '%s' or '%s' does not exist \n or both :) ",yylineno,$6,$4,$8);
exit(0); 
 }}




| body_pre STRUCT identifier struct_variable_char SEMICOLON identifier COMMA identifier ASSIGN integer_value SEMICOLON {

 if(isDuplicate($3) && strcmp(getDatatype($3),"STRUCT")==0 ){
printf("\n Struct Identifier '%s' type '%s' \n",$4,$3);                                            
                                          }else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier '%s' is not type '%s'\n ",yylineno,$3,$2);
exit(0);                                            
                                          }

if(strcmp($4,$6)==0  &&  isDuplicate_struct($8)){ 
struct_assign_int_value($8, $10);
}else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier name '%s' must be '%s' or '%s' does not exist \n or both :) ",yylineno,$6,$4,$8);
exit(0); 
 }}




| use_struct identifier COMMA identifier ASSIGN string_value SEMICOLON {

if(isDuplicate_struct($2)  &&  isDuplicate_struct($4)){ 
struct_assign_char_value($4, $6);
}else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier '%s'  or '%s' does not exist \n or both :) ",yylineno,$2,$4);
exit(0); 
 }}



| use_struct  identifier COMMA identifier ASSIGN integer_value SEMICOLON {

if(isDuplicate_struct($2)  &&  isDuplicate_struct($4)){ 
struct_assign_int_value($4, $6);
}else{
printf("\nERROR ON LINE %d : \nInvalid Struct! , Identifier '%s'  or '%s' does not exist \n or both :) ",yylineno,$2,$4);
exit(0); 
 }}


           ;








































function_declaration : FUNCTION DATA_TYPE identifier left_parenthesis parameter_list right_parenthesis body_pre body commands return ENDFUNCTION
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

return : RETURN identifier SEMICOLON {
					if(isDuplicate($2))
   					{Return($2);}
					else
   					{printf("\nERROR ON LINE %d : \nInvalid return! Expected identifier that alreay exists, identifier '%s' does not exist ",yylineno,$2);
   					exit(0);}
				   }
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
























main : STARTMAIN body_pre body use_struct commands ENDMAIN	 {;}
| STARTMAIN body_pre body  commands ENDMAIN	 {;}
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





body_pre : VARS  {;}
	 |	{;}
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
 	 | break_command      {;}
	 | multi_line_comments {;}
	/* | if_command         {;}
	 | switch_command     {;}
	 */
	 | commands assignment_command      {;}
	 | commands while_command           {;}
	 | commands for_command             {;}
	 | commands print_command           {;}
 	 | commands assignment_command_char {;}
	 | commands break_command      {;} 
	 | commands multi_line_comments {;}
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
          /* |identifier left_parenthesis integer_variable_list  right_parenthesis SEMICOLON {;} */
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
	   
	        ;



break_command: BREAK SEMICOLON {break;}
             ;

multi_line_comments:  SC identifier EC {;} 
                   ;


%%
int main(){

  yyparse();
  printf("No Errors!!\n");
  return 0;
}

