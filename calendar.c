#include<stdio.h>
int main(){
	int a,b,count=0;
	printf("Enter the year:");
	scanf("%d",&a);
	b=a%4;
	switch(b){
	case0:	if(a%4==0)
			count+=2;
	case1:	if(a%4==1)
			count+=1;
	case2:	if(a%4==2)
			count+=2;
	case3:	if(a%4==3)
			count+=3;

	}
	switch(count){
	case0:	printf("Monday");
	case1:	printf("Tuesday");
	case2:	printf("Wednesday");
	case3:	printf("Thursday");
	case4:	printf("Friday");
	case5:	printf("Saturday");
	case6:	printf("Sunday");
	}
}