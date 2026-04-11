#include <stdio.h>

int main() {
    int n, i;
    int evenSum = 0, oddSum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            evenSum += i;   
        else
            oddSum += i;    
    }

    
    printf("Sum of Even numbers = %d\n", evenSum);
    printf("Sum of Odd numbers = %d\n", oddSum);

    return 0;
}