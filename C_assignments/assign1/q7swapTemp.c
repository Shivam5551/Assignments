/*Q7. Write a program to swap two numbers using third variable. */
#include <stdio.h>
//#include <conio.h>

int main()
{
    int num1, num2, temp;
    //clrscr();
    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    printf("Before Swapping\nNum1 : %d\nNum2 : %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping\nNum1 : %d\nNum2 : %d\n", num1, num2);
    //getch();
    return 0;
}