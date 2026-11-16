/*
Snake, water, gun or rock, paper, scissors is a game most of us have played during school time.

Write a C program capable of playing this game with you.

Your program should be able to print the result after you choose rock, paper or scissor.
*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    char userChoice, compChoice;
    int randomNum;

    srand(time(0));
    randomNum = rand() % 3;

    if (randomNum == 0){
        compChoice = 'r';
    }

    else if (randomNum == 1) {
        compChoice = 'p';
    }

    else {
        compChoice = 's';
    }

    printf("--- Rock, Paper, Scissor ---\n");

    printf("Enter your choice (r for Rock, p for Paper, s for Scissors): ");
    scanf(" %c", &userChoice);

    printf("\nYou chose: %c\n", userChoice);
    printf("Computer chose: %c\n\n", compChoice);

    if (userChoice == compChoice) {
        printf("Result: It's Draw!\n");
    }
    else if ((userChoice == 'r' && compChoice == 's') ||
             (userChoice == 'p' && compChoice == 'r') ||
             (userChoice == 's' && compChoice == 'p')) {
                printf("Result: You Win!\n");
             }
    else {
        printf("Result: Computer Wins!\n");
    }
}