#include<stdio.h>
int display(int);
int main()
{
    int a;
    printf("Enter upto which you wanna print");
    scanf("%d",&a);
    display(a);

}
int display(int a)
{
  
    for(int i=1;i<=a;i++)
    {
        printf("%d",i,&i);
    }
}