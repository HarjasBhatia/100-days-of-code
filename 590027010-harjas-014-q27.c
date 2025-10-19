#include <stdio.h>

int main() {
    int n, sum;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }
    
    sum = n * n;
    
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    printf("Verification: %d² = %d\n", n, sum);
    
    return 0;
}