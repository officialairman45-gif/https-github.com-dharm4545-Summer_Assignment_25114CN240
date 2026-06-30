#include <stdio.h>

int main() {
    int age;

    printf("Voting Eligibility Checker\n");
    printf("Please enter your age: ");

    // Check if the input is a valid integer
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a valid numerical age.\n");
        return 1;
    }

    // Determine eligibility 
    if (age < 0) {
        printf("Invalid age entered. Age cannot be negative.\n");
    } else if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        printf("You are not eligible to vote yet. You need to be 18 or older.\n");
    }

    return 0;
}
