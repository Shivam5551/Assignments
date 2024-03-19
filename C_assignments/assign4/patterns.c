#include <stdio.h>
//#include <conio.h>

int i, j;
int n =5;

void pattern1() {
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("* ");
        }printf("\n");
    }
}

void pattern2() {
    for(i = 0; i < n; i++) {
        for(j = 0; j< n-i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern3() {
    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern4() {
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void pattern5() {
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern6() {
    for(i = 1; i <= n; i++) {
        for(j = 1; j<= n-i+1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern7() {
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if (i % 2 != 0) {
            printf("* ");
            }
            else {
                printf("$ ");
            }
        }printf("\n");
    }
}

void pattern8() {
    char a;
    for(i = 0; i < n; i++) {
        for(a = 'A'; a< 'A'+(n-i); a++) {
            printf("%c ", a);
        }
        printf("\n");
    }
}

void pattern9() {
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            printf("  ");
        }
        for(j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern10() {
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if (i % 2 == 0 || j %2 == 0) {
            printf("? ");
            }
            else {
                printf("* ");
            }
        }printf("\n");
    }
}

void pattern11() {
    for(i = 1; i <= n; i++) {
        for (j = 1; j<=n; j++) {
            if(i == 1 || j == 1 || j == n || i == n) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    pattern1();
    printf("\n");
    pattern2();
    printf("\n");
    pattern3();
    printf("\n");
    pattern4();
    printf("\n");
    pattern5();
    printf("\n");
    pattern6();
    printf("\n");
    pattern7();
    printf("\n");
    pattern8();
    printf("\n");
    pattern9();
    printf("\n");
    pattern10();
    printf("\n");
    pattern11();
    printf("\n");
    
}