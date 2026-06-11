#include <stdio.h>
int main() {
    int low, high;
    printf("Enter low and high range: ");
    scanf("%d %d", &low, &high);
    for(int i = low; i <= high; i++) {
        if(i <= 1) continue;
        int isPrime = 1;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}