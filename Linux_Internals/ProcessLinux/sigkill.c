#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handler1(void);
void handler2(void);

int main()
{
	printf("My pis is %d\n",getpid());
	signal(SIGHUP,handler1);
	signal(SIGKILL,handler2);
	getchar();
	while(1)
	{
		printf("Hii I am from PHYTEC\n");
	}
}
void handler1()
{
	printf("I am from Handler 1\n");
}


void handler2 ()
{
	printf("I am from handler 2\n");
}
