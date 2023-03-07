#include<stdio.h>

#define CONCAT(s1,s2)  (s1 ## s2)

int main()
{
	printf("I am in %s",CONCAT(Phytec,Embedded));


}

