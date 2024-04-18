#include <stdio.h>

int main() {
    int rows = 2, cols = 2;
    int matrix[rows][cols];
    int i, j;
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter Element of matrix[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix \n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }printf("\n");
    }
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(i==j) {
                matrix[i][j] = 0;
            }
        }
    }
    printf("Elements of right diagonal of Matrix is zero\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }printf("\n");
    }
    return 0;
}