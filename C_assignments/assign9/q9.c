#include <stdio.h>

int main() {
    /*Write a program to copy a existing file in other file of different name*/
    char file1[] = "file1.txt";
    char file2[] = "file2.txt";
    char c;
    FILE *f1, *f2;
    f1 = fopen(file1, "r");
    if (f1 == NULL) {
        perror("Error");
        return 1;
    }
    printf("File1 opened successfully in reading mode\n");
    f2 = fopen(file2, "w");
        if (f1 == NULL) {
        perror("Error");
        return 1;
    }
    printf("File2 opened successfully in write mode\n");
    printf("Content of File1\n");
    while((c = fgetc(f1)) != EOF){
        printf("%c", c);
        fprintf(f2, "%c", c);
    }
    printf("\nContent of %s coppied successfully to %s\n", file1, file2);
    fclose(f1);
    fclose(f2);
    f2 = fopen(file2, "r");
        if (f1 == NULL) {
        perror("Error");
        return 1;
    }
    printf("File1 opened successfully in read mode\n");
    while ((c = fgetc(f2)) != EOF)
    {
        printf("%c", c);
    }printf("\n");
    fclose(f2);
    return 0;
    
}