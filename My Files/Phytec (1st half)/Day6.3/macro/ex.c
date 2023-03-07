#include <stdio.h>
#define MAX 10
#define MIN 20

int main()
{
	#if MAX
		#ifdef MIN 
			#if (MAX>0&&MIN>0)
				printf("Positive numbers");
			#else
				printf("Negetive Numbers");
			#endif
		#else
			printf("MIN is not defined");
		#endif
	#else
		printf("MAX is not defined");
	#endif

}


