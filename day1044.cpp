#include <stdio.h>

int main() {
    int rows = 5; // Number of rows to print
    int i, j;

    for (i = 1; i <= rows; i++) {
        // 1. Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2. Print ascending characters
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // 3. Print descending characters
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}