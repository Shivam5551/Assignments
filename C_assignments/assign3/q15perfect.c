#include <stdio.h>
//#include <conio.h>

int main() 
{
    int n, i, sum = 0;

    //clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("%d is not a positive number. So, it is not perfect number\n", n);
    }

    else {
        for(i = 1; i <= n/2 ; i++){
            if(n %i == 0) {
                sum += i;
            }
        }

        if(sum == n){
            printf("%d is perfect number\n", n);
        }
        else 
            printf("%d is not a perfect number\n", n);
    }
    //getch();
    return 0;
}