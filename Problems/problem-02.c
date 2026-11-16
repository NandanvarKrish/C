/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/

#include <stdio.h>

int main()
{
    float radius, height, area, volume;
    const float PI = 3.14159;

    // Calculate area of a circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);

    // Calculate volume of a cylinder
    printf("Enter height of the cylinder: ");
    scanf("%f", &height);
    
    volume = PI * radius * radius * height;
    printf("Volume of the cylinder: %.2f\n", volume);
}