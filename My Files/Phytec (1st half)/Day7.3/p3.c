/*Bifields*/

#include<stdio.h>

struct cal
{
	unsigned int m:4;
	unsigned int d:5;
	unsigned int y:12;
;


}dat;
//}__attribute__((packed))dat;

int main()
{
	int mo,day,year;
	printf("%d\n",sizeof(dat));
	
	printf("Enter the month: \n");
	scanf("%d",&mo);
	printf("Enter the day: \n");
	scanf("%d",&day);
	printf("Enter the year: \n");
	scanf("%d",&year);

	dat.m=mo;
	dat.d=day;
	dat.y=year;

//	printf("%d",sizeof(dat.y)); We cannot see the size in bit fields  
	printf("Todays date is m:d:y %d:%d:%d",dat.m,dat.d,dat.y);


}



