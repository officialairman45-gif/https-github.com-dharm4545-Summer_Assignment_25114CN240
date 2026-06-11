#include <stdio.h>
int main() {
    double x, result = 1.0;
    int n, exp;
    printf("Enter base (x) and exponent (n): ");
    scanf("%lf %d", &x, &n);
    exp = n < 0 ? -n : n;
    for(int i = 1; i <= exp; i++) {
        result *= x;
    }
    if(n < 0) result = 1.0 / result;
    printf("Result: %.4lf\n", result);
    return 0;
}