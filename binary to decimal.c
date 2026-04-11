#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, i = 0, rem;
    int decimal, binary = 0, i = 1, rem;

    
   printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf("Decimal = %d\n", decimal);

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while(decimal != 0) {
        rem = decimal % 2;
        binary = binary + rem * i;
        decimal = decimal / 2;
        i = i * 10;
    }

    printf("Binary = %d\n", binary);

    return 0;
}