#include <stdio.h>
int main()
{
    int a, j, k, d, e, f, l, z, y;
    printf("enter the value of a is:");
    scanf("%d", &a);
    k = 1 << 7;
    l = 1 << 3;
    f = k | l;
    printf("final binary form will be\n");
    for (int i = 7; i >= 0; i--)
    {
        j = (a >> i) & 1;
        d = (k >> i) & 1;
        e = (l >> i) & 1;
        z = (f >> i) & 1;
        y = j^z;
        printf(" %d ", y);
    }
    return 0; 
}
