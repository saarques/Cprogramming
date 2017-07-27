//not yet completed
#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	if(65<i<90){
	printf("Capital letter");
	}
	else if(97<i<122){
	printf("Small letter");
	}
	else if(48<i<57){
	printf("Numeral");
	}
	else
	printf("Special symbol");
}