#include <stdio.h>
int main()
{
    int a, j, k, d, e;
    printf("enter the value of a is:");
    scanf("%d", &a);
    k = 1 << 2;
    printf("final binary form will be\n");
    for (int i = 7; i >= 0; i--)
    {
        j = (a >> i) & 1;
        d = (k >> i) & 1;
        e = j | d;
        printf(" %d ", e);
    }
    return 0;
}

