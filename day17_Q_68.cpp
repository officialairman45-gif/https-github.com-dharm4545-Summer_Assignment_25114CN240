#include <stdio.h>

int main()
{
    int a[50], b[50];
    int n1, n2, i, j, found = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Common Elements:\n");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
        printf("No Common Elements.");

    return 0;
}