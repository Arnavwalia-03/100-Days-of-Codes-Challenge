/*Print the initials of a name.*/
#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter a full name: ");
    scanf("%[^\n]", name);

    printf("Initials: ");

    if (name[0] != ' ' && name[0] != '\0') {
        if (name[0] >= 'a' && name[0] <= 'z') {
            printf("%c ", name[0] - 32);
        } else {
            printf("%c ", name[0]);
        }
    }

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            if (name[i + 1] >= 'a' && name[i + 1] <= 'z') {
                printf("%c ", name[i + 1] - 32);
            } else {
                printf("%c ", name[i + 1]);
            }
        }
        i++;
    }

    printf("\n");

    return 0;
}

