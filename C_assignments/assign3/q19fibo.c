#include <stdio.h>
//#include <conio.h>

int main() {
    int a, b, n, temp = 0, i;
    //clrscr();

    printf("Enter the end point of Fibonacii series: ");
    scanf("%d", &n);

    a = 1;
    b = 1;
    printf("%d %d ", a, b);
    for(i = 3; i <= n; i++) {
        temp = b;
        b += a;
        a = temp;
        printf("%d ", b);
    }
    printf("\n");
    //getch();
    return 0;
}