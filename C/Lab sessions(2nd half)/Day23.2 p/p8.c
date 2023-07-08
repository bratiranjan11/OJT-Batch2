#include <stdio.h>

int main()
{
    int v,c;
    char str[50];
    int *p;
    printf("Enter a string:");
    gets(str);
    p = &str;

    v=c=0;

    while (*p!='\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')

            v++;

        else

            c++;

        p++;
    }
    printf("The Vowels in the string are = %d", v);
    printf("The Consonants in the string are = %d", c);
}
