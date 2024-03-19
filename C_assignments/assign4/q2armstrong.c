#include <stdio.h>
#include <math.h>
//#include <conio.h>

int main() {
    int temp, result, digits, i, rem;

    for(i = 100; i <= 1000; i++){
        temp = i;
        digits = 0;
        result = 0;

        while(temp > 0)
        {
            temp /= 10;
            ++digits;
        }
        temp = i;
        while(temp > 0) {
            rem = temp % 10;
            result += pow(rem, digits);
            temp /= 10;
        }

        if(result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    //getch();
    return 0;
}