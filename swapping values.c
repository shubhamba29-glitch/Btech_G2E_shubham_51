#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Output result
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
