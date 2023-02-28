#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    int result = a > b && b != 10 && b < 11 && a > 5;
    printf("%d",result);
    return 0;

}