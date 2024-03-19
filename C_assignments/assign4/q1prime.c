#include <stdio.h>
//#include <conio.h>

int main()
{
    int num,i,div;
    //clrscr();
    for(num = 10; num <= 50; num++){
        div = 0;
        for(i = 1; i <= num; i++)
        {
            if(num%i == 0)
            {
                div++;
            }
        }
        if(div == 2) {
            printf("%d ", num);
        }
    }
    printf("\n");
    //getch();
    return 0;
}