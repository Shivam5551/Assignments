#include <stdio.h>

int main() {
    char c[200];
    FILE *file = fopen("file.txt", "a");
    if(file == NULL) {
        printf("Unable to open file.txt");
        return 1;
    }
    printf("File opened successfully in append mode\n");

    printf("Enter a line to file.txt: ");
    fgets(c, 200, stdin);
    fprintf(file, "%s\n", c);
    fclose(file);

    file = fopen("file.txt", "r");
    if(file == NULL) {
        printf("Unable to open file.txt for reading");
        return 1;
    }
    
    printf("File opened successfully in read mode\n");
    
    while((fscanf(file, "%s", c)) != EOF){
        printf("%s", c);
    }
    printf("\n");
    fclose(file);
    return 0;
}