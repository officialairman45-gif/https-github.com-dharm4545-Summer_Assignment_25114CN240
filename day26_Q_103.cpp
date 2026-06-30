#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        printf("\nATM MENU\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited.\n");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if(amount <= balance) {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                } else {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}