#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Dept
{
    char dept[30];
    
}empdept;

struct Employee
{
    int empno;
    float salary;
    char e_name[30];
    struct Dept empdept;
};


void
display(struct Employee *poi)
{

    for (int i = 0; i < 2; i++)
    {
        scanf("%d %f %s %s", &poi[i].empno, &poi[i].salary, poi[i].e_name,poi[i].empdept.dept);
    }

    for (int i = 0; i < 2; i++)
    {

        printf("%d %.2f %s %s\n", poi[i].empno, poi[i].salary, poi[i].e_name,poi[i].empdept.dept);
    }
}

int main()
{

    struct Employee emp[2],*poi;
    poi=&emp;

    display(emp);
}