#include <stdio.h>
int main() {
 int a[5], b[5], sum[5],i;
 
 printf("Enter 5 values for the first array:\n");
 for ( i = 0; i < 5; ++i) 
 {
 printf("Enter value %d: ", i + 1);
 scanf("%d", &a[i]);
 }
 
 printf("\nEnter 5 values for the second array:\n");
 for ( i = 0; i < 5; ++i) 
 {
 printf("Enter value %d: ", i + 1);
 scanf("%d", &b[i]);
 }
 
 for ( i = 0; i < 5; ++i) {
 sum[i] = a[i] + b[i];
 }
 printf("\nSum of arrays:\n");
 for ( i = 0; i < 5; ++i) {
 printf("%d + %d = %d\n", a[i], b[i], sum[i]);
 }
 return 0;
}