#include<stdio.h>
#include<math.h>
 int power(int,int,int);

 int main()
 {
    int x,y,z;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    printf("Enter z:");
    scanf("%d",&z);

    power(x,y,z);
 }

 int power(int x,int y,int z)
 {
    int a,b;
    a=y+z;
    b=pow(x,a);
   
    printf("FOR X^(Y+Z) is :%d",b);
 }