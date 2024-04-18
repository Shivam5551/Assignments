#include <stdio.h>

int main ()
{
 int foo [ ] = {16, 2, 77, 40, 5};
 int n, result=0;
for ( n=0 ; n<5 ; ++n )
 {
result += foo[n];
}
printf("Result is: %d", result);
printf("\n");
return 0; 
}