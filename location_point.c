#include<stdio.h>
int main(){
	int x,y;
	printf("Enter values of co-ordinates:");
	scanf("%d %d",&x,&y);
	if((x==0)&&(y==0)){
	printf("Point is on Origin\n");}
	else if((x==0)&&(y!=0)){
	printf("Point is on Y axis\n");}
	else
	printf("Point is on X axis\n");

}