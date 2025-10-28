#include <stdio.h>

int hcf(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }
    
    printf("HCF of %d and %d is %d\n", num1, num2, hcf(num1, num2));
    return 0;
}