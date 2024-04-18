#include <stdio.h>
int main() {
 int m[10];
 int s,pos,i;
 
 printf("Enter marks for 10 students\n");
 for ( i = 0; i < 10; ++i) {
 printf("Enter marks for student %d: ", i + 1);
 scanf("%d", &m[i]);
 }
 
 printf("Enter the mark to search: ");
 scanf("%d", &s);
 
 pos = 0;
 for ( i = 0; i < 10; ++i) {
if (m[i] == s)
 {
 pos = i + 1;
 break;
}
 }
 if (pos != 0) {
printf("Mark %d found at position %d.\n", s, pos);
 } else {
printf("Mark %d not found. Error!\n", s);
 }
 return 0;
}