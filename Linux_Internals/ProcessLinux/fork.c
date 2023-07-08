#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int pid;
	printf("before fork pid is %d\n",getpid());
//	printf("Hello Fork\n");
//	printf("My pid is %d\n My ppid is %d\n",getpid(),getppid());
	pid=fork();
//	if (pid==0)
//	{
///		printf("Hello From Child\n");
//	}
///	else
//	{
//		printf("Hello from Parent\n");
//	}


	        if (pid>0)
        {
                printf("Hello From Parent\n");
        }
        else
        {
                printf("Hello from child\n");
        }

	printf("after fork pid is %d\n",pid);
//	printf("My pid is %d\n My ppid is %d\n",getpid(),getppid());
	getchar();
	
}
