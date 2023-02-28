/*a program to swap 3 variables using call by reference*/

#include <stdio.h>

int swap(int *a, int *b, int *c)
{
    *a = *a + *b + *c;
    *b = *a - (*b + *c);
    *c = *a - (*b + *c);
    *a = *a - (*b + *c);
}

int main()
{
    int a, b, c, *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Input the value of the first element:");
    scanf("%d", p1);
    printf("Input the value of the second element:");
    scanf("%d", p2);
    printf("Input the value of the third element:");
    scanf("%d", p3);

    printf("Before swapping:a=%d,b=%d\n", *p1, *p2);

    swap(&a, &b, &c);
    printf("After swapping:a=%d,b=%d,c=%d", *p1, *p2, *p3);
}
