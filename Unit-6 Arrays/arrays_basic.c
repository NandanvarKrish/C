# include <stdio.h>

int main() {
    // int arr[5] = {1, 2, 3, 4, 5};

    // printf("%d\n", arr[0]);

    // int marks[90];
    char name[20]; 
    float percentile[90];

    // marks[0] = 33;
    // marks[1] = 12;

    // printf("Enter the marks of student 1: ");
    // scanf("%d", &marks[0]);
    // printf("%d\n", marks[0]);

    int cgpa[3] = {9, 8, 8};
    float marks[] = {33, 40};

    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        printf("%f\n", marks[i]);
    }
}