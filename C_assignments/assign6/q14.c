#include <stdio.h>
#include <string.h>

int main() {    
    int len;
    char *ptr;
    char str[] = "Hello, this is 6th assignment of Introduction to C programming";
    char key[] = "Introduction";
    len = strlen(str);
    printf("Length of string \"%s\" is %d\n", str, len);
    ptr = strstr(str, key);
    if (ptr != NULL) {
        printf("Substring found at position: %ld\n", ptr - str);
    }

    return 0;

}