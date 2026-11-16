/*
Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.
*/

# include <stdio.h>
void slice(char *str, int m, int n) {
    int i = 0;
    while ((m + i) < n) {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
}

int main() {
    char str[100];
    int m, n;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter start and end positions for slicing: ");
    scanf("%d %d", &m, &n);

    slice(str, m, n);
    printf("Sliced string: %s\n", str);

    return 0;
}