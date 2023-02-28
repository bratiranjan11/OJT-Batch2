#include<stdio.h>
#include<math.h>
int main()
{

	float X1,X2,a,b,c;
	printf("Input the first number:");
	scanf("%f",&a);
	printf("Input the Second number:");
	scanf("%f",&b);
	printf("Input the Third number:");
	scanf("%f",&c);
	X1= (-b+sqrt((b*b)-4*a*c))/(2*a);
	X2= (-b-sqrt((b*b)-4*a*c))/(2*a);
	printf("Root1=%f\n",X1);
	printf("Root2=%f\n",X2);
}



