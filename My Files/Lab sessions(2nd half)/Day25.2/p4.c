/*A program to disintegrate the characters from a string*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int i;
    printf("Enter the string:");
    gets(s);
    printf("The characters of the strings are:");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c ",s[i]);

    }
}

