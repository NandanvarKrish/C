/*
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?
*/

# include <stdio.h>

void printAddress(int *ptr) {
    printf("Address of i inside function: %p\n", (void*)ptr);
}

int main() {
    int i;

    printf("Enter a value for i: ");
    scanf("%d", &i);
    printf("Address of i in main: %p\n", (void*)&i);

    printAddress(&i);

    return 0;
}