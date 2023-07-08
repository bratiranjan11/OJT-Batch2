#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>



#define KEY 1232


int main()
{
	int ret,sval;
	sem_t *sem;
	sem=sem_open("/sem1",O_RDWR);
	if(sem<0)
	{
		perror("Sem open failed\n");
		return -1;
	}

	else
	{
		printf("sem open successfully\n");

	}


	sem_getvalue(sem,&sval);
	printf("sem val =(%d)\n",sval);
	ret=sem_wait(sem);  //wait state
	printf("prcess 2 executing critical section\n");
	sleep(5);
	printf("ret is (%d)\n",ret);
	printf("process 2\n");
	sem_post(sem);
	printf("Process 2 executed critical section\n");
	printf("After sem_post s val is =(%d)",sval);
	sem_unlink("/sem1");
}
