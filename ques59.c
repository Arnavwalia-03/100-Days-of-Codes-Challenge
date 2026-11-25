/*Count even and odd numbers in an array.*/
#include <stdio.h>
int main() {
    int arr[10], i, n, evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Number of even elements in the array is: %d\n", evenCount);
    printf("Number of odd elements in the array is: %d\n", oddCount);
    return 0;
}