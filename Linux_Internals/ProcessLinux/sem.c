#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>



#define KEY 1232

/*UN_NAMED SEMAPHORES*/
/*int main()
{
	int semid;
	semid=semget(KEY,1,IPC_CREAT|0666);
	if(semid<0)
	{
		printf("Failed to create the semaphore\n");
	}
	else
	{
		printf("Semaphore created succesfully\n");
	}
	printf("Sem pid is %d\n",getpid());
}*/


/*NAMED SEMAPHORES*/
int main()
{
	int sval;
	unsigned int value;
	sem_t *sem;
	sem = sem_open("/sem1",O_CREAT | O_RDWR,0666,1);
	if(sem<0)
	{
		perror("sem open failed\n");
		return -1;

	}
	else
	{
		printf("sem open successfully\n");
	}

	sem_getvalue(sem,&sval);
	printf("before sem_wait sem value=(%d)\n",sval);

	sem_wait(sem);  //wait state
	sem_getvalue(sem,&sval);
	printf("after sem_wait  semaphore value =(%d)\n",sval);

	printf("process 1: Executing critical section\n");
	sleep(10);
	sem_post(sem);
	printf("Critical section executed\n");
	sem_getvalue(sem,&sval);
	printf("after sem_post sem value is=(%d)\n",sval);
	sem_unlink("/sem1");
}
