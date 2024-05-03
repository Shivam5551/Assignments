#include <stdio.h>
#include <stdlib.h>

int main() {
    char c[200];
    char ch;
    int i, lines;
    FILE *file = fopen("file.txt", "a");
    if(file == NULL) {
        printf("Unable to open file.txt");
        return 1;
    }
    printf("File opened successfully in append mode\n");
    printf("Enter no. of lines you want to append at end of file: ");
    scanf("%d", &lines);
    getchar();
    for(i = 0; i < lines; i++) {
        printf("Enter a line %d to file.txt: ", i+1);
        fgets(c, 200, stdin);
        fprintf(file, "%s", c);
    }
    fclose(file);

    file = fopen("file.txt", "r");
    if(file == NULL) {
        printf("Unable to open file.txt for reading");
        return 1;
    }
    
    printf("File opened successfully in read mode\n");
    
    while((ch = fgetc(file)) != EOF){
        printf("%c", ch);
    }
    printf("\n");
    fclose(file);
    return 0;
}