/*
Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.
*/

# include <stdio.h>

int main() {
    int arr[3][10];

    // Fill the array with multiplication tables
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 0) {
                arr[i][j] = 2 * (j + 1); // Multiplication table of 2
            } else if (i == 1) {
                arr[i][j] = 7 * (j + 1); // Multiplication table of 7
            } else if (i == 2) {
                arr[i][j] = 9 * (j + 1); // Multiplication table of 9
            }
        }
    }

    // Print the multiplication tables
    printf("Multiplication tables:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}