# include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main() {

    struct employee e1 = {101, 91.69, "Krishna"};
    struct employee *ptr;
    ptr = &e1;

    printf("%d\n", (*ptr).code);


    (*ptr).code;
    ptr -> code; //Arrow operator
    return 0;
}