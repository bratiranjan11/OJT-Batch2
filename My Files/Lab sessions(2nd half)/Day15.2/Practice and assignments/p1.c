/*Entered character is a vowel or consonant?*/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a Character:");
    scanf("%c", &c);
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ))
    {
        printf("Entered character is character");
    }
    else
    {
        printf("Entered charcater is a consonant");
    }
}