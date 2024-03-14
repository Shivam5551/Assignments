#include<stdio.h>
//#include <conio.h>

int main() {
    int n, temp, digits = 0;

    //clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        temp /= 10;
        digits++;
    }

    printf("Number of digits in %d: %d\n", n, digits);
    //getch();
    return 0;

}