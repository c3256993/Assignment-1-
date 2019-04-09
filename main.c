#include<stdio.h>
#include <string.h>

int main()

{
	
	char str[]= "BENDAY"; //hardcoded thing
	int i=0;
	int num[i];
	int k=2;
	
	// on ascii the capital A starts from 65 and goes until 90
	
	while (str[i] != '\0' ) {
	    
	    num[i]= (int)str[i] ;
	    num[i] = (((num[i] - 65 ) + k)%26) + 65 ; //formula to change ascii to 0 then add the key then apply modulus 
	   
	    printf("%c ", num[i]);           //type cast the ascii numbers into characters 
	    
	    i++;
    }
return 0;

}
