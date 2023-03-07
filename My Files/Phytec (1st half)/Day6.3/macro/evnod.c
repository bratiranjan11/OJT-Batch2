#include<stdio.h>

#define ODD
int main()
{
#if defined EVEN
	int a=10,b=22;

#elif defined ODD
	int a=1,b=2;
#else
	int a=0,b=0;
#endif


}
