/*Find the longest word in a sentence.*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, curr_len = 0, max_len = 0;
    int curr_start = 0, max_start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (curr_len == 0) {
                curr_start = i;
            }
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = curr_start;
            }
            curr_len = 0;
        }

        if (str[i] == '\0') {
            break;
        }
        i++;
    }

    printf("Longest word: ");
    for (i = max_start; i < max_start + max_len; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", max_len);

    return 0;
}
