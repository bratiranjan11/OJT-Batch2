/*A program to add all even and ood nos. in an array*/

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
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
        else if(a[i]%2!=0)
        {
            sum2=sum2+a[i];

        }

    }
    printf("Sum of even no.:%d\n",sum1);
    printf("Sum of odd no.:%d\n",sum2);



}