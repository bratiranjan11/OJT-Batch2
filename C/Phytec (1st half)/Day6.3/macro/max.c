#include<stdio.h>
#define MAX(x,y) x>y?x:y

int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("Enter another number:");
	scanf("%d",&y);
	printf("The greatest number between tho is:%d\n",MAX(x,y));
}
