#include<stdio.h>
void main()
{
    int arr[]={12.4,2.3,4.5,6.7};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
}