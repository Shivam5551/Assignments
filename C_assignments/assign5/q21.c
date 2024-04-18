#include <stdio.h>

#define ROW_A 3
#define COL_A 2
#define ROW_B 2
#define COL_B 3

void matrix_multiply(int A[ROW_A][COL_A], int B[ROW_B][COL_B], int result[ROW_A][COL_B]) {
    int i, j, k;

    for (i = 0; i < ROW_A; i++) {
        for (j = 0; j < COL_B; j++) {
            result[i][j] = 0;
            for (k = 0; k < COL_A; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void display_matrix(int *matrix[ROW_A][COL_B]) {
    int i, j;
    for (i = 0; i < ROW_A; i++) {
        for (j = 0; j < COL_B; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[ROW_A][COL_A] = {{1, 2}, {3, 4}, {5, 6}};
    int B[ROW_B][COL_B] = {{1, 2, 3}, {4, 5, 6}};
    int result[ROW_A][COL_B];
    int i, j, k;


    for (i = 0; i < ROW_A; i++) {
        for (j = 0; j < COL_B; j++) {
            result[i][j] = 0;
            for (k = 0; k < COL_A; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResult of A * B:\n");
    for (i = 0; i < ROW_A; i++) {
        for (j = 0; j < COL_B; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
