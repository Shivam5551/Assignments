#include <stdio.h>
#include <string.h>

char *string(char *str) {
    const char add[] = "world";
    str[strlen(str)-1] = ' ';
    strcat(str, add);
    return str;
}

int main() {
    int size = 100;
    char str[size];
    printf("Enter a string: ");
    fgets(str, size, stdin);

    string(str);

    printf("Changes in string after passing to string function: \"%s\"\n", str);
    return 0;

}