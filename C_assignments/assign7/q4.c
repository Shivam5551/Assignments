#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    int **ptr_to_ptr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);
    printf("Value of num via pointer: %d\n", *ptr);
    printf("Address of ptr: %p\n", ptr_to_ptr);
    printf("Value of num via pointer to pointer: %d\n", **ptr_to_ptr);

    return 0;
}
