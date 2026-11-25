#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int flag = 1; // 1 means all diagonal elements are different

    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);

    // Taking input into the 2D array
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking if any two diagonal elements are the same
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                flag = 0; // Duplicate found
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    // Printing the result
    if (flag == 1) {
        printf("All diagonal elements are different.\n");
    } else {
        printf("Diagonal elements are not all different.\n");
    }

    return 0;
}
