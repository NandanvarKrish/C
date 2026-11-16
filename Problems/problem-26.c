/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

# include <stdio.h>

void calculateSumAndAverage(int a, int b, int *sum, float *average) {
    *sum = a + b; // Calculate sum
    *average = (float)(*sum) / 2; // Calculate average
}

int main() {
    int num1, num2, sum;
    float average;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calculateSumAndAverage(num1, num2, &sum, &average); // Pass addresses of sum and average

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}