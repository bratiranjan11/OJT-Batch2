#include <stdio.h>
int display(int);

int main()
{
   int c;
    scanf("%d",&c);
    display(c);
}
int display(static int c)
{

    printf("%d", c);
}
