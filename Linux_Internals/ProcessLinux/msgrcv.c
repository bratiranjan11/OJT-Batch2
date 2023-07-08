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
	qid=msgget(KEY,IPC_CREAT);
	msg m1;
	m1.mtype=1;
	i=msgrcv(qid,&m1,sizeof(msg),1,0);
	for(i=0;i<100;i++)
	{
		printf("%c",m1.buffer[i]);
	}
//	i=msgrcv(qid,&m1,sizeof(msg),1,0);
	printf("%d\n",qid);
	printf("return value of msgrcv of As =%d\n",i);
}







