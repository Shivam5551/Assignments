#include <stdio.h>

int main() {
    char *str = "Hello, world!";
    char *ptr = str;

    printf("String printed using pointer: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    ptr = str;

    printf("String printed using array indexing: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
