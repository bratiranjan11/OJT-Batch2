#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	int fd;
	fd=open("hello.txt",O_RDONLY);
	if(fd<0)
	{
		printf("Unable to open the file : %d\n",fd);
		perror("ERROR");
	}
	else
	{
		printf("File open Successfully and open call returns %d\n",fd);
	}
	getchar();
}
