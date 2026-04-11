#include <stdio.h>

int main() {
    int n, i;
    int arr1[100], arr2[100], sum[100];

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

   
    for(i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    
    printf("Sum of arrays:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}