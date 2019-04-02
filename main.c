#include<stdio.h>

int main()
{
    int i;
    int k=3;
    char strOUT[50];
    char letter;
    
    
    char strIN[] = "TRY TO ENCRYPT THIS";
    
    
    for (i=0; strIN[i] !=0; i++)
    {
      letter = strIN[i];  
    }

    if (letter >= 'a' && letter <= 'b')
    {
        
    }
    //srtOUT=(strIN+k)%26;
   
   printf("%s\n", strOUT);
    
    return 0;
    
}
