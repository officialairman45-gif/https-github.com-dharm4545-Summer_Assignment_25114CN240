#include <stdio.h>

int main() {
    int rows = 5; // Number of rows to print
    char ch = 'A'; // Starting character

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++; // Move to the next character for the next row
    }

    return 0;
}