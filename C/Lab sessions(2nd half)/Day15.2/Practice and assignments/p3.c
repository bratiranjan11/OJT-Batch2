/*to find the roots of a quadratic equation*/

#include<stdio.h>
#include<math.h>
int main()
{

	float X1,X2,a,b,c,d,r,i;
	printf("Input the first number:");
	scanf("%f",&a);
	printf("Input the Second number:");
	scanf("%f",&b);
	printf("Input the Third number:");
	scanf("%f",&c);
    d=b*b-4*a*c;
    if(d>0)
    {
	X1= (-b+sqrt(d))/(2*a);
	X2= (-b-sqrt(d))/(2*a);
	printf("Root1=%.2f\n",X1);
	printf("Root2=%.2f\n",X2);
    }
    else if(d==0)
    {
        X1=X2=-b/(2*a);
	printf("Root1=%.2f\n",X1);

    }
    else
    {
        r=-b/(2*a);
        i=sqrt(-d)/(2*a);
        printf("Root1=%.2f+%.2fi\tRoot2=%.2f+%.2fi",r,i,r,i);
    }
}
