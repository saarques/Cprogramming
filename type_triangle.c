//some problem is there, always showing isosceles triangle 
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter values of sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	//for isosceles triangle
	if((a==b)||(b==c)||(a==c)){
		printf("Isosceles triangle\n");
	}

	//for equilateral triangle
	else if((a==b)&&(b==c)&&(c==a)){
		printf("Equilateral and isosceles triangle\n");
	}
	
	//for scalene triangle
	else if((a!=b)&&(b!=c)&&(c!=a)){
		printf("Scalene triangle\n");
	}
	
	//for right angled triangle
	else if((b>a)&&(b>c)){
		if((b*b)==((a*a)+(c*c))){
			printf("Right Triangle\n");
		}
		else
			printf("Not a right triangle\n");
	}
	else if((a>b)&&(a>c)){
		if((a*a)==((b*b)+(c*c))){
			printf("Right Triangle\n");
		}
		else
			printf("Not a right triangle\n");
	}
	else if((c>a)&&(c>b)){
		if((c*c)==((a*a)+(b*b))){
			printf("Right Triangle\n");
		}
		else
			printf("Not a right triangle\n");
	}
}