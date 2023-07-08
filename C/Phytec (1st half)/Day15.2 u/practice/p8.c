#include<stdio.h>

int main()
{
    float MON=24.3,TUE=28.6,WED;
    printf("Enter the tempreture of wednesday from tempreture sensor:");
    scanf("%f",&WED);

    if(WED==MON)
    {
    
        printf("Todays weather'S humidity is 60 percent and a sunny day \n");

    }
    else if(WED==TUE)
    {
        printf("Todays weather is a rainy day with low humid \n");


    }
    else{
        printf("Unpredicted");
    }
}