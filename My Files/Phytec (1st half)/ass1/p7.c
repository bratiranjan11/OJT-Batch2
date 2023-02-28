/*A program with structure data types*/
#include <stdio.h>   
#include <string.h> 
struct Employee
{
	char name[50]; 
	int emp_id; 
	float salary;
}
employee1;
int main()
{ 
	strcpy(employee1.name, "John"); 
	employee1.emp_id = 1779; 
	employee1. salary = 3900; 
	printf("Name: %s\n", employee1.name); 
	printf("Employee ID: %d\n", employee1.emp_id); 
	printf("Salary: %.2f", employee1.salary); 
	return 0;
}
