/*A program to display the odd numbers in an array*/

#include <stdio.h>

int main()
{
    int a[10], s,sum1=0,sum2=0;
    printf("enter the size of the array:");
    scanf("%d", &s);
    printf("Enter the elements:");
    for (int i = 0; i < s; i++)
    {

        scanf("%d", &a[i]);
    }
    for(int i=0;i<s;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d",a[i]);
        }
    }
}