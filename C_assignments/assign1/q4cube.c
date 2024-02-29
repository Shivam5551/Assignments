/* Q4.Write a program enter a number and display its cube. */

#include <stdio.h>
//#include <conio.h>


int main()
{
    int a;
    //clrscr();
    printf("Enter a number for it's cube : ");
    scanf("%d", &a);
    printf("Cube : %li\n", (long)(a*a*a));
    //getch();
    return 0;
} 