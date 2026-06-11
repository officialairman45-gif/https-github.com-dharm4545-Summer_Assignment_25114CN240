#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    printf("Set bits count: %d\n", count);
    return 0;
}