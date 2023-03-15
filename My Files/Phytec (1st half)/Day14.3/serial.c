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
	
   off_t offset;
	fd=open("/home/brati/Workspace/Workspace/My Files/Phytec (1st half)/Day14.3/hello.txt",O_RDWR|O_CREAT|O_APPEND);
	/*	if(fd==-1)
		{
			printf("Unable to open file");
		
			else
			{
			
				printf("File open successfully");
			}*/
	write(fd,"Hii\n",4);
	offset = lseek(fd,0,SEEK_CUR);
	printf("Current file position is : %d",offset);
	write(fd,"I am \n",4);
	offset = lseek(fd,0,SEEK_CUR);
	printf("Current file position is : %d",offset);
	read(fd,buf,30);
	write(fd,"Brati\n",6);
        offset = lseek(fd,0,SEEK_CUR);
        printf("Current file position is : %d",offset);


	//printf("%s",buf);
	for(i=0;i<30;i++)
	{printf("%c",buf[i]);
	}
	close(fd);
		
}
