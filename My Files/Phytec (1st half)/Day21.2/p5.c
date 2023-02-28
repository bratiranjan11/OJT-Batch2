/*TYPE CASTING*/

#include<stdio.h>

int main()
{
    
    int a=10;
    float f=1.2;
    char ch='a';
    void *p;
    p=&a;
    printf("value of a :%d\n",*(int *)p);
    p=&f;
     printf("value of f :%f\n",*(float *)p);
    p=&ch;
    printf("value of ch :%c\n",*(char *)p);

    
   
    
}