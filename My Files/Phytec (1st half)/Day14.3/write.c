#include<stdio.h>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main()
{
	int fd,i;
	char buf[30];
	

	fd=open("/home/brati/Workspace/Workspace/My Files/Phytec (1st half)/Day14.3/hello.txt",O_RDWR|O_CREAT);

	write(fd,"Hii BRATI i am in PHYTEC\n",25);

	lseek(fd,0,SEEK_SET);

	close(fd);
		
}
