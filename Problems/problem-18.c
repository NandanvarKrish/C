/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2.
*/

# include <stdio.h>

float calculateForce(float mass) {
    const float g = 9.8; // acceleration due to gravity in m/s^2
    return mass * g;
}

int main() {
    float mass, force;

    printf("Enter the mass of the body (in kg): ");
    scanf("%f", &mass);

    force = calculateForce(mass);
    printf("The force of attraction on a body of mass %.2f kg is: %.2f N\n", mass, force);

    return 0;
}