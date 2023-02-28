/*A program with Enumerated data types*/
#include<stdio.h>   
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
int main() 
{ 
	enum week day; 
	day = Fri; 
	printf("%d\n\n",day); 
	return 0; 
} 
