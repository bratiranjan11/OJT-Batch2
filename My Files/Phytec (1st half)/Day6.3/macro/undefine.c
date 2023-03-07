#include <stdio.h>

#define MAX 10

int main()
{
	printf("The value of MAX is %d",MAX);
	#undef MAX
#define MAX 100
	printf("The value of MAX is %d",MAX);

}
