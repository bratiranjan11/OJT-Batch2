/*To learn #ifdef*/



#include <stdio.h>
#define NEGETIVE
int main()

{
#ifdef POSITIVE
	int a=10,b=20;
#endif
#ifdef NEGETIVE
	int a=-10,b=-20;
#endif
	printf("Addition of a and b:%d",a+b);
	printf("The value of a and b:%d %d",a,b);
}
