#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pyramid
    int i, j;

    for (i = 0; i < rows; i++) {
        // 1. Print leading spaces
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // 2. Print ascending characters
        char ch = 'A';
        for (j = 0; j <= i; j++) {
            printf("%c", ch++);
        }

        // 3. Print descending characters
        ch -= 2; // Move back to the character before the peak
        for (j = 0; j < i; j++) {
            printf("%c", ch--");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}