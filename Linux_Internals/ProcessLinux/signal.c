#include<signal.h>
#include<stdio.h>
#include<unistd.h>

void sig()
{
	printf("i got signal \n");
//	(void) signal(SIGINT,SIG_DFL);

}
int main()
{
	printf("My process id is %d\n",getpid());
	(void) signal(SIGINT,sig);
	
	while(1)
	{
		//sig();
        	signal(SIGTERM,SIG_IGN);
		
		printf("hi i am in PHYTEC\n");
		sleep(1);
	}
	return 0;
}







