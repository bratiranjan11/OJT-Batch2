int main() {
	char id[10];
	int hour;
	float value, salary;
	printf("Input the Employees ID(Max. 10 chars): \n");
	scanf("%s", &id);
	printf("Input the working hrs: \n");
	scanf("%d", &hour);
	printf("Salary amount/hr: \n");
	scanf("%f", &value);
	salary = value * hour;
	printf("\nEmployees ID = %s\nSalary =%.2f\n", id,salary);
	return 0;
}