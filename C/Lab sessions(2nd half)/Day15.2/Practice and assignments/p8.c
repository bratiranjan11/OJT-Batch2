/*A program to find factorial of a number*/

#include <stdio.h>

int main()
{
    int fact = 1, i, n;
    printf("Enter a nuber to find its factorial:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of the entered number is : %d", fact);
}