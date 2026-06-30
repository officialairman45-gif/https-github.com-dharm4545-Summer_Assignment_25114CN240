#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Handle 0 specifically
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n /= 10; // Remove the last digit
            count++;
        }
    }

    printf("Number of digits: %d", count);
    return 0;
}