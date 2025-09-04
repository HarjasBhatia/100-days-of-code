#include <stdio.h>

int areaofcircle(int radius){
	int area;
	area = 3.14 * radius * radius;
	return area;
};

int main(){
	int radius;
	printf("calculating area of circle , so please provide radius of circle");
	scanf("%d",&radius);
	
	printf("Area of circle of radius %d is %d\n", radius, areaofcircle(radius));
    printf("circumfernce of circle : %f\n",2*3.14*radius);
    return 0;
}
