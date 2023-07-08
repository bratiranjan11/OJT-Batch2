/*A program to do arithmatic operations using pointers*/

#include<stdio.h>

int add(int*,int*);
int sub(int*,int*);
int mul(int*,int*);
int div(int*,int*);

int main()
{
    int a,b;
    printf("Enter a no.:");
    scanf("%d",&a);
    printf("Enter another no.:");
    scanf("%d",&b);
    add(&a,&b);
    sub(&a,&b);
    mul(&a,&b);
    div(&a,&b);
    
}

int add(int *a,int *b)
{
    int c;
    c=*a+*b;
    printf("The Adiition of two numbers is :%d\n",c);
}

int sub(int *a,int *b)
{
    int c;
    c=*a-*b;
    printf("The Subtraction of two numbers is :%d\n",c);
}

int mul(int *a,int *b)
{
    int c;
    c=*a * *b;
    printf("The multiplication of two numbers is :%d\n",c);
}

int div(int *a,int *b)
{
    int c;
    c=*a / *b;
    printf("The Division of two numbers is :%d\n",c);
}