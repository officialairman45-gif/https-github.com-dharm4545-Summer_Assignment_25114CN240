#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr;

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2f", (float)sum / n);
    
    return 0;
}