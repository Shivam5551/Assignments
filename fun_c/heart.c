#include <stdio.h>
//#include <conio.h>

#define RED "\x1b[31m"

int main()
{
	int i, j, k;
	//clrscr();
	k = 4;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j <= 2-i; j++)
		{
			printf(" ");
		}
		for(j = 0; j <= i+1; j++)
		{
			printf(" \3", RED);
		}
		for(j = 0; j < k; j++)
		{
			printf(" ");
		}
		for(j = 0; j <= i+1; j++)
		{
			printf(" \3", RED);
		}printf("\n");
		k -= 2;
	}
	for(i = 0; i <= 4; i++)
	{
		k = i;
		for(j = 0; j <= k+2; j++)
		{
			printf(" ");
		}
		for(j = 0; j <= (4- i)+1; j++)
		{
			printf(" \3", RED);
		}

		printf("\n");
	}printf("\t \3\n", RED);
//getch();
return 0;
}