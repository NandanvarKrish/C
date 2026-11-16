/*
Write a program to illustrate the use of arrow operator → in C.
*/

# include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main() {

    struct employee e1 = {101, 96.69, "Krish"};
    struct employee *ptr;
    ptr = &e1;

    ptr -> code;
    printf("%d\n", ptr);

    return 0;
}