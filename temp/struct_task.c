#include<stdio.h>
#include<string.h>
#define s 3

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
    struct employee e1[s] , t;
    int i , j;
    int max_sal = 0;
    for(i = 0 ; i < s ; i++)
    {
        printf("\n enter the name\n");
        scanf("%s",&e1[i].empname);
        printf("\nenter the department\n");
        scanf("%s",&e1[i].department);
        printf("\nbasic_salary\n");
        scanf("%d",&e1[i].basicsalary);
    
    e1[i].allowance = 1500;
    e1[i].hra = e1[i].basicsalary * 0.07;
    e1[i].tax = e1[i].basicsalary * 0.10;
    e1[i].salary = e1[i].basicsalary + e1[i].hra + e1[i].allowance - e1[i].tax;
    }
    printf("\nNAME DEPT_NAME BASIC_SALARY SALARY");
    for(int i=0;i<s;i++){
        printf("\n%-10s %-10s %-10d %-10d", e1[i].empname, e1[i].department, e1[i].basicsalary, e1[i].salary);
    }

    for(i = 0 ; i < s ; i++)
    {
        if(e1[i].salary > max_sal)
        {
            max_sal = e1[i].salary;
        }
    }
    printf("max_sal: %d" , max_sal);

    for(i = 0 ; i < s - 1; i++)
    {
        for(j = 0 ; j < s - 1 -i ; j++)
        {
            if(e1[j].salary > e1[j+1].salary)
            {
                t = e1[j];
                e1[j] = e1[j+1];
                e1[j+1]= t;
            }
        }
    }
    printf("\nafter sorting\n");
    printf("\nNAME DEPT_NAME BASIC_SALARY SALARY");
    for(int i=0;i<s;i++){
        printf("\n%-10s %-10s %-10d %-10d", e1[i].empname, e1[i].department, e1[i].basicsalary, e1[i].salary);
    }

}
