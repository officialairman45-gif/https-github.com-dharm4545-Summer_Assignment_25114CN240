#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Thank You!\n");
            break;
        }

        printf("Enter First Number: ");
        scanf("%f", &num1);

        printf("Enter Second Number: ");
        scanf("%f", &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Division by zero is not possible.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}