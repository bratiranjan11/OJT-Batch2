#include <stdio.h>

int area(int, int);
int perimeter(int, int);

int main()
{
    int l, b;
    printf("Enter the length of the rectangle:");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle:");
    scanf("%d", &b);

    area(l, b);
    perimeter(l, b);
}

int area(int l, int b)
{
    int a = l * b;
    printf("Area of the rectangle:%d\n", a);
}

int perimeter(int l, int b)
{
    int a = 2 * (l + b);
    printf("Perimeter of the rectangle:%d\n", a);
}