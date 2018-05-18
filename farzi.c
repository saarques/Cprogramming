#include <stdio.h>
int main(){
	int a,b,x,y;
	a=20;
	b=30;
	x=a++;
	y=--b;
	printf("%d %d %d %d",x,y,a,b);
}