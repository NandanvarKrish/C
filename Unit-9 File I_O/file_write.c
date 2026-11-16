# include <stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("main.txt", "w");

    int num = 69;
    char text[] = "This is written using FILE I/O Wirte mode.";

    // fprintf(fptr, "%d\n", num);
    fprintf(fptr, "%s", text);
    fclose(fptr);

    return 0;
}