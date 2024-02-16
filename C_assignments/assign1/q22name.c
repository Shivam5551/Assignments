/* Q22. Write a program to input and print the name, age of student ( using strings ) */
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main()
{
    int age;
    char *name = NULL;
    int length = 0;
    char ch;
    //clrscr();

    printf("What's your name? ");
    while ((ch = getchar()) != '\n') 
    {
        name = (char *)realloc(name, (length + 1) * sizeof(char));
        if (name == NULL) 
        {
            printf("Memory allocation failed. Exiting.\n");
            return 1;
        }
        name[length++] = ch;
    }
    name[length] = '\0';

    printf("How old are you? ");
    scanf("%d", &age);
    printf("Hello, %s!\nYou are %d yrs old.\n", name, age);

    //getch();
    return 0;
}