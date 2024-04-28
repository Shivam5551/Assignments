#include <stdio.h>

int main() {
    int i = 0;
    int arr[] = {5, 6, 7, 8, 9};
    int *ptr = &arr[0];
    for(i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("Address using pointer: %p\nDisplaying Values using pointer: %d\n", ptr+i, *(ptr+i));
        printf("Address using array: %p\nDisplaying values using array: %d\n", &arr[i], arr[i]);
    }
    return 0;
}