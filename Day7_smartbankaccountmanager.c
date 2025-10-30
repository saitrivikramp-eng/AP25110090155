 #include <stdio.h>

int main() {
    int choice;
    float balance = 10000.0;
    float amount;

    while(1) {
        printf("Smart Bank Account Manager");

        printf("1. Deposit");

        printf("2. Withdraw");

        printf("3. Check Balance");

        printf("4. Exit");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if(amount > 0) {
                    balance += amount;
                    printf("Amount deposited: %.2f", amount);

                } else {
                    printf("Invalid amount entered.");

                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount > 0) {
                    if(amount <= balance) {
                        if(balance - amount < 1000) {
                            printf("Warning: Balance less than Rs 1000!");

                        }
                        balance -= amount;
                        printf("Amount withdrawn: %.2f", amount);
                    } else {
                        printf("Insufficient balance.");

                    }
                } else {
                    printf("Invalid amount entered.");

                }
                break;

            case 3:
                printf("Current balance: %.2f", balance);

                break;

            case 4:
                printf("Thank you for banking with us!");

                return 0;

            default:
                printf("Invalid choice. Please try again.");

        }
    }
    return 0;
}