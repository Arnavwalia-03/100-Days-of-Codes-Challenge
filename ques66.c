/*Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

int main() {
    int arr[100], size, element, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array in sorted order: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    for (i = size - 1; i >= 0 && arr[i] > element; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    size++;
    printf("Array after insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}