#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitLoss, percentage;
    
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);
    
    if (costPrice <= 0 || sellingPrice < 0) {
        printf("Error: Cost price must be positive and selling price cannot be negative.\n");
        return 1;
    }
    
    printf("\n======= PROFIT/LOSS CALCULATION =======\n");
    printf("Cost Price: ₹%.2f\n", costPrice);
    printf("Selling Price: ₹%.2f\n", sellingPrice);
    
    if (sellingPrice > costPrice) {
        // Profit scenario
        profitLoss = sellingPrice - costPrice;
        percentage = (profitLoss / costPrice) * 100;
        
        printf("\nResult: PROFIT\n");
        printf("Profit Amount: ₹%.2f\n", profitLoss);
        printf("Profit Percentage: %.2f%%\n", percentage);
    }
    else if (sellingPrice < costPrice) {
        // Loss scenario
        profitLoss = costPrice - sellingPrice;
        percentage = (profitLoss / costPrice) * 100;
        
        printf("\nResult: LOSS\n");
        printf("Loss Amount: ₹%.2f\n", profitLoss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    }
    else {
        // No profit, no loss
        printf("\nResult: NO PROFIT, NO LOSS\n");
    }
    
    return 0;
}