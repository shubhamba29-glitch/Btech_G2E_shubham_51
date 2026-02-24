#include <stdio.h>

int isLeapYear(int year) {

    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int month, year, days;

    
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number. Please enter a number between 1 and 12.\\n");
        return 1; 
    }

    
    switch (month) {
        case 2: 
            printf("Enter year: ");
            scanf("%d", &year);
            if (isLeapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            days = 30;
            break;
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            days = 31;
            break;
    }

    printf("Month %d has %d days.\\n", month, days);

    return 0;
}
