#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the 1st number:");
    scanf("%d", &a);
    printf("Enter the 2nd number:");
    scanf("%d", &b);
    
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
    printf("%d\n",a!=b);
}