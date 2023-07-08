#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>

#define KEY 1232

int main ()
{
	int ret;
	void *mem;
	ret=shmget(KEY,8000,IPC_CREAT|0666);
	printf("%d is the return address of shared memory\n",ret);
	mem=shmat(ret,(const void *)0,0);
//	printf("%s", (char *)mem);
	strcpy((char *)mem,"Hi i am Brati");
	
}



