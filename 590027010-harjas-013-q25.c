#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("=== BASIC CALCULATOR ===\n");
    printf("Operations available:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("%% : Modulus (Remainder)\n\n");
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    printf("\nCalculation: %.2lf %c %.2lf = ", num1, operator, num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;
            
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
            
        case '%':
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%d\n", (int)result);
            } else {
                printf("Error: Modulus by zero is not allowed!\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator! Please use +, -, *, /, or %%\n");
            break;
    }
    
    return 0;
}