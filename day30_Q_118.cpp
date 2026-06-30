#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== MINI LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            b[n].issued = 0;
            n++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Books Available!\n");
            }
            else
            {
                printf("\n----- BOOK LIST -----\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d\n", b[i].id);
                    printf("Book Name : %s\n", b[i].name);
                    printf("Author : %s\n", b[i].author);

                    if (b[i].issued)
                        printf("Status : Issued\n");
                    else
                        printf("Status : Available\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    printf("\nBook Found!\n");
                    printf("Book Name : %s\n", b[i].name);
                    printf("Author : %s\n", b[i].author);

                    if (b[i].issued)
                        printf("Status : Issued\n");
                    else
                        printf("Status : Available\n");

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");

            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;

                    if (b[i].issued)
                        printf("Book Already Issued!\n");
                    else
                    {
                        b[i].issued = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");

            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;

                    if (!b[i].issued)
                        printf("Book is Already Available!\n");
                    else
                    {
                        b[i].issued = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");

            break;

        case 6:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}