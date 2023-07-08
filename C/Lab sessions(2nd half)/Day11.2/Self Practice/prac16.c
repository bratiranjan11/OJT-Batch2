#include<stdio.h>
int a = 20;
int main()
{
    int i, j=7, k=9;
    i = printf("hello");
    printf(" %d", i);
    i = printf(" %d", i);
    i = printf(" %d %d %d", i,j,k);
    printf(" %d", i);
}
