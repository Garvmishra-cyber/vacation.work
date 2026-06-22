//question119
#include <stdio.h>
#include <string.h>

int main() {
    int empId[100], salary[100];
    char name[100][50];
    int n = 0, choice, i, searchId;

    do {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\nID\tName\t\tSalary\n");
                    printf("---------------------------------\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%d\n",
                               empId[i], name[i], salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        printf("\nEmployee Found:\n");
                        printf("ID     : %d\n", empId[i]);
                        printf("Name   : %s\n", name[i]);
                        printf("Salary : %d\n", salary[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Employee Not Found!\n");
                break;

            case 4:
                printf("Enter Employee ID to Update Salary: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        printf("Enter New Salary: ");
                        scanf("%d", &salary[i]);
                        printf("Salary Updated Successfully!\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Employee Not Found!\n");
                break;

            case 5:
                printf("Enter Employee ID to Delete: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        int j;
                        for(j = i; j < n - 1; j++) {
                            empId[j] = empId[j + 1];
                            salary[j] = salary[j + 1];
                            strcpy(name[j], name[j + 1]);
                        }
                        n--;
                        printf("Employee Deleted Successfully!\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Employee Not Found!\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}