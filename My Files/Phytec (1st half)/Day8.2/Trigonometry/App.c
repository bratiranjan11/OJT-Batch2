#include<stdio.h>
#include"tri.h"
int main()
{
	int p,b,h,s,c,t;
	printf("Enter perpendicular value");
	scanf("%d",&p);
	printf("Enter Base value");
	scanf("%d",&b);
	printf("Enter Height value");
	scanf("%d",&h);
	s=sine(p,h);
	c=cose(b,h);
	t=tane(p,b);
	printf("The value of sin is:%d\n",s);
	printf("The value of cos is:%d\n",c);
	printf("The value of tan is:%d\n",t);
	printf("My name is Brarti\n");
	return 0;
}
	

	





