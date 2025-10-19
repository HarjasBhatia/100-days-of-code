#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    
    if (units < 0) {
        printf("Error: Units consumed cannot be negative.\n");
        return 1;
    }
    
    printf("\n=== ELECTRICITY BILL CALCULATION ===\n");
    printf("Units Consumed: %d\n", units);
    printf("Bill breakdown:\n");
    
    if (units <= 100) {
        bill = units * 5;
        printf("- First 100 units: ₹5/unit\n");
        printf("Bill: %d units × ₹5 = ₹%.2f\n", units, bill);
    }
    else if (units <= 200) {
        bill = 100 * 5;
        bill += (units - 100) * 7;
        
        printf("- First 100 units: ₹5/unit = ₹500.00\n");
        printf("- Next %d units: ₹7/unit = ₹%.2f\n", 
               (units - 100), (units - 100) * 7.0);
        printf("Total Bill: ₹%.2f\n", bill);
    }
    else if (units <= 300) {
        bill = 100 * 5;
        bill += 100 * 7;
        bill += (units - 200) * 10;
        
        printf("- First 100 units: ₹5/unit = ₹500.00\n");
        printf("- Next 100 units: ₹7/unit = ₹700.00\n");
        printf("- Next %d units: ₹10/unit = ₹%.2f\n", 
               (units - 200), (units - 200) * 10.0);
        printf("Total Bill: ₹%.2f\n", bill);
    }
    else {
        bill = 100 * 5;
        bill += 100 * 7;
        bill += 100 * 10;
        bill += (units - 300) * 12;
        
        printf("- First 100 units: ₹5/unit = ₹500.00\n");
        printf("- Next 100 units: ₹7/unit = ₹700.00\n");
        printf("- Next 100 units: ₹10/unit = ₹1000.00\n");
        printf("- Next %d units: ₹12/unit = ₹%.2f\n", 
               (units - 300), (units - 300) * 12.0);
        printf("Total Bill: ₹%.2f\n", bill);
    }
    
    printf("\nTotal Electricity Bill: ₹%.2f\n", bill);
    
    return 0;
}