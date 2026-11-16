/*
Write a program to change the value of a variable to ten times of its current
value.
*/

# include <stdio.h>

void changeValue(int *ptr) {
    *ptr *= 10; // Change the value to ten times its current value
}

int main() {
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Value of x before change: %d\n", x);

    changeValue(&x); // Pass the address of x to the function

    printf("Value of x after change: %d\n", x);

    return 0;
}