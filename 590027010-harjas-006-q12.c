#include <stdio.h>
int main(){
    int number;
    printf("enter number you want to check : ");
    scanf("%d",&number);
    if(number>=0){
        if (number == 0){
            printf("It is zero\n");
        }
        else {
            printf("It is a positive number\n");
        }
    }
    else {
        printf("It is a negative number\n");
    };
    return 0;
}