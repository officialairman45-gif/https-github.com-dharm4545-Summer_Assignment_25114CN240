#include <stdio.h>

int main()
{
    int a[100], n, sum, i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("%d + %d = %d\n", a[i], a[j], sum);
                found = 1;
            }
        }
    }

    if(found == 0)
        printf("No Pair Found.");

    return 0;
}