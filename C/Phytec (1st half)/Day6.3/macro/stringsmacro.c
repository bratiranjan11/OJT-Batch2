/*Strings Macros*/


#include<stdio.h>

#define STR(s) #s

int main()

{
	printf("My country name is:%s",STR(INDIA));
}
