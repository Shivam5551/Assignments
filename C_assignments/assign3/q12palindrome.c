#include<stdio.h>
//#include <conio.h>

int main() {
    int n, temp, reverse = 0, modulo;

    //clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        modulo = temp % 10;
        reverse = reverse * 10 + modulo;
        temp /= 10;
    }

    if(reverse == n) 
        printf("Number %d is Palindrome\n", n);
    else 
        printf("Number %d is not Palindrome\n", n);

    //getch();
    return 0;

}