/*A program to find the factorial of a number using pointers*/

#include<stdio.h>
int main(){
  int i,f=1,num,*p1,*p2;
  p1=&num;
  p2=&f;

 
  printf("Enter a number: ");
  scanf("%d",p1);
 
  for(i=1;i<=num;i++)
      f=f*i;
 
  printf("Factorial of %d is: %d",*p1,*p2);
  return 0;
}