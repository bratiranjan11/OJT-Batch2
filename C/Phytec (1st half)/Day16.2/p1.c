#include<stdio.h>
void add(void);
void main()
{
    add();
    

}
void add(void)
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;

    printf("%d",c);
}