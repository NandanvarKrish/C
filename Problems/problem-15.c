/*
Calculate the area of rectangle by using functions.
*/

# include <stdio.h>

float area(float length, float width) {
    return length * width;
}

int main() {
    float length, width, result;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    result = area(length, width);
    printf("The area of the rectangle is: %.2f\n", result);

    return 0;
}