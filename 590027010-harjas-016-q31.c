#include <stdio.h>

int main() {
    int num, binary[32], i = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    
    if (num == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }
    
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}