#include<stdio.h>
int main() 
{
    int integer;
    float floatt;
    double doublee;
    char charr;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(integer));
    printf("Size of float: %zu bytes\n", sizeof(floatt));
    printf("Size of double: %zu bytes\n", sizeof(doublee));
    printf("Size of char: %zu byte\n", sizeof(charr));
    
    return 0;
}