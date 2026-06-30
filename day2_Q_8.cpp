#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Loop to reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num /= 10;                    // Remove the last digit from original
    }

    // A number is a palindrome if the original matches the reversed version
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
