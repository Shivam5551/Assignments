/* Q14. Write a program to convert inches into foot (1foot =12inches) */
#include <stdio.h>
//#include <conio.h>

int main()
{
    double inches = 0, foot = 0;
    //clrscr();
    printf("Enter length in inches : ");
    scanf("%lf", &inches);
    foot = inches/12;
    printf("Length in foot : %.2lf\n", foot);
    //getch();
    return 0;
}