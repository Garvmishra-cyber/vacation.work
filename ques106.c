//question106
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n===== EMPLOYEE RECORDS =====\n");
    printf("ID\tName\t\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].salary);
    }

    return 0;
}