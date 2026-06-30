#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Department: ");
            scanf(" %[^\n]", emp[n].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("\nEmployee Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Employee Records Available!\n");
            }
            else
            {
                printf("\n----- EMPLOYEE RECORDS -----\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found!\n");
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 4:
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);

                    printf("Salary Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 5:
            printf("Enter Employee ID to Delete: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    printf("Employee Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 6:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}