#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>

#define KEY 1232

int main ()
{
	int ret,ret1;
	void *mem;
	ret=shmget(KEY,8000,IPC_CREAT|0666);
	printf("%d is the return address of shared memory\n",ret);
	mem=shmat(ret,(const *)0,0);

	printf("%s\n",(char *)mem);
	ret1=shmdt((char *)mem);
	printf("%d",ret1);
	printf("%s\n",(char *)mem);
}



