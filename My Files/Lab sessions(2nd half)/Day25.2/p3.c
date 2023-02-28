/*a program to know the length of a string without using library function*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[40];
    int i;
    printf("Input the string:");
    gets(str);
    for( i=0;str[i] != '\0'; ++i);
    printf("Length of the string is :%d",i);
   
}