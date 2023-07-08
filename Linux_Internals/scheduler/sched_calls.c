#include<stdio.h>
#include<sched.h>

int main()
{
	int scheduler;
	scheduler = sched_getscheduler(getpid());
	printf("Scheduler=%d\n",scheduler);
	printf("The scheduler priority of teh cfurrent process %d\n",getpid(),scheduler);
	printf("The max priority value for SCHED_OTHER is %d\n",sched_get_priority_max(SCHED_OTHER));
	printf("The min priority value for SCHED_OTHER is %d\n",sched_get_priority_min(SCHED_OTHER));
	printf("The max priority value for SCHED_FIFO is %d\n",sched_get_priority_max(SCHED_FIFO));
	printf("The min priority value for SCHED_FIFO is %d\n",sched_get_priority_min(SCHED_OTHER));
	printf("The max priority value for SCHED_RR is %d\n",sched_get_priority_max(SCHED_RR));
	printf("The min priority value for SCHED_RR is %d\n",sched_get_priority_min(SCHED_RR));
	


}
