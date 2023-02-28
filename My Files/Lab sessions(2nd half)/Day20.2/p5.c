#include<stdio.h>

int print(int);

int main()
{
    int x;
    x=print(10);
    printf("%d",x);
}

int print(int a)
{
    if(a<1)
    {
    return;
    }
    else{
        return (1+print(a/2));
    }
}