#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<unistd.h>
#include<stdio.h>

#define KEY 1234

int main()
{
	int msgid;
	msgid=msgget(KEY,IPC_CREAT);
	if(msgid>0)
	{
		printf("MesgQ create successfully %d:\n",msgid);
	}
}
