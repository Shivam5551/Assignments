#include <stdio.h>
//#include <conio.h>

int main() {
    int arr[5];
    int i = 0;
    //clrscr();
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 4; i >= 0; i--) { 
        printf("a[%d]: %d\n", i, arr[i]);
    }
    //getch();
    return 0;
}