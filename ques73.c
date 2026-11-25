/*Find the sum of each row of a matrix and store it in an array.*/
#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j, rowSums[10] = {0};
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }
    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }
    return 0;
}