#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], sum[m][n];
    int product[m][n];

   
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

   
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            product[i][j] = 0;
            for(k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    printf("Sum of matrices:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

   
    printf("Product of matrices:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}