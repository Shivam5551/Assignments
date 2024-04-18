#include <stdio.h>

int rows = 2;
int cols = 1;

int main() {
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sum[rows][cols];
    int i, j;

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element of matrix1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
            printf("Element of matrix2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of matrix1 and matrix2\n");
    for (i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }printf("\n");
    }
}