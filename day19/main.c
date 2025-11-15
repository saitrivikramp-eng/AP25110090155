#include <stdio.h>

int main() {
    int attendance[5][15]; 
    int marks[5][5];
    char names[5][20];
    int n, m, s, i, j;
    int choice;
    
    printf("Enter number of students (max 5): ");
    scanf("%d", &n);
    printf("Enter number of classes (max 15): ");
    scanf("%d", &m);
    printf("Enter number of subjects (max 5): ");
    scanf("%d", &s);

    for (i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", names[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("Attendance for %s:", names[i]);
        for (j = 0; j < m; j++) {
            printf("Class %d (1=present/0=absent): ", j+1);
            scanf("%d", &attendance[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("Marks for %s:", names[i]);
        for (j = 0; j < s; j++) {
            printf("Subject %d marks: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    while (1) {
        printf("--- MENU ---");
        printf("1. Display Attendance Matrix");
        printf("2. Display Marks Matrix");
        printf("3. Attendance Report");
        printf("4. Marks Report");
        printf("5. Grade Report");
        printf("6. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Attendance Matrix:");
            for (i = 0; i < n; i++) 
            {
                printf("%s: ", names[i]);
                for (j = 0; j < m; j++) {
                    printf("%d ", attendance[i][j]);
                }
                printf("");
            }
        } else if (choice == 2) {
            printf("Marks Matrix:");
            for (i = 0; i < n; i++) 
            {
                printf("%s: ", names[i]);
                for (j = 0; j < s; j++) {
                    printf("%d ", marks[i][j]);
                }
                printf("");
            }
        } else if (choice == 3) {
            int totalPresent[5] = {0}, totalAbsent[5] = {0};
            int maxAtt = -1, minAtt = 100, maxIdx = -1, minIdx = -1;

            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    if (attendance[i][j] == 1)
                        totalPresent[i]++;
                    else
                        totalAbsent[i]++;
                }
                if (totalPresent[i] > maxAtt) {
                    maxAtt = totalPresent[i];
                    maxIdx = i;
                }
                if (totalPresent[i] < minAtt) {
                    minAtt = totalPresent[i];
                    minIdx = i;
                }
            }
            printf("Attendance Report:");
            for (i = 0; i < n; i++) 
            {
                printf("%s - Present: %d, Absent: %d", names[i], totalPresent[i], totalAbsent[i]);
            }
            printf("Highest Attendance: %s", names[maxIdx]);
            printf("Lowest Attendance: %s", names[minIdx]);
        } else if (choice == 4) {
            int totalMarks[5] = {0};
            int topper = -1, low = 101, topIdx = -1, lowIdx = -1;
            for (i = 0; i < n; i++) {
                totalMarks[i] = 0;
                for (j = 0; j < s; j++) {
                    totalMarks[i] += marks[i][j];
                }
                if (totalMarks[i] > topper) {
                    topper = totalMarks[i];
                    topIdx = i;
                }
                if (totalMarks[i] < low) {
                    low = totalMarks[i];
                    lowIdx = i;
                }
            }
            printf("Marks Report:");
            for (i = 0; i < n; i++) {
                printf("%s - Total: %d", names[i], totalMarks[i]);
            }
            printf("Top Performer: %s", names[topIdx]);
            printf("Lowest Marks: %s", names[lowIdx]);
        } else if (choice == 5) {
            printf("Grade Report:");
            for (i = 0; i < n; i++) {
                int avg = 0;
                for (j = 0; j < s; j++) {
                    avg += marks[i][j];
                }
                avg = avg / s;
                printf("%s - Avg: %d Grade: ", names[i], avg);
                if (avg >= 90)
                    printf("A");
                else if (avg >= 80)
                    printf("B");
                else if (avg >= 70)
                    printf("C");
                else if (avg >= 60)
                    printf("D");
                else
                    printf("F");
            }
        } else if (choice == 6) {
            break;
        } else {
            printf("Invalid choice!");
        }
    }

    return 0;
}
