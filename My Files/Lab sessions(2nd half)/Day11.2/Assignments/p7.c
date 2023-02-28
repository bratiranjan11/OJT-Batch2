/*Write a program to reverse a 3-digit number which is entered from keyboard*/


#include<stdio.h>

int main()
{
    int a;
    printf("Enter a three digit number:");
    scanf("%d",&a);

    if(a>=100 && a<=999)
    {
    int d1,d2,d3,res;
    d1=a/100;
    d2=(a%100)/10;
    d3=(a%100)%10;
    printf("The reverse of the digits are:%d%d%d",d3,d2,d1);
    }
    else{
        printf("This is not a 5 digit number");
    }
}
