#include <stdio.h>
int main(){
    int number;
    printf("enter number you want to check : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("%d is even\n",number);
    }
    else {
        printf("%d is odd\n",number);
    };
    return 0;
}