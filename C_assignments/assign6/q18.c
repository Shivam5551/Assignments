#include <stdio.h>
#include <string.h>

#define size 100

int main() {
    int n, i;
    char str[size];
    char temp;

    printf("Enter a string: ");
    fgets(str, size, stdin);
    n = strlen(str);

    for(i = 0; i < n/2; i++) {
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    printf("Reverse of string: %s\n", str);
}