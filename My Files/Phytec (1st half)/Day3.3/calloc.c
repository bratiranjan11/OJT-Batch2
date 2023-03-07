/*A program shows ahow to allocate memory at run time using calloc routine*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("The address if memory is %x\n",p);

	printf("Initial Values \n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	for(i=0;i<n;i++)
		p[i]=i+1;
//	getchar();
		printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
//	getchar();
}



