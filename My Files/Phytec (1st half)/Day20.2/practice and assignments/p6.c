/*A program to delete an element from an array */

#include <stdio.h>

int main()
{
    int a[10], s,ele;
    printf("enter the size of the array:");
    scanf("%d", &s);
    printf("Enter the elements:");
    for (int i = 0; i < s; i++)
    {

        scanf("%d", &a[i]);
    }

    printf("Before deletion:");
    for (int i = 0; i < s; i++)
    {
        printf("%d", a[i]);
    }

    printf("Enter the element you want to delete:");
    scanf("%d", &ele);

    for (int i = 0; i < s; i++)
    {
        if (ele == a[i])
        {
            for (int j = i; j < s; j++)
            {
                a[j] = a[j + 1];
            }
            s--;
        }
    }
    printf("After deetion:");
    for (int i = 0; i < s; i++)
    {
        printf("%d", a[i]);
    }
}
