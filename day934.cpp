#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows

    // Outer loop for rows, starting from 5 down to 1
    for (int i = rows; i >= 1; i--) {
        
        // Inner loop to print numbers from 1 up to current row index 'i'
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}