/*A program to do arithmatic operations using pointers*/

#include <stdio.h>
int add(int a, int b)
{

    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int (*func)(int, int);

int main()
{
    int a, b, result;
    printf("Enter a no.:");
    scanf("%d", &a);
    printf("Enter another no.:");
    scanf("%d", &b);
    int choice;

    printf("which operation you want:\n1. Add\n2. sub\n3. mul\n4.div\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        func = &add;
        result = (*func)(a, b);
        printf("The Adiition of two numbers is :%d\n", result);
        break;

    case 2:

        func = &sub;
        result = (*func)(a, b);
        printf("The Subtraction of two numbers is :%d\n", result);
        break;
    case 3:

        func = &mul;
        result = (*func)(a, b);
        printf("The multiplication of two numbers is :%d\n", result);
        break;
    case 4:

        func = &div;
        result = (*func)(a, b);
        printf("The division of two numbers is :%d\n", result);
        break;

        default:
        printf("Enter Appropiate option ");
        break;
    }
}
