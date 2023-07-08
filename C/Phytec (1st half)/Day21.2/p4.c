#include<stdio.h>

int main()
{
    int a=10;
    float f=1.2;
    char ch='a';

    int *ip=&a;
    float *fp=&f;
    char *cp=&ch;
    printf("%d\n%f\n%c",*ip,*fp,*cp);

}