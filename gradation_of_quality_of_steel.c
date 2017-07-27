/*Gradation of quality of steel*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter value of hardness, carbon content and tensile strength of steel\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a>50)&&(b<0.7)&&(c>5600)){
		printf("Grade:10\n");
	}
	else if((a>50)&&(b<0.7)||(c>5600)){
		printf("Grade:9\n");
	}
	else if((a>50)||(b<0.7)&&(c>5600)){
		printf("Grade:8\n");
	}
	else if((a>50)&&(c>5600)||(b<0.7)){
		printf("Grade:7\n");
	}
	else if((a>50)||(b<0.7)||(c>5600)){
		printf("Grade:6\n");
	}
	else if((a<50)&&(b>0.7)&&(c<5600)){
		printf("Grade:5\n");
	}
}