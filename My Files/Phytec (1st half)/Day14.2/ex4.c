#include <stdio.h>
int main()
{
    int a, b, c, d, j;
    printf("enter the value of a is:");
    scanf("%d", &a);
    printf("enter the value of b is:");
    scanf("%d", &b);
    printf("binary form of %d number\n", a);
    for (int i = 7; i >= 0; i--)
    {
        j = (a >> i) & 1;
        printf("binary value: %d\n", j);
    }
    printf("binary form of %d number\n", b);
    for (int i = 7; i >= 0; i--)
    {
        j = (b >> i) & 1;
        printf("binary value: %d\n", j);
    }
    printf("%d\n", c = a&b);
    printf("%d\n", d = a|b);
    printf("AND operation of A and B\n");
    for(int i = 7; i >= 0; i--)
    {
        j = (c>>i) & 1;
        printf("result is:%d\n", j);
    }
    printf("OR operation of A and B\n");
    for(int i = 7; i >= 0; i--)
    {
        j = (d>>i) & 1;
        printf("result is:%d\n", j);
    }
    return 0;
}
