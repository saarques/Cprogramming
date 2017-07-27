#include<stdio.h>
int main(int argc, char const *argv[])
{
	float a;
	printf("Time taken to complete job:");
	scanf("%f",&a);
	if((a>2)&&(a<3)){
		printf("Keep it up. You are highly efficient.\n");
	}
	else if ((a>3)&&(a<4))
	{
		printf("Improve your speed buddy.\n");
	}
	else if((a>4)&&(a<5)){
		printf("Meet the training commander. You need to consult him.\n");
	}
	else{
		printf("We are sorry for you. You need to leave the company.\n");
	}
}