#include <stdlib.h>
#include <string.h>

char Data_Type[50];

int noOfIdentifiers = 0;

struct IdentifierStructure
{   
    char*   name;
    char*   data_type;
    int     value;
}identifiers[20];

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




