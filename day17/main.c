#include <stdio.h>
#include <string.h>

int main() {
    char name[30], regno[20], section[10];
    int n, i;
    int empid[20];
    float salary[20], max, min, sum = 0, avg;

    printf("Enter student Name: ");
    scanf("%s", name);
    printf("Enter Registration Number: ");
    scanf("%s", regno);
    printf("Enter Section: ");
    scanf("%s", section);

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        {
        printf("Enter EmpID and Salary for employee %d: ", i+1);
        scanf("%d %f", &empid[i], &salary[i]);
    }

    max = salary[0];
    min = salary[0];
    for(i = 0; i < n; i++) {
        sum = sum + salary[i];
        if(salary[i] > max)
            max = salary[i];
        if(salary[i] < min)
            min = salary[i];
    }
    avg = sum / n;

    printf("Safety Analysis Sheet");
    printf("Name: %s
        Registration Number: %sSection: %s", name, regno, section);
    printf("EmpID\tSalary");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%.2f", empid[i], salary[i]);
    }

    printf("Maximum Salary: %.2f", max);
    printf("Minimum Salary: %.2f", min);
    printf("Average Salary: %.2f", avg);

    printf("STUDENT INFO: %s | %s | %s", name, regno, section);

    return 0;
}
