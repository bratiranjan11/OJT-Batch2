#include <stdio.h>
int dec(int);

int main()
{
    int a;
    printf("enter the value of a is:");
    scanf("%d", &a);
    printf("binary form of a given number\n");
    dec(a);
}

int dec(int a)
{
int j;

    for (int i = 7; i >= 0; i--)
{
    j = (a >> i) & 1;
    printf(" %d ", j);
}
}