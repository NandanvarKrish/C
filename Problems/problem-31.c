/*
Write a program containing functions which counts the number of positive
integers in an array.
*/

# include <stdio.h>

int countPositive(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {-1, 2, -3, 4, 5, -6, 7, 8, -9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int positiveCount = countPositive(arr, size);

    printf("Number of positive integers in the array: %d\n", positiveCount);

    return 0;
}