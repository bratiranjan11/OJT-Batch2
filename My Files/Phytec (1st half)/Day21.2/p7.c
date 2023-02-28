#include<stdio.h>

int main()
{
  float *p,b;
    b=10.8;
    p=&b;
    *p--;
    printf("Value of p:%x\n",p);
    printf(" Increment Value of p:%x\n",p--);
    printf(" Decrementt Value of p:%x\n",p);


    

}