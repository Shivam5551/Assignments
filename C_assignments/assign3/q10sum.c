#include<stdio.h>
//#include <conio.h>

int main() {
    int n, temp, sum = 0, modulo;

    //clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        modulo = temp % 10;
        sum = sum + modulo;
        temp /= 10;
    }

    printf("Sum of digits in %d: %d\n", n, sum);
    //getch();
    return 0;

}