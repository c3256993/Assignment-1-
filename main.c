#include <stdio.h>
#include <string.h>


//Declaring of functions 
char EncryptCesar (char *str);
char DecryptCesar (char *str2);
char EncryptSub(char *enigma);
char DecryptSub(char *enigma2);



int main()

{
	
	FILE *input;
	FILE *input2;
	FILE *inputsub;
	FILE *inputsub2;
	
	
	int i=0;
	int j=0;
	int m=0;
	int n=0;

	char str[100];
	char str2[100];
	char enigma[100];
	char enigma2[100];

 input = fopen("input.txt", "r");
 input2 = fopen("input2.txt", "r");
 inputsub = fopen("inputsub.txt", "r");
 inputsub2 = fopen("inputsub2.txt", "r");
 
 while(!feof(input)){
     
     fscanf(input, "%c", &str[i]); //read character BUT change c to an array 
    i++;  
     }
     
 while(!feof(input2)){
     
     fscanf(input2, "%c", &str2[j]); //read character BUT change c to an array 
    j++;  
     }
     
 while(!feof(inputsub)){
     
     fscanf(inputsub, "%c", &enigma[m]); //read character BUT change c to an array 
    m++;  
     }
   
  while(!feof(inputsub2)){
     
     fscanf(inputsub2, "%c", &enigma2[n]); //read character BUT change c to an array 
    n++;  
     } 
   
   //Call to functions 
    printf("---------CESAR CIPHER------------- \n\n");
    EncryptCesar(str);
    DecryptCesar(str2);
    printf("\n\n\n--------SUBSTITUTION CIPHER--------- ");
    EncryptSub(enigma); 
    DecryptSub(enigma2);
 
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
char EncryptCesar (char *str){
   
    int i=0;
	int num[100];
	int k =3;    
	
	
	
	printf("Encryption key = %d\n", k);                  // NOTE: on ascii the capital A starts from 65 and goes until 901
	printf("Encrypted Message: ");
	
	for ( i=0; str[i] != 0; i++) {
	    
	    num[i] = str[i];
	    num[i] = (((num[i] - 65 ) + k)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	    
	    printf("%c", num[i]);           //type cast the ascii numbers into characters 
	      
    }
    
    return num[i];
}



//second function 
char DecryptCesar (char *str2){
    
	int j=0;
	int num2[100];
	int k=3;
	
	printf("\n\nDecryption key = %d\n", k);                  // NOTE: on ascii the capital A starts from 65 and goes until 90
	printf("Decrypted Message: ");
    
	
	// on ascii the capital A starts from 65 and goes until 90
	
	while (str2[j] != '\0' ) {
	    
	    num2[j] = (int)str2[j] ;
	    num2[j] = (((num2[j] - 65 ) - k + 26)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	   
	    printf("%c", num2[j]);           //type cast the ascii numbers into characters 
	    
	    j++;
    }       
return num2[j];
}
 

char EncryptSub(char *enigma){
    
    
    int y=0;
    int x=0;
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char key[]="QWERTYUIOPASDFGHJKLZXCVBNM";
    
    char output[100];
    
    printf("\n\nEncrypted Message: ");
   
    while(enigma[x] != 0){ 
        
        if(alphabet[y] == enigma[x]){
        
            output[x] = key[y];
            printf("%c", output[x] );
            x++;
            y=0;
        }
        
        else {
         y++;
        }
        
    }
    
    return output[x];
    
}

char DecryptSub(char *enigma2){
    
    int i=0;
    int x=0;
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char key[]="QWERTYUIOPASDFGHJKLZXCVBNM";
    char output[100];
    
    printf("\nDecrypted Message: ");
   
    while(enigma2[x] != 0){ 
        
        if(key[i] == enigma2[x]){
        
            output[x] = alphabet[i];
            printf("%c", output[x] );
            x++;
            i=0;
        }
        
        else {
         i++;
        }
        
    }
    
    return output[x];
    
}




