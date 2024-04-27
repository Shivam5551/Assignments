#include <stdio.h>
#include <string.h>

int main() {
    int size = 100;
    char str[5][size];
    char temp[size];
    int i, j;

    for(i = 0; i < 5; i++) {
        printf("Enter string: ");
        scanf("%s", str[i]);
    }

    for(i = 0; i < 5-1; i++) {
        for(j = 0; j < 5-i-1; j++) {
            if(strcmp(str[j], str[j+1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }
    printf("Sorted string:");
    for(i = 0; i < 5; i++) {
        printf(" %s ", str[i]);
    }printf("\n");
    return 0;
}