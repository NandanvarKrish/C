/*
Write a program to check whether a given character is present in a string or not.
*/

# include <stdio.h>
# include <string.h>
int isCharacterPresent(char *str, char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return 1; // Character found
        }
        i++;
    }
    return 0; // Character not found
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to check: ");
    scanf(" %c", &ch);

    if (isCharacterPresent(str, ch)) {
        printf("The character '%c' is present in the string.\n", ch);
    } else {
        printf("The character '%c' is not present in the string.\n", ch);
    }

    return 0;
}