#include <stdio.h>
//#include <conio.h>

int main() 
{
    int i;
    
    //clrscr();
    printf("Even numbers from 1 to 20 in ascending order: ");
    for (i = 1; i <= 20; i++) 
    {
        if(i%2 == 0) printf("%d ", i);
    }
    printf("\n");
    //getch();
    return 0;
}