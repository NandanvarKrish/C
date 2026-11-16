# include <stdio.h>

int main() {
    int number = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &number);

    // malloc() --> It is a function in c that dynamically allocates a specific number of bytes in memory.

    char *grade = malloc(number * sizeof(char));

    free(grade); // Returning the rented space back to the os
    grade = NULL;

    return 0;

}