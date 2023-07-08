#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>


int global;

int main()
{
	int fds[2];
	int buff[20];
	pipe(fds);
	int childstate;
	global = 4;
	pid_t fork_val;
	fork_val=fork();
	if(fork_val<0)
	{
		printf("Failed to createchild \n");

	}
	else if(fork_val == 0)
	{
		global=7;
		printf("I am from child,My pid is %d\n",getpid());
//		char *args[]={"./hello",NULL};
//		execv(args[0],args);
		printf("Global value in child %d\n",global);
	//	sleep(30);
		write(fds[1],"Hello World\n",13);
	}
	else
	{
//		wait(&childstate);
		printf("I am from Parent , My id is %d\n",getpid());
		printf("Global value in parent %d\n",global);
	//	sleep(40);
		read(fds[0],buff,20);
		printf("%s",buff);
		
	}


}

