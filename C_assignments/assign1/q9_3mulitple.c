/* Q9. Write a program to input an integer and display its first 3 multiples. */
#include <stdio.h>
//#include <conio.h>

#define TIMES 3

int main()
{
    int num, i;
    //clrscr();
    printf("Enter Number : ");
    scanf("%d", &num);
    for (i = 1; i <= TIMES; i++) 
    {
        printf("%d\n", num*i);
    }
    //getch();
    return 0;
}