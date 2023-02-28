#include <stdio.h>

int power(int, int);

int main()
{
    int x, y;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:");
    scanf("%d", &y);

    power(x, y);
}

int power(int x, int y)
{
     
      int z=0;
    
    for(int i=1;i<=y;i++)
    {
      
       z=x*i; 
      
    
    }
     printf("Power of input numbers are :%d",z);
    
}