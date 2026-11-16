/*
Write a program with a structure representing a complex number.
*/

#include <stdio.h>

// 1. Define the Structure for a Complex Number
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
// Notice we are returning a struct here!
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
// Math: (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

// Function to display the complex number cleanly
void displayComplex(struct Complex c) {
    // Check if imaginary part is negative to format the string correctly
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        // If negative, the minus sign is already part of c.imag
        printf("%.2f %.2fi\n", c.real, c.imag); 
    }
}

int main() {
    // 2. Initialize two complex numbers
    struct Complex num1 = { 2.5,  3.0 };  // Represents 2.5 + 3.0i
    struct Complex num2 = { 1.0, -4.0 };  // Represents 1.0 - 4.0i

    printf("Complex Number 1: ");
    displayComplex(num1);
    
    printf("Complex Number 2: ");
    displayComplex(num2);

    // 3. Perform Addition
    struct Complex sum = addComplex(num1, num2);
    printf("\nSum: ");
    displayComplex(sum);

    // 4. Perform Multiplication
    struct Complex product = multiplyComplex(num1, num2);
    printf("Product: ");
    displayComplex(product);

    return 0;
}