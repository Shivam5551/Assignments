#include <stdio.h>
#include <ctype.h>

int main() {
    int size = 100, i, times = 0, j;
    char str[size];
    char temp;
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};

    printf("Enter a sting: ");
    fgets(str, size, stdin);
    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; j < 5; j++) {
            temp = tolower(str[i]);
            if(temp == vowel[j]) {
                times++;
                break;
            }
        }
    }
    printf("Number of vowels in provided string: %d\n", times);
    return 0;
}