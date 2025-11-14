#include <stdio.h>

int main() {
    int productID[10], quantity[10];
    char productName[10][30];
    float price[10];
    int n, i, totalQty = 0;
    float totalValue = 0, highValue = 0;
    int highIndex = 0, searchID, found = 0;

    printf("Enter number of products (max 10): ");
    scanf("%d", &n);

    for(i=0; i<n; i++) 
    {
        printf("Enter details for product %d:", i+1);

        printf("Product ID: ");
        scanf("%d", &productID[i]);

        printf("Name: ");
        scanf("%s", productName[i]);

        printf("Quantity: ");
        scanf("%d", &quantity[i]);

        printf("Price: ");
        scanf("%f", &price[i]);
    }

    printf("List of Products:");
    for(i=0; i<n; i++) 
    {
        printf("ID: %d, Name: %s, Qty: %d, Price: %.2f", productID[i], productName[i], quantity[i], price[i]);
    }

    for(i=0; i<n; i++) {
        totalQty = totalQty + quantity[i];
        totalValue = totalValue + quantity[i]*price[i];
    }

    printf("Total quantity: %d", totalQty);
    printf("Total inventory value: %.2f", totalValue);
    for(i=0; i<n; i++) {
        float val = quantity[i]*price[i];
        if(val > highValue) 
        {
            highValue = val;
            highIndex = i;
        }
    }
    printf("Product with highest value in stock:");
    printf("ID: %d, Name: %s, Qty: %d, Price: %.2f, Value: %.2f",productID[highIndex], productName[highIndex], quantity[highIndex], price[highIndex], highValue);
    printf("Enter Product ID to search: ");
    scanf("%d", &searchID);
    found = 0;

    for(i=0; i<n; i++) {
        if(productID[i] == searchID) {
            printf("Product found!");
            printf("ID: %d, Name: %s, Qty: %d, Price: %.2f",
                   productID[i], productName[i], quantity[i], price[i]);
            found = 1;
            break;
        }
    }
    if(!found) 
    {
        printf("Product ID not found.");
    }

    return 0;
}
