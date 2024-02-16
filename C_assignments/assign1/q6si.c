/*Q6. Write a program to calculate the simple interest
(Formula SI = (P*R*T)/100 ;
 (Assume P,R,T as float /integer accordingly) 
 */
#include <stdio.h>
//#include <conio.h>

int main()
{
    float T, P, R;
    double SI;
    //clrscr();
    printf("Enter Principal , Rate And Time(years): ");
    scanf("%f%f%f", &P, &R, &T);
    SI = (P*R*T)/100;
    printf("SI : %f\n", SI);
    //getch();
    return 0;
}