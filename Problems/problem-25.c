/*
Write a function and pass the value by reference.
*/

# include <stdio.h>

void modifyValue(int *ptr) {
    *ptr += 5; // Modify the value by adding 5
}

int main() {
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Value of x before modification: %d\n", x);

    modifyValue(&x); // Pass the address of x to the function

    printf("Value of x after modification: %d\n", x);

    return 0;
}