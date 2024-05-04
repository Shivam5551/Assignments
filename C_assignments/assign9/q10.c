#include <stdio.h>

int main() {
    /*Write a program to merge two files and write it in a new file*/
    FILE *f1, *f2, *f3;
    char c;
    f1 = fopen("file.txt", "r");
    if (f1 == NULL) {
        perror("Error");
        return 1;
    }
    printf("File1 opened successfully in reading mode\n");
    f2 = fopen("file1.txt", "r");
    if (f2 == NULL) {
        fclose(f1);
        perror("Error");
        return 1;
    }
    printf("File2 opened successfully in read mode\n");
    f3 = fopen("file2.txt", "w");
    if (f3 == NULL) {
        fclose(f1);
        fclose(f2);
        perror("Error");
        return 1;
    }
    printf("File3 opened successfully in write mode\nContent Stored in file3\n");
    fprintf(f3, "Content of file1\n");
    while(((c = fgetc(f1)) != EOF)) {
        fprintf(f3, "%c", c);
    }
    fprintf(f3, "\nContent of file2\n");
    while ((c = fgetc(f2)) != EOF)
    {
        fprintf(f3, "%c", c);
    }printf("Files merged successfully\n");    
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f3 = fopen("file2.txt", "r");
    if(f3 == NULL) {
        perror("Error");
        return 1;
    }
    while ((c = fgetc(f3)) != EOF)
    {
        printf("%c", c);
    }printf("\n");
    fclose(f3);
    
    return 0;
}