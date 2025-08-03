#include <stdio.h>

int main() {
    int i, j, rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], sum[rows][cols];

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum[i][j] = A[i][j] + B[i][j];

    printf("Summation of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
