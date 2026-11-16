/*
Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int i;
    FILE *fptr;

    printf("Enter a number to generate its multiplication table: ");
    
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        return 1;
    }

    fptr = fopen("problem-49.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not create the file.\n");
        return 1; 
    }

    fprintf(fptr, "Multiplication Table of %d\n", num);
    fprintf(fptr, "-------------------------\n");

    for (i = 1; i <= 10; i++) {
        fprintf(fptr, "%d x %2d = %3d\n", num, i, num * i);
    }

    fclose(fptr);

    printf("\nSuccess! Open 'problem-49.txt' to see your neatly formatted table.\n");

    return 0;
}