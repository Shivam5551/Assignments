#include <stdio.h>

void area() {
    float r, area;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = r*r*22/7;
    printf("Area of circle: %.2f\n", area);
}
int main() {
    area();
    return 0;
}