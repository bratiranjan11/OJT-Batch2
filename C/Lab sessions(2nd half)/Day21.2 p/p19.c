/*A program to print all prime numbers from the array*/

#include<stdio.h>
void main()
{
     int a[10],n,i,j,c=0,p[10],t=0;
     printf("Enter the size of the array : ");
     scanf("%d",&n);
     printf("\nEnter elements in an Array:\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          c=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    c=1;
                    break;
               }
          }
          if(c==0)
          {
               p[t]=a[i];
               t++;
          }
     }
     printf("\nPrime Numbers in The arraay:\n\n");
     for(i=0;i<t;i++)
     {
          printf(" %d ",p[i]);
     }
}