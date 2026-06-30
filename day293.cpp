#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter First String: ");
    scanf(" %[^\n]", str1);

    while (1)
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Both Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 5:
            {
                int i, len = strlen(str1);
                printf("Reversed String = ");
                for (i = len - 1; i >= 0; i--)
                    printf("%c", str1[i]);
                printf("\n");
                break;
            }

            case 6:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}