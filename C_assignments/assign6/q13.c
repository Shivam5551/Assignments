#include <stdio.h>
#include <ctype.h>

int main() { 
    char ch;
    printf("Enter something: ");
    scanf("%c", &ch);
    if(isalpha(ch)){
        printf("%c is alphabhet\n", ch);
    }
    else if(isdigit(ch)) {
        printf("%c is numeric\n", ch);
    }
    else if(ispunct(ch)) {
        printf("%c is punctuation\n", ch);
    }
    else if(isblank(ch)) {
        printf("%c is space\n", ch);
    }
    else {
        printf("%c is not alphabet, numeric, punctuation, space\n", ch);
    }
    return 0;

}