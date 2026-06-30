#include <stdio.h>

int main()
{
    int a[100], n, i, j, count, maxCount = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Maximum Frequency Element = %d", element);
    printf("\nFrequency = %d", maxCount);

    return 0;
}