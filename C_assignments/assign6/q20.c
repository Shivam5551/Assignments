#include <stdio.h>

int main() { 
    char c;
    for(c = 'A'; c <= 'Z'; c++) {
        printf("%c: %d ", c, int(c));
    }printf("\n");
    return 0;
}