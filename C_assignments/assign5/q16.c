#include <stdio.h>

int rows = 2;
int cols = 2;

int main() {
    int matrix1[rows][cols];
    int Transpose[rows][cols];
    int i, j;

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element of matrix1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Transpose of matrix\n");
    for (i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            Transpose[i][j] = matrix1[j][i];
            printf("%d ", Transpose[i][j]);
        }printf("\n");
    }
}