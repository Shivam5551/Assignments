#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    printf("Values of a and b before calling swap function %d, %d\n", a, b);
    swap(a, b);
    printf("Values of a and b after calling swap function by value %d, %d\n", a, b);
    return 0;
}