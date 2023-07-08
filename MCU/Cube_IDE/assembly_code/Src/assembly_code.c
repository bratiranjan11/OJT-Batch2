#include <stdio.h>
int main()
{
   int arr[25], i,n;
   printf(" enter the size of the array:");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element  %d : ",i);
	  scanf("%d",arr+i);
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i,*(arr+i));
	  }
	   return 0;
}