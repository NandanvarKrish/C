# include <stdio.h>
# include <string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee e1 = {101, 91.69, "Krishna"};

    // e1.code = 101;
    // e1.salary = 91.69;
    // strcpy(e1.name, "Krishna");

    puts("Employee Details:");
    printf("Code: %d\n", e1.code);
    printf("Salary: %.2f\n", e1.salary);
    printf("Name: %s\n", e1.name);

    return 0;
}