#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter the number and power:");
    scanf("%d%d",&a,&b);
    printf("%d power %d is: %.2f",a,b,pow(a,b));
}