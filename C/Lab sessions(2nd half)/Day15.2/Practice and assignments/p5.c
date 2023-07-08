/*To check whether the given number is odd or even*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if(a==0)
    {
        printf("The entered number is neither positive nor negetive");
    }
    else if (a % 2 == 0)
    {
        printf("Entered no. is even\n");
    }
    else
    {
        printf("Entered no. is odd");
    }
}