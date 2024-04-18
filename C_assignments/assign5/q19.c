#include <stdio.h>

int main () {
    int rows = 3, cols = 3;
    int matrix[rows][cols];
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j< cols; j++) {
            printf("Enter Element matrix[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }printf("\n");
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if((i+j+1) == rows) {
                matrix[i][j] = 0;
            }
        }
    }
    printf("Elements of Left diagonal of Matrix is zero\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }printf("\n");
    }
}