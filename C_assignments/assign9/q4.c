#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    FILE *file = fopen("file.txt", "w");
    if(file == NULL) {
        printf("Unable to open file.txt");
        return 1;
    }
    printf("File created successfully now you can write in it\n");
    printf("Enter a character: ");
    c = getchar();
    fputc(c, file);
    fclose(file);
    file = fopen("file.txt", "r");
    if(file == NULL) {
        printf("Unable to open file.txt for reading");
        return 1;
    }
    printf("File opened successfully in read mode\n");
    printf("Printing the content of file.txt: ");
    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }printf("\n");

    fclose(file);
    
    return 0;
}