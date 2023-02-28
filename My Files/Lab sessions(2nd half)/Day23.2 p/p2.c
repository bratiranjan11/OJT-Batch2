/*A program to add two numbers using call by reference*/

#include<stdio.h>

int sum(int *a,int *b)
{
    int add;
    add= *a + *b;
    printf("The sum of entered number using call by reference:%d",add);
}

int main()
{
    int a,b,*p1,*p2;
    printf("Input the first number:");
    scanf("%d",&a);
    printf("Input the second number:");
    scanf("%d",&b);

    sum(&a,&b);

}
