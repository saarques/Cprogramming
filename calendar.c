#include<stdio.h>
int main(){
	int a,b,count=0;
	printf("Enter the year:");
	scanf("%d",&a);
	b=a%4;
	switch(b){
	case 0:	if(a%4==0)
			count+=2;
	case 1:	if(a%4==1)
			count+=1;
	case 2:	if(a%4==2)
			count+=2;
	case 3:	if(a%4==3)
			count+=3;

	}
	switch(count){
	case 0:	printf("Monday");
	case 1:	printf("Tuesday");
	case 2:	printf("Wednesday");
	case 3:	printf("Thursday");
	case 4:	printf("Friday");
	case 5:	printf("Saturday");
	case 6:	printf("Sunday");
	}
}