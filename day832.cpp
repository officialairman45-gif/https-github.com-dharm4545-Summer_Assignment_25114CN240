#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows to print

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop to print the number 'i', 'i' times
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}