#include <pthread.h>
#include<stdio.h>
#include<unistd.h>

static void *threadFunc(void);
//static void *threadFunc2(void);

static int global = 0;
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;


int main()
{
        int ret1,ret2;
        pthread_t tid1,tid2;
        ret1=pthread_create(&tid1,NULL,threadFunc,NULL);
        ret2=pthread_create(&tid2,NULL,threadFunc,NULL);
        if(ret1 != 0 && ret2 != 0)
        {
                perror("Thread Create Error\n");

        }
        else
        {
                printf("Threads are created successfully\n");
        }
	
	ret1= pthread_join(tid1,NULL);
	ret2=pthread_join(tid2,NULL);

        if(ret1 != 0 && ret2 != 0)
        {
                perror("Thread Create Error\n");

        }
        else
        {
                printf("Threads are joined successfully\n");
        }

	printf("Global value = %d\n",global);


}

static void *threadFunc()
{
	int loop1=100000;
	int loc1;
	pthread_mutex_lock(&mut);
	for(int i=0;i<loop1;i++)
	{
		loc1=global;
		loc1++;
		global=loc1;
	}
	pthread_mutex_unlock(&mut);
	printf("Thread 1 Loc=%d\n",loc1);
	
}

