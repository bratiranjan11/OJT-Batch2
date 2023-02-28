/*a program to swap two nos. using pointers*/


#include<stdio.h>

int swap(int*,int*);

int main()
{
    int a,b;
    printf("Enter a no.:");
    scanf("%d",&a);
    printf("Enter another no.:");
    scanf("%d",&b);
    printf("Before swapping a=%d,b=%d",a,b);

   swap(&a,&b);
}
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("After swapping a=%d,b=%d",*a,*b);

}