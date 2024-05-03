#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    FILE *file = fopen("file.txt", "w");
    if(file == NULL) {
        printf("Unable to create file.txt");
        return 1;
    }
    printf("File created successfully\n");
    fclose(file);
    file = fopen("file.txt", "r");
    printf("File is now open read mode\n");
    while(fscanf(file, "%c", &c) == 1) {
        printf("%c", c);
    }
    return 0;
}