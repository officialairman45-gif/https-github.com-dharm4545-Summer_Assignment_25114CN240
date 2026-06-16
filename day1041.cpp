#include <stdio.h>

int main() {
    int rows = 5; // Total number of lines
    
    for (int i = 0; i < rows; i++) {
        // 1. Print leading spaces for alignment
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // 2. Print characters in increasing order
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        // 3. Print characters in decreasing order
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}