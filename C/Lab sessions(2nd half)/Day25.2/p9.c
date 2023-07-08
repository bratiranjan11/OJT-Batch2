/*A program to copy one string to another*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[50],i;
    printf("Enter the first string:");
    gets(s1);

    for(i=0;s1[i] != '\0';i++)
    {
        s2[i]=s1[i];

    }
    
    printf("After copying String 1 to string 2: %s",s2);


}