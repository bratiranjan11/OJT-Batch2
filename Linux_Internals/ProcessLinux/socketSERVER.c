#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int listfd,connfd,retval;
	pid_t childpid;
	socklen_t clilen;
	struct sockaddr_in cliaddr,servaddr;
	listfd=socket(AF_INET,SOCK_STREAM,0);
	if(listfd<0)
	{
		perror("sock:");
		exit(1);
	}
	else
	{
		printf("Socket create successfully and it retyurs %d",listfd);
	}
/*	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
	servaddr.sin_port = htons(8000);
	
	retval = bind(listfd,(struct sockaddr *) &servaddr,sizeof(servaddr));
	if(retval<0)
	{
		perror("bind:");
		exit(2);
	}
	listen(listfd,5);
	while(1)
	{
		char buff[200];
		int n;
		clilen=sizeof(cliaddr);
		connfd=accept(listfd,(struct sockaddr *) &cliaddr,&clilen);
		printf("Client Connected\n");
		n=read(connfd,buff,200);
		buff[n]='\0';
		printf("data recorded from client= %s \n",buff);
		write(connfd,"GoodBye",8);
	}
	close(listfd);
	*/
		getchar();

}
