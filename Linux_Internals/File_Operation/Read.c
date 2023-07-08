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
	

	fd=open("hello.txt",O_RDWR);
	lseek(fd,0,SEEK_SET);
	read(fd,buf,5);
        for(i=0;i<30;i++)
        {
		printf("%c",buf[i]);
        }
        close(fd);


/*	read(fd,buf,10);


	//printf("%s",buf);
	for(i=0;i<11;i++)
	{printf("%c",buf[i]);
	}*/
	close(fd);
		
}
