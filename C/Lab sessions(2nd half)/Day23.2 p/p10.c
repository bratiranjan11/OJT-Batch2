/*a program to find the sum of the array using pointers*/

#include<stdio.h>

int main()
{
    int s,sum=0,a[10],*p;
    p=&a;    
    printf("Enter the size of the array max is 10:");
    scanf("%d",&s);
    
    printf("Enter the elements in the array:");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }


    for(int i=0;i<s;i++)
    {
        sum+=p[i];
    }

    printf("The sum of the array is :%d",sum);
}