/*
Write a program to read three integers from a file.
*/

# include <stdio.h>

int main() {

    FILE *read;
    int num1, num2, num3;

    read = fopen("problem-48.txt", "r");

    fscanf(read, "%d, %d, %d", &num1);
    fscanf(read, "%d", &num2);
    fscanf(read, "%d", &num3);

    printf("Numbers read successfully: %d, %d, %d\n", num1, num2, num3);

    return 0;
}