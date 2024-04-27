#include <stdio.h>

int main() { 
    int size = 100, i, times = 0;
    char str[size];
    char key;
    printf("Enter a string: ");
    fgets(str, size, stdin);
    printf("Enter a character whose frequency you want to calculate: ");
    scanf("%c", &key);
    for(i = 0; str[i] != '\0'; i++) {
        if(key == str[i]) {
            times++;
        }
    }
    printf("Frequency of %c: %d\n", key, times);
    return 0;
}