#include <stdio.h>
int main()
{
    int a[10],s, i,sum=0;

    printf("enter the size of the array:");
    scanf("%d", &s);


   printf("enter the elements :");
   for(i=0;i<s;i++)
   {
      scanf("%d",&a[i]);
   }

   
   for(i=0;i<s;i++)
   {
      sum=sum+a[i];

   }
    printf("Sum of the elements :%d",sum);
}