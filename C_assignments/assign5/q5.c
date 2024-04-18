#include <stdio.h>
int main() 
{
 int a[10];
 int even=0,odd=0;
 int i;
 
 printf("Enter 10 integers\n");
 for (i = 0; i < 10; i++) {
 printf("Enter integer %d: ", i + 1);
 scanf("%d", &a[i]);}
 
 for (i = 0; i < 10; i++) 
{
 if (a[i]%2==0)
 { even++;}
 else
 { odd++;}
}
 printf("Their are %d Odd Element in the Array and \nTheir are %d Even Element in the Array\n",odd,even);
 return 0;
}