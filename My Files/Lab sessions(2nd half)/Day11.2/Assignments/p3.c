/*.Now solve the above question to check if atleast one of the conditions
 'a < 50' and 'a < b' is true.*/
 
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the first value");
    scanf("%d",&a);
    printf("Enter the second value");
    scanf("%d",&b);
    if(a<50 || a<b)
    {
        printf("a<50 or a<b are True");
    }
    else{
        printf("a<50 or a<b are not True");
    }


}