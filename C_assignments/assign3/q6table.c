#include <stdio.h>
//#include <conio.h>

int main() 
{
    int n, i;    
    //clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < 11; i++) 
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    //getch();
    return 0;
}