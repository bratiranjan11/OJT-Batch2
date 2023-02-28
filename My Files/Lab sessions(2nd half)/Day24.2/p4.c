#include<stdio.h>

struct employee
{
    char *empname;
    int salary;
};


int main()
{
    struct employee e,e1;
    e.empname="sridhar";
    e1=e;
    printf("%s %s",e.empname,e1.empname);
    


}