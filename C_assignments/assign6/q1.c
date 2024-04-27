#include <stdio.h>

void sum() {
    int a, b, sum;
    printf("Enter 2 Numbers for their addition: ");
    scanf("%d%d", &a, &b);
    sum = a+b;
    printf("Sum: %d\n", sum);
}

int subtract() {
    int a, b, sub;
    printf("Enter 2 numbers for their subtraction: ");
    scanf("%d%d", &a, &b);
    sub = a - b;
    return sub;
}

void multiply(int a, int b) {
    printf("Multiplication: %d\n", a*b);
}

float divide(int a, int b) {
    if(b == 0) {
        printf("Cannot divide by zero\n");
    }
    return ((float)a/b);
}

int main() {
    int sub;
    int a, b, c;
    float res;
    //sum
    sum();
    //subtract
    c = subtract();
    printf("Subtraction: %d\n", c);
    //multiply
    printf("Enter 2 numbers for their multiplication: ");
    scanf("%d%d", &a, &b);
    multiply(a, b);
    //division
    printf("Enter 2 numbers for their division: ");
    scanf("%d%d", &a, &b);
    res = divide(a, b);
    printf("Division: %f\n", res);
    return 0;
}