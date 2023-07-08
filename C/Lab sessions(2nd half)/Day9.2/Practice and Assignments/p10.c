#include<stdio.h>

int main()
{
	int D,Y,W;
	printf("Enter Days:");
	scanf("%d",&D);
	Y=(D/365);
	W=(D%365)/7;
	D=(D%365)%7;
	printf("YEARS:%d\n",Y);
	printf("WEEKS:%d\n",W);
	printf("DAYS:%d\n",D);



}




