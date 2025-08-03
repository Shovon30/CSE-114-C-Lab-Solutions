#include <stdio.h>
#include <math.h>
int main()
{
    int a[3][3], b[3][2], result[3][2];
    int i,j,k;
    
    printf("elements of first matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("elements of second matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            result[i][j] = 0;
            for(k=0; k<3; k++){
                result[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }

    printf("Resulting 3x2 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}