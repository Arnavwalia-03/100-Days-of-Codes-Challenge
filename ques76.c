/*Check if a matrix is symmetric*/
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10], transpose[10][10];
    int isSymmetric = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Not symmetric (must be square).\n");
        return 0;
    }

    // 1. Input original matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 2. Store transpose in the second matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 3. Compare both matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) break;
    }

    if (isSymmetric == 1)
        printf("The matrix is SYMMETRIC.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}

