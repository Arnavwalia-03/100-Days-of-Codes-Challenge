/*Find the second largest element in an array*/
#include <stdio.h>

int main() {
    int arr[100], size, i, largest, secondLargest;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }
    largest = arr[0];
    secondLargest = arr[1];
    if (secondLargest > largest) {
        largest = arr[1];
        secondLargest = arr[0];
    }
    for (i = 2; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("The second largest element is %d\n", secondLargest);
    return 0;
}