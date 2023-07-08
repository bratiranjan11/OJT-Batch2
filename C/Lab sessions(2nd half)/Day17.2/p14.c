#include<stdio.h>

int even();

int main()
{
     int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    
   
    even(a);


}
int even(int x)
{
    if (x%2==0)
    {
    printf("The entered number is even");
    }
    else
    {
        printf("The entered nuber is odd");
    }

}