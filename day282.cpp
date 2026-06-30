#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc;
    int choice;
    float amount;

    printf("===== BANK ACCOUNT SYSTEM =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            acc.balance += amount;
            printf("Amount Deposited Successfully!\n");
            printf("Current Balance = %.2f\n", acc.balance);
            break;

        case 2:
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if (amount <= acc.balance)
            {
                acc.balance -= amount;
                printf("Withdrawal Successful!\n");
                printf("Current Balance = %.2f\n", acc.balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
            break;

        case 3:
            printf("\nCurrent Balance = %.2f\n", acc.balance);
            break;

        case 4:
            printf("\n===== ACCOUNT DETAILS =====\n");
            printf("Account Number : %d\n", acc.accNo);
            printf("Account Holder : %s\n", acc.name);
            printf("Balance        : %.2f\n", acc.balance);
            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}