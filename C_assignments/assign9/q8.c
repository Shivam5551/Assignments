#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "rb");
    char c;
    int count = 0;
    if(file == NULL){
        perror("Error");
        return 1;
    }
    printf("File opened successfully in read mode\nContent of file\n");
    while((c = fgetc(file)) != EOF){
        printf("%c", c);
        count++;
    }
    printf("\nCount: %d\n", count);
    return 0;
}