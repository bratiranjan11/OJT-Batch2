#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<signal.h>



void sig()
{
	printf("I am in handler\n");
}

int main()
{
	int pid;
	pid=fork();
	if (pid==0)
	{
		printf("Hello From Child and mu id is %d\n",getpid());
	}
	else
	{
		signal(SIGCHLD,sig);
		while(1)
		{
			printf("I am in Parent process\n");
			sleep(1);
		}
	}
}
