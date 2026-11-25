/*Print all sub-strings of a string*/
#include <stdio.h>
int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Calculate the length of the string
    for (len = 0; str[len] != '\0'; len++);

    printf("Sub-strings:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}