/*a program to insert an element in an array*/

#include <stdio.h>
int main()
{
    int a[10], pos, i, s, v;

    printf("enter the size of the array:");
    scanf("%d", &s);


   printf("enter the elements :");
   for(i=0;i<s;i++)
      scanf("%d",&a[i]);

   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);

   printf("enter the value into that position:");
   scanf("%d",&v);
   
   for(i=s-1;i>=pos-1;i--)
    {
      a[i+1]=a[i];
    }
   a[pos-1]= v;
   printf("final array after inserting the value is");
   for(i=0;i<=s;i++)
      printf("%d",a[i]);

   return 0;
}