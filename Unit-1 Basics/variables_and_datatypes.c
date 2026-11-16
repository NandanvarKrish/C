# include <stdio.h>

int main()
{
    int age = 18;
    printf("Age: %d\n", age);

    float height = 5.8;
    printf("Height: %f\n", height);

    char grade = 'A';
    printf("Grade: %c\n", grade);

    char name[] = "Nandanvar Krish";
    printf("Name: %s\n", name);

    const  float PI = 3.14159; //const is used to declare a constant variable whose value cannot be changed after initialization
    /*
    It is a good practice to use const for variables that should not be modified, as it helps prevent accidental changes and improves code readability and to prevent the values of constants like PI, e, etc.
    */
    printf("Value of PI: %.5f\n", PI);

    int i = 3.69;
    printf("Value of i: %d\n", i); // implicit type conversion, the decimal part will be truncated. It will generate a warning, not error. But it's not a good practice to assign a float value to an int variable. It can lead to loss of data and unexpected behavior in the program.

    return 0;
}