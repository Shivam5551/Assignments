#include <stdio.h>

int sum(int n) {
    if(n == 0) {
        return 0;
    }
    return n+sum(n-1);
}

int main() {
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num); 
    res = sum(num);
    printf("Sum of %d natural numbers: %d\n", num, res);
    return 0;
}