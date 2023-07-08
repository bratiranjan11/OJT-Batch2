#include<stdio.h>

int main()
{
    int a[10],*p,s;
    p=&a;
    printf("Enter the size of the array:");
    scanf("%d",&s);

    printf("Enter the elements i n tha array:\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&p[i]);
    }

    for(int i=0;i<s;i++)
    {
        printf("%d\t",p[i]);
    }
}