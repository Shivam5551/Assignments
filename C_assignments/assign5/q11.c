#include <stdio.h>

int main() {
    int size = 100;
    char sent[size];
    
    printf("Enter Sentence: ");
    fgets(sent, size, stdin);
    printf("Enter Sentence is ");
    fputs(sent, stdout);
    return 0;
}