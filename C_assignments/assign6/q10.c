#include <stdio.h>
#include <math.h>

int main() { 
    int exp, num, res, i;
    printf("Enter a number and it's power to check pow function: ");
    scanf("%d%d", &num, &exp);
    res = pow(num, exp);
    printf("Answer using math library: %d\n", res); 
    res = 1;
    for(i = 0; i < exp; i++) {
        res *= num;
    }
    printf("Answer without using math library: %d\n", res);
    printf("Enter a number for it's absolute value: ");
    scanf("%d", &num);
    res = fabs(num);
    printf("Absolute value of %d using (fabs) math library function: %d\n", num ,res);
    if(num < 0) {
        res = -1*num;
    }
    printf("Absolute value of %d without using math library: %d\n", num, res);
    return 0;
}