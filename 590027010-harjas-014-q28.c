#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int count = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
        return 1;
    }
    
    printf("Even numbers from 1 to %d: ", n);
    
    for (i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) printf(" × ");
        
        product *= i;
        count++;
    }
    
    printf("\nProduct of %d even numbers = %lld\n", count, product);
    
    return 0;
}