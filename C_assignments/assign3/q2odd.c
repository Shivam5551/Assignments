#include <stdio.h>
//#include <conio.h>

int main() 
{
    int i;    
    //clrscr();
    printf("Odd numbers from 1 to 20 in descending order: ");
    for(i = 20; i > 0; i--) 
    {
        if(i % 2 != 0) printf("%d ", i);
    }
    printf("\n");
    //getch();
    return 0;
}