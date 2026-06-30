#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Seed the random number generator using the current time
    srand(time(0));
    
    // Generate a secret number between 1 and 100
    secret_number = (rand() % 100) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");

    // Loop until the correct guess is made
    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid numerical choice.\n");
            while (getchar() != '\n'); // Clear invalid characters from input buffer
            continue;
        }
        
        attempts++;

        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secret_number);

    return 0;
}
