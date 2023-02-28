/**/

#include <stdio.h>
float cube(float);

int main()
{
    float num;
    float c;

    printf("Enter a number: ");
    scanf("%f", &num);

    c = cube(num);

    printf("Cube of %.4f is %.2f", num, c);

    return 0;
}

float cube(float num)
{
    return (num * num * num);
}