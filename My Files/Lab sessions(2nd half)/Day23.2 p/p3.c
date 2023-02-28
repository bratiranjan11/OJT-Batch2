/*a program to know the maximum, between two numbers*/

#include<stdio.h>

int main()
{
    int a,b ,*p1,*p2;
    printf("Input the first number:");
    scanf("%d",&a);
    printf("Input the second number:");
    scanf("%d",&b);
    
    p1=&a;
    p2=&b;

    if(*p1>*p2)
    {
        printf("%d is greater",*p1);
    }
    printf("%d is greater",*p2);
}