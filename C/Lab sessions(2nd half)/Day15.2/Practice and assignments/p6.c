/*To check the entered character is an alpjabet or not*/

#include<stdio.h>

int main()
{
    char c;
    printf("Please enter a character:");
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("The entered character is an alphabet");
    }
    else
    {
        printf("The entered character is not an alphabet");
    }
}