#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;


    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Percentage = %.2f\n", percentage);


    if (percentage >= 90 && percentage <= 100)
        printf("Grade: A\n");
    else if (percentage >= 80 && percentage < 90)
        printf("Grade: B\n");
    else if (percentage >= 60 && percentage < 80)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");

    return 0;
}