/*run time initializatin*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee
{
    int empno;
    float salary;
    char e_name[30];
};

int main()
{
    struct Employee emp[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %f %s", &emp[i].empno, &emp[i].salary, emp[i].e_name);
    }
    for (int i = 0; i < 2; i++)
    {

        printf("%d %.2f %s\n", emp[i].empno, emp[i].salary, emp[i].e_name);
    }
}