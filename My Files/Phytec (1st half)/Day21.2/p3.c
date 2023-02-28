/*a program to increment a variable using pointer*/

#include<stdio.h>
float count(float*);

int main()
{
    float f=10.4;
    printf("Before  call by reference:%.1f\n",f);
    count(&f);
    printf("after  call by reference:%.1f\n",f);

}
float count(float *f)
{
    ++*f;
}