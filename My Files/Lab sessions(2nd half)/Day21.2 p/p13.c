/*A program to check sum of first five and last five elements of a 10 size array is equal or not*/

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

    for(int i=0;i<5;i++)
    {
        sum1=sum1+a[i];

    }

    for(int i=5;i<10;i++)
    {
        sum2=sum2+a[i];

    }

    if(sum1==sum2)
    {
        printf("Sum of first half five elements is equal to sum of 2nd half five elemnets");
    }
    else{
        printf("it is not equal");
    }


}