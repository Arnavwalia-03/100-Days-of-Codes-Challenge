/*Count spaces, digits, and special characters in a string.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            specials++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}