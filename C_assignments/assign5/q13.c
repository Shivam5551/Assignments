#include <stdio.h>

int main() {
    int Sales[2][3]; 
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter Sales done by Salesman%d in month%d : ", i+1, j+1);
            scanf("%d", &Sales[i][j]);
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Sales done by Salesman%d in month%d : %d\n", i+1, j+1, Sales[i][j]);
        }
    }
    return 0;
}