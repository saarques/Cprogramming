/*
	Main Function in C 
	@author - bhansa
	@createdon - 09/07/2017
*/

// Update and correct this one @saarques


#include <stdio.h>

int byaj(int principle, int rate, int time){

	// Study widening and shortening of Units.

	float byaj;

	byaj = ((principle*rate)*time);

	byaj = (byaj*1.0)/100;

	return byaj;

}


int main()
{
	int p=10, r=5, t=1;

	printf("%d\n", byaj(p, r, t));

}