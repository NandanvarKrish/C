/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int subject1, subject2, subject3;
    float total, percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);

    total = subject1 + subject2 + subject3;
    percentage = (total / 300) * 100; 

    if (percentage >= 33 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33)
    {
        printf("Congratulations! You have passed with a percentage of %.2f%%.\n", percentage);
    }
    else
    {
        printf("Sorry! You have failed with a percentage of %.2f%%.\n", percentage);
    }

    return 0;
}