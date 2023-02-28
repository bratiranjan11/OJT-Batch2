#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    signed int SI;
    unsigned int USI;
    signed char SC;
    unsigned char USC;
    long int LG;
    short int SG;
    

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(SI));
    printf("Size of char: %zu byte\n", sizeof(USI));
    printf("Size of char: %zu byte\n", sizeof(SC));
    printf("Size of char: %zu byte\n", sizeof(USC));
    printf("Size of char: %zu byte\n", sizeof(LG));
    printf("Size of char: %zu byte\n", sizeof(SG));
   

     
    return 0;
}