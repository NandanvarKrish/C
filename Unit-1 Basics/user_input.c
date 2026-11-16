#include <stdio.h>

int main()
{
    char name[255];
    printf("Enter your name:");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);

    float height;
    printf("Enter your height (in ft):");
    scanf("%f", &height);
    printf("Your height is: %.2f ft\n", height);

    char grade;
    printf("Enter your grade (A-F):");
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline character
    printf("Your grade is: %c\n", grade);

    return 0;
}