#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

int doneflag =0;
char buff[100];

void *thread1(void *p)
{
	printf("Thread 1 Scheduled First\n");
	sleep(1);
	pthread_mutex_lock(&mut);
	printf("threadA: critical section executes always first\n");

	/*Producer will produce data here*/
	sprintf(buff,"Hi I am From PHYTEC");
	doneflag=1;
	pthread_cond_signal(&cond);
	pthread_mutex_unlock(&mut);
}

void *thread2(void *p)
{
	printf("Thread 2 Scheduled first\n");
	pthread_mutex_lock(&mut);
	if(doneflag == 0)
	{
		pthread_cond_wait(&cond,&mut);
	}
	printf("thread2: signal recieved from thread 1,this is always executed after thread a critical section %d\n",doneflag);
	printf("The buffer recieved from producer thread is (%s)\n",buff);
	pthread_mutex_unlock(&mut);
}

int main()
{
	pthread_t pthread1,pthread2;
	pthread_create(&pthread1,NULL,thread1,NULL);
	pthread_create(&pthread2,NULL,thread2,NULL);
	pthread_join(pthread1,NULL);
	pthread_join(pthread2,NULL);
	printf("Main thread is exiting now\n");
}



