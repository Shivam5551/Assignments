#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Sum: %d\n", *ptr1 + *ptr2);
    printf("Difference: %d\n", *ptr1 - *ptr2);
    printf("Product: %d\n", *ptr1 * *ptr2);

    if (*ptr2 != 0) {
        printf("Quotient: %f\n", (float)*ptr1 / *ptr2);
        printf("Remainder: %d\n", *ptr1 % *ptr2);
    } else {
        printf("Cannot divide by zero\n");
    }

    return 0;
}
