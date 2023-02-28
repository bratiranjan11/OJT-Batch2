#include <stdio.h>

int main()
{
    char Alphabet[27];
    int i;
    char *ptr;
    ptr = Alphabet;     

    for(i=0;i<26;i++)
    {
        *ptr=i+'A';
        ptr++;
    }
    ptr = Alphabet;   

printf(" The Alphabets are : \n");
    for(i=0;i<26;i++)
    {
       printf(" %c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    return(0);
}