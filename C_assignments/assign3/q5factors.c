#include <stdio.h>
//#inlcude <conio.h>

int main() 
{
    int n, i;
    //clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(n%i == 0) 
            printf("%d, ", i);
    }
     printf("\n");
     //getch();
     return 0;
}