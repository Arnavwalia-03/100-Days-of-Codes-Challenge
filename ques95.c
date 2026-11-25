/*check if one string is a rotation of another.*/
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter the first string: ");
    scanf("%[^\n]", str1);
    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    strcat(str1, str1); // Concatenate str1 with itself

    if (strstr(str1, str2) != NULL) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}