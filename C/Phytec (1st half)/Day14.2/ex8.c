#include <stdio.h>
int main()
{
    int a, j, res;
    printf("enter the value of a is:");
    scanf("%d", &a);
    printf("binary form of a given number\n");
    for (int i = 7; i >= 0; i--)
    {
        j = (a>>i) & 1;
        printf("binary value: %d\n", j);
    }
    a = ~a;
    printf("1's compliment of given value\n");
    for (int i = 7; i >= 0; i--)
    {
        j = (a>>i) & 1;
        printf("binary value: %d\n", j);
    }
    return 0;
}
