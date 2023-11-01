#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int consonants = 0, vowels = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    char *ptr = str;

    while (*ptr) {
        char ch = tolower(*ptr); 

        if (ch >= 'a' && ch <= 'z') {
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        ptr++;
    }

    printf("Number of consonants: %d\n", consonants);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}
