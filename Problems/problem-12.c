/*
Write a program to sum first n natural numbers using while loop.
*/

# include <stdio.h>

int main () {
    int i = 1, sum = 0, n;

    printf("Enter your number (>0): ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}