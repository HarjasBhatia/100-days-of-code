#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;
    
    printf("Enter number of days late: ");
    scanf("%d", &lateDays);
    
    if (lateDays < 0) {
        printf("Error: Days late cannot be negative.\n");
        return 1;
    }
    
    printf("\n=== LIBRARY FINE CALCULATION ===\n");
    printf("Days late: %d\n", lateDays);
    printf("Fine breakdown:\n");
    
    if (lateDays == 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("- First 5 days: ₹2/day\n");
        printf("Fine: %d days × ₹2 = ₹%.2f\n", lateDays, fine);
    }
    else if (lateDays <= 10) {
        fine = 5 * 2;
        fine += (lateDays - 5) * 4;
        
        printf("- First 5 days: ₹2/day = ₹10.00\n");
        printf("- Next %d days: ₹4/day = ₹%.2f\n", 
               (lateDays - 5), (lateDays - 5) * 4.0);
        printf("Total Fine: ₹%.2f\n", fine);
    }
    else if (lateDays <= 30) {
        fine = 5 * 2;
        fine += 5 * 4;
        fine += (lateDays - 10) * 6;
        
        printf("- First 5 days: ₹2/day = ₹10.00\n");
        printf("- Next 5 days: ₹4/day = ₹20.00\n");
        printf("- Next %d days: ₹6/day = ₹%.2f\n", 
               (lateDays - 10), (lateDays - 10) * 6.0);
        printf("Total Fine: ₹%.2f\n", fine);
    }
    else {
        printf(" MEMBERSHIP CANCELLED \n");
        printf("Book returned after %d days (more than 30 days)\n", lateDays);
        return 0;
    }
    
    printf("\nPlease pay: ₹%.2f\n", fine);
    
    return 0;
}