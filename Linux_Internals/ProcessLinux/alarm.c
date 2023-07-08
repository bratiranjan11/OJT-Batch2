#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void handler(void);

int main()
{
	printf("My process id is %d\n",getpid());

	signal(SIGALRM,SIG_IGN);
	
	while(1);

}

void handler()
{
        printf("Wake up time\n");
        alarm(2);
}

