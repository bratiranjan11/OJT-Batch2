/*A program to take a string from user and print it*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Please input the string:");
    gets(str);
    printf("Inputed String:%s",str);
}