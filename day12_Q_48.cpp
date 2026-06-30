#include <stdio.h>

/**
 * Checks if a number is a perfect number.
 * Returns 1 if true, 0 if false.
 */
int isPerfect(int num) {
    if (num < 1) return 0;
    
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (sum == num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}