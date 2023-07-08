//


#include<stdio.h>


struct emp
{

	char b;
	double f;
	int a;

//}temp;
}__attribute__((packed))temp;

int main()

{
	printf("%ld\n",sizeof(temp));
//	printf("%d %f %c\n",temp.a,temp.f,temp.b);
	printf("%p\n",&temp.b);
	printf("%p\n",&temp.f);
	printf("%p\n",&temp.a);
}











