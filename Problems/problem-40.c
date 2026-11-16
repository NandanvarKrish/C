/*
Write a program to count the occurrence of a given character in a string.
*/
# include <stdio.h>
int countCharacter(char *str, char ch) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int result = countCharacter(str, ch);
    printf("The character '%c' occurs %d times in the string.\n", ch, result);

    return 0;
}