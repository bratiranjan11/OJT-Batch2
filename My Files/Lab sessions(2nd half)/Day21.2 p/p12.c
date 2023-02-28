/*Print 10 integers using array*/

#include<stdio.h>

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
{
    printf("Enter %d element:\n",i+1);
    scanf("%d",&arr[i]);
}
for(int i=0;i<10;i++)
{
    printf("ELEMENT %d  ",i+1);
    printf("  %d \n",arr[i]);
   
}
}