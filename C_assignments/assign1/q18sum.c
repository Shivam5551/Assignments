/* Q18. Write a program to find the sum of five digit number.  */
#include <stdio.h>
//#include <conio.h>

int main()
{
    long int n1, n2;
    long int sum = 0;
    //clrscr();
    printf("Enter 2 Numbers : ");
    scanf("%li%li", &n1, &n2);
    sum = n1 + n2;
    printf("Sum : %li\n", sum);
    //getch();
    return 0;
}