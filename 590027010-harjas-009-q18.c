#include <stdio.h>

int main() {
    float percentage;
    
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);
    
    if (percentage < 0 || percentage > 100) {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 1;
    }
    
    if (percentage >= 90 && percentage <= 100) {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: A\n");
    }
    else if (percentage >= 80 && percentage < 90) {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: B\n");
    }
    else if (percentage >= 70 && percentage < 80) {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: C\n");
    }
    else if (percentage >= 60 && percentage < 70) {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: D\n");
    }
    else {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: F\n");
    }
    
    return 0;
}