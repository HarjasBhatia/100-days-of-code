#include <stdio.h>
#include <math.h>
int main(){
    float principle, rate;
    int time;
    printf("ENTER PRINCIPLE ; ");
    scanf("%f",&principle);
    printf("ENTER RATE ; ");
    scanf("%f",&rate);
    printf("ENTER TIME ; ");
    scanf("%d",&time);

    printf("Simple interest = %f\n", (principle * rate * time) / 100);
    printf("Compound interest = %f\n",principle*((pow((1+rate/100),time)-1)));
    return 0;
}