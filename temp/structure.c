#include<stdio.h>
#include<string.h>

struct employee
{
    char empname[20];
    char department[20];
    int basicsalary;
    int allowance;
    int hra;
    int tax;
    int salary;
};


int main()
{
    struct employee e1;
    printf("\n enter the name\n");
    scanf("%s",&e1.empname);
    printf("\nenter the department\n");
    scanf("%s",&e1.department);
    printf("\nbasic_salary\n");
    scanf("%d",&e1.basicsalary);

    e1.allowance = 1500;
    e1.hra = e1.basicsalary * 0.07;
    e1.tax = e1.basicsalary * 0.10;
    e1.salary = e1.basicsalary + e1.hra + e1.allowance - e1.tax;

    printf("employee name : %s\ndepartment: %s\nbasicsalary: %d\nsalary: %d\n" , e1.empname , e1.department , e1.basicsalary , e1.salary);




    return 0 ;
}