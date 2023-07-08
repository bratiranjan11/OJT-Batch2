#include <stdio.h>

int main() {
	int x, y;
	float res;
    printf("Input two numbers: \n");
	printf("x: \n");
    scanf("%d", &x);
    printf("y: \n");
    scanf("%d", &y);
   if(y != 0)
     {
   		res = x/y;
		printf("%f\n",res);
	 }
	else
	 {
	 		printf("Division not possible.\n");
	  }
  return 0;
}