#include<stdio.h>
int main()
{
    int A,h,f,t,ten,five,two,o;
    printf("input the amount:");
    scanf("%d",&A);
    h=A/100;
    f=(A%100)/50;
    t=((A%100)%50)/20;
    ten=(((A%100)%50)%20)/10;
    five=((((A%100)%50)%20)%10)/5;
    two=(((((A%100)%50)%20)%10)%5)/2;
    o=((((((A%100)%50)%20)%10)%5)%2)/1;
    printf("%d notes of 100.00\n",h);
    printf("%d notes of 50.00\n",f);
    printf("%d notes of 20.00\n",t);
    printf("%d notes of 10.00\n",ten);
    printf("%d notes of 5.00\n",five);
    printf("%d notes of 2.00\n",two);
    printf("%d notes of 1.00\n",o);
    
}