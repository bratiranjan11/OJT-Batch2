#include<stdio.h>
#include<math.h>

int main()
{
	float x1,x2,y1,y2;
	float res;
	printf("Input x1:");
	scanf("%f",&x1);
	printf("\nInput y1:");
        scanf("%f",&y1);
	printf("\nInput x2:");
        scanf("%f",&x2);
	printf("\nInput y2:");
        scanf("%f",&y2);	
	res = ((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
	printf("Distance between the said points:%.4f \n",sqrt(res));
	return 0;
}
