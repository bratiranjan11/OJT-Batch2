#include<stdio.h>
int a = 20;
int main()
{
    int x = 50, y = 60;
    printf("%d %d", x++, y--);
    printf("#%d %d", ++x, --y);
}
