#include <stdio.h>
//#include <conio.h>


int main() {
    float len1, len2, brd1, brd2;
    double area1, area2, actualArea = 0, time;
    int rate = 2, hrs, min, sec;

    //clrscr();
    printf("Enter length and breadth of yard: ");
    scanf("%f%f", &len1, &brd1);
    printf("Enter length and breadth of house: ");
    scanf("%f%f", &len2, &brd2);
    area1 = len1*brd1;
    area2 = len2*brd2;
    actualArea  = area1 - area2;
    time = rate*actualArea;
    hrs = (int)time / 3600;
    min = ((int)time % 3600)/60;
    sec = (int)time % 60;
    printf("Time taken to cut %.2lf yard grass at %d rate: %d hrs %d min %d sec\n", actualArea, rate, hrs, min, sec);
    //getch();
    return 0;
}