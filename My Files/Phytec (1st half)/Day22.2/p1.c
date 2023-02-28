#include<stdio.h>

int main()
{
    
    int a;
    float f;
    char ch;
    double db;
    int *p,*q,*r,*s;
    p=&a;
    q=&ch;
    r=&f;
    s=&db;
    printf("size of a :%d\n",sizeof(*p));
    printf("size of f :%d\n",sizeof(*r));
    printf("size of ch :%d\n",sizeof(*q));
     printf("size of db :%d\n",sizeof(*s));

    
   
    
}