#include <stdio.h>
//#include <conio.h>

int main() {
    float T = 0;
    float hrs = 0, min = 0;
    float time;

    //clrscr();

    printf("Enter Time: ");
    scanf("%f%f", &hrs, &min);

    
    time = hrs+(min/60);    
    T = ((4*time*time)/(time+2))-20;

    printf("Temperature in freezer in %d hrs %d : %.2f\n", (int)hrs, (int)min, T);
    //getch();
    return 0;

}