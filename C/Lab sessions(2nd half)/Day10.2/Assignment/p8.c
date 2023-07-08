#include<stdio.h>

int main() 
{

  float fir, sec, temp;
  printf("Enter first number: ");
  scanf("%f", &fir);
  printf("Enter second number: ");
  scanf("%f", &sec);
  temp = fir;
  fir = sec;
  sec = temp;
  printf("\nAfter swapping, first number = %f\n", fir);
  printf("After swapping, second number = %f", sec);
  return 0;

}