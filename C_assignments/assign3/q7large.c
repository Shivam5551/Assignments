#include <stdio.h>
//#include <conio.h>

int main() 
{
    int n, large = 0, i;
    //clrscr();

    printf("Enter 10 number: ");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &n);
        if(n > large) {
            large = n;
        }
    }
    printf("Largerst number is %d\n", large);
    //getch();
    return 0;
}