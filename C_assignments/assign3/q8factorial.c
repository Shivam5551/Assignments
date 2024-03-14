#include <stdio.h>
//#include <conio.h>

int main() 
{
    int n, i;
    long int fac = 1;
    //clrscr();
    printf("Enter a number for it's factorial: ");
    scanf("%d", &n);
    if (n == 0) 
    {
        printf("Factorial of %d: %ld\n", n, fac);
    }
    else {
        for(i = 1; i <= n; i++) 
        {
            fac = fac*i;
        }
        printf("Factorial of %d: %ld\n", n, fac);
    }
    //getch();
    return 0;
}