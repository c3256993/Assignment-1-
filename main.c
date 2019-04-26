#include<stdio.h>
#include <string.h>


//Declaring of functions 
void EncryptCesar (char *str);
void DecryptCesar (void);



int main()

{
	
	FILE *input;
 
	//char str[]= "BENDAY"; //hardcoded thing
	int i=0;
//	char num[100];
	//int k =3;
	char str[100];
	//int operation;
	
	

	//printf("Enter the encryption key = ");
	//scanf("%d", &k);
	 
 input = fopen("input.txt", "r");
 
 
 while(!feof(input)){
     
     fscanf(input, "%c", &str[i]); //read character BUT change c to an array 
    i++;  
     }
     // probally fo call to function here eg. doEncryption(&c)
     
   //  printf("%s", str);
    
     
 EncryptCesar(*str);
	/*switch stament for user freindly interface
	printf("Type 0 to Encrypt rotation cipher:\n");
	printf("Type 1 to Decrypt rotation cipher:\n");
	printf("Type 2 to Encrypt subsitition cipher:\n");
	printf("Type 3 to Encrypt subsitution cipher:\n");
	switch (operation){
	    case 0:
	    //call to encryption function  
        
	   // break;
	   printf("%c", num[i]);
	 //  case 1:
	   //call to decrpt function
     //  DecryptCesar();
       break;
       
       default: printf("Wrong operation/n ");
	}
	*/
return 0;
}





//fisrt function
void EncryptCesar (char *str){
   
    int i=0;
	int num[100];
	int k =3;    
	char string[] = "ABCD";
	
	//printf("%s", str);
	
	printf("Encryption key = %d\n", k);                  // NOTE: on ascii the capital A starts from 65 and goes until 901
	printf("Encrypted Message: ");
	
	for ( i=0; string[i] != '\0'; i++) {
	    
	    num[i] = string[i];
	    num[i] = (((num[i] - 65 ) + k)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	    
	    printf("%c", num[i]);           //type cast the ascii numbers into characters 
	      
    }
    
    return ;
}

//second function 
/*void DecryptCesar (void){
    
    char str2[]= "EHQQBGHC"; //hardcoded thing
	int j=0;
	int num2[j];
	int k=3;
	
	printf("\n\nDecryption key = %d\n", k);                  // NOTE: on ascii the capital A starts from 65 and goes until 90
	printf("Decrypted Message: ");
    
	
	// on ascii the capital A starts from 65 and goes until 90
	
	while (str2[j] != '\0' ) {
	    
	    num2[j] = (int)str2[j] ;
	    num2[j] = (((num2[j] - 65 ) - k + 26)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	   
	    printf("%c", num2[j]);           //type cast the ascii numbers into characters 
	    
	    j++;
    }       //type cast the ascii numbers into characters 

return;
}

*/




