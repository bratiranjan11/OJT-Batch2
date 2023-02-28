#include <stdio.h>

int main()
{
    int a, b, x;
    printf("Enter the 1st number:");
    scanf("%d", &a);
    printf("Enter the 2nd number:");
    scanf("%d", &b);
    x = (a > b ? a : b);
        printf("The greatest of two number:%d", x);
}