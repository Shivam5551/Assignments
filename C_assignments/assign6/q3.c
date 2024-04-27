#include <stdio.h>
#include <math.h>

int checkArmstrong(int n) {
    int temp = n;
    int digits = 0, rem, sum = 0, i;
    while(temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    for(i = 0; i < digits; i++) {
        rem = temp % 10;
        temp /= 10;
        sum += pow(rem, digits);
    }
    if(sum == n) {
        return 1;
    }
    return 0;


}

int main() {
    int num;
    int check;
    printf("Enter a number: ");
    scanf("%d", &num);

    check = checkArmstrong(num);
    if(check == 1) {
        printf("Number is armstrong\n");
    }
    else {
        printf("Number is not armstrong\n");
    }
    return 0;    
}