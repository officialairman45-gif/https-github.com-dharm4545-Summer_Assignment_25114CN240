#include <stdio.h>
int main() {
    int num, maxPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }
    if (num > 2) maxPrime = num;
    printf("Largest prime factor: %d\n", maxPrime);
    return 0;
}