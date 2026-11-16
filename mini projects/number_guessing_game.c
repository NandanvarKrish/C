/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.

When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.

Hint: Use loop & use a random number generator.
*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Lower number please.\n");
        } else if (guess < number) {
            printf("Higher number please.\n");
        } else {
            printf("Congratulations! You've guessed the correct number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}