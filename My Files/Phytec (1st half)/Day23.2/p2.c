#include<stdio.h>

int main()
{
    int a,*p;
    p=&a;
   
    if( (*p) % sizeof(a)==0)
    {
        printf("alligned memory space");

    }

    else{
        printf("Unalligned");
    }
}