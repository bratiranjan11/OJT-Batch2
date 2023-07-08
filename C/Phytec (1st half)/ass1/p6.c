/*A program with pointer data types*/
#include<stdio.h>
int main()
{	
	int *ptr1; 
	int *ptr2; 
	int a = 5; 
	int b = 10; 
	ptr1 = &a;  
	ptr2 = &b; 
	printf("%d", *ptr1); 
	printf("\n%d\n", *ptr2);

} 
