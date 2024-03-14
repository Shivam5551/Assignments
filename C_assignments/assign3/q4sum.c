#include <stdio.h>
//#include <conio.h>

int main() 
{
    int i, sum = 0;
    //clrscr();
    
    for(i = 1; i <= 10; i++) 
    {
        sum += i;
    }
    printf("Sum of first ten natural numbers: %d\n", sum);

    //getch();
    return 0;
}