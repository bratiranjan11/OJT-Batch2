#include <stdio.h>
int main()
{
    int a, b, c, d, j;
    printf("enter the value of a is:");
    scanf("%d", &a);
    printf("enter the value of b is:");
    scanf("%d", &b);
    printf("the value of a is %d and value of b is %d before swapping\n", a, b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("the value of a is %d and value of b is %d after swapping uisng EX-OR operator\n", a, b);
    return 0;
}

