/*Find the digit that occurs the most times in an integer number*/
#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0}; 

    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Most frequent digit: 0\n");
        return 0;
    }
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
    int maxCount = 0;
    int maxDigit = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }printf("Most frequent digit: %d\n", maxDigit);

    return 0;
}
