// Retriving values of address location with casting


#include<stdio.h>


struct emp
{

	int a;
	char b;
//	unsigned char reserved[3];/* To alligned the memory space of the structure or we can use "unsigned char zeros[3]" it alligned the address without occupying memeory*/
	double f;
	

//}temp={10,'A',{0,0,0},2.4};
}__attribute__((packed))temp={10,'A',2.4};

int main()

{
	char *ptr = (double *)&temp;
	printf("\nvalue of d is %lf\n",*(double *)(ptr+5));

	printf("%d\n",sizeof(temp));
	printf("%d %c %f\n",temp.a,temp.b,temp.f);
	printf("%p\n",&temp.a);
	printf("%p\n",&temp.b);
	printf("%p\n",&temp.f);
}











