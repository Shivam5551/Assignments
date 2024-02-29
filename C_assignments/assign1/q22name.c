/* Q22. Write a program to input and print the name, age of student ( using strings ) */
#include <stdio.h>
//#include <conio.h>

int main()
{
    int age;
    char name[20];
    //clrscr();

    printf("What's your name? ");
    scanf("%s", name);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Hello, %s!\nYou are %d yrs old.\n", name, age);

    //getch();
    return 0;
}