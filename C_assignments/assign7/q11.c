#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i, sum;
    int *arr;
    printf("Enter size of arr: ");
    scanf("%d", &size);
    arr = (int *)calloc(size, sizeof(int));
    if(arr == NULL) {
        printf("Memory Not allocated\n");
        return 1;
    }
    else {
        printf("Memory is allocated\n");
    }
    for(i = 0; i < size; i++) {
        printf("Enter value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++) {
        printf("Value of arr[%d]: %d\n", i, arr[i]);
        sum += arr[0];
    }
    printf("Enter size to Resize array: ");
    scanf("%d", &size);
    arr = (int *)realloc(arr, size*sizeof(int));
    if(arr == NULL) {
        printf("Memory Not allocated\n");
        return 1;
    }
    else {
        printf("Memory is allocated\n");
    }
    for(i = 0; i < size; i++) {
        printf("Enter value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++) {
        printf("Value of arr[%d]: %d\n", i, arr[i]);
        sum += arr[0];
    }

    free(arr);
    return 0;
}