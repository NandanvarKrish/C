/*
Write your own version of strlen function from <string.h>
*/
#include <stdio.h>

int my_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char name[] = "Krish";
    printf("Length of the string is: %d\n", my_strlen(name));
    return 0;
}