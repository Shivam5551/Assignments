#include <stdio.h>
#include <stdlib.h>
int main() {
    char str[100];
    FILE *f = fopen("file.txt", "wb");
    if(f == NULL) {
        perror("Error");
        return 1;
    }
    printf("File opened successfully in binary write mode\n");
    printf("Enter content to file.txt: ");
    scanf("%s", str);
    fprintf(f, "%s", str);
    fclose(f);

    f = fopen("file.txt", "rb");
    if(f == NULL) {
        perror("Error");
        return 1;
    }
    printf("File opened successfully in binary read mode\n");
    printf("Displaying content of file: ");
    while ((fscanf(f, "%s", str)) != EOF)
    {
        printf("%s", str);    
    }
    printf("\n");
    return 0;
    
}