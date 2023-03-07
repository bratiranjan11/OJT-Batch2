/*A program to know about enums*/


#include<stdio.h>

int main()
{
	int a,b,cho;
	enum{Add,Sub,Mul,Div,Square};
	printf("\nMenu\n");
	printf("0.Add\n");
	printf("1.Sub\n");
	printf("2.Mul\n");
	printf("3.Div\n");
	printf("4.Square\n");
	printf("Enter a choice\n");
	scanf("%d",&cho);
	printf("Enter Two Numbers: ");
	scanf("%d%d",&a,&b);

	switch(cho)
	{
		case Add:
			printf("The sum is %d",a+b);
			break;
		case Sub:
			printf("The Subtraction of the two Nubers is %d\n",a-b);
			break;
		case Mul:
			printf("The multiplication of two numbers is %d\n",a*b);
			break;
		case Div:
			printf("The division of the two numbers is %f\n",a/b);
			break;
		case Square:
			printf("The square of the two numbers is %d %d\n",a*a,b*b);
			break;
		default:
			printf("Invalid choice\n");
			break;
	}
}


