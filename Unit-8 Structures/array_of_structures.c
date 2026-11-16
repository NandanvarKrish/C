# include <stdio.h>
# include <string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main() {

    struct employee meta[100];

    meta[0].code = 101;
    meta[0].salary = 91.69;
    strcpy(meta[0].name, "Krishna");

    meta[1].code = 102;
    meta[1].salary = 85.50;
    strcpy(meta[1].name, "Ravi");

    puts("Employee Details:");
    for (int i = 0; i < 2; i++) {
        printf("======================\n");
        printf("Code: %d\n", meta[i].code);
        printf("Salary: %.2f\n", meta[i].salary);
        printf("Name: %s\n", meta[i].name);
        printf("======================\n");
    }


    return 0;
}