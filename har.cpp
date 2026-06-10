#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers doesn't exist.");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}