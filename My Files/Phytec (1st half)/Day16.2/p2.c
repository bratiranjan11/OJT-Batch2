#include <stdio.h>
int count();

int main()
{
   
    count();
    count();
    count();
    count();
    
}
int count()
{
    static int c =0;
    c++;
    printf("%d\n", c);
}