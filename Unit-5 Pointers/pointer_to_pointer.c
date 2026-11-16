# include <stdio.h>

int main() {
    int x = 1;
    int *ptr = &x;
    int **ptr_to_ptr = &ptr;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value of ptr_to_ptr: %p\n", (void*)ptr_to_ptr);
}