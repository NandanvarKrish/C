# include <stdio.h>
# include <ctype.h>

int main() {

    char quetions[][100] = {"What is the largest planet in the solar system?\n", 
                            "Which is the hottest planet in the solar system?\n",
                            "Which planet has most number of moons?",
                            "Is the Earth Flat?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD.Neptune",
                            "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                            "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                            "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(quetions) / sizeof(quetions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++) {
        printf("\n%s\n", quetions[i]);
        printf("\n%s\n", options[i]);

        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answerKey[i]) {
            printf("CORRECT!");
            score++;
        }
        else {
            printf("INCORRECT!\n");
            printf("Correct answer : %c", answerKey[i]);
        }
    }

    printf("\nYour score is %d out of %d points.\n", score, questionCount);
    
    return 0;
}