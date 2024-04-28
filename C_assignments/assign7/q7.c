#include <stdio.h>

int *smaller(int *a, int *b) {
    if(*a > *b) {
        return b;
    }
    else return a;
}

int main() {
    int a, b;
    int *ptr;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    ptr = smaller(&a, &b);
    printf("Address of smaller number: %p\nValue at this address: %d\n", ptr, *ptr);
    return 0;
}