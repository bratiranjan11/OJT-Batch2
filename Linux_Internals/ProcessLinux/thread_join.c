#include <pthread.h>
#include<stdio.h>
#include<unistd.h>

#define MAX 100

static void * threadFunc(void *arg)
{
	int count = 0;
	printf("Thread: Thread Function started\n");
	for(count = 0;count < MAX;count++);
	sleep(5);
	printf("threadFunc: exiting now\n");
	if (count < 500)
	{
		return (void *) "count < 500";
	}
	else
	{
		return (void *) "count > 500";
	}
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
//	#if 0	
	ret=pthread_join(tid,&res);
	if(ret != 0)
		perror("pthread join error\n");
	
	printf("main thread: Thread returned %s \n",(char *)res);
//	#endif

	printf("main thread: Exiting now\n");
//	exit(0);
	pthread_exit(NULL);
}



