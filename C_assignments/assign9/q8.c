#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "rb");
    char c;
    int count = 0, is_word = 1, words= 0;
    if(file == NULL){
        perror("Error");
        return 1;
    }
    printf("File opened successfully in read mode\nContent of file\n");
    while((c = fgetc(file)) != EOF){
        printf("%c", c);
        count++;
        if (c != ' ' && c != '\t' && c != '\n') {
            is_word = 1;
        }
        else if ((c != ' ' || c != '\t' || c != '\n') && is_word) {
            words++;
            is_word = 0;
        }

    }
    printf("\nNumber of characters in file.txt: %d\n", count);
    printf("Number of words in file.txt: %d\n", words);
    return 0;
}