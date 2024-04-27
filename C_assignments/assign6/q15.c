#include <stdio.h>

int strlengthCal(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    int size = 512;
    char str[size];
    int len = 0;
    printf("Enter a string: ");
    fgets(str, size, stdin);
    len = strlengthCal(str);
    printf("Length of string: %d\n", len);

    return 0;
}