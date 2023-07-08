/*Write a program to calculate the sum of the digits of a 3-digit number which is
entered from keyboard. */


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
    res=d1+d2+d3;
    printf("The sum the 3 digits are : %d\n",res);
    }
    else
    {
        printf("This is not a three didgit number");
    }

}