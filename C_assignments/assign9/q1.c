#include <stdio.h>

int main() {
    
    char str[100];
    FILE *file = fopen("file.txt", "w");
    if(file == NULL) {
        printf("Unable to create file.txt");
        return 1;
    }
    printf("File created successfully\n");
    printf("Enter a line to file.txt: ");
    fgets(str, 100, stdin);
    fprintf(file, "%s\n", str);
    fclose(file);
    return 0;
}