#include <stdio.h>

int main() {
    float side1, side2, side3;
    
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Error: All sides must be positive numbers.\n");
        return 1;
    }
    
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("Error: These sides do not form a valid triangle.\n");
        printf("The sum of any two sides must be greater than the third side.\n");
        return 1;
    }
    
    if (side1 == side2 && side2 == side3) {
        printf("Triangle Type: Equilateral Triangle\n");
        printf("All three sides are equal (%.2f = %.2f = %.2f)\n", side1, side2, side3);
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Triangle Type: Isosceles Triangle\n");
    }
    else {
        printf("Triangle Type: Scalene Triangle\n");
        printf("All three sides are different (%.2f, %.2f, %.2f)\n", side1, side2, side3);
    }
    
    return 0;
}