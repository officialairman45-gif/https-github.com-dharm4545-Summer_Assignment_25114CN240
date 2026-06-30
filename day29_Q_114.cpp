#include <stdio.h>

int main()
{
    int a[100], n, i, choice, sum = 0, max, min;

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (1)
    {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Maximum Element\n");
        printf("4. Minimum Element\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;

        case 2:
            sum = 0;
            for (i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d\n", sum);
            break;

        case 3:
            max = a[0];
            for (i = 1; i < n; i++)
                if (a[i] > max)
                    max = a[i];
            printf("Maximum = %d\n", max);
            break;

        case 4:
            min = a[0];
            for (i = 1; i < n; i++)
                if (a[i] < min)
                    min = a[i];
            printf("Minimum = %d\n", min);
            break;

        case 5:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}