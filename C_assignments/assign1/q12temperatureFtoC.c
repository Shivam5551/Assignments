/* Q12. Write a program to convert Fahrenheit temperature to Celsius 
temperature (C= (F- 32) * 5/9 )
*/
#include <stdio.h>
//#include <conio.h>

int main()
{
    double C, F;
    //clrscr();
    printf("Enter temperature(F) : ");
    scanf("%lf", &F);
    C= (F- 32) * 5/9;
    printf("Temperature(C): %.2lf\n", C);
    //getch();
    return 0;
}