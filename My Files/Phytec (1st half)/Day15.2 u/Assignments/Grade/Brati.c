#include<stdio.h>
#include<string.h>
#include"grade.h"

int main()
{
    float a;
    char name[30];
    int s;
    printf("Enter you name:");
    scanf("%s",&name);
    getchar();
    printf("Enter your SIC:");
    scanf("%d",&s);
    printf(" Grade in Maths\n",Maths(80));
	printf(" Grade in Physics\n",Phy(13));
	printf(" Grade in Chemistry\n",Chm(77));
	printf(" Grade in English\n",Eng(83));
	printf(" Grade in Biology\n",Bio(85));
    printf("Total Percentage secured:%.2f",a=((80+13+77+83+85)*0.2));

    printf("           Grade System           \n");
    printf("--------------------------------------\n");
    printf("GRADE   MARKS\nA\t90-100\nB\t80-90\nC\t70-80\nD\t60-70\nE\t44-60\nFail\t0-44\n");
}