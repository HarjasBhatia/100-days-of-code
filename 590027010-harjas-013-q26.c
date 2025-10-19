#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a positive number greater than 0.\n");
        return 1;
    }
    
    printf("Numbers from 1 to %d:\n", n);
    
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    printf("\n");
    
    return 0;
}