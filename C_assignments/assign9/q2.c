#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    FILE *file = fopen("file.txt", "r");
    if(file == NULL) {
        printf("Unable to open file.txt");
        return 1;
    }
    printf("File opened successfully in read mode\n");
    while(fscanf(file, "%c", &c) == 1) {
        printf("%c", c);
    }
    return 0;
}