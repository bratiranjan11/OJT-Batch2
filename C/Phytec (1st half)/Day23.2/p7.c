/*Including pointer*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee
{
    int empno;
    float salary;
    char e_name[30];

};


int main()
{
struct Employee emp1={10,50000.00,"Brati"},*poi;
poi=&emp1;

printf("%d %.2f %s\n",poi->empno,poi->salary,poi->e_name);
printf("%d %.2f %s",(*poi).empno,(*poi).salary,(*poi).e_name);

}