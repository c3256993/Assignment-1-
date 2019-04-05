#include<stdio.h>

int main()
{
	char str[] = "ben"; //hardcoded thing
	int i=0;
	int num[i];
	int k=0;
	
	while (i < 3 ){
	    
	    num[i]= (int)str[i];
	    num[i] = (num[i] + k)%26 ;
	    
	    num[i] = num[i] + 65;
	    printf("%c ", num[i]);
	    
	    i++;
    }
	
	

return 0;

}