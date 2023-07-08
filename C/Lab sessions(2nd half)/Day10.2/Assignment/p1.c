#include<stdio.h>
int main()
{
    int j, n[5],total=0;
    printf("Input the first number: \n"); 
    scanf("%d", &n[0]);
    printf("Input the second number: \n"); 
    scanf("%d", &n[1]);
    printf("Input the third number: \n"); 
    scanf("%d", &n[2]);
	printf("Input the fourth number: \n"); 
    scanf("%d", &n[3]);
    printf("Input the fifth number: \n"); 
    scanf("%d", &n[4]);
	for(j = 0; j < 5; j++) {
		if((n[j]%2) != 0) 
		{
		   total += n[j];
		}	
    }
   	printf("\nSum of all odd values: %d", total);
	printf("\n");
	return 0;
}