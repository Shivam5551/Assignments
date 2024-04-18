#include <stdio.h>

int main() {
    int marks[2][3]; 
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter marks of student %d in subject %d : ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Marks of student %d in subject %d : %d\n", i+1, j+1, marks[i][j]);
        }
    }
    return 0;
}