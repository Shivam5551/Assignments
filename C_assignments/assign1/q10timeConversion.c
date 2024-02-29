/* Q10 Write a program to convert seconds into hours, min and seconds. */
#include <stdio.h>
//#include <conio.h>

int main()
{
    long int sec, min,hrs;
    //clrscr();
    printf("Enter seconds : ");
    scanf("%ld", &sec);
hrs = sec / 3600;
min = (sec % 3600) / 60;
sec = (sec % 60);
    printf("Time : %ld hrs %ld mins %ld sec",hrs,min,sec);
    //getch();
    return 0;
}