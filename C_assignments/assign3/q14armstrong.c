#include <stdio.h>
//#include <conio.h>
#include <math.h>

int main()
{
    int n, digits = 0, result = 0, temp, rem;

    //clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        temp /= 10;
        ++digits;
    }
    temp = n;
    while(temp > 0) {
        rem = temp % 10;
        result += pow(rem, digits);
        temp /= 10;
    }

    if(result == n) {
        printf("%d is armstrong number\n", n);
    }
    else {
        printf("%d is not armstrong number\n", n);
    }
    //getch();
    return 0;
}