/* Q11. Write a program to convert Celsius temperature to Fahrenheit
 Temperature ( F = 1.8*C+32 ) */
#include <stdio.h>
//#include <conio.h>

int main()
{
    double C, F;
    //clrscr();
    printf("Enter temperature(C) : ");
    scanf("%lf", &C);
    F = 1.8*C+32;
    printf("Temperature(F): %.2lf\n", F);
    //getch();
    return 0;
}