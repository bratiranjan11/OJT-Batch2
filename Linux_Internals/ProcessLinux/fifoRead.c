#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>


int main()
{
	char ch[20];
	char ch1[20];
	mkfifo("f1",0666);
	mkfifo("f2",0666);
	int fd=open("f1",O_RDONLY);
	int fd1=open("f2",O_WRONLY);
	while(1)
	{
		printf("Enter the message to send....\n");
		scanf("%s",ch);
		write(fd,ch,strlen(ch)+1);
		sleep(1);
		read(fd1,ch1,sizeof(ch1));
		printf("Received Message:%s\n",ch1);
	}
}





