/*A program to print sun avereage greatest and lowest element in an array*/

#include <stdio.h>

int main()
{
    int a[10], s, sum1 = 0, avg, g, l;
    printf("enter the size of the array:");
    scanf("%d", &s);
    printf("Enter the elements:");
    for (int i = 0; i < s; i++)
    {

        scanf("%d", &a[i]);
    }

    for (int i = 0; i < s; i++)
    {
        sum1 = sum1 + a[i];
    }
    printf("Sum is:%d\n", sum1);
    avg = sum1 / s;
    printf("Average is :%d\n", avg);

    g = a[0];
    for (int i = 0; i < s; i++)
    {
        if (a[i] > g)
        {
            g = a[i];
        }
    }
    printf("The greatest element is :%d\n", g);

    l = a[0];
    for (int i = 0; i < s; i++)
    {
        if (a[i] < l)
        {
            l = a[i];
        }
    }
    printf("The lowest element is :%d\n", l);
}