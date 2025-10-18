#include <stdio.h>

int main() {
    int monthNumber, year;
    
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);
    
    switch (monthNumber) {
        case 1:
            printf("Month %d: January\n", monthNumber);
            printf("Number of days: 31\n");
            break;
        case 2:
            printf("Month %d: February\n", monthNumber);
            printf("Enter year to check leap year: ");
            scanf("%d", &year);
            
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("Number of days: 29 (Leap Year)\n");
            } else {
                printf("Number of days: 28 (Non-Leap Year)\n");
            }
            break;
        case 3:
            printf("Month %d: March\n", monthNumber);
            printf("Number of days: 31\n");
            break;
        case 4:
            printf("Month %d: April\n", monthNumber);
            printf("Number of days: 30\n");
            break;
        case 5:
            printf("Month %d: May\n", monthNumber);
            printf("Number of days: 31\n");
            break;
        case 6:
            printf("Month %d: June\n", monthNumber);
            printf("Number of days: 30\n");
            break;
        case 7:
            printf("Month %d: July\n", monthNumber);
            printf("Number of days: 31\n");
            break;
        case 8:
            printf("Month %d: August\n", monthNumber);
            printf("Number of days: 31\n");
            break;
        case 9:
            printf("Month %d: September\n", monthNumber);
            printf("Number of days: 30\n");
            break;
        case 10:
            printf("Month %d: October\n", monthNumber);
            printf("Number of days: 31\n");
            break;
        case 11:
            printf("Month %d: November\n", monthNumber);
            printf("Number of days: 30\n");
            break;
        case 12:
            printf("Month %d: December\n", monthNumber);
            printf("Number of days: 31\n");
            break;
        default:
            printf("Error: Invalid month number! Please enter a number between 1 and 12.\n");
            break;
    }
    
    return 0;
}