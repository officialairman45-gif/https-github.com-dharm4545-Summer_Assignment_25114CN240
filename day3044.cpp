#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, roll, i, found;

    while (1)
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("\nStudent Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Student Records Found!\n");
            }
            else
            {
                printf("\n========== STUDENT RECORDS ==========\n");
                printf("Roll\tName\t\tMarks\n");
                printf("--------------------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%.2f\n",
                           s[i].roll,
                           s[i].name,
                           s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nStudent Found!\n");
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");

            break;

        case 4:
            printf("Enter Roll Number: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Marks Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");

            break;

        case 5:
            printf("Enter Roll Number to Delete: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    printf("Student Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");

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