#include <stdio.h>

int main() {
    int num1;

    printf("Enter first number: ");
    scanf("%d", &num1);

    if (num1/2) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
