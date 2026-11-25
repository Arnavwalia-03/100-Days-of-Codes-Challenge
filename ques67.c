/*Insert an element in an array at a given position*/
#include <stdio.h>

int main() {
    int arr[100], size, element, position, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position where the element is to be inserted: ");
    scanf("%d", &position);
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    size++;
    printf("Array after insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}