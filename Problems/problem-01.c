/*
Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.
*/

#include <stdio.h>
int main()
{
    float length, breadth, area;
    // a. Using hard coded inputs
    length = 5.0;
    breadth = 3.0;
    area = length * breadth;
    printf("Area of rectangle (hard coded inputs): %.2f\n", area);

    // b. Using inputs supplied by the user
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area of rectangle (user inputs): %.2f\n", area);
}