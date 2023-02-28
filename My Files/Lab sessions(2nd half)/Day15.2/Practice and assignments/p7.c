/*To find the sum of n natural numbers*/

#include <stdio.h>

int main()
{
    int sum = 0, i, n;
    printf("Enter the value upto which you want sum:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum is : %d", sum);
}