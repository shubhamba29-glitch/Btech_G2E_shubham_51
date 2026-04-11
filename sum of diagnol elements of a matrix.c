#include <stdio.h>

int main() {
    int m, n, i, j;
    int arr[100][100];
    int sum = 0;

    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    if(m != n) {
        printf("Diagonal sum is defined only for square matrix.\n");
    } else {
        
        for(i = 0; i < n; i++) {
            sum += arr[i][i];
        }

        printf("Sum of diagonal elements = %d\n", sum);
    }

    return 0;
}