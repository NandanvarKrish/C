/*
Write a program with a structure representing a complex number using typedef.
*/

#include <stdio.h>

// 1. Define the Structure using typedef
// We no longer need to give the struct a tag name (like 'struct Complex').
// 'Complex' becomes the actual type name.
typedef struct {
    double real;
    double imag;
} Complex;

// 2. Functions now use 'Complex' directly instead of 'struct Complex'
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

void displayComplex(Complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f %.2fi\n", c.real, c.imag); 
    }
}

int main() {
    // 3. Initializing variables is now much cleaner!
    Complex num1 = { 2.5,  3.0 };  
    Complex num2 = { 1.0, -4.0 };  

    printf("Complex Number 1: ");
    displayComplex(num1);
    
    printf("Complex Number 2: ");
    displayComplex(num2);

    // 4. Perform Operations
    Complex sum = addComplex(num1, num2);
    printf("\nSum: ");
    displayComplex(sum);

    Complex product = multiplyComplex(num1, num2);
    printf("Product: ");
    displayComplex(product);

    return 0;
}