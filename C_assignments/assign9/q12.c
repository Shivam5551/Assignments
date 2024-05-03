#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *oldFile, *newFile;
    char tempFileName[] = "temp.txt";
    int lineNumberToDelete;
    char c;
    int currentLine = 1;

    oldFile = fopen("file.txt", "r");
    if (oldFile == NULL) {
        perror("Error opening file");
        return 1;
    }

    newFile = fopen(tempFileName, "w");
    if (newFile == NULL) {
        perror("Error creating temporary file");
        fclose(oldFile);
        return 1;
    }

    printf("Content of file\n");
    while ((c = fgetc(oldFile)) != EOF) {
        printf("%c", c);
        if (c == '\n') {
            currentLine++;
        }
    }
    printf("\n");

    printf("Enter line no. to be deleted: ");
    scanf("%d", &lineNumberToDelete);

    rewind(oldFile);

    currentLine = 1; 

    while ((c = fgetc(oldFile)) != EOF) {
        if (c == '\n') {
            currentLine++;
        }
        if (currentLine != lineNumberToDelete) {
            fprintf(newFile, "%c", c);
        }
    }

    fclose(oldFile);
    fclose(newFile);

    if (remove("file.txt") != 0) {
        perror("Error deleting old file");
        return 1;
    }
    if (rename(tempFileName, "file.txt") != 0) {
        perror("Error renaming temporary file");
        return 1;
    }

    printf("Line %d deleted successfully.\n", lineNumberToDelete);

    oldFile = fopen("file.txt", "r");
    if (oldFile == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Content of file after deletion\n");
    while ((c = fgetc(oldFile)) != EOF) {
        printf("%c", c);
    }
    printf("\n");

    fclose(oldFile);

    return 0;
}
