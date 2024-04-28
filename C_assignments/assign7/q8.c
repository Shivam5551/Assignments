#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

int main() {
    int (*ptr_add)(int, int) = add;
    int (*ptr_subtract)(int, int) = subtract;

    int result_add = ptr_add(5, 3);
    int result_subtract = ptr_subtract(5, 3);

    printf("Result of addition: %d\n", result_add);
    printf("Result of subtraction: %d\n", result_subtract);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
