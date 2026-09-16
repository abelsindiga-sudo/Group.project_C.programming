#include <stdio.h>

int main() {

    int choice = 0;
    float balance = 1000.00;
    float amount;

    while (choice != 4) {

        printf("\n===== ATM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("Your balance is $%.2f\n", balance);

        }

        else if (choice == 2) {

            printf("Enter amount to deposit: $");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Deposit successful!\n");
            printf("New balance: $%.2f\n", balance);

        }

        else if (choice == 3) {

            printf("Enter amount to withdraw: $");
            scanf("%f", &amount);

            if (amount <= balance) {

                balance = balance - amount;

                printf("Withdrawal successful!\n");
                printf("New balance: $%.2f\n", balance);

            }

            else {

                printf("You don't have enough money!\n");
            }

        }

        else if (choice == 4) {

            printf("Thank you for using the ATM!\n");

        }

        else {

            printf("Invalid choice!\n");
        }
    }

    return 0;
}
