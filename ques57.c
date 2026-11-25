/*Find the sum of array elements*/
#include <stdio.h>
int main() {
    int arr[10], i, n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements is: %d", sum);
    return 0;
}