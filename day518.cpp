#include <stdio.h>
int main() {
    int num, original, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num > 0) {
        rem = num % 10;
        int fact = 1;
        for(int i = 1; i <= rem; i++) fact *= i;
        sum += fact;
        num /= 10;
    }
    if(sum == original) printf("Strong Number\n");
    else printf("Not Strong Number\n");
    return 0;
}