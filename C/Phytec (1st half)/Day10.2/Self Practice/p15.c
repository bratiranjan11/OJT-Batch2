#include<stdio.h>

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("The input number is positive");
    }
    else if(a==0)
    {
        printf("Neither Even Nor positive");
    }
    else 
    printf("The number input is negetive");
}