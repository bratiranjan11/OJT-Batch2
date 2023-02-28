#include<stdio.h>

float SI();
int main()
{
    int p,t,r;
    float z;

    for(int i=1;i<=3;i++)
    {
    printf("Enter Principal amount:");
    scanf("%d",&p);
    printf("Enter Rate of intrest:");
    scanf("%d",&r);
    printf("Enter Time period:");
    scanf("%d",&t);
    z=SI(p,t,r);
    printf("For set %d Simple intrest is :%.2f\n",i,z);
    }
    return 0;

}
float SI(int p,int r,int t)
{
    
    float SI;
    SI=(p*r*t)/100;
    return SI;
}