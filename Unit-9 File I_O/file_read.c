# include <stdio.h>

int main() {

    FILE *ptr;
    int num;
    char ch;

    ptr = fopen("main.txt", "r");

    while ((ch = fgetc(ptr)) != EOF) {
        printf("%c", ch);
    }

    if (ptr == NULL) {
        printf("Error: Could not open file 'main.txt'. Does it exist?\n");
        return 1; // Return 1 to indicate the program ended with an error
    }

    fscanf(ptr, "%d", &num);

    printf("\nSuccessfully read the number: %d\n", num);

    fclose(ptr);

    return 0;
}