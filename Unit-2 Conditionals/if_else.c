# include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your age is %d, you are now an adult.\n", age);
    }
    else
    {
        printf("Your age is %d, you are still a minor.\n", age);
    }
}