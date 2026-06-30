#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", b[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            printf("Enter Quantity: ");
            scanf("%d", &b[n].quantity);

            n++;
            printf("\nBook Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Books Available!\n");
            }
            else
            {
                printf("\n----- BOOK LIST -----\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID       : %d\n", b[i].id);
                    printf("Title    : %s\n", b[i].title);
                    printf("Author   : %s\n", b[i].author);
                    printf("Quantity : %d\n", b[i].quantity);
                }
            }
            break;

        case 3:
            printf("\nEnter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    printf("\nBook Found!\n");
                    printf("ID       : %d\n", b[i].id);
                    printf("Title    : %s\n", b[i].title);
                    printf("Author   : %s\n", b[i].author);
                    printf("Quantity : %d\n", b[i].quantity);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("\nBook Not Found!\n");
            break;

        case 4:
            printf("\nEnter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;
                    if (b[i].quantity > 0)
                    {
                        b[i].quantity--;
                        printf("\nBook Issued Successfully!\n");
                    }
                    else
                    {
                        printf("\nBook Not Available!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("\nBook Not Found!\n");
            break;

        case 5:
            printf("\nEnter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    b[i].quantity++;
                    printf("\nBook Returned Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("\nBook Not Found!\n");
            break;

        case 6:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}