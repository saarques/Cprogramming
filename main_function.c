/*
	Main Function in C 
	@author - bhansa
	@createdon - 09/07/2017
*/

// Update and correct this one @saarques


#include <stdio.h>

int byaj(int principle, int rate, int time){

	float byaj;

	byaj = ((p*r*t)*1.0)/100;

	return byaj;

}


int main()
{
	int p=10, r=5, t=1;

	byaj(p, r, t);

	printf("%f\n", byaj);

}