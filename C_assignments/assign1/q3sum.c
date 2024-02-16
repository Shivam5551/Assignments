/* Q3. Write a program to read two numbers and display the sum.*/
#include <stdio.h>
//#include <conio.h>

int sum(int a, int b) { 
    return a+b;
}

int main()
{
    int a, b;
    int res = 0;
    //clrscr();
    printf("Enter 2 numbers : ");
    scanf("%d%d", &a, &b);
    res = sum(a, b);
    printf("Sum : %d \n", res);
    //getch();
    return 0;
}