/*Write a program to enter the values of two variables 'a' and 'b' from keyboard and
 then check if both the conditions 'a < 50' and 'a < b' are true.*/

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the first value");
    scanf("%d",&a);
    printf("Enter the second value");
    scanf("%d",&b);
    if(a<50 && a<b)
    {
        printf("a<50 and a<b are True");
    }
    else{
        printf("a<50 and a<b are not True");
    }


}