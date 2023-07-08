#include<stdio.h>
int main()
{
    int Td;
    float f,res;
    printf("input total distance in km:");
    scanf("%d",&Td);
    printf("input total fuel spent in Litres:");
    scanf("%f",&f);
    res=Td/f;
    printf("Average consumpton:%.2f",res);

}