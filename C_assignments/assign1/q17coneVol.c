/* Q17. Write a program to calculate volume of cone (volume of cone= 0.33 x 3.14 *r*r*h) */
#include <stdio.h>
//#include <conio.h>

#define PI 3.14

int main()
{
    float r, h;
    double vol;
    //clrscr();
    printf("Enter radius and height of cone : ");
    scanf("%f%f", &r, &h);
    vol = 0.33*PI*r*r*h;
    printf("Volume of cone : %lf\n", vol);
    //getch();
    return 0;
}