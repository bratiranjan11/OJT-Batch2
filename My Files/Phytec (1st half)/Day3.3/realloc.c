/*A program shows ahow to allocate memory at run time using malloc routine*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,size,i;
	ptr=(int *)malloc(size *sizeof(int));
	printf("The address if memory is %x\n",ptr);

	printf("Initial Values \n");
	
	*(ptr+0)=1;
	*(ptr+1)=2;

	for(i=0;i<size;i++)
		printf("%d\n",ptr[i]);
	size=5;
	ptr=realloc(ptr,size*sizeof(int));
	*(ptr+2)=3;
	*(ptr+3)=4;
	*(ptr+4)=5;
	for(i=0;i<size;i++)
		printf("%d\n",ptr[i]);
	
}



