/*A program to reverse a string*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[20], reverse;
    int i;
    int len;
    printf("Enter the string:");
    gets(s);
    len = strlen(s);
  
    printf("The reverse of a string:");
    for (i = 0; s[i] != '\0'; i++)
    {
        printf("%c ", s[len-i-1]);
    }
}
