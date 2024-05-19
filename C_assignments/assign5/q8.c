#include <stdio.h>
int main()
{
int a[100],i,j,n,temp;
printf("Enter the Number of element you want in the array: ");
scanf("%d",&n);
 if (n > 100) {
   printf("Max limit is 100. Invalid input\n");
   return 0;
 }
for(i=0;i<n;i++)
{ printf("Enter Number %d: ",i+1);
 scanf("%d",&a[i]); }
printf("The Original Array is: ");
for(i=0;i<n;i++)
{ printf("%2d",a[i]);}
for(i=0;i<n-1;i++)
{ for(j=0;j<n-1;j++)
{if (a[j]>a[j+1])
 {temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;}}}
printf("\nThe Array after Bubble Sort is: ");
for(i=0;i<n;i++)
{ printf("%2d",a[i]);}
printf("\n");
return 0;
}
