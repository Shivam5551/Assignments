#include <stdio.h>
int main()
{
 int a[ ]={0,1,2,3,4,5,6,7,8,9,10};
 int i=0,num;
 num=a[++i+a[++i]]+a[++i];
 printf("%d",num);
 printf("\n");
return 0;
}