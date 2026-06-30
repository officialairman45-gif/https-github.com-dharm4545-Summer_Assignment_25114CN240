#include <stdio.h>

int main()
{
    int n, i, sum = 0, total = 0, missing;
    int a[100];

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers (1 to %d with one missing):\n", n - 1, n);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing Number = %d", missing);

    return 0;
}