#include <stdio.h>

int main() {
    int year;

    // Prompt user for input
    printf("Enter a year: ");

    // Validate input
    if (scanf("%d", &year) != 1) {
        printf("Invalid input. Please enter a valid integer year.\n");
        return 1; // Exit with error
    }

    // Leap year check
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
