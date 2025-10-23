#include <stdio.h>

int main() {
    float meal, tax, tip, total;
    float you, friend, missing;

    // take meal cost
    printf("Enter meal cost: ");
    scanf("%f", &meal);

    // tax is 5% and tip is 10%
    tax = 0.05 * meal;
    tip = 0.10 * meal;

    // total amount
    total = meal + tax + tip;

    // missing friend pays 0
    missing = 0;

    // your share = half your part + half of missing friend
    you = (total / 3) / 2 + (total / 3) / 2;

    // friend pays same as you
    friend = you;

    // display result
    printf("\n--- BILL DETAILS ---\n");
    printf("Meal cost: %.2f\n", meal);
    printf("Tax: %.2f\n", tax);
    printf("Tip: %.2f\n", tip);
    printf("Total bill: %.2f\n", total);
    printf("\nYou pay: %.2f\n", you);
    printf("Friend pays: %.2f\n", friend);
    printf("Missing friend pays: %.2f\n", missing);

    return 0;
}