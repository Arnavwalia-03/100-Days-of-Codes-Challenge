/*Search for an element in an array using linear search.*/
#include <stdio.h>
int main() {
    int arr[10], i, n, element, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Element found at index %d\n", i);
    } else {
        printf("Element not found\n");
    }
    return 0;
}