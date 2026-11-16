/*
Write a program to print multiplication table of n in reversed order.
*/
# include <stdio.h>

int main() {
    int i, n;


    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d in reversed order:\n", n);
    for(i = 10; i >= 1; --i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}