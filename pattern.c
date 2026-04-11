#include <stdio.h>

int main() {
    int n = 6;   
    int i, j, k;
    int coef = 1;

    for(i = 0; i < n; i++) {

        
        for(k = 0; k < n - i; k++) {
            printf("  ");
        }

        coef = 1;

        
        for(j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}