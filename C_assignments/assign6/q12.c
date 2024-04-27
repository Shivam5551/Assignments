#include <stdio.h>
#include <math.h>

double SUMFUNC(int x, int n) {
    if(n == 0) {
        return 1;
    }
    return ((pow(-1*x, n)/n) + SUMFUNC(x, n-1));
}

int main() {
    int x, n;
    double res;
    printf("Enter x and n: ");
    scanf("%d%d", &x, &n);
    res = SUMFUNC(x, n);
    printf("Reslut: %.2f\n", res);
    return 0;
}