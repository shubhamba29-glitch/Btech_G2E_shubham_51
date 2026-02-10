#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in centigrade
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &celsius);

    // Conversion using formula: C/5 = (F-32)/9
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
