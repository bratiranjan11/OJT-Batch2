#include<stdio.h>

int main()
{
    int a,b,x,c=0;
    printf("eneter a number:");
    scanf("%d",&a);
    b=5;
    printf("%d",x=(sizeof(a%5==0)?b:c));

}