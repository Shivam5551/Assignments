#include <stdio.h>
int main() 
{
 int a[5] = {20,5,65,11,41};
 int max,min,i;
 max=a[0];
 min=a[0];
 
 for (i = 0; i < 5; i++) 
{
 if (max<a[i])
 { max=a[i];}
}
 for (i = 0; i < 5; i++) 
{
 if (min>a[i])
 { min=a[i];}
}
 
 printf("The Maximum Element in the Array is %d\n ",max);
 printf("The Minimum Element in the Array is %d\n",min);
return 0;
}