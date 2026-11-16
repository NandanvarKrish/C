/*
Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/

# include <stdio.h>

int main() {
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Address of x: %p\n", (void*)&x);

    printf("Value of x using its address: %d\n", *(&x));
}