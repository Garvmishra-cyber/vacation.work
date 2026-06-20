//question108
#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n===== MARKSHEET =====\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);
    printf("Total Marks  : %.2f / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    printf("Grade        : %c\n", grade);

    if (grade == 'F')
        printf("Result       : Fail\n");
    else
        printf("Result       : Pass\n");

    return 0;
}