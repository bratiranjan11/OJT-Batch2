#include<stdio.h>
#include<string.h>

#define EVEN(n) \
	if(n%2==0) \
{\
	printf("Even number\n"); \
} \
else \
{ \
	printf("Odd number\n"); \
} 
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	EVEN(n);
}
