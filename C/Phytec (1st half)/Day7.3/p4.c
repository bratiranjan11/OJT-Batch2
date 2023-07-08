#include<stdio.h>

struct employee 
{
	int empno;

};

int main()

{

	struct employee emp={.empno=1,};
	printf("%d\n",emp.empno);
}

