#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter number1 ; ");
    scanf("%d",&a);
    printf("Enter number2 ; ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping\n");
    printf("number 1 = %d\n",a);
    printf("number 2 = %d\n",b);
    
    return 0;
}
