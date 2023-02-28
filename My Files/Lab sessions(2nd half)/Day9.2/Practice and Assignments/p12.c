#include<stdio.h>

int main()
{
	double w1,c1,w2,c2,res;
	printf("Weight-Item1:");
	scanf("%lf",&w1);
	printf("weight-item2:");
	scanf("%lf",&w2);
	printf("No. of item:");
	scanf("%lf",&c1);
	printf("No. of item:");
	scanf("%lf",&c2);
	res=((w1*c1)+(w2*c2))/(c1+c2);
	printf("Average value:%lf",res);
	
	

}



