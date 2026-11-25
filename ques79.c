/*Perform diagonal traversal of a matrix.*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, d;
    int matrix[10][10];

    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for (d = 0; d < rows + cols - 1; d++) {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (i + j == d) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
