#include <stdio.h>
#include <string.h>

#define size 100

int main() {
    int n, i;
    char str[size], strRev[size];
    char temp;

    printf("Enter a string: ");
    fgets(str, size, stdin);
    n = strlen(str);
    strcpy(str, strRev);
    for(i = 0; i < n/2; i++) {
        temp = strRev[i];
        strRev[i] = strRev[n-i-1];
        strRev[n-i-1] = temp;
    }
    if(strcmp(str, strRev) == 0) {
        printf("String is Palindrome\n");
    }
    else {
        printf("String is not Palindrome\n");
    }
    return 0;
}