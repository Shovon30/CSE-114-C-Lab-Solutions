#include <stdio.h>
int main() {
    int i, j, rows, cols;
    printf("number of rows and columns: \n");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], sub[rows][cols];

    printf("elements of Matrix A:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("elements of Matrix B:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sub[i][j] = A[i][j] - B[i][j];;

    printf("Substraction of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }

    return 0;
}
