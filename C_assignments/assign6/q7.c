#include <stdio.h>

float average(int marks[], int size) {
    int i, sum = 0;
    for(i = 0; i < size; i++) {
        sum += marks[i];
    }
    return (float)sum/size;
}

int main() {
    int marks[5]; 
    int i;
    float avg;
    for(i = 0; i < 5; i++) {
        printf("Enter marks of subject%d: ", i+1); 
        scanf("%d", &marks[i]);
    }
    avg = average(marks, 5);
    printf("Avearge: %f\n", avg);
    return 0;
}