#include <stdlib.h>
#include <string.h>

char Data_Type[50];

int noOfIdentifiers = 0;
int noOfStructVariables = 0;

struct IdentifierStructure
{   
    char*   name;
    char*   data_type;
    int     value;
}identifiers[20];




struct StructVariablesStructure
{   
    char*   sname;
    char*   sdata_type;
    int     sint_value;
    char*   schar_value;
}struct_variables[20];



char* IdentifierArray[20]; //Not using this anywhere. :/
extern int yylineno;
extern char* yytext; //Not using this anywhere. :/


//For development only
void showIdentifiers(){
    int i;
    for(i=0;i<noOfIdentifiers;i++){
        printf("%s\n",identifiers[i].name);
    }
}

void clearBuffers(){
    int i=0;
    while(Data_Type[i] != '\0'){
        Data_Type[i] = '\0';
        i++;
    }
}

void storeDataType(char* data_type){
    int i=0;
    while(data_type[i] != '\0'){
        Data_Type[i] = data_type[i];
        i++;
    }
}

char* retrieveDataType(){
    return Data_Type;
}

/*
int isDuplicate(char* identifier,char* identifier_data_type){
    int i;
    for(i=0;i<noOfIdentifiers;i++){
        if(strcmp(identifier,identifiers[i].value) == 0){
            return 1;
        }
    }
    return 0;
}
*/
int isDuplicate(char* identifier){
    int i;
    for(i=0;i<noOfIdentifiers;i++){
        if(strcmp(identifier,identifiers[i].name) == 0){
            return 1;
        }
    }
    return 0;
}


/*
Function to extract the identifier name from the array.
e.g. This function extracts "a" from "a[50][69]"
*/

char* extractIdentifier(char* arrayIdentifier){
    char extractedIdentifier[50];
    static char copied[50];

    int i=0;

    while(arrayIdentifier[i] != '['){
        extractedIdentifier[i] = arrayIdentifier[i];
        i++;
    }
    extractedIdentifier[i] = '\0';

    i=0;
    while(extractedIdentifier[i] != '\0'){
        copied[i] = extractedIdentifier[i];
        i++;
    }
    copied[i] = '\0';
    return copied;
    
}

// to store all identifiers and check for duplicates
void storeIdentifier(char* identifier_name, char* identifier_data_type){
    identifiers[noOfIdentifiers].name = identifier_name;
    identifiers[noOfIdentifiers].data_type = identifier_data_type;
    noOfIdentifiers++;
}

/*
void AssignmentError(char* data_type){
    printf("\nERROR ON LINE %d : \nInvalid assignment! Expected identifier that alreay exists",yylineno);
    exit(0);
}
*/

void DuplicateIdentifierError(char* identifier){
    printf("\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n",yylineno,identifier);
    exit(0);
}




void UpdateValue(char* identifier_name,int number){

int i;
    for(i=0;i<noOfIdentifiers;i++){
        if(strcmp(identifier_name,identifiers[i].name) == 0)
	{      
                if (identifiers[i].data_type != "int")
		{
			printf("\nERROR ON LINE %d : \nInvalid assignment! Expected integer identifier, but found char identifier '%s' \n",yylineno,identifier_name);
			exit(0);
    
		}else{
		identifiers[i].value = number; 
		printf("%s = %d \n ",identifier_name,number);
		      }
	}
   				 }

						}


void UpdateValue2(char* identifier_name,char* identifier_name2){
int i;
int k;
int number;
    for(i=0;i<noOfIdentifiers;i++){
        for(k=0;k<noOfIdentifiers;k++){
		if(strcmp(identifier_name2,identifiers[k].name) == 0 && strcmp(identifier_name,identifiers[i].name) == 0 ){
				number = identifiers[k].value;
				identifiers[i].value = number;
				printf("%s = %d \n ",identifier_name,number);
		
			}
		}
	}
}

int getValue(char* identifier_name){
int i;
int number;
for(i=0;i<noOfIdentifiers;i++){
  if(strcmp(identifier_name,identifiers[i].name) == 0)
	{
	   number=identifiers[i].value;
	}		
			      }
return number;
}






int getPosition(int value){

int i;
int identifier1;
for(i=0;i<noOfIdentifiers;i++){
   if(value==identifiers[i].value){
      identifier1= i;
      return identifier1;
      }
   }
}






int WhileFun(char* condition, int value1, int value2){

if(condition == "<"){
  while(identifiers[value1].value < value2){
	return 1;       
	}
return 0;
    }

}




char* getValue_char(char* identifier_name){
int i;
char* value;
for(i=0;i<noOfIdentifiers;i++){
  if(strcmp(identifier_name,identifiers[i].name) == 0)
	{
	   value=identifiers[i].value;
	}		
			      }
return value;
}




void UpdateValue_char(char* identifier_name,char* value){

int i;
    for(i=0;i<noOfIdentifiers;i++){
        if(strcmp(identifier_name,identifiers[i].name) == 0)
	{      
                if (identifiers[i].data_type != "char")
		{
			printf("\nERROR ON LINE %d : \nInvalid assignment! Expected char identifier, but found int identifier '%s' \n",yylineno,identifier_name);
			exit(0);
    
		}else{
		identifiers[i].value = value; 
		printf("%s = %s \n ",identifier_name,value);
		      }
	}
   				 }

						}


void PrintMessage(char* identifier_name , char* string_value_ours){
int i;

    for(i=0;i<noOfIdentifiers;i++){
        if(strcmp(identifier_name,identifiers[i].name) == 0)
	{      
      		
		printf("%s \t  %s = %d \n ",string_value_ours,identifier_name,identifiers[i].value);
		      
	}
   				 }

						}



void Return(char* identifier_name){
int i;
int value;
    for(i=0;i<noOfIdentifiers;i++){
        if(strcmp(identifier_name,identifiers[i].name) == 0)
	{      
      		value = identifiers[i].value;
		printf("%s = %d \n ",identifier_name,value);
		      
	}
   				 }

						}




char* getDatatype(char* identifier_name){
int i;
char* type;
    for(i=0;i<noOfIdentifiers;i++){
        if(strcmp(identifier_name,identifiers[i].name) == 0)
	{      
      		type = identifiers[i].data_type;
		      
	}
    }
return type;
}



void store_struct_var(char* identifier_name, char* identifier_data_type){
    struct_variables[noOfStructVariables].sname = identifier_name;
    struct_variables[noOfStructVariables].sdata_type = identifier_data_type;
    noOfStructVariables++;
}






int isDuplicate_struct(char* identifier){
    int i;
    for(i=0;i<noOfStructVariables;i++){
        if(strcmp(identifier,struct_variables[i].sname) == 0){
            return 1;
        }
    }
    return 0;
}


void struct_assign_char_value(char* identifier , char* string_value){
int i;
    for(i=0;i<noOfStructVariables;i++){
        if(strcmp(identifier,struct_variables[i].sname) == 0){

           if(strcmp(struct_variables[i].sdata_type,"char")==0)
           {struct_variables[i].schar_value = string_value;
           printf("%s = %s \n ",identifier,struct_variables[i].schar_value);} 

	   else{printf("\nERROR ON LINE %d : \nInvalid assignment! Expected char identifier, but found identifier %s which is %s \n ",yylineno,identifier,struct_variables[i].sdata_type); exit(0);}

        }  
    }
}

void struct_assign_int_value(char* identifier , int int_value){
int i;
    for(i=0;i<noOfStructVariables;i++){
        if(strcmp(identifier,struct_variables[i].sname) == 0){

           if(strcmp(struct_variables[i].sdata_type,"int")==0)
           {struct_variables[i].sint_value = int_value;
           printf("%s = %d \n ",identifier,struct_variables[i].sint_value);} 

	   else{printf("\nERROR ON LINE %d : \nInvalid assignment! Expected int identifier, but found identifier %s which is %s \n ",yylineno,identifier,struct_variables[i].sdata_type); exit(0);}

        }  
    }
}




