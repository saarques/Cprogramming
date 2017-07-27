#include<stdio.h>
int main(){
	int a,b;
	#define AREA(x,y) (x*y)
	#define PERIMETER(x,y) (2*(x+y))
	printf("Enter value of a and b:");
	scanf("%d %d",&a,&b);
	if(AREA(a,b)>PERIMETER(a,b))
	printf("Area of rectangle is greater then its perimeter\n");
	else
	printf("Perimeter of rectangle is greater then its area\n");
}