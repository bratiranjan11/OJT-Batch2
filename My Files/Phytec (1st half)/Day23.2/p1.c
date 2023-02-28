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
struct Employee emp1,emp2,emp3;

emp1.empno=10;
emp2.salary=50000.00;
strcpy(emp3.e_name,"Brati");
printf("%d %.2f %s",emp1.empno,emp2.salary,emp3.e_name);

}