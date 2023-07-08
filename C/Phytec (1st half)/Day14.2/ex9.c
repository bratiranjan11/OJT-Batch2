#include <stdio.h>
int main()
{
    int a, j, count = 0;
    printf("enter the value of a is:");
    scanf("%d", &a);
    printf("binary form of a given number\n");
    for (int i = 7; i >= 0; i--)
    {
        j = (a>>i) & 1;
        printf("binary value: %d\n", j);
        if(j==1)
        {
            count++;
        }
    }
    printf("number of 1's in given number is: %d\n", count);
    return 0;
}
