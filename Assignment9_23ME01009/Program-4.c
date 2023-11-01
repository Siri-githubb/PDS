#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    char *ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++; 
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
