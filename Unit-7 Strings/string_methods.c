# include <stdio.h>
# include <string.h>

int main() {
    char name[] = "Krish";

    printf("Length of the string is: %lu\n", strlen(name));
    printf("String after concatenation: %s\n", strcat(name, "nandanvar"));
    printf("String after copying: %s\n", strcpy(name, "Hello"));
    printf("String after comparison: %d\n", strcmp(name, "Hello"));
    printf("String after finding character: %s\n", strchr(name, 'e'));
    return 0;
}