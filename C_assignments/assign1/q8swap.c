/* Q8. Write a program to swap two numbers without using third variable */
#include <stdio.h>
//#include <conio.h>

int main()
{
    int n1, n2;
    //clrscr();
    printf("Enter Num1 : ");
    scanf("%d", &n1);
    printf("Enter Num2 : ");
    scanf("%d", &n2);    
    printf("Before Swapping\nNum1 : %d\nNum2 : %d\n", n1, n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("After Swapping\nNum1 : %d\nNum2 : %d\n", n1, n2);

}