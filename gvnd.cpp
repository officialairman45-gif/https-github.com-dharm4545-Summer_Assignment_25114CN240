#include <stdio.h>
#include <math.h>
int main() {
    int num, original, rem, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    while (original != 0) {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0) {
        rem = original % 10;
        result += round(pow(rem, n));
        original /= 10;
    }
    if (result == num) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}