#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
        pid_t fork_val;
        fork_val = fork();
        int status = 0;
        int num = 5;
        if(fork_val < 0)
        {
                exit(-1);
        }
        else if(fork_val == 0)
        {
                printf("\n child: before exec\n");
                execl("./fork_signal2","arg1","arg2",NULL);
                printf("\n child: line is not printed\n");
        }
        else
        {
                if(signal (SIGUSR1, signal_handler) == SIG_ERR)
                {
                        fprintf(stderr, "Cannot handle SIGUSR!\n");
                        exit(-1);
                }
        }
}

static void signal handler (int signo)
{
	if (signo == SIGUSR2) 
		printf ("Child: Caught SIGUSR2 in child\n");

}


