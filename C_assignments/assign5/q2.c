#include <stdio.h>
//#include<conio.h>
int main() {
 float prices[5];
 float sum = 0, product = 1, average;
 int i;
 printf("Enter prices of 5 items:\n");
 for ( i = 0; i < 5; i++) {
 printf("Enter price for item %d: ", i + 1);
 scanf("%f", &prices[i]);
 sum += prices[i];
 product *= prices[i];
 average = sum / 5;
 }
 printf("\nSum of prices: %.2f\n", sum);
 printf("Product of prices: %.2f\n", product);
 printf("Average price: %.2f\n", average);
 //getch();
 return 0;
}