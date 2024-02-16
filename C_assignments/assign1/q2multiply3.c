/* Q2. Write a program to accept three numbers multiply all three
 Numbers and print the result */
#include <stdio.h>
//#include <conio.h>

int main()
{
    int a, b, c;
    double res;
    //clrscr();
    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    res = a*b*c;
    printf("Multiplication of 3 numbers : %.2f \n", res);
    //getch();
    return 0;
}