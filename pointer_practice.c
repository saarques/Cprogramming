#include<stdio.h>
void main(){
	int x=10;
	int *c=&x;
	//int** p=&c;
	int **p=&c;
	**p=74;
	printf("%d\n",x);
}