#include<stdio.h>

int main()
{
	int r=6;
	float perimeter,area;
	float pi=3.14;
	perimeter = 2*pi*r;
	area=pi*r*r;
	printf("Perimeter of the circle=%f inches \n",perimeter);
	printf("Area of the circle=%f square inches\n",area);
	return(0);
}
