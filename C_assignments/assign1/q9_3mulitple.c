/* Q9. Write a program to input an integer and display its first 3 multiples. */
#include <stdio.h>
//#include <conio.h>


int main()
{
    int num;
    //clrscr();
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("%d\n", num*1);
    printf("%d\n", num*2);
    printf("%d\n", num*3);
    //getch();
    return 0;
}