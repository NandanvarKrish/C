/*
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/

# include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n <= 0) {
        return 0; // Base case: sum of first 0 natural numbers is 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive case
    }
}

int main() {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        result = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, result);
    }

    return 0;
}