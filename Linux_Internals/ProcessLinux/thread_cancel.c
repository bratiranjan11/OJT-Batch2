#include <pthread.h>
#include<stdio.h>
#include<unistd.h>

static void * threadFunc(void *arg)
{
	printf("Thread: Thread Function started\n");

	while(1)
	{
		sleep(1);
		printf("thrreadFunc:Exiting from loop\n");
	}
	
//	sleep(5);
	printf("threadFunc: exiting now\n");
	
}


int main()
{
	int ret,count;
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

	for(count =0;count<10;count++ )
	{
		sleep(2);
		printf("\n Main thread: count value = (%d)\n",count);
	}
	pthread_cancel(tid);

	printf("main:Exiitng From main\n");
	pthread_exit(NULL);
}



