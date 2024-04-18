#include <stdio.h>
int main()
{
char sentence[30];

printf("Enter the sentence: ");
gets(sentence);
printf("The sentence is: ");
puts(sentence);
return 0;
}