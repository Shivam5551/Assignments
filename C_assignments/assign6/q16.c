#include <stdio.h>
#include <ctype.h>

#define size 100

int main() {

    char str[size];
    int i;
    printf("Enter a string in caps: ");
    fgets(str, size, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
        str[i] += 32;
        }    
    }

    printf("String: %s\n", str);


    return 0;
    

}