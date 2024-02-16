/* Q10 Write a program to convert seconds into hours, min and seconds. */
#include <stdio.h>
//#include <conio.h>

int main()
{
    double sec, min;
    //clrscr();
    printf("Enter seconds : ");
    scanf("%lf", &sec);
    printf("Sec in Hours : %.2f\n", (sec/3600));
    printf("Enter min : ");
    scanf("%lf", &min);
    printf("Min in Seconds : %.2f\n", (min*60));
    //getch();
    return 0;
}