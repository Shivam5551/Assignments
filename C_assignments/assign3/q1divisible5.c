#include <stdio.h>
//#include <conio.h>

int main() {
    int i;

    //clrscr();
    printf("Numbers divisible by 5 from 1 to 50: ");
    for(i = 1; i <=50; i++) 
    {
        if (i % 5 == 0) 
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
    //getch();
    return 0;
}