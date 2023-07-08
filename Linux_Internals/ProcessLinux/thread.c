#include <pthread.h>
#include<stdio.h>
#include<unistd.h>

#define MAX 100

static void * threadFunc(void *arg)
{
	char *str= (char *)arg;
	printf("ThreadFunc: arguments passed to thread are: %s,pid =(%d)\n",str,getpid());
	(void)sleep(15);
	printf("threadFunc: exiting now\n");
	return 0;
	pthread_exit(0);
}


int main()
{
	int ret;
	pthread_t tid;
	void *res;

	ret=pthread_create(&tid,NULL,threadFunc,"Hello I Am From PHYTEC");
	if(ret != 0)
	{
		perror("Thread Create Error\n");
	
	}
	else
	{
		printf("Thread created successfully\n");
	}
	sleep(5);
	pthread_exit(NULL);
//	exit(0);
	pthread_exit(NULL);
}



