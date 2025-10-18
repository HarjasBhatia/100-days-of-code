#include <stdio.h>

int main() {
    int dayNumber;
    
    printf("Enter a number (1-7) to get the day of the week: ");
    scanf("%d", &dayNumber);
    
    switch (dayNumber) {
        case 1:
            printf("Day %d: Sunday\n", dayNumber);
            break;
        case 2:
            printf("Day %d: Monday\n", dayNumber);
            break;
        case 3:
            printf("Day %d: Tuesday\n", dayNumber);
            break;
        case 4:
            printf("Day %d: Wednesday\n", dayNumber);
            break;
        case 5:
            printf("Day %d: Thursday\n", dayNumber);
            break;
        case 6:
            printf("Day %d: Friday\n", dayNumber);
            break;
        case 7:
            printf("Day %d: Saturday\n", dayNumber);
            break;
        default:
            printf("Error: Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }
    
    return 0;
}