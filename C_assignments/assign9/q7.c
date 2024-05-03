#include <stdio.h>

int main() {
    /*Write a program to write and read 5 lines in a text file.*/
    FILE *file = fopen("file.txt", "w");
    int size = 200, i;
    char text[size];
    if(file == NULL) {
        perror("Error");
        return 1;
    }
    printf("File opened successfully in write mode\n");
    for(i = 0; i < 5; i++) {
        printf("Enter line %d: ", i+1);
        fgets(text, size, stdin);
        fprintf(file, "%s", text);
    }
    fclose(file);
    file = fopen("file.txt", "r");
    if(file == NULL) {
        perror("Error");
        return 1;
    }
    printf("File opened successfully in read mode\n");
    while(fgets(text, size, file) != NULL) {
        printf("%s", text);
    }
    printf("\n");
    return 0;

}