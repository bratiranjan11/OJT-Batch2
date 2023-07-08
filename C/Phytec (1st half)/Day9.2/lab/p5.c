#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Input the first number:");
	scanf("%d",&a);
	printf("Input the Second number:");
	scanf("%d",&b);
	printf("Input the Third number:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("Maximum value of three integers is:%d\n",a);
	}
	else if(b>a && b>c)
	{
		printf("Maximum value of three integers is:%d\n",b);

	}
	else
	{
	printf("Maximum value of three integers is:%d\n",c);
	}
}



