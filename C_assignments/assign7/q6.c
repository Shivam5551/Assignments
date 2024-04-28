#include <stdio.h>

int main() {
    int size = 5, i;
    int arr[] = {5, 3, 5, 10, 1};
    int *ptr[size];

    for(i = 0; i < size; i++) {
        ptr[i] = &arr[i];
    }
    printf("Displaying address of array variables\n");
    for(i = 0; i < size; i++) {
        printf("%p\n", ptr[i]);
    }
    printf("Displaying values at the addresses stored in pointer array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", *ptr[i]);
    }
    printf("\n");
    return 0;
}