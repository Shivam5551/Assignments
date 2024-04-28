#include <stdio.h>

int main() {
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("Address of variable a: %p\n", ptr);
    printf("Value at address %p: %d\n", ptr, *ptr);
    return 0;
}