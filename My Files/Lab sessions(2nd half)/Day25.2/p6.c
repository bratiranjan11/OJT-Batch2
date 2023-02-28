#include <stdio.h>
#include <string.h>

int main()
{
    char s[40];
    printf("Enter a string to know the no. of words present:");
    gets(s);
    int c = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            c++;
        }
    }
    
    printf("The no. of words in the string:%d", c +1);
}