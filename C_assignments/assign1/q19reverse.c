/* Q19. Write a program to reverse a five digit number */
#include <stdio.h>
//#include <conio.h>

int main()
{
    long int num;
    long int temp, reverse = 0;
    int tmp = 0;
    //clrscr();
    printf("Enter a number : ");
    scanf("%li", &num);
    temp = num;
    while (temp > 0)
    {
        tmp = temp % 10;
        temp /= 10;
        reverse = reverse * 10 + tmp;
    }
    printf("Reverse of %li is %li\n", num, reverse);
    //getch();
    return 0;
}