/* Q13. Write a program to convert litre into gallon
 (Given 1 galon= 3.471 litre) */
#include <stdio.h>
//#include <conio.h>

int main()
{
    double galon, litre; 
    //clrscr();
    printf("Enter amount in galon : "); 
    scanf("%lf", &litre);
    galon = litre/3.471;
    printf("Amount in galon : %.2lf\n", galon);
    //getch();
    return 0;    
}