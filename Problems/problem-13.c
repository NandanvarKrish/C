/*
Write a program to calculate the factorial of a given number using a for loop.
*/

# include <stdio.h>

int main() {
    int n, i;
    long int factorial = 1;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d is: %ld\n", n, factorial);
    return 0;
}