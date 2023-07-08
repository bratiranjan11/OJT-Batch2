#include <pthread.h>
#include<stdio.h>
#include<unistd.h>

static void * threadFunc(void *arg)
{
	printf("Thread: Thread Function started\n");

	pthread_detach(pthread_self());

	sleep(5);
	printf("threadFunc: exiting now\n");
	
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
	printf("main:Exiitng From main\n");
//	pthread_exit(NULL);
}



