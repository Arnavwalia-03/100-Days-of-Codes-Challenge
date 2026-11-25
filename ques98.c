/*Print initials of a name with the surname displayed in full*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, j = 0;

    printf("Enter a full name: ");
    scanf("%[^\n]", name);

    printf("Result: ");

    // Print the first initial
    if (name[0] != ' ' && name[0] != '\0') {
        if (name[0] >= 'a' && name[0] <= 'z') {
            printf("%c ", name[0] - 32);
        } else {
            printf("%c ", name[0]);
        }
    }

    // Find the last space (surname)
    while (name[i] != '\0') {
        if (name[i] == ' ') {
            j = i;
        }
        i++;
    }

    // Print the surname
    i = j + 1;
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }

    printf("\n");

    return 0;
}
