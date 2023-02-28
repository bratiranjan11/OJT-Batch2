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
struct Employee emp1={10,50000.00,"Brati"};

// emp1.empno=10;
// emp2.salary=50000.00;
// strcpy(emp3.e_name,"Brati");
printf("%d %.2f %s",emp1.empno,emp1.salary,emp1.e_name);

}