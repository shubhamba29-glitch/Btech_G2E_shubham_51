#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int sum;
    float percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Calculate sum
    sum = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = sum / 5.0;

    // Output results
    printf("Sum = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
