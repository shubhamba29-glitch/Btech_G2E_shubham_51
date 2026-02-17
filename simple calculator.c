#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root1, root2, real, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Discriminant
    d = b*b - 4*a*c;

    if (d > 0) {
        // Real and different roots
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);

        printf("Roots are real and different\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (d == 0) {
        // Real and equal roots
        root1 = -b / (2*a);

        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        // Complex roots
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);

        printf("Roots are complex and imaginary\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}

