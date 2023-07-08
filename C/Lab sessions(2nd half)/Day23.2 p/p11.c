/*a program to reverse the array using pointers*/

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

    printf("Before reversing the array :");
    for(int i=0;i<s;i++)
    {
        printf("%d",p[i]);
    }

    printf("\nAfter reversing the array:");

    for(int i=s-1;i>=0;i--)
    {
        printf("%d",p[i]);
    }
    
}