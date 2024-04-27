#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int size = 100;
    char str[size];
    int i, n, words = 0;
    printf("Enter a string: ");
    fgets(str, size, stdin);
    n = strlen(str);
    if(n > 0) {
        words = 1;
    }
    for(i = 0; i < n; i++) {
        if(isspace(str[i]) && !isspace(str[i+1]) && str[i+1] != '\0'){
            words++;
        }
    }
    printf("Number of words: %d\n", words);
    return 0;
}