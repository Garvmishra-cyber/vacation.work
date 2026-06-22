//question120
#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX], marks[MAX], count = 0;
char name[MAX][50];

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;
    printf("Student Added Successfully!\n");
}

void displayStudents() {
    int i;

    if(count == 0) {
        printf("No Records Found!\n");
        return;
    }

    printf("\nRoll No\tName\t\tMarks\n");
    printf("-----------------------------------\n");

    for(i = 0; i < count; i++) {
        printf("%d\t%s\t\t%d\n",
               roll[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int r, i;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %d\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found!\n");
}

void updateStudent() {
    int r, i;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            printf("Enter New Marks: ");
            scanf("%d", &marks[i]);
            printf("Marks Updated Successfully!\n");
            return;
        }
    }

    printf("Student Not Found!\n");
}

void deleteStudent() {
    int r, i, j;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++) {
        if(roll[i] == r) {

            for(j = i; j < count - 1; j++) {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];
                strcpy(name[j], name[j + 1]);
            }

            count--;
            printf("Record Deleted Successfully!\n");
            return;
        }
    }

    printf("Student Not Found!\n");
}