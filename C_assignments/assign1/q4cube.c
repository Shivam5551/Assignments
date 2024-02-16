/* Q4.Write a program enter a number and display its cube. */
#include <math.h>
#include <stdio.h>
//#include <conio.h>

#define power 3

int main()
{
    int a;
    //clrscr();
    printf("Enter a number for it's cube : ");
    scanf("%d", &a);
    printf("Cube : %li\n", (long)(pow(a, power)));
    //getch();
    return 0;
} 