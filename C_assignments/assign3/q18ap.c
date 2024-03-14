#include <stdio.h>
//#include <conio.h>

int main() {
    int i, d = 3;

    //clrscr();

    for(i = 1; i <= 100; i += d) {
        printf("%d ", i);
    }
    printf("\n");

    //getch();
    return 0;
}