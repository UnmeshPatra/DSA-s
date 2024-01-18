#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int emp_id;
    char name[50];
    char designation[50];
    double basic_salary;
    double hra_percentage;
    double da_percentage;
    double gross_salary;
};

int main() {
    int n;
    printf("Enter no. of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Enter employee %d information:\n", i + 1);
        printf("Name: ");
        //printf("id:");
        
        scanf("%s", employees[i].name);
        printf("ID :");
        scanf("%d", &employees[i].emp_id);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%lf", &employees[i].basic_salary);
        printf("HRA %%: ");
        scanf("%lf", &employees[i].hra_percentage);
        printf("DA %%: ");
        scanf("%lf", &employees[i].da_percentage);

        employees[i].gross_salary = employees[i].basic_salary +(employees[i].hra_percentage / 100) * employees[i].basic_salary +(employees[i].da_percentage / 100) * employees[i].basic_salary;
    }

    printf("\nEmployee Information:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
         //printf("id:);
        printf("ID : %d\n", employees[i].emp_id);
        printf("Designation: %s\n", employees[i].designation);
        printf("Basic Salary: %.2lf\n", employees[i].basic_salary);
        printf("HRA %%: %.2lf%%\n", employees[i].hra_percentage);
        printf("DA %%: %.2lf%%\n", employees[i].da_percentage);
        printf("Gross Salary: %.2lf\n\n", employees[i].gross_salary);
    }

    return 0;
}
