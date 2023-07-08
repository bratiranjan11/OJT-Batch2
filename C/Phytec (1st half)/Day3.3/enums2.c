/*A program to know about enums 2nd example*/


#include<stdio.h>

int main()
{
	int a,b,cho;
	enum{m800=17,zen=15,waganor=15,eon=19,xuv700=17};
	printf("\nCARS\n");
	printf("1.M800\n");
	printf("2.ZEN\n");
	printf("3.WAGANOR\n");
	printf("4.EON\n");
	printf("5.XUV700\n");
	printf("Enter a choice\n");
	scanf("%d",&cho);


	switch(cho)
	{
		case 1:
			printf("The mileage is %d\n",m800);
			break;
		case 2:
			printf("The mileage is %d\n",zen);
			break;
		case 3:
			printf("The mileage is %d\n",waganor);
			break;
		case 4:
			printf("Themileage is %f\n",eon);
			break;
		case 5:
			printf("The mileage is %d\n",xuv700);
			break;
		default:
			printf("Invalid choice\n");
			break;
	}
}


