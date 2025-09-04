#include <stdio.h>

int main(int argc, char* argv[]){
	int length , breadth;
	printf("calculating area and perimeter of rectangle , so please provide length of rectangle");
	scanf("%d",&length);
	printf("breadth of rectangle ");
	scanf("%d",&breadth);
	
	printf("Area of rectangle of length %d and breadth %d is %d\n", length, breadth, length*breadth);
	printf("perimeter of rectangle is %d\n",2*(length+breadth));
}
