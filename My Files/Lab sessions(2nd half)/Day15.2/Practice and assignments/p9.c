/*To find the multiplication table of a given number*/

#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number of which you want the multiplication table:");
    scanf("%d",&a);
    printf("     MULTIPLICATION TABLE OF %d\n",a);
    for(int i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",a,i,a*i);
    }
}
