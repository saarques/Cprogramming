#include<stdio.h>
int main(){
	int a;
	printf("No. of days after which you are submitting the book:");
	scanf("%d",&a);
	if((0<a)&&(a<=5)){
		printf("Pay fine: 50 Paise\n");
	}
	else if((5<a)&&(a<=10)){
		printf("Pay fine: 1 Rupee\n");
	}
	else if((10<a)&&(a<=30)){
		printf("Please pay fine: 5 Rupee\n");
	}
	else if(a>30){
		printf("Your membership is cancelled\n");
	}
}