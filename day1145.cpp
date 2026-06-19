#include <stdio.h>

int main() {
    int rows = 5; // Number of lines to print

    for (int i = 1; i <= rows; i++) {
        // 1. Print leading spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2. Print increasing characters starting from 'A'
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch++);
        }

        // 3. Print decreasing characters
        ch -= 2; // Step back to the previous character
        for (int j = 1; j < i; j++) {
            printf("%c", ch--);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}