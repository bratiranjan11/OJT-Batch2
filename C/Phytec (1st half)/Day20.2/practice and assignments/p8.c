/*A program to print daigonal elements*/

#include <stdio.h>

int main()
{
    int i, j, r, c, a[10][10], b[10][10], sum[10][10];

    printf("Enter the rows of the array:");
    scanf("%d", &r);
    printf("Enter the column of the array:");
    scanf("%d", &c);

    printf("Enter the 1st matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The 1st matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    printf("The daigonal elements are:");


    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(i==j)
            {
                
                printf(" %d",a[i][j]);
            }
        }
    }
}