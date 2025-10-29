#include <stdio.h>

int main() {
    int plan;
    float data;

    printf("Enter Plan (1-Silver, 2-Gold, 3-Platinum): ");
    scanf("%d", &plan);
    printf("Enter Data used in GB: ");
    scanf("%f", &data);

    float baseCost = 0, extraCharge = 0, totalCost = 0;
    float freeData = 0;
    int allowed = 1;

    if(plan == 1) { // Silver
        baseCost = 199;
        freeData = 1.0;
        if(data > 100) {
            allowed = 0;
        } else if(data > freeData) {
            extraCharge = (data - freeData) * 50;
        }
        totalCost = baseCost + extraCharge;
        printf("Plan Name: Silver");

    } else if(plan == 2) { // Gold
        baseCost = 299;
        freeData = 3.0;
        if(data > 100) {
            allowed = 0;
        } else if(data > freeData) {
            extraCharge = (data - freeData) * 40;
        }
        totalCost = baseCost + extraCharge;
        printf("Plan Name: Gold");

    } else if(plan == 3) { // Platinum
        baseCost = 399;
        freeData = 5.0;
        if(data > 100) {
            allowed = 0;
        } else if(data > freeData) {
            extraCharge = (data - freeData) * 30;
        }
        totalCost = baseCost + extraCharge;
        printf("Plan Name: Platinum");

    } else {
        printf("Invalid Plan!");

        return 0;
    }

    if(allowed == 0) {
        printf("Plan Not Allowed");

    } else {
        printf("Data Used: %.2f GB", data);

        printf("Base Cost: Rs%.2f", baseCost);

        printf("Extra Charges: Rs%.2f", extraCharge);

        printf("Total Cost: Rs%.2f", totalCost);

    }

    return 0;
}