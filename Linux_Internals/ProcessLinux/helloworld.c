#include<stdio.h>
#include <unistd.h>

int main()
{

	char *file="ls";
	char *args= "-a";
	char *argz="-s";
	printf("Hi i am Brati, My id is %d \n",getpid());
	execlp(file,args,argz);
	printf("Hi i am ranjan\n");
}



