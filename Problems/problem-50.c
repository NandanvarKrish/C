/*
Take name and salary of two employees as input from the user and write them to a text file in the following format:
        i. Name1, 3300
        ii. Name2, 7700
*/

#include <stdio.h>

int main() {
    char name1[] = "Krish";
    int salary1 = 3300;
    
    char name2[] = "Rahul";
    int salary2 = 7700;
    
    FILE *fptr;

    fptr = fopen("problem-50.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not create the file.\n");
        return 1;
    }

    fprintf(fptr, "i. %s, %d\n", name1, salary1);
    fprintf(fptr, "ii. %s, %d\n", name2, salary2);

    fclose(fptr);

    printf("Success! Data saved to 'problem-50.txt'.\n");

    return 0;
}