/*Delete an element from an array.*/
#include <stdio.h>

int main() {
    int arr[100], size, element, position, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be deleted: ");
    scanf("%d", &element);
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }
    if (i == size) {
        printf("Element not found!\n");
        return 1;
    }
    for (i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}