#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int fd;
	fd=open("hello.txt",O_RDONLY);
	if(fd == -1);
	{
	//	exit(1);
		printf("Error no:%d",errno);
		printf("\nerror message:%s",strerror(errno));
	//	printf("\nError opening file\n");
	//	perror("\nError message:\n");
	}
}
