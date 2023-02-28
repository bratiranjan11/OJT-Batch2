/*Write a program to calculate the sum of the first and the second last digit of
a 5 digit number entered from the keyboard.*/


#include<stdio.h>

int main()
{
    int a,res;
    printf("Enter a 5 digit number:");
    scanf("%d",&a);
    if(a>=10000 && a<=99999)
    {

    int d1,d2,d3,d4,d5;
    d1=a/10000;
    d2=(a%10000)/1000;
    d3=((a%10000)%1000)/100;
    d4=(((a%10000)%1000)%100)/10;
    d5=(((a%10000)%1000)%100)%10;
    res=d1+d4;
    printf("The sum of first and second last digit is:%d\n",res);
    }
    else{
        printf("This is not a 5 digit number");
    }


}