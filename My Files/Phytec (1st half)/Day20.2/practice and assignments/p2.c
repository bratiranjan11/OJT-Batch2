/*Bubble sort */

#include<stdio.h>

int main()
{
    int i,j,s,a[10],temp;
    printf("Enter the size of the array");
    scanf("%d",&s);
    printf("Enter the elements in the array\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);

    }

    printf("before sorting:");
    for(i=0;i<s;i++ )
    {
        printf("%d\t",a[i]);
    }
    
    for ( i = 0; i < s; i++)
    {
        for(j=0;j<s-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
        
    }
    printf("\nAfter sorting:");

        for(i=0;i<s;i++)
        {
            printf("%d \t",a[i]);
        }

    

}