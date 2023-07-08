#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main()
{
    int x,y;
    printf("Enter two numbers to get all the arithmatic operations:");
    scanf("%d%d",&x,&y);
    printf("Addition of two numbers are:%d\n",add(x,y));
    printf("subtraction of two numbers are:%d\n",sub(x,y));
    printf("Multiplication of two numbers are:%d\n",mul(x,y));
    printf("Division  of two numbers are:%d\n",div(x,y));
    

}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}