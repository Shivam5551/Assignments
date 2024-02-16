/* Q21. Write a program bitwise AND, OR, XOR, left shift and Right shift.*/

#include <stdio.h>
//#include <conio.h>

int main()
{
    int num1 , num2;
    int Result = 0;
    //clrscr();

    printf("Enter 2 numbers : ");
    scanf("%d%d", &num1, &num2);

    //AND 
    Result = num1 & num2;
    printf("Result of AND operator : %d\n", Result);

    //OR 
    Result = num1 | num2; 
    printf("Result of OR operator : %d\n", Result);

    //XOR 
    Result = num1 ^ num2;
    printf("Result of XOR operator : %d\n", Result);

    //Left Shift 
    Result = num1 << 1;
    printf("Left Shift of Number1(%d) : %d\n", num1, Result);

    //Right Shift 
    Result = num1 >> 1;
    printf("Right Shift of Number1(%d): %d\n", num1, Result);

    //getch();
    return 0;
}