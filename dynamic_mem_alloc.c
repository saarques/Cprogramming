#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	int* p;
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	//p=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d",*(p+i));
	}
}