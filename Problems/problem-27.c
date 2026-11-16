/*
Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.
*/

# include <stdio.h>

int main() {
    int i;

    printf("Enter a value for i: ");
    scanf("%d", &i);

    int *ptr = &i; // Pointer to i
    int **ptr_to_ptr = &ptr; // Pointer to pointer

    printf("Value of i using pointer to pointer: %d\n", **ptr_to_ptr);

    return 0;
}