#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Entered no. is even\n");
    }
    else
    {
        printf("Entered no. is odd");
    }
}