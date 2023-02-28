/*A program to reverse an array */

#include <stdio.h>

int main()
{
    int a[10], s;
    printf("enter the size of the array:");
    scanf("%d", &s);
    printf("Enter the elements:");
    for (int i = 0; i < s; i++)
    {

        scanf("%d", &a[i]);
    }

     for (int i = 0; i < s; i++)
    {

        printf("%d ", a[i]);
    }

    for (int i = s-1; i >=0 ; i--)
    {
        printf("%d ",a[i]);
    }

}
