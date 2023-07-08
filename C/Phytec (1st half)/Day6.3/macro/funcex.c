#include<stdio.h>

#define EVEN(n) check(a)
int main()
{
	int n;
	printf("Enter a no.: ");
	scanf("%d",&n);
	EVEN(n);
}
void check(a)
{
	if(n%2==0)
		printf("Even");
	else
		printf("Odd");
}


