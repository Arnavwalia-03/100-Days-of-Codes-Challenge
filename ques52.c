#include <stdio.h>

int main() {
    for (int i = 1; i <= 13; i++) {
        printf("*\n");
        for (int j = 0; j < i; j++) {
            printf("\n");
        }
    }
    return 0;
}

