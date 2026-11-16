/*
Write a program to encrypt a string by adding 1 to the ascii value of its characters.
*/

# include <stdio.h>
void encrypt(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] + 1;
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    encrypt(str);
    printf("Encrypted string: %s\n", str);

    return 0;
}