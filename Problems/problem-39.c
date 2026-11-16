/*
Write a program to decrypt a string by subtracting 1 from the ascii value of its characters.
*/

# include <stdio.h>
void decrypt(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] - 1;
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string to decrypt: ");
    scanf("%s", str);

    decrypt(str);
    printf("Decrypted string: %s\n", str);

    return 0;
}