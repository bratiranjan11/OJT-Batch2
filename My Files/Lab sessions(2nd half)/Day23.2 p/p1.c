/*A program to add two numbers using pointers*/

#include<stdio.h>

int main()
{
    int a,b,*p1,*p2,sum=0;
    p1=&a;
    p2=&b;

    printf("Input the first number:");
    scanf("%d",p1);
    printf("Input the second number:");
    scanf("%d",p2);
    sum=*p1+*p2;
    printf("The sum of the Entered numbers:%d",sum);



}