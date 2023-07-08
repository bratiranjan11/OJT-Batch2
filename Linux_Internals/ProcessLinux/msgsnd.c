#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>



#define KEY 1232


typedef struct msgbuf
{
	long mtype;       
        char buffer[100];    
}msg;

int main()
{
	int qid,i;
	msg m1;
	qid=msgget(KEY,IPC_CREAT);
	m1.mtype=1;
	for(i=0;i<100;i++)
	{
		m1.buffer[i]='a';
	}
	i=msgsnd(qid,&m1,sizeof(msg),IPC_NOWAIT);
	printf("%d\n",qid);
	printf("return value of msgsnd of As =%d\n",i);
}







