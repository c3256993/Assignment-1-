#include<stdio.h>
#include <string.h>

int main()

{
	
	FILE*input;
 
	//char str[]= "BENDAY"; //hardcoded thing
	int i=0;
	int num[100];
	int k=2;
	char str[100];
	 
 input = fopen("input.txt", "r");
 
 while(1){
     
     fscanf(input, "%c", &str[i]); //read character BUT change c to an array like message[i0
     if (feof(input)){
         break;
     }
     // probally fo call to function here eg. doEncryption(&c)
     
     printf("%c", str[i]);
     i++;
     
 }
	

	// on ascii the capital A starts from 65 and goes until 90
	
	for (int i=0; str[i] != '\0'; i++) {
	    
	    num[i]= str[i];
	    num[i] = (((num[i] - 65 ) + k)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	    
	    printf("\n%c ", num[i]);           //type cast the ascii numbers into characters 
	      
    }



return 0;
}
