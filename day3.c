#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;
    float meterCharge = 50.0; // fixed meter charge

    // Ask user for total units consumed
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on slabs
    if (units <= 100) {
        bill = units * 1.0;
    } else if (units <= 200) {
        bill = 100 * 1.0 + (units - 100) * 2.5;
    } else if (units <= 300) {
        bill = 100 * 1.0 + 100 * 2.5 + (units - 200) * 4.0;
    } else {
        bill = 100 * 1.0 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 6.0;
    }

    // Add meter charge
    bill = bill + meterCharge;

    // Display total amount
    printf("Total electricity bill = Rs %.2f\n", bill);

    return 0;
}