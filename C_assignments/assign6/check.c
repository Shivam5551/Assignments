#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "aello";
    char b[] = "ao";
    int z = strcmp(a, b);
    printf("%d", z);
    return 0;
}