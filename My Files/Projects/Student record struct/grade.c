#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Grade
{
    char grade[30];

} SGrade;

struct Student
{
    int S_id;
    long int student_ph;
    char S_name[30];  
    char gender[30];
    struct Grade SGrade;
};

void display(struct Student stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("               Enter Student detalils                  \n");
        printf("----------------------------------------------------\n");
        printf("Student_id-:");
        scanf("%d",&stu[i].S_id);
        printf("\nPhone No.-:");
        scanf("%ld",&stu[i].student_ph);
        printf("\nName-:"); 
        scanf("%s",stu[i].S_name);
        printf("\nGender-:");   
        scanf("%s",stu[i].gender);
        printf("\nGrade-:");    
        scanf("%s",stu[i].SGrade.grade);

    }

    for (int i = 0; i < n; i++)
    {

        printf("%d %ld %s %s %s", stu[i].S_id, stu[i].student_ph, stu[i].S_name, stu[i].gender, stu[i].SGrade.grade);
    }
}

int main()
{
    int n;
    printf("Enter the number of students record you want:");
    scanf("%d", &n);

    struct Student stu[n];

    display(stu, n);
}
