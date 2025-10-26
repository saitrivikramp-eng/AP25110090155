#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float attendance, total, percentage;
    char grade;
    char remarks[30];

    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    if (attendance < 75) {
        grade = 'F';
        sprintf(remarks, "Attendance too low");
    }
    else {
        if (percentage >= 80) {
            grade = 'A';
            sprintf(remarks, "Very Good");
        }
        else if (percentage >= 70) {
            grade = 'B';
            sprintf(remarks, "Good");
        }
        else if (percentage >= 60) {
            grade = 'C';
            sprintf(remarks, "Satisfactory");
        }
        else if (percentage >= 50) {
            grade = 'D';
            sprintf(remarks, "Pass");
        }
        else {
            grade = 'F';
            sprintf(remarks, "Fail");
        }
    }

    printf("\nAttendance: %.2f%%", attendance);
    printf("\nFinal Percentage: %.2f%%", percentage);
    printf("\nGrade: %c", grade);
    printf("\nRemarks: %s\n", remarks);

    return 0;
}

