#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter values of three sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((b>a)&&(b>c)){
		if((b*b)>((a*a)+(c*c))){
			printf("Triangle is valid\n");
		}
		else
			printf("Not a valid triangle\n");
	}
	if((a>b)&&(a>c)){
		if((a*a)>((b*b)+(c*c))){
			printf("Triangle is valid\n");
		}
		else
			printf("Not a valid triangle\n");
	}
	if((c>a)&&(c>b)){
		if((c*c)>((a*a)+(b*b))){
			printf("Triangle is valid\n");
		}
		else
			printf("Not a valid triangle\n");
	}
}