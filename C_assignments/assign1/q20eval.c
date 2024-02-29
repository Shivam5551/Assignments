/* Q20 . Write a program to evaluate the expression 
 6*2/ (2+1 *2/3+6) + 8* (8/4)
 */
#include <stdio.h>
//#include <conio.h>

int main()
{
    int a = 6, b = 2, c = 1, d = 3, e = 8, f = 4;
    double expression = 0;
    //clrscr();
    expression = a*b/ (b+c *b/d+a) + e* (e/f);
    printf("Result of experession : %lf\n", expression);
    //getch();
    return 0;
}