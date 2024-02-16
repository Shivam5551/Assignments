/* Q15. Write a program to calculate the area of right angled triangle ( Area = ½* B* h) */
#include <stdio.h>
//#include <conio.h>

int main()
{
    float base, height;
    double area;
    //clrscr();
    printf("Enter base of triangle : ");
    scanf("%f", &base);
    printf("Enter height of triangle : ");
    scanf("%f", &height);
    area = (base * height)/2;
    printf("Area of triangle : %.2lf\n", area);
    
    //getch();
    return 0;

}