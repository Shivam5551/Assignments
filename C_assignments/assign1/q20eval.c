/* Q20 . Write a program to evaluate the expression 
 6*2/ (2+1 *2/3+6) + 8* (8/4)
 */
#include <stdio.h>
//#include <conio.h>

int main()
{
    double expression = 0;
    //clrscr();
    expression = 6*2/ (2+1 *2/3+6) + 8* (8/4);
    printf("Result of experession : %lf\n", expression);
    //getch();
    return 0;
}