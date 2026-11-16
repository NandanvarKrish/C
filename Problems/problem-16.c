/*
Write a program using function to find average of three numbers.
*/

# include <stdio.h>

float average(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float num1, num2, num3, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    result = average(num1, num2, num3);
    printf("The average of %.2f, %.2f and %.2f is: %.2f\n", num1, num2, num3, result);

    return 0;
}