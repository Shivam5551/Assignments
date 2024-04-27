#include <stdio.h>

int factorial(int num) {
    if(num == 1 || num == 0) {
        return 1;
    }
    return num*factorial(num-1);
}

void printFactorial(int num, int fact) {
    printf("Factorial of %d: %d\n", num, fact);
}

void getNumber() {
    int num; 
    int fact;
    printf("Enter a number for it's factorial: ");
    scanf("%d", &num);
    fact = factorial(num);
    printFactorial(num, fact);
}


int main() { 
    getNumber();
    return 0;
}