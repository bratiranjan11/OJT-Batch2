/*A program to count no. of digits,alphabets and no. of special characters*/


#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[50]; 
    int i,alphabets=0,digits=0,specialchar=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
        if(s[i]>=48 && s[i]<=57)
         digits++;
        else if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alphabets++;
        else
         specialchar++;
 	}
 	
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialchar);
}