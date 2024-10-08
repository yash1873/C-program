#include <stdio.h>
struct Employee 
{
    int id;
    char name[30];
    float salary;
    float deduction;
};
float calc(float salary, float deduction) 
{
    return salary-deduction;
}
void display(struct Employee employee) 
{
    printf("ID: %d\n", employee.id);
    printf("Name: %s\n", employee.name);
    printf("Salary: %.2f\n", employee.salary);
    printf("Deduction: %.2f\n", employee.deduction);
    printf("Net Salary: %.2f\n", calc(employee.salary, employee.deduction));
}
int main() 
{
    struct Employee employee;
    printf("Enter ID");
    scanf("%d",&employee.id);
    printf("Enter name");
    scanf("%s",&employee.name);
    printf("Enter salary");
    scanf("%f",&employee.salary);
    printf("Enter deduction");
    scanf("%f",&employee.deduction);
    printf("Employee Details:\n");
    display(employee);
    return 0;
}