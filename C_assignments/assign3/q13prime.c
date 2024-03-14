#include <stdio.h>
//#include <conio.h>

int main()
{
    int n, i;

    //clrscr();

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n <= 1) 
        printf("%d is not a prime number\n", n);

    else {
        for(i = 2; i*i <= n; i++){
            if(n%i == 0)
            {
                printf("%d is not a prime number\n", n);
                //getch();
                return 1;
            }
        }
        printf("%d is a prime number\n", n);
    }

    //getch();
    return 0;
}