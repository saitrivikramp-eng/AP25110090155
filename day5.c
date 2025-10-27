#include <stdio.h>

int main() {
    int age;
    char gender, health;
    float premium = 0.0;

    // Input details
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter health (Y for Healthy, N for Unhealthy): ");
    scanf(" %c", &health);

    // Check eligibility and calculate premium
    if (health == 'Y' || health == 'y') {
        if (age >= 25 && age <= 35) {
            if (gender == 'M' || gender == 'm')
                premium = 5000.0;
            else if (gender == 'F' || gender == 'f')
                premium = 5000.0 * 0.9;  // 10% discount
            printf("Eligible for Insurance");

            printf("Premium: %.2f", premium);

        } else if (age > 35 && age <= 45) {
            if (gender == 'M' || gender == 'm')
                premium = 8000.0;
            else if (gender == 'F' || gender == 'f')
                premium = 8000.0 * 0.9;
            printf("Eligible for Insurance");

            printf("Premium: %.2f", premium);

        } else if (age > 45 && age <= 60) {
            if (gender == 'M' || gender == 'm')
                premium = 10000.0;
            else if (gender == 'F' || gender == 'f')
                premium = 10000.0 * 0.9;
            printf("Eligible for Insurance");

            printf("Premium: %.2f", premium);

        } else {
            printf("Not Eligible for Insurance");

        }
    } else {
        printf("Not Eligible for Insurance");

    }

    return 0;
}