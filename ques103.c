/*write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int left_sum = 0;
    int pivot_index = -1;
    for (int i = 0; i < n; i++) {
        // Calculate right sum by subtracting left sum and current element from total sum
        int right_sum = total_sum - left_sum - arr[i];
        if (left_sum == right_sum) {
            pivot_index = i;
            break;
        }
        left_sum += arr[i];
    }

    printf("Pivot index: %d\n", pivot_index);
    return 0;
}