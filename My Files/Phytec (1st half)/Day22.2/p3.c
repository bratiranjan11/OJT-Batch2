/*Increasing the array elements by 2 */

#include<stdio.h>

arr(int *p,int n)
{
    for(int i=0;i<n;i++)

    *(p+i)+=2;
    
}

int main()
{
     int a[10]={1,2,3,4,5,6,7,8,9},i,*p;
     p=&a;

     printf("Before increment");
     for(i=0;i<10;i++)
    {
        printf("%d\n",*(p+i));
    }
    arr(p,10);

    printf("After increment");
     for(i=0;i<10;i++)
    {
        printf("%d\n",*(p+i));
    }


}