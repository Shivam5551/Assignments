/*Q16. Write a program to calculate the area and perimeter of circle 
    (Area= 3.14 V r*r) (Perimeter = 2*3.14*r) */
#include <stdio.h>
//#include <conio.h>

#define PI 3.14

int main() 
{
    float radius;
    double area, perimeter;
    //clrscr();
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    perimeter = 2*PI*radius;
    area = PI*radius*radius;
    printf("Perimeter of circle : %lf\nArea of circle : %lf\n", perimeter, area);

    //getch();
    return 0;
}