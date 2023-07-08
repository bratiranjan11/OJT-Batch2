#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<stdio.h>
#include<unistd.h>

#define KEY 1232

int main()
{
	struct msqid_ds buf;
	int qid;
	qid=msgget(KEY,IPC_CREAT);
	msgctl(qid,IPC_STAT,&buf);

	printf("no. of msg in queue %d\n",buf.msg_qnum);
	printf("no. of bytes in queue %d\n",buf.__msg_cbytes);
	printf("no. of msg in queue %d\n",buf.msg_qbytes);
}










