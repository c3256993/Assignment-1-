#include<stdio.h>
#include <string.h>

int main()

{
	
	FILE*input;
 
	//char str[]= "BENDAY"; //hardcoded thing
	int i=0;
	int num[100];
	int k;
	char str[100];
	
	printf("Enter the encryption key = ");
	scanf("%d", &k);
	 
 input = fopen("input.txt", "r");
 
 while(1){
     
     fscanf(input, "%c", &str[i]); //read character BUT change c to an array like message[i0
     if (feof(input)){
         break;
     }
     // probally fo call to function here eg. doEncryption(&c)
     
    // printf("%c", str[i]);
     i++;
     
 }
	
	

	
	printf("Encryption key = %d\n", k);                  // NOTE: on ascii the capital A starts from 65 and goes until 901
	printf("Encrypted Message: ");
	
	for (int i=0; str[i] != '\0'; i++) {
	    
	    num[i]= str[i];
	    num[i] = (((num[i] - 65 ) + k)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	    
	    printf("%c", num[i]);           //type cast the ascii numbers into characters 
	      
    }

    printf("\n\nDecryption key = %d\n", k);                  // NOTE: on ascii the capital A starts from 65 and goes until 90
	printf("Decrypted Message: ");
    char str2[]= "EHQGDB"; //hardcoded thing
	int j=0;
	int num2[j];
	
	
	// on ascii the capital A starts from 65 and goes until 90
	
	while (str2[j] != '\0' ) {
	    
	    num2[j]= (int)str2[j] ;
	    num2[j] = (((num2[j] - 65 ) - k + 26)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	   
	    printf("%c", num2[j]);           //type cast the ascii numbers into characters 
	    
	    j++;
    }       //type cast the ascii numbers into characters 


return 0;
}
