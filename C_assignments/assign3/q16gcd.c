#include <stdio.h>
//#include <conio.h>

int main() 
{
    int n1, n2, i, min, gcd = 1;

    //clrscr();

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    min = (n1 < n2) ? n1 : n2;

    for(i = 1; i <= min; i++)
    {
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }

    printf("GCD of %d and %d : %d\n", n1, n2, gcd);
    //getch();
    return 0;
}